#include "\dayz\dayz_server\util\request.hpp"
#include "\dayz\dayz_server\util\command.hpp"
#include "\dayz\dayz_code\rpc.hpp"

#define ADD_FUEL(veh, amount) ((veh) setFuel (1 min (fuel (veh) + (amount) / getNumber (configFile >> "CfgVehicles" >> typeof (veh) >> "fuelCapacity"))))

_handler =
{
	if local (_this select 0) then
		{ ADD_FUEL(_this select 0, _this select 1) }
	else
		{ Command_Send(RPC_COMMAND_REFUEL, owner (_this select 0), _this) };
};

Request_RegisterHandler(RPC_REQUEST_REFUEL, _handler);