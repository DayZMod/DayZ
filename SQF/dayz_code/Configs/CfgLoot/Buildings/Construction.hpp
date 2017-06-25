class Construction : Default
{
	zombieChance = 0.2;
	maxRoaming = 1;
	zombieClass[] =
	{
		"z_worker1",
		"z_worker2",
		"z_worker3"
	};
	lootChance = 0.4;
	lootGroup = Construction;
};

class Land_wagon_box : Construction
{
	zedPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
	lootPos[] = {{0.542969,-3.89453,-0.776679},{0.47998,-0.608398,-0.776638},{0.515381,3.03857,-0.776592}};
};

class Land_transport_cart_EP1 : Construction
{
	lootPos[] = {{-0.01,0.24,0.16}};
};

class Land_wagon_flat : Construction
{
	lootPos[] = {{0.02,6.44,0.28},{0.12,4.54,0.28},{0.22,2.57,0.28},{0.32,0.68,0.28},{0.43,-1.48,0.28},{0.54,-3.85,0.28},{0.03,-6.13,0.28}};
};

class Land_wagon_tanker : Construction
{
	lootPos[] = {{0.05,4.78,-0.73},{-0.05,-4.71,-0.73}};
};

class MAP_Misc_Greenhouse : Construction
{
	lootPos[] = {{0.73,-0.1,-0.73},{0,-0.1,-0.74},{-1.84,-0.02,-0.8}};
};

class Misc_Cargo1Bo_military : Construction
{
	lootPos[] = {{0.35,-1.66,-1.09},{-0.06,0.27,-1.09},{-0.34,1.84,-1.09}};
};
// ALT-MAP Support 
class land_jzd_bezstrechy : Construction // multi-story concrete bars on windows
{
	zedPos[] = {{6.62451,1.67969,-5.22504},{5.60889,6.54102,-5.10962}};
	lootPos[] = {{6.62451,1.67969,-5.22504},{1.70166,3.48828,-5.22504},{5.60889,6.54102,-5.10962},{-5.21094,7.38477,-5.10962}};
};
class land_f_b1 : Construction // one story garage and ramp
{
	zedPos[] = {{2.6582,-3.80225,-3.08734},{3.87988,2.10889,-3.1054}};
	lootPos[] = {{-3.18848,-0.702148,-2.21533},{-2.42188,-4.46582,-2.21533}};
};
class land_x_skladiste_low_tex : Construction // concrete, arc roof, borken doors
{
	zedPos[] = {{12.5835,2.05273,-2.73836},{-10.9365,2.72217,-2.85032}};
	lootPos[] = {{12.5835,2.05273,-2.73836},{-2.45117,8.69385,-1.62253},{-10.9365,2.72217,-2.85032},{-9.50781,-9.54053,-2.85108},{-12.1572,-6.07861,-2.8506}};
};
// ALT-MAP Support 
