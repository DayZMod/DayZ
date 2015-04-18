@echo off
SETLOCAL ENABLEEXTENSIONS
SETLOCAL ENABLEDELAYEDEXPANSION
cls
::=================================================================================::
::                        Dayz Deployment Tool                                     ::
::                              R4Z0R49                                            ::
::=================================================================================::

::if not exist Config.cfg goto NoConfig
::=================================================================================::
::  SET YOUR VARIABLES!                                                            ::
::=================================================================================::
::for /f "delims=" %%x in (Config.cfg) do (set "%%x")

IF "%time:~0,1%" LSS "1" (
   SET DATETIME=%date:~6,4%%date:~3,2%%date:~0,2%0%time:~1,1%%time:~3,2%%time:~6,2%
) ELSE (
   SET DATETIME=%date:~6,4%%date:~3,2%%date:~0,2%%time:~0,2%%time:~3,2%%time:~6,2%
)

set version=1.
set build=8.3

set home=F:\Github\DayzMod-Public\DayZ
set tools=F:\Github\ARMA2Tools\
Set Deploy=F:\Github\Deployed\DayZ
:: set Dayz=%home%\@Dayz Not used
Set ServerHive=%home%\SQF
Set ClientCode=%home%\SQF
Set Binaries=%home%\Binaries
set ModName=@DayZ
set HiveName=@Hive


::=================================================================================::
::  STOP EDITING HERE                                                              ::
::=================================================================================::

TITLE Dayz Deploy tool %version%%build%

:menuLOOP
IF "%time:~0,1%" LSS "1" (
   SET DATETIME=%date:~6,4%%date:~3,2%%date:~0,2%0%time:~1,1%%time:~3,2%%time:~6,2%
) ELSE (
   SET DATETIME=%date:~6,4%%date:~3,2%%date:~0,2%%time:~0,2%%time:~3,2%%time:~6,2%
)

TITLE Dayz Deploy tool %version%%build%
cls
echo.
echo.= Menu =================================================
echo.
for /f "tokens=1,2,* delims=_ " %%A in ('"findstr /b /c:":menu_" "%~f0""') do echo.  %%B  %%C
set choice=
echo.&set /p choice=Make a choice or hit ENTER to quit: ||GOTO:EOF
echo.&call:menu_%choice%

GOTO:menuLOOP

::-----------------------------------------------------------
:: menu functions follow below here
::-----------------------------------------------------------

:menu_c Cleanup
RMDIR /S /Q %Deploy%
mkdir %Deploy%
TIMEOUT /T 5
GOTO:menuLOOP

:menu_1 Dayz
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz %Deploy%\Addons\dayz.pbo


cd %home%
TIMEOUT /T 2
GOTO:menuLOOP

:menu_2 Code
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_code %Deploy%\Addons\dayz_code.pbo


cd %home%
TIMEOUT /T 2
GOTO:menuLOOP

:menu_3 anim
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_anim %Deploy%\Addons\dayz_anim.pbo

cd %home%
TIMEOUT /T 5
GOTO:menuLOOP

:menu_4 SFX
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_sfx %Deploy%\Addons\dayz_sfx.pbo

cd %home%
TIMEOUT /T 2
GOTO:menuLOOP

:menu_5 CommunityAssets
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_communityassets %Deploy%\Addons\dayz_communityassets.pbo

cd %home%
TIMEOUT /T 2
GOTO:menuLOOP

:menu_6 Equip
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_equip %Deploy%\Addons\dayz_equip.pbo

cd %home%
TIMEOUT /T 2
GOTO:menuLOOP

:menu_7 Vehicles
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_vehicles %Deploy%\Addons\dayz_vehicles.pbo

cd %home%
TIMEOUT /T 2
GOTO:menuLOOP

:menu_8 Weapons
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_weapons %Deploy%\Addons\dayz_weapons.pbo

cd %home%
TIMEOUT /T 2
GOTO:menuLOOP


:menu_9 Server
mkdir %Deploy%

echo (%date%) (%time%) ATTENTION: Creating Server side .PBO's
%tools%\cpbo.exe -y -p %ServerHive%\dayz_server %Deploy%\dayz_server.pbo

cd %home%
TIMEOUT /T 5
GOTO:menuLOOP

:menu_10 Crossbow
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side community_crossbow.PBO's
%tools%\cpbo.exe -y -p %ClientCode%\community_crossbow %Deploy%\Addons\community_crossbow.pbo

cd %home%
TIMEOUT /T 5
GOTO:menuLOOP


:menu_11 Builings
mkdir %Deploy%
mkdir %deploy%\Addons

echo (%date%) (%time%) ATTENTION: Creating Client side dayz_buildings.PBO's
%tools%\cpbo.exe -y -p %ClientCode%\dayz_buildings %Deploy%\Addons\dayz_buildings.pbo

cd %home%
TIMEOUT /T 5
GOTO:menuLOOP

:menu_0 Full
mkdir %Deploy%
:: mkdir %ModName% - Folder not used
mkdir %deploy%\@Hive
mkdir %deploy%\%ModName%\Addons
mkdir %deploy%\@Hive\Addons
mkDir %deploy%\Keys
mkDir %deploy%\cfgdayz
mkDir %Deploy%\cfgdayz\BattlEye\
mkDir %deploy%\Battleye-Filters


echo (%date%) (%time%) ATTENTION: Creating Client side .PBO's 
%tools%\cpbo.exe -y -p %ClientCode%\dayz_weapons %Deploy%\%ModName%\Addons\dayz_weapons.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz_vehicles %Deploy%\%ModName%\Addons\dayz_vehicles.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz_equip %Deploy%\%ModName%\Addons\dayz_equip.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz_sfx %Deploy%\%ModName%\Addons\dayz_sfx.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz_anim %Deploy%\%ModName%\Addons\dayz_anim.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz_code %Deploy%\%ModName%\Addons\dayz_code.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz %Deploy%\%ModName%\Addons\dayz.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz_communityassets %Deploy%\%ModName%\Addons\dayz_communityassets.pbo
%tools%\cpbo.exe -y -p %ClientCode%\community_crossbow %Deploy%\%ModName%\Addons\community_crossbow.pbo
%tools%\cpbo.exe -y -p %ClientCode%\dayz_buildings %Deploy%\%ModName%\Addons\dayz_buildings.pbo

%tools%\cpbo.exe -y -p %ClientCode%\st_collision %Deploy%\%ModName%\Addons\st_collision.pbo
%tools%\cpbo.exe -y -p %ClientCode%\st_evasive %Deploy%\%ModName%\Addons\st_evasive.pbo
%tools%\cpbo.exe -y -p %ClientCode%\st_bunnyhop %Deploy%\%ModName%\Addons\st_bunnyhop.pbo
%tools%\cpbo.exe -y -p %ClientCode%\map_eu %Deploy%\%ModName%\Addons\map_eu.pbo


echo (%date%) (%time%) ATTENTION: Creating Server side .PBO's
%tools%\cpbo.exe -y -p %ClientCode%\dayz_server %Deploy%\%HiveName%\Addons\dayz_server.pbo


echo (%date%) (%time%) ATTENTION: Getting Files
cd %home%
:: copy Binaries\Database.dll %Deploy%\ - Not in folder
copy Binaries\tbb.dll %Deploy%\
copy Binaries\tbbmalloc.dll %Deploy%\
copy Binaries\DatabaseMySql.dll %Deploy%\
copy Binaries\DatabasePostgre.dll %Deploy%\
copy Binaries\HiveEXT.dll %Deploy%\%HiveName%
copy Binaries\HiveEXT.ini %Deploy%\cfgdayz\
copy Documentation\PRIVACY.txt %Deploy%\
copy Documentation\README.txt %Deploy%\
copy SQF\mod.cpp %Deploy%\%ModName%
:: copy SQF\mod.paa %Deploy%\%ModName% - Not in folder
copy SQF\do_not_use_without_permissions.txt %Deploy%\%ModName%
copy SQF\credits.txt %Deploy%\%ModName%
copy BattlEye-Filters\ %Deploy%\cfgdayz\BattlEye\
copy BattlEye-Filters\ %Deploy%\Battleye-Filters


cd %home%
TIMEOUT /T 5
GOTO:menuLOOP


:menu_o Open Deploy
%SystemRoot%\explorer.exe "%deploy%"
TIMEOUT /T 3
GOTO:menuLOOP

:menu_q Quit
cd %home%
TIMEOUT /T 3
exit


GOTO:menuLOOP

