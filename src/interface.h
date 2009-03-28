/*
 * interface.h
 *
 *  ShowEQ Distributed under GPL
 *  http://seq.sourceforge.net/
 */

#ifndef EQINT_H
#define EQINT_H

// Deprecated headers
#include <Q3MainWindow>
#include <Q3Frame>
#include <Q3ListView>
#include <Q3PopupMenu>
#include <Q3HBox>
#include <Q3VBox>
#include <Q3ValueList>
#include <Q3PtrList>
#include <Q3TabDialog>
#include <Q3IntDict>
#include <Q3PtrDict>
#include <Q3TextStream>

#include <QPushButton>
#include <QLCDNumber>
#include <QLabel>
#include <QLayout>
#include <QMenuBar>
#include <QMainWindow>
#include <QSplitter>
#include <QTimer>
#include <QMessageBox>
#include <QSpinBox>

#include "everquest.h"
#include "spawnlist.h"
#include "spawnshell.h"
#include "packetlog.h"

//--------------------------------------------------
// forward declarations
class Player;
class MapMgr;
class SpawnListWindow;
class SpawnListWindow2;
class SpellListWindow;
class SkillListWindow;
class StatListWindow;
class SpawnPointWindow;
class EQPacket;
class ZoneMgr;
class FilterMgr;
class CategoryMgr;
class SpawnShell;
class SpellShell;
class GroupMgr;
class SpawnMonitor;
class SpawnLog;
class FilteredSpawnLog;
class FilterNotifications;
class Item;
class CompassFrame;
class MapFrame;
class ExperienceWindow;
class CombatWindow;
class NetDiag;
class GuildMgr;
class Spells;
class DateTimeMgr;
class PacketLog;
class PacketStreamLog;
class UnknownPacketLog;
class OPCodeMonitorPacketLog;
class DataLocationMgr;
class EQStr;
class MessageFilters;
class Messages;
class MessageShell;
class MessageWindow;
class Terminal;
class MessageFilterDialog;
class GuildShell;
class GuildListWindow;
class BazaarLog;

//--------------------------------------------------
// typedefs
typedef Q3ValueList<int> MenuIDList;

//--------------------------------------------------
// constants

// Number of strings, pass as a size to EQStr
const int maxNumEQStr = 8009;

// maximum number of maps
const int maxNumMaps = 5;

// maximum number of message windows
const int maxNumMessageWindows = 10;

//--------------------------------------------------
// EQInterface
// QMainWindow from Hell!  Also known as ShowEQ's main window.
class EQInterface : public QMainWindow
{
	Q_OBJECT

public:
	EQInterface(DataLocationMgr* dlm, QWidget * parent = 0, const char *name = 0);
	~EQInterface();

	QFont appFont;

public slots:
	void stsMessage(const QString &, int timeout = 0);
	void numSpawns(int);
	void setExp(uint32_t totalExp, uint32_t totalTick, uint32_t minExpLevel, uint32_t maxExpLevel, uint32_t tickExpLevel);
	void newExp(uint32_t newExp, uint32_t totalExp, uint32_t totalTick, uint32_t minExpLevel, uint32_t maxExpLevel, uint32_t tickExpLevel);
	void setAltExp(uint32_t totalExp, uint32_t maxExp, uint32_t tickExp, uint32_t aapoints);
	void newAltExp(uint32_t newExp, uint32_t totalExp, uint32_t totalTick, uint32_t maxExp, uint32_t tickExp, uint32_t aapoints);
	void levelChanged(uint8_t level);
	void newSpeed(double);
	void numPacket(int, int);
	void resetPacket(int, int);
	void attack2Hand1(const uint8_t*);
	void action2Message(const uint8_t *);
	void combatKillSpawn(const uint8_t*);
	void updatedDateTime(const QDateTime&);
	void syncDateTime(const QDateTime&);
	void clientTarget(const uint8_t* cts);

	void zoneBegin(const QString& shortZoneName);
	void zoneEnd(const QString& shortZoneName, const QString& longZoneName);
	void zoneChanged(const QString& shortZoneName);

	void spawnSelected(const Item* item);
	void spawnConsidered(const Item* item);
	void addItem(const Item* item);
	void delItem(const Item* item);
	void killSpawn(const Item* item);
	void changeItem(const Item* item);

	void updateSelectedSpawnStatus(const Item* item);

	void savePrefs();
	//void saveDockAreaPrefs(Q3DockArea* a, Qt::DockWidgetArea edge);

	void addCategory();
	void reloadCategories();
	void rebuildSpawnList();
	void selectNext();
	void selectPrev();
	void saveSelectedSpawnPath();
	void saveSpawnPaths();
	void saveSpawnPath(Q3TextStream& out, const Item* item);
	void toggleLogAllPackets();
	void toggleLogWorldData();
	void toggleLogZoneData();
	void toggle_opt_BazaarData();
	void toggle_log_UnknownData();
	void toggle_log_RawData();
	void listSpawns();
	void listDrops();
	void listMapInfo();
	void listInterfaceInfo();
	void listGroup();
	void listGuild();
	void dumpSpawns();
	void dumpDrops();
	void dumpMapInfo();
	void dumpGuildInfo();
	void dumpSpellBook();
	void dumpGroup();
	void dumpGuild();
	void launchFilterEditor();
	void launchZoneFilterEditor();
	void toggleAutoDetectPlayerSettings(int id);
	void SetDefaultCharacterClass(int id);
	void SetDefaultCharacterRace(int id);
	void SetDefaultCharacterLevel(int id);

	void togglePlayerStat(QAction*);
	void togglePlayerSkill(QAction*);
	void toggleSpawnListCol(QAction*);

	void toggleWindowDocked(QAction*);
	void toggleWindowDockable(int);

	void toggle_log_Filter_ZoneData_Client();
	void toggle_log_Filter_ZoneData_Server();

	void selectTheme(int id);
	void toggleOpcodeMonitoring(int id);
	void set_opcode_monitored_list();
	void toggle_opcode_view(int id);
	void toggle_opcode_log(int id);
	void select_opcode_file();
	void toggle_net_session_tracking();
	void toggle_net_real_time_thread(int id);
	void set_net_monitor_next_client();
	void set_net_client_IP_address();
	void set_net_client_MAC_address();
	void set_net_device();
	void set_net_arq_giveup(int giveup);
	virtual void setCaption(const QString&);
	void restoreStatusFont();
	void showMessageFilterDialog();

signals:
	void guildList2text(QString);
	void loadFileMap();
	void selectSpawn(const Item* item);
	void saveAllPrefs();
	void newZoneName (const QString &);
	void spellMessage(QString&);
	void restoreFonts();

	// Decoder signals
	void theKey(uint64_t);
	void backfillPlayer(charProfileStruct *);
	void combatSignal(int, int, int, int, int, QString, QString);

private slots:

	// Window toggle slots
	void toggleChannelMsgs(QAction*);
	void toggleMap(QAction*);
	void toggleExpWindow();
	void toggleCombatWindow();
	void toggleSpawnList();
	void toggleSpawnList2();
	void toggleSpawnPointList();
	void toggleSpellList();
	void togglePlayerStats();
	void toggleCompass();
	void togglePlayerSkills();
	void toggleNetDiag();
	void toggleGuildList();

	void toggle_opt_Fast();
	void toggle_opt_ConSelect();
	void toggle_opt_TarSelect();
	void toggle_opt_KeepSelectedVisible();
	void toggle_opt_LogSpawns();
	void toggle_opt_PvPTeams();
	void toggle_opt_PvPDeity();
	void toggle_opt_CreateUnknownSpawns(int);
	void toggle_opt_WalkPathRecord(int);
	void set_opt_WalkPathLength(int);
	void toggle_opt_RetardedCoords(int);
	void toggle_opt_SystimeSpawntime(int);
	void select_opt_conColorBase(int);
	void toggle_view_UnknownData();
	void resetMaxMana();
	void select_filter_file();
	void toggle_filter_Case(int id);
	void toggle_filter_AlertInfo(int id);
	void toggle_filter_UseSystemBeep(int id);
	void toggle_filter_UseCommands(int id);
	void toggle_filter_Log(int id);
	void set_filter_AudioCommand(int id);
	void toggle_view_menubar();
	void toggle_view_statusbar();
	void set_main_WindowCaption(int id);
	void set_main_WindowFont(int id);
	void set_main_Font(int id);
	void select_main_FormatFile(int id);
	void select_main_SpellsFile(int id);
	void toggle_main_statusbar_Window(int id);
	void set_main_statusbar_Font(int id);
	void toggle_main_SavePosition(int id);
	void toggle_main_UseWindowPos(int id);
	void toggle_opt_save_PlayerState(int id);
	void toggle_opt_save_ZoneState(int id);
	void toggle_opt_save_Spawns(int id);
	void set_opt_save_SpawnFrequency(int frequency);
	void set_opt_save_BaseFilename();
	void opt_clearChannelMsgs(int id);
	void updateViewMenu();
	void toggle_opt_UseUpdateRadius();

	void toggleTypeFilter(int);
	void disableAllTypeFilters();
	void enableAllTypeFilters();
	void toggleShowUserFilter(int);
	void disableAllShowUserFilters();
	void enableAllShowUserFilters();
	void toggleHideUserFilter(int);
	void disableAllHideUserFilters();
	void enableAllHideUserFilters();
	void toggleDisplayType(int);
	void toggleDisplayTime(int);
	void toggleEQDisplayTime(int);
	void toggleUseColor(int);

protected:
	bool getMonitorOpCodeList(const QString& title, QString& opcodeList);
	int setTheme(int id);
	void loadFormatStrings();
	void showMap(int mapNum);
	void showMessageWindow(int winNum);
	void showSpawnList();
	void showSpawnList2();
	void showSpawnPointList();
	void showStatList();
	void showSkillList();
	void showSpellList();
	void showCompass();
	void showNetDiag();
	void showGuildList();
	void createFilteredSpawnLog();
	void createSpawnLog();
	void createGlobalLog();
	void createWorldLog();
	void createZoneLog();
	void createBazaarLog();
	void createUnknownZoneLog();
	void createOPCodeMonitorLog(const QString&);
	void insertWindowMenu(SEQWindow* window);
	void removeWindowMenu(SEQWindow* window);
	void setDockEnabled(SEQWindow* dw, bool enable);

protected:
	enum {
		menuSpawnList = 0,
		menuPlayerStats = 1,
		menuPlayerSkills = 2,
		menuSpellList = 3,
		menuCompass = 4,
		menuSpawnPointList = 5,
		menuSpawnList2 = 6,

		// This is the base number where the map dock options appear in the Docked menu
		mapDockBase = 11,

		// This is the base number where the map caption options appear in the Window caption menu
		mapCaptionBase = 11,

		// This is the base number where the message window dock options appear in the Docked menu
		messageWindowDockBase = 16,
	};


private:
	DataLocationMgr* m_dataLocationMgr;
	MapMgr* m_mapMgr;
	SpawnPointWindow* m_spawnPointList;
	EQPacket* m_packet;
	ZoneMgr* m_zoneMgr;
	FilterMgr* m_filterMgr;
	CategoryMgr* m_categoryMgr;
	SpawnShell* m_spawnShell;
	Spells* m_spells;
	SpellShell* m_spellShell;
	GroupMgr* m_groupMgr;
	SpawnMonitor* m_spawnMonitor;
	GuildMgr* m_guildmgr;
	GuildShell* m_guildShell;
	DateTimeMgr* m_dateTimeMgr;
	EQStr* m_eqStrings;
	MessageFilters* m_messageFilters;
	Messages* m_messages;
	MessageShell* m_messageShell;
	Terminal* m_terminal;
	FilteredSpawnLog* m_filteredSpawnLog;
	FilterNotifications* m_filterNotifications;
	SpawnLog *m_spawnLogger;
	Player* m_player;

	PacketLog* m_globalLog;
	PacketStreamLog* m_worldLog;
	PacketStreamLog* m_zoneLog;
	BazaarLog* m_bazaarLog;
	UnknownPacketLog* m_unknownZoneLog;
	OPCodeMonitorPacketLog* m_opcodeMonitorLog;

	const Item* m_selectedSpawn;

	// Windows
	SpawnListWindow* m_spawnList;
	SpawnListWindow2* m_spawnList2;
	SpellListWindow* m_spellList;
	SkillListWindow* m_skillList;
	StatListWindow* m_statList;
	CompassFrame* m_compass;
	MessageWindow* m_messageWindow[maxNumMessageWindows];
	MapFrame*  m_map[maxNumMaps];
	ExperienceWindow* m_expWindow;
	CombatWindow* m_combatWindow;
	NetDiag* m_netDiag;
	MessageFilterDialog* m_messageFilterDialog;
	GuildListWindow* m_guildListWindow;

	QString m_ipstr[5];
	QString m_macstr[5];

	Q3IntDict<QString> m_formattedMessageStrings;


	// Menu Pieces
	QMenu* m_netMenu;
	QMenu* m_decoderMenu;
	QMenu* m_playerStatsMenu;
	QMenu* m_playerSkillsMenu;
	QMenu* m_spawnListMenu;
	QMenu* m_dockedWinMenu;
	QMenu* m_dockableWinMenu;
	QMenu* m_windowCaptionMenu;
	QMenu* m_charMenu;
	QMenu* m_charLevelMenu;
	QSpinBox* m_levelSpinBox;
	QMenu* m_charClassMenu;
	QMenu* m_charRaceMenu;
	QMenu* m_terminalMenu;
	QMenu* m_terminalTypeFilterMenu;
	QMenu* m_terminalShowUserFilterMenu;
	QMenu* m_terminalHideUserFilterMenu;
	QMenu* m_windowMenu;
	Q3PtrDict<int> m_windowsMenus;
	QMenu* m_filterZoneDataMenu;

	// View Menu Actions
	QAction* m_viewExpWindow;
	QAction* m_viewCombatWindow;
	QAction* m_viewSpawnList;
	QAction* m_viewSpawnList2;
	QAction* m_viewSpawnPointList;
	QAction* m_viewSpellList;
	QAction* m_viewPlayerStats;
	QAction* m_viewPlayerSkills;
	QAction* m_viewCompass;
	QAction* m_viewMap[maxNumMaps];
	QAction* m_viewMessageWindow[maxNumMessageWindows];
	QAction* m_viewNetDiag;
	QAction* m_viewGuildList;

	QAction* m_playerStatsMenuAction;
	QAction* m_spawnListMenuAction;
	QAction* m_playerSkillsMenuAction;
	QAction* m_playerSkillsLanguages;

	int char_ClassID[PLAYER_CLASSES];
	int char_RaceID[PLAYER_RACES];
	int m_id_log_AllPackets;
	int m_id_log_WorldData;
	int m_id_log_ZoneData;
	int m_id_log_UnknownData;
	int m_id_log_RawData;
	int m_id_log_Items;
	int m_id_log_ItemPackets;
	int m_id_opt_BazaarData;
	int m_id_opt_OptionsDlg;
	int m_id_opt_Fast;
	int m_id_opt_ResetMana;

	int m_id_view_UnknownData;
	int m_id_opt_ConSelect;
	int m_id_opt_TarSelect;
	int m_id_opt_KeepSelectedVisible;
	int m_id_opt_LogSpawns;
	int m_id_opt_PvPTeams;
	int m_id_opt_PvPDeity;
	int m_id_net_sessiontrack;
	int m_packetStartTime;
	int m_initialcount;
	int m_id_opt_useUpdateRadius;
	int m_id_log_Filter_ZoneData_Client;
	int m_id_log_Filter_ZoneData_Server;

	MenuIDList IDList_StyleMenu;

	// Status bar pieces
	QLabel* m_stsbarSpawns;
	QLabel* m_stsbarStatus;
	QLabel* m_stsbarZone;
	QLabel* m_stsbarID;
	QLabel* m_stsbarExp;
	QLabel* m_stsbarExpAA;
	QLabel* m_stsbarPkt;
	QLabel* m_stsbarEQTime;
	QLabel* m_stsbarSpeed;
	// ZEM code
	QLabel* m_stsbarZEM;



	// ===================================================
	QStringList m_StringList;
	QDialog *dialogbox;

	bool m_isSkillListDocked;
	bool m_isStatListDocked;
	bool m_isMapDocked[maxNumMaps];
	bool m_isMessageWindowDocked[maxNumMessageWindows];
	bool m_isSpawnListDocked;
	bool m_isSpawnList2Docked;
	bool m_isSpawnPointListDocked;
	bool m_isSpellListDocked;
	bool m_isCompassDocked;

	bool m_selectOnConsider;
	bool m_selectOnTarget;
	bool m_useUpdateRadius;

	int m_stateVersion;

	QWidget* m_filler;

private:
	// create interface widgets
	void setupExperienceWindow();
	void setupCombatWindow();
	void createInterfaceWidgets();

	// create logs
	void createLogs();

	// menu items
	void createFileMenu();
	void createViewMenu();
	void createOptionsMenu();
	void createNetworkMenu();
	void createCharacterMenu();
	void createFiltersMenu();
	void createInterfaceMenu();
	void createWindowMenu();
	void createDebugMenu();

	// status bar
	void createStatusBar();

	// connect packet signals
	void connectSignals();

	bool m_creating;	// true if we're creating the interface
};

#endif // EQINT_H
