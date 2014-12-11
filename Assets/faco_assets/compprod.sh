
function patchMission {
	local dst
	local pbo
	local basename
	basename=$1
	dst=release/$basename
	rm -Rf $dst 2>/dev/null
	cp -pRLf SQF/Missions/$basename $dst
	find $dst -iname '*.sqf' -o -iname '*.hpp' | while read f; do
		sed -i -e 's/^[	 ]*//' -e 's/[	 ]*$//' $f
		sed -i 's://.*$::' $f
		sed -re '/^#/ s/^(.*)$/°\1°/' -e '/^°/ s/[ \t]+/£/' -e '/^°/ s/[ \t]+/£/' -i $f
		tr -d '\n\r' < $f > $f.tmp && cat $f.tmp > $f && rm $f.tmp
		perl -p -i -e 's#/\*[^*]*\*+([^/*][^*]*\*+)*/|("(\\.|[^"\\])*"|'\''(\\.|[^'\''\\])*'\''|.[^/"'\''\\]*)#defined $2 ? $2 : ""#gse;' 2>/dev/null < $f  > $f.tmp && cat $f.tmp > $f && rm $f.tmp
		sed -ri -e 's/[	 ]{1,}/ /g' -e 's/[	 ]*([],;+*/:<=>"!&%{}\(\)\/'\''[-])[	 ]*/\1/g' $f
		sed -e 's/°/\n/g' -e 's/£/ /g' -i $f
		sed -i '/^$/d'  $f
	done #  dayz_ForcefullmoonNights
	sed -i  's:briefingName="DayZMod":briefingName="DayZ Mod 1.8.3":' $dst/mission.sqm
	sed -i -e 's/dayZ_instance *= *[^;]*;/dayZ_instance='5915';/' \
		-e 's/dayZ_serverName *= *[^;]*;/dayZ_serverName="'TEST'";/' -e 's/dayz_ghostTimer *= *[^;]*;/dayz_ghostTimer='15';/' \
		-e 's/dayz_ForcefullmoonNights *=[^;]*;/dayz_ForcefullmoonNights=true;/' $dst/init.sqf
	[[ $basename =~ dayzDevs_1337.chernarus ]] && sed -i -e 's/dayz_antihack *= *. *;/dayz_antihack=0;/' $dst/init.sqf
	cat >> $dst/init.sqf <<EOF

#define PVCLIENT CLTFACO7840
#define PVSERVER SRVFACO7840
#define FNC(name) name##RANDOM
#define VAR(name) name##RANDOM
#define Stringify(macro) #macro
if(!isDedicated)then{
	Stringify(PVCLIENT)addPublicVariableEventHandler{
		[]spawn(_this select 1);
		true
	};
	if (serverCommandAvailable"#kick") then {
		Stringify(PVCLIENTADMIN)addPublicVariableEventHandler{
			[]spawn(_this select 1);
			true
		};
	};
};
EOF
}

OK=1
if [[ "$*" =~ clean ]] ; then 
  rm -Rf release/addons
fi
for pbo in community_crossbow dayz_buildings dayz_communityassets Missions/dayzDevs_1337.chernarus Missions/dayz_1337.chernarus dayz_anim dayz dayz_code dayz_equip dayz_server  
do
	(
	basename=${pbo##*/}
	if [[ "$*" =~ clean ]] ; then 
	  rm -Rf release/$basename* release/addons/$basename*
	fi
	# recherche de la date du .pbo dans release
	read datePbo < <(find release -iname $basename.pbo -type f -printf '%T@\n')
	datePbo=${datePbo:-0}
	datePbo=${datePbo%.*}
	# recherche de la date du dernier fichier modifié
	read dateFile nameFile < <(find SQF/$pbo -type f -printf '%T@ %p\n' | sort -g | tail -1)
	dateFile=${dateFile:-0}
	dateFile=${dateFile%.*}
	nameFile=${nameFile#*/*/}
	# si plus recent > faire le pbo
	diff=$(( dateFile - datePbo ))
	if [[ $diff -gt 0 ]] ; then
		diff=$((`date '+%s'` - $dateFile))
		if [[ $diff -ge $(( 3600 * 24 )) ]] ; then
			echo "Building $pbo, $nameFile modified" $(($diff / 3600 / 24)) "days ago"
		else
			echo "Building $pbo, $nameFile modified "$(date '+%H:%M:%S' --date @$diff -u)" ago"
		fi
		case $pbo in
			Mission* ) 
				patchMission $basename
				cd ../P
				wine betool/cpbo.exe -y -p 'temp\'$basename 'temp\'$basename'.pbo' > temp/$basename.wine.log 2>&1
				cd - >/dev/null 2>&1
				;;
			dayz_equip | dayz ) # , because already binarized p3d are not included
				cd ../P
				wine betool/cpbo.exe -y -p 'z\addons\'$basename 'temp\'$basename'.pbo' > temp/$basename.wine.log 2>&1
				cd - >/dev/null 2>&1
				;;
			* )
				echo > release/$basename.wine.log 2>&1
				find SQF/$basename -type d | while read a; do
					dest=../P/temp/${a##SQF/}
					#dest=$(echo "$dest"|sed -r 's/(.*)\/([^\/]*)/\1\/\L\2/') 
					[[ ! -d "$dest" && ! "$a" =~ CfgBanned ]] && mkdir "$dest"
				done
				find SQF/$basename -type f | while read a; do
					src=../P/z/addons/${a##SQF/}
					dest=../P/temp/${a##SQF/}
					case "$dest" in 
						*.tga | *.url | *.lnk | */?PBOPREFIX? | */texHeaders.bin | */config.bin  | */config.cpp | */Configs/*.hpp | */CfgBanned/* ) ;;
						*.paa )
							dest=$(echo "$dest"|sed -r 's/(.*)\/([^\/]*)/\1\/\L\2/')
							[[ ! -e "$dest" || "$src" -nt "$dest" ]] && wine 't:\BinMake\Pal2PacE\Pal2PacE.exe'  $(winepath -w "$src") $(winepath -w "$dest") || echo "Pal2PacE return code: $?" >> release/$basename.wine.log 2>&1
							[[ ! -e "$dest" || "$src" -nt "$dest" ]] && cp -puf "$src" "$dest" && echo "Can't binarise $src, copying it verbatim"
							;;
						*.p3d )
							if [[ $(dd if="$src" bs=1 count=4 2>/dev/null) =~ "ODOL" ]] ; then
								cp -puvf "$src" "$dest"
							else # will be binarized 
								[[ -e "$dest" && "$src" -nt "$dest" ]] && rm -f "$dest"  && echo "Removed: $dest"
							fi
							;;
						* ) cp -puvf "$src" "$dest" ;;
					esac
				done >> release/$basename.wine.log 2>&1
				cd ../P
				find temp/$basename -depth -type d -empty -exec rmdir {} \;
				find temp/$basename -depth -type d -empty -exec rmdir {} \;
				find temp/$basename -depth -type d -empty -exec rmdir {} \;
				find temp/$basename -depth -type d -empty -exec rmdir {} \;
				[[ -e temp/?PBOPREFIX? ]] && rm temp/$basename/?PBOPREFIX?
				[[ -e temp/$basename/texHeaders.bin ]] && rm temp/$basename/texHeaders.bin
				[[ -e temp/$basename/config.bin ]] && rm temp/$basename/config.bin
				wine 't:\BinMake\binarize\binarize.exe' -maxProcesses=2 -silent -addon='p:\z\addons' -binpath='t:\BinMake\binarize' 'P:\z\addons\'$basename 'P:\temp\'$basename >> temp/$basename.wine.log 2>&1
 				wine 't:\BinMake\binarize\binarize.exe' -texheader -silent 'P:\z\addons\'$basename 'P:\temp\'$basename >> temp/$basename.wine.log 2>&1
 				echo "texheader return code: $?" >> temp/$basename.wine.log 2>&1
				wine 't:\BinMake\cfgconvert\CfgConvert.exe' -bin -dst 'P:\temp\'$basename'\config.bin' 'P:\z\addons\'$basename'\config.cpp'
				echo "CfgConvert return code: $?" >> temp/$basename.wine.log 2>&1
				[[ -e temp/$basename.pbo ]] && rm temp/$basename.pbo
				[[ $basename =~ dayz_anim ]] && echo -n "$basename" > "temp/$basename/\$PBOPREFIX\$" || echo -n "z\\addons\\$basename" > "temp/$basename/\$PBOPREFIX\$"
				wine betool/cpbo.exe -y -p 'temp\'$basename >> temp/$basename.wine.log 2>&1
				echo "cpbo return code: $?" >> temp/$basename.wine.log 2>&1
				cd ->/dev/null
				;;
		esac
		[[ ! -e release/$basename.pbo ]] && echo "Error generating $basename.pbo" && rm -Rf release/$basename && exit -1
	fi
	) &
done
wait

if [[ "$*" =~ local ]] ; then 
	( cp -puf release/dayz*_1337.chernarus.pbo /home/fab/dayz4linux/mpmissions/ &&\
	cp -puf release/dayz_server.pbo  /home/fab/dayz4linux/@hive/addons/dayz_server.pbo &&\
	cp -puf release/*.pbo  '/home/fab/dayz4linux/@dayz-private/addons' && \
	rm /home/fab/dayz4linux/@dayz-private/addons/*_1337* &&\
	rm /home/fab/dayz4linux/@dayz-private/addons/dayz_server.pbo && echo "Updated locally") || OK=0
	cd /home/fab/dayz4linux/
	ps axo 'pgid,pid,command' | grep 'dayz.sh' |grep -v grep | while read a b c ; do kill -TERM -$a;done
	bin/dayz.sh restart >/dev/null 2>&1 &
	cd - >/dev/null
fi

if [[ "$*" =~ push ]] ; then 
	/home/fab/dayz4linux/bin/ini.sh /home/fab/dayz4linux/@dayz-private/addons/ '-connect=fr34.infected.fr -port=2306 -password=CHERNO' > /home/fab/dayz4linux/@dayz-private/addons/list.ini
	rsync -e 'ssh -l facoptere -i /home/fab/dayzdev/.ssh/id_rsa'  -urzltv  --include='*.pbo' --include='*.ini' --exclude='*' /home/fab/dayz4linux/@dayz-private/addons/ 'facoptere@fr34.infected.fr:/home/facoptere/www/test/'	
	rsync -e 'ssh -l facoptere -i /home/fab/dayzdev/.ssh/id_rsa'  -urzltv  --include='*.pbo' --include='*.ini' --exclude='*' /home/fab/dayz4linux/@hive/addons/ 'facoptere@fr34.infected.fr:/home/facoptere/www/test/'	
	rsync -e 'ssh -l facoptere -i /home/fab/dayzdev/.ssh/id_rsa'  -urzltv  --include='*.pbo' --include='*.ini' --exclude='*' /home/fab/dayz4linux/mpmissions/ 'facoptere@fr34.infected.fr:/home/facoptere/www/test/'	
fi
[[ $OK -ne 1 ]] && echo `tput bold` `tput setaf 1` `tput rev`" Error "`tput sgr0`
#rm -f release/dayz_code.pbo ; wine /home/fab/dayzdev/P/betool/cpbo.exe  -y -p 'SQF\dayz_code' 'release\dayz_code.pbo' |uniq -w 4

exit


				echo -ne '*.rvmat;*.pac;*.paa;*.rtm;*.sqf;*.sqs;*.bikb;*.fsm;*.wss;*.ogg;*.wav;*.fxy;*.csv;*.html;*.lip;*.txt;*.wrp;*.bisurf;*.hpp;*.xml;*.defs'> release/include-$basename.txt
				case $basename in dayz_code | dayz_server ) find SQF/$pbo -type f -iname '*.hpp' -o -iname '*.rvmat' -o -iname 'stringtable.xml' | grep -Pvi '/(Configs|textures)/' | grep -Po "(?<=/)[^/]+$"  >> release/include-$basename.txt ;; esac
				cd ../P/z/addons
				#export WINEDEBUG='err-all,warn-all,fixme-all,trace+file'
#				wine 't:\BinPBO Personal Edition\BinPBO.exe' 'p:\z\addons\'$basename 'p:\temp' -PACK -BINARIZE -INCLUDE 'p:\temp\include-'$basename'.txt' -TEMP 'p:\temp' -PROJECT 'p:\z\addons' -PREFIX 'z\addons\'$basename -DEBUG > ../../temp/$basename.wine.log 2>&1
#				wine 't:\BinPBO Personal Edition\BinPBO.exe' 'p:\z\addons\'$basename 'p:\temp\' -PACK -BINARIZE -INCLUDE 'p:\temp\include-'$basename'.txt' -TEMP 'p:\temp\' -PROJECT 'p:\z\addons\' -PREFIX 'z\addons\'$basename -DEBUG > temp/$basename.wine.log 2>&1

for dir in ~/dayzdev/P ~/dayzdev/P/z/addons ~/dayzdev/P/z/addons/$basename ; do
for prj in 'p:\z\addons\'$basename 'p:\z\addons\' 'p:\' '' ; do 
for pfx in 'z\addons\'$basename 'z\addons\' 'p:\' 'p:\z\addons\'$basename 'p:\z\addons\' '' ; do
for arg in 'p:\z\addons\'$basename $basename ; do 

if [[ ! $prj ]] ; then rprj='' ; else rprj="-PROJECT $prj" ; fi
if [[ ! $pfx ]] ; then rpfx='' ; else rpfx="-PROJECT $prj" ; fi
echo "$dir // $prj // $pfx // $arg"
cd $dir
				rm -Rf ~/dayzdev/P/temp/*
				wine 't:\BinPBO Personal Edition\BinPBO.exe' $arg 'p:\temp\' -PACK -BINARIZE -INCLUDE 'p:\temp\include-'$basename'.txt' -TEMP 'p:\temp\' $rprj $rpfx  -DEBUG  > ~/dayzdev/P/temp/$basename.wine.log 2>&1
				Err=$(grep 'Cannot load material.*addons' ~/dayzdev/P/temp/$basename.log | wc -l);ls -l ~/dayzdev/P/temp/$basename.pbo
				[[ $Err -gt 0 ]] && echo "$basename: $Err errors in logs, deleting 1" && rm -Rf ~/dayzdev/P/temp/*
cd - >/dev/null 2>&1
done
done
done
done
