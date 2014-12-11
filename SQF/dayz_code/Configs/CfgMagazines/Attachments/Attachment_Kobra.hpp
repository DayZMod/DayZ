class Attachment_Kobra : CA_Magazine {
	scope = public;
	displayName = "Kobra Attachment.";
	descriptionShort = "Can be mounted on the AK 74.";
	count = 1;
	picture = "\z\addons\dayz_communityassets\pictures\attchement_kobra.paa";
	type = 256;

    oringal = "AK_74";
    weapon = "AKS_74_kobra";

    class ItemActions {
        class Use {
            text = "Attach Kobra Scope to AK-74";
            script = "spawn player_useAttchment;";
        };
    };
};