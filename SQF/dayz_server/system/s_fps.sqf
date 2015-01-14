while {isServer} do {
        diag_log format["DEBUG FPS : %1 OBJECTS: %2 : PLAYERS: %3", diag_fps,(count (allMissionObjects "")),(playersNumber west)];
        sleep 60;
};