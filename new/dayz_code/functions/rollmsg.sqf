/* Displays up to three messages simultaneously, pushing back the previous two.
Note: try to use short messages, as wordwrapping may cause the last one to be cut off.

Author: Foxy
*/

//How long each message is shown (seconds)
#define TIMEOUT 5

dz_rmsg_1 = "";
dz_rmsg_2 = "";
dz_rmsg_3 = "";
dz_rmsg_1t = 0;
dz_rmsg_2t = 0;
dz_rmsg_3t = 0;

dz_fn_rollmsg =
{
	if (diag_ticktime - dz_rmsg_1t < TIMEOUT) then
	{
		if (diag_ticktime - dz_rmsg_2t < TIMEOUT) then
		{
			dz_rmsg_3 = dz_rmsg_2;
			dz_rmsg_3t = dz_rmsg_2t;
		}
		else
		{
			dz_rmsg_3 = "";
		};
		
		dz_rmsg_2 = dz_rmsg_1;
		dz_rmsg_2t = dz_rmsg_1t;
	}
	else
	{
		dz_rmsg_2 = "";
		dz_rmsg_3 = "";
	};

	dz_rmsg_1 = _this;
	dz_rmsg_1t = diag_ticktime;
	
	cutText [format ["%1\n%2\n%3", dz_rmsg_1, dz_rmsg_2, dz_rmsg_3], "PLAIN DOWN"];
};