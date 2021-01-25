#pragma once

//
// WARNING: THIS IS AN AUTO-GENERATED FILE, DO NOT EDIT!
//

enum class HookedCall {
	IClientImpl__Send_FLPACKET_COMMON_FIREWEAPON,
	IClientImpl__Send_FLPACKET_COMMON_ACTIVATEEQUIP,
	IClientImpl__Send_FLPACKET_COMMON_ACTIVATECRUISE,
	IClientImpl__Send_FLPACKET_COMMON_ACTIVATETHRUSTERS,
	IClientImpl__Send_FLPACKET_COMMON_SETTARGET,
	IClientImpl__Send_FLPACKET_COMMON_GOTRADELANE,
	IClientImpl__Send_FLPACKET_COMMON_STOPTRADELANE,
	IClientImpl__Send_FLPACKET_COMMON_JETTISONCARGO,
	IClientImpl__Send_FLPACKET_SERVER_LOGINRESPONSE,
	IClientImpl__Send_FLPACKET_SERVER_CHARACTERINFO,
	IClientImpl__Send_FLPACKET_SERVER_CHARSELECTVERIFIED,
	IClientImpl__CDPClientProxy__Disconnect,
	IClientImpl__CDPClientProxy__GetSendQSize,
	IClientImpl__CDPClientProxy__GetSendQBytes,
	IClientImpl__CDPClientProxy__GetLinkSaturation,
	IClientImpl__Send_FLPACKET_SERVER_SETSHIPARCH,
	IClientImpl__Send_FLPACKET_SERVER_SETHULLSTATUS,
	IClientImpl__Send_FLPACKET_SERVER_SETCOLLISIONGROUPS,
	IClientImpl__Send_FLPACKET_SERVER_SETEQUIPMENT,
	IClientImpl__Send_FLPACKET_SERVER_SETADDITEM,
	IClientImpl__Send_FLPACKET_SERVER_SETSTARTROOM,
	IClientImpl__Send_FLPACKET_SERVER_GFDESTROYCHARACTER,
	IClientImpl__Send_FLPACKET_SERVER_GFUPDATECHAR,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETECHARLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFSCRIPTBEHAVIOR,
	IClientImpl__Send_FLPACKET_SERVER_GFDESTROYSCRIPTBEHAVIOR,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETESCRIPTBEHAVIORLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETEAMBIENTSCRIPTLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFDESTROYMISSIONCOMPUTER,
	IClientImpl__Send_FLPACKET_SERVER_GFUPDATEMISSIONCOMPUTER,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETEMISSIONCOMPUTERLIST,
	IClientImpl__Send_FLPACKET_SERVER_GFMISSIONVENDORACCEPTANCE,
	IClientImpl__Send_FLPACKET_SERVER_GFMISSIONVENDORWHYEMPTY,
	IClientImpl__Send_FLPACKET_SERVER_GFUPDATENEWSBROADCAST,
	IClientImpl__Send_FLPACKET_SERVER_GFCOMPLETENEWSBROADCASTLIST,
	IClientImpl__Send_FLPACKET_SERVER_CREATESOLAR,
	IClientImpl__Send_FLPACKET_SERVER_CREATESHIP,
	IClientImpl__Send_FLPACKET_SERVER_CREATELOOT,
	IClientImpl__Send_FLPACKET_SERVER_CREATEMINE,
	IClientImpl__Send_FLPACKET_SERVER_CREATEGUIDED,
	IClientImpl__Send_FLPACKET_SERVER_CREATECOUNTER,
	IClientImpl__Send_FLPACKET_SERVER_DESTROYOBJECT,
	IClientImpl__Send_FLPACKET_SERVER_ACTIVATEOBJECT,
	IClientImpl__Send_FLPACKET_SERVER_SYSTEM_SWITCH_OUT,
	IClientImpl__Send_FLPACKET_SERVER_SYSTEM_SWITCH_IN,
	IClientImpl__Send_FLPACKET_SERVER_LAND,
	IClientImpl__Send_FLPACKET_SERVER_LAUNCH,
	IClientImpl__Send_FLPACKET_SERVER_REQUESTCREATESHIPRESP,
	IClientImpl__Send_FLPACKET_SERVER_DAMAGEOBJECT,
	IClientImpl__Send_FLPACKET_SERVER_ITEMTRACTORED,
	IClientImpl__Send_FLPACKET_SERVER_USE_ITEM,
	IClientImpl__Send_FLPACKET_SERVER_SETREPUTATION,
	IClientImpl__Send_FLPACKET_SERVER_SENDCOMM,
	IClientImpl__Send_FLPACKET_SERVER_SET_MISSION_MESSAGE,
	IClientImpl__Send_FLPACKET_SERVER_SETMISSIONOBJECTIVES,
	IClientImpl__Send_FLPACKET_SERVER_MARKOBJ,
	IClientImpl__Send_FLPACKET_SERVER_SETCASH,
	IClientImpl__Send_FLPACKET_SERVER_REQUEST_RETURNED,
	IClientImpl__Send_FLPACKET_SERVER_OBJECTCARGOUPDATE,
	IClientImpl__Send_FLPACKET_SERVER_BURNFUSE,
	IClientImpl__Send_FLPACKET_COMMON_SET_WEAPON_GROUP,
	IClientImpl__Send_FLPACKET_COMMON_SET_VISITED_STATE,
	IClientImpl__Send_FLPACKET_COMMON_REQUEST_BEST_PATH,
	IClientImpl__Send_FLPACKET_COMMON_REQUEST_PLAYER_STATS,
	IClientImpl__Send_FLPACKET_COMMON_REQUEST_GROUP_POSITIONS,
	IClientImpl__Send_FLPACKET_COMMON_SET_MISSION_LOG,
	IClientImpl__Send_FLPACKET_COMMON_SET_INTERFACE_STATE,
	IClientImpl__Send_FLPACKET_COMMON_PLAYER_TRADE,
	IClientImpl__Send_FLPACKET_SERVER_SCANNOTIFY,
	IClientImpl__Send_FLPACKET_SERVER_PLAYERLIST,
	IClientImpl__Send_FLPACKET_SERVER_PLAYERLIST_2,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_6,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_7,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_2,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_3,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_4,
	IClientImpl__Send_FLPACKET_SERVER_MISCOBJUPDATE_5,
	IClientImpl__Send_FLPACKET_SERVER_FORMATION_UPDATE,
	IServerImpl__FireWeapon,
	IServerImpl__ActivateEquip,
	IServerImpl__ActivateCruise,
	IServerImpl__ActivateThrusters,
	IServerImpl__SetTarget,
	IServerImpl__TractorObjects,
	IServerImpl__GoTradelane,
	IServerImpl__StopTradelane,
	IServerImpl__JettisonCargo,
	IServerImpl__Startup,
	IServerImpl__DisConnect,
	IServerImpl__OnConnect,
	IServerImpl__Login,
	IServerImpl__CharacterInfoReq,
	IServerImpl__CharacterSelect,
	IServerImpl__CreateNewCharacter,
	IServerImpl__DestroyCharacter,
	IServerImpl__ReqShipArch,
	IServerImpl__ReqHullStatus,
	IServerImpl__ReqCollisionGroups,
	IServerImpl__ReqEquipment,
	IServerImpl__ReqAddItem,
	IServerImpl__ReqRemoveItem,
	IServerImpl__ReqModifyItem,
	IServerImpl__ReqSetCash,
	IServerImpl__ReqChangeCash,
	IServerImpl__BaseEnter,
	IServerImpl__BaseExit,
	IServerImpl__LocationEnter,
	IServerImpl__LocationExit,
	IServerImpl__BaseInfoRequest,
	IServerImpl__LocationInfoRequest,
	IServerImpl__GFObjSelect,
	IServerImpl__GFGoodVaporized,
	IServerImpl__MissionResponse,
	IServerImpl__TradeResponse,
	IServerImpl__GFGoodBuy,
	IServerImpl__GFGoodSell,
	IServerImpl__SystemSwitchOutComplete,
	IServerImpl__PlayerLaunch,
	IServerImpl__LaunchComplete,
	IServerImpl__JumpInComplete,
	IServerImpl__Hail,
	IServerImpl__SPObjUpdate,
	IServerImpl__SPMunitionCollision,
	IServerImpl__SPObjCollision,
	IServerImpl__SPRequestUseItem,
	IServerImpl__SPRequestInvincibility,
	IServerImpl__RequestEvent,
	IServerImpl__RequestCancel,
	IServerImpl__MineAsteroid,
	IServerImpl__RequestCreateShip,
	IServerImpl__SPScanCargo,
	IServerImpl__SetManeuver,
	IServerImpl__InterfaceItemUsed,
	IServerImpl__AbortMission,
	IServerImpl__SetWeaponGroup,
	IServerImpl__SetVisitedState,
	IServerImpl__RequestBestPath,
	IServerImpl__RequestPlayerStats,
	IServerImpl__RequestGroupPositions,
	IServerImpl__SetInterfaceState,
	IServerImpl__RequestRankLevel,
	IServerImpl__InitiateTrade,
	IServerImpl__TerminateTrade,
	IServerImpl__AcceptTrade,
	IServerImpl__SetTradeMoney,
	IServerImpl__AddTradeEquip,
	IServerImpl__DelTradeEquip,
	IServerImpl__RequestTrade,
	IServerImpl__StopTradeRequest,
	IServerImpl__SubmitChat,
	Count
};