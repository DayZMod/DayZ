HiveExt persistence layer for DayzMod

Contents:
	@hive
	  - HiveExt.dll		HiveExt ArmA2 native extension
	cfgdayz
	  - HiveExt.ini		Sample ini file with explanations
	DatabaseMySql.dll	Required module if using a MySQL database
	DatabasePostgre.dll	Required module if using a PostgreSQL database (untested)
	tbb.dll			Required module for proper HiveExt operation
	tbbmalloc.dll		Required module for proper HiveExt operation

	README.txt		This file
	PRIVACY.txt		Privacy statement

The contents are displayed as relative to the archive root, and should be extracted as such into the OA game folder
(the folder where the non-beta-patch ArmA2OA.exe resides, as well as other files like _runA2CO.cmd if you have CO)

Microsoft Visual C++ 2010 SP1 x86 redistributable is required for HiveExt to start
If you do not already have it, get it from http://www.microsoft.com/en-us/download/details.aspx?id=8328

If you want to specify any options other than the defaults in the .ini file, you must place it into your PROFILES folder
(this is the folder which you specify using the -profiles command line option to arma2oaserver.exe, the same one where the .rpt will go)
It is highly advised to have this folder OUTSIDE of the Arma2OA root, otherwise hackers running modified scripts MIGHT be able to read it
(the same recommendation should be followed for the folders that house your server.cfg and BEServer.cfg files)

HiveExt.ini file changelog
	0.9.6.13 - Changed [Time] section, when running a private server, you can now specify a static date as well as hour
	0.9.6.10 - Added [Logger] section with explanations and defaults, added explanation for Hostname = . named-pipe option in [Database]