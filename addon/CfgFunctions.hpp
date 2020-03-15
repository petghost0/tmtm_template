class CfgFunctions
{
	class XPT
	{
		class curator
		{
			file = "\sxp\template\functions\curator";
			class curatorAddUnit {};				// Function to add an editable unit to all curators
			class curatorAssignUnit {};				// Function to assign a player as a curator unit
			class curatorEH {postInit = 1;};		// Function for adding event handlers to curators on mission start
			class curatorGrpPlaced {};				// Function for adding curator placed groups to other curators
			class curatorMenu {};					// Function for adding the briefing-based curator menu
			class curatorObjPlaced {};				// Function for adding curator placed objects to other curators
			class curatorRemoveNVG {};				// Function for removing NVGs from curator-spawned units
		};
		class debug
		{
			file = "\sxp\template\functions\debug";
			class debugCuratorFix {};				// Function to fix black screen in the curator interface
			class error {};							// Function used for handling errors
			class errorLog {};						// Writes errors to the log and systemchat
			class errorReport {};					// Old function for handling error reporting
		};
		class event
		{
			file = "\sxp\template\functions\event";
			class initPlayerLocal {};				// Template specific initPlayerLocal entries
			class initPlayerServer {};				// Template specific initPlayerServer entries
			class initServer {};					// Template specific initServer entries
			class onPlayerKilled {};				// Template specific onPlayerKilled entries
			class onPlayerRespawn {};				// Template specific onPlayerRespawn entries
		};
		class headlessClient
		{
			file = "\sxp\template\functions\headlessClient";
			class headlessConnect {};				// Function for handling the headlessClient connecting
			class headlessDisconnect {};			// Function for handling the headlessClient disconnecting
			class headlessSetGroupOwner {};			// Function for moving groups to the headlessClient
			class headlessSetup {preInit = 1;};		// Function for setting up the headlessClient framework
		};
		class loadout
		{
			file = "\sxp\template\functions\loadout";
			class exportInventory {};				// Exports a unit's inventory to the XPTLoadouts config format
			class loadCurrentInventory {};			// Uses loadInventory to apply a loadout to a unit
			class loadInventory {};					// Function for loading a unit's inventory
			class loadInventoryLegacy {};			// Old inventory function. Temporarily preserved for backwards compatibility.
		};
		class radio
		{
			file = "\sxp\template\functions\radio";
			class radioHandleDeath {};				// Function for saving radio info on death
			class radioHandleRespawn {};			// Function for setting radio info on respawn
			class radioInit {preInit = 1;};			// Function for configuring radio settings
		};
		class respawn
		{
			file = "\sxp\template\functions\respawn";
			class waveOnPlayerKilled {};			// onPlayerKilled portion of the waves respawn template
		};
		class stage
		{
			file = "\sxp\template\functions\stage";
			class stageInit {preInit = 1;};			// Initialises the stage system
			class stageUpdate {};					// Updates the current stage. Handles changing between stages
		};
		class system
		{
			file = "\sxp\template\functions\system";
			class briefingCreate {};				// Function to create briefings from a config file
			class briefingOnStart {postInit = 1;};	// Function to create mission briefings on mission start
			class cbaParams {preInit = 1;}; 		// Function to handle converting lobby parameters to CBA settings
			class fpsMarkers {postInit = 1;}; 		// Function to place FPS indicators on the map
			class log {};							// Handles log messages
			class logWrite {};						// Writes log messages to .rpt and systemChat
			class mapMarkersClient {}; 				// Client-side portion of the map-markers module
			class mapMarkersServer {}; 				// Server-side portion of the map-markers module
			class updateTask {}; 					// Function for handling mission task updates
		};
		class vehicle
		{
			file = "\sxp\template\functions\vehicle";
			class loadItemCargo {};
			class vehicleSetup {};
			class vehicleSetupTurret {};
		};
	};
};