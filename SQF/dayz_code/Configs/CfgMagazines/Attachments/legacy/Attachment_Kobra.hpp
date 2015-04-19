class Attachment_Kobra : CA_Magazine {
	scope = public;
	displayName = $STR_ATTACHMENT_NAME_Kobra;
	descriptionShort = $STR_ATTACHMENT_DESC_Kobra;
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attchement_kobra.paa";
	type = 256;

    oringal = "AK_74";
    weapon = "AKS_74_kobra";

    class ItemActions {
        class Use {
            text = $STR_ACTIONS_ATTACH_AK74;
            script = "spawn player_useAttchment;";
        };
    };
};
