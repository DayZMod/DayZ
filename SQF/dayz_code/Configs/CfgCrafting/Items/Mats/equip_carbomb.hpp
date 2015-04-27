
class ItemCarBomb : CA_Magazine {
	scope = public;
	count = 1;
	type = (2*256);
	displayName = "Car Bomb";
	model = "\ca\weapons\explosive.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\carbomb.paa";
	descriptionShort = "Can be attached to a vehicles engine and then automatically explodes when the engine is turned on.";
	class ItemActions {
		class Use {
			text = "Attach Carbomb";
			script = "spawn player_attach_bomb;";
		};
	};
};	