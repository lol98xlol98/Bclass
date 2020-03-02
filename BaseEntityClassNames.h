

//Base Classes and their properties so i can visualize it
//it may or may not be useful who knows yet
//i just did this so i could see the structureing of these datamaps' pointers
//~~~~~~~~
#define  PropertyType
#define EntityState
#define MODIFIER_STATE_ROOTED	0	//Set to true to cause the parent to become rooted.
#define MODIFIER_STATE_DISARMED	1	//Set to true to cause the parent to become disarmed.
#define MODIFIER_STATE_ATTACK_IMMUNE	2	//Set to true to cause the parent to become attack immune.
#define MODIFIER_STATE_SILENCED	3	//Set to true to cause the parent to become silenced.
#define MODIFIER_STATE_MUTED	4	//Set to true to cause the parent to become muted.
#define MODIFIER_STATE_STUNNED	5	//Set to true to cause the parent to become stunned.
#define MODIFIER_STATE_HEXED	6	//Set to true to cause the parent to become hexed.
#define MODIFIER_STATE_INVISIBLE	7	//Set to true to cause the parent to become invisible.
#define MODIFIER_STATE_INVULNERABLE	8	//Set to true to cause the parent to become invulnerable.
#define MODIFIER_STATE_MAGIC_IMMUNE	9	//Set to true to cause the parent to become immune to magic.
#define MODIFIER_STATE_PROVIDES_VISION	10	//Set to true to cause the parent to share its vision with the source of the modifier.
#define MODIFIER_STATE_NIGHTMARED	11	//Set to true to cause the parent to become nightmared.
#define MODIFIER_STATE_BLOCK_DISABLED	12	//Set to true to cause the parent to become unable to block attacks.
#define MODIFIER_STATE_EVADE_DISABLED	13	//Set to true to cause the parent to become unable to evade attacks.
#define MODIFIER_STATE_UNSELECTABLE	14	//Set to true to cause the parent to make it unselectable.
#define MODIFIER_STATE_CANNOT_MISS	15	//Set to true to cause the parent to always hit its target.
#define MODIFIER_STATE_SPECIALLY_DENIABLE	16	//Set to true to cause allies to be able to deny the parent.
#define MODIFIER_STATE_FROZEN	17	//Set to true to cause the parent to become frozen.
#define MODIFIER_STATE_COMMAND_RESTRICTED	18	//Set to true to cause the parent to become unable to issue orders.
#define MODIFIER_STATE_NOT_ON_MINIMAP	19	//Set to true to cause the parent to become invisible on the minimap.
#define MODIFIER_STATE_NOT_ON_MINIMAP_FOR_ENEMIES	20	//Set to true to cause the parent to become invisible on the minimap for enemies.
#define MODIFIER_STATE_LOW_ATTACK_PRIORITY	21	//Set to true to cause the parent to become low attack priority, causing it to be the last to be hit when attack moving.
#define MODIFIER_STATE_NO_HEALTH_BAR	22	//Set to true to cause the parent to have its health bar disabled(invisible).
#define MODIFIER_STATE_FLYING	23	//Set to true to cause the parent to fly, ignoring terrains and increasing its offset from the ground.
#define MODIFIER_STATE_NO_UNIT_COLLISION	24	//Set to true to cause the parent to become phased.
#define MODIFIER_STATE_NO_TEAM_MOVE_TO	25
#define MODIFIER_STATE_NO_TEAM_SELECT	26
#define MODIFIER_STATE_PASSIVES_DISABLED	27	//Set to true to cause the parent to have its passives disabled.
#define MODIFIER_STATE_DOMINATED	28	//Set to true to cause the parent to become dominated.
#define MODIFIER_STATE_BLIND	29	//Set to true to cause the parent to become blind.
#define MODIFIER_STATE_OUT_OF_GAME	30
#define MODIFIER_STATE_FAKE_ALLY	31
#define MODIFIER_STATE_FLYING_FOR_PATHING_PURPOSES_ONLY	32	//Set to true to cause the parent to stay on the ground, but be considered flying when moving.
#define MODIFIER_STATE_TRUESIGHT_IMMUNE	33	//Set to true to cause the parent to become immune to truesight.
#define MODIFIER_STATE_LAST	34//

class xDT_DOTA_Gamerules{
public:
	struct PropertyType {

	};

};



class xDT_DOTATeam {
public:
	struct PropertyType {
		enum m_iTeamNum { Teamindex };
		enum m_szTeamname { TeamName };
		enum m_szTag { TeamTag };
		enum m_unTournamentTeamID { TeamID };
		enum player_array { m_iBarracksKills, m_iTowerKills, m_iHeroKills, m_bTeamComplete, m_iScore, m_iRoundsWon };
	};

};

class xDT_DOTAPlayer{
public:
	struct PropertyType {
		enum m_iPlayerID { Playerid };
		enum m_hAssignedHero { eHandle };
	};
};

class xDT_DOTA_PlayerResource{
public:
	struct PropertyType {
	//these are all technically arrays[]!!!
	//ill have to figure out how to programatically type this up and make it proper
	/*
	Arrays
These arrays index from 0000-0004 for Radiant, 0005-0009 for Dire, and 0010-#### for spectators, etc.
When a DT_DOTA_PlayerResource is found, such as players=world.find_all_by_dt('DT_DOTA_PlayerResource'), an collections.OrderedDict is returned. The only item in players is a tuple (ehandle,state) pair. ehandle is the ehandle for this DT, and the state is a regular dict. The keys in this dict are tuples of a data point, and a player. for example:

('m_iReliableGold','0003'): contains the reliable gold of player 3
('m_iPlayerTeams','0000'): contains the team of player 0
('m_iPlayerSteamIDs','0006'): contains the steamID of player 6
('m_iLastHitCount','0005'): contains the number of last hits player 5 has
	*/
	enum        m_iszSelectedHero{};
	enum        m_iReliableGold{};// : the player's reliable gold
	enum	    m_bIsBroadcaster{};
	enum        m_nSelectedHeroID{};// : hero ID for that player entry
	enum		m_UnitShareMasks{};
	enum		m_iNearbyCreepDeathCount{};
	enum		m_iszPlayerNames{};// : the player's name
	enum		m_bHasRepicked{};
	enum		m_iTimedRewardCrates{};
	enum		m_iTimedRewardDrops{};
	enum		m_bFakeClient{};
	enum		m_iBroadcasterLanguage{};
	enum		m_iLastHitStreak{};
	enum		m_bBattleBonusActive{};
	enum		m_iMetaLevel{};
	enum		m_hSelectedHero{};// : ehandle for the DT_DOTA_Unit_Hero entity
	enum		m_iMetaExperienceBonusRate{};
	enum		m_iLastHitMultikill{};
	enum		m_iLastHitCount{};
	enum		m_iLevel{};
	enum		m_iDenyCount{};
	enum		m_iConnectionState{};
	enum		m_iDeaths{};
	enum		m_bFullyJoinedServer{};
	enum		m_iBroadcasterChannelSlot{};
	enum		m_iMetaExperience{};
	enum		m_iTotalEarnedXP{};
	enum		m_iPlayerSteamIDs{};// : steam ID for that player
	enum		m_nPossibleHeroSelection{};
	enum		m_bVoiceChatBanned{};
	enum		m_iUnreliableGold{};// : the player's unreliable gold
	enum		m_iLastBuybackTime{};
	enum		m_iAssists{};
	enum		m_nSuggestedHeroes{};
	enum		m_iBattleBonusRate{};
	enum		m_iKills{};
	enum		m_iTotalEarnedGold{};// : The player's total earned gold
	enum		m_iPlayerTeams{}; //	2 : Radiant   3 : Dire   5 : Spectator
	enum		m_iRespawnSeconds{};
	enum		m_bHasRandomed{};
	enum		m_iStreak{};
	enum		m_iBroadcasterChannel{};
	enum		m_flBuybackCooldownTime{};
	enum		m_bAFK{};
	enum		m_iMetaExperienceAwarded{};

	};
};

class xDT_DOTABaseAbility {
public:
	struct PropertyType {
		enum m_iLevel{ abilitylevel };
		enum m_fCooldown{ gametime };
		enum m_flCooldownLength{ length };
		enum m_iManaCost{ ManaCost };
		enum m_iCastRange{ CastingRange };
		
	};
};

class xDT_DOTA_BaseNPC {
private:
	enum    xm_nUnitState{ xeState };
public:
	
	/*
	m_nUnitState

The entity's state. The following values are positions to check against (See _bittest: http://msdn.microsoft.com/en-us/library/h65k4tze%28v=vs.90%29.aspx)
0 - Rooted
1 - Soft Disarmed
2 - Hard Disarmed
3 - Attack Immune
4 - Silenced
5 - Muted
6 - Stunned
7 - Hexed
8 - Invisible
9 - Invulnerable
10 - Magic Immune
11 -
12 - Nightmared
13 - Blocked Disabled
14 - Evade Disabled
15 - Unselectable
16 -
17 - Specially Deniable
18 - Frozen
19 - Command Restricted
20 -
21 - Not On Minimap For Enemies
22 - Low Attack Priority
23 - No Health Bar
24 - Has Flying Vision (? - Not Sure)
25 - No Unit Collision
26 - No Team MoveTo
27 - No Team Select
28 - Passives Disabled
29 - Dominated
30 - Blind
31 - Out Of Game
32 -
	*/
   


	
	
	struct PropertyType {

		enum m_iCurrentLevel { EntityLevel };
		struct m_nUnitState {
			virtual int Getstate() = 0;
			(int)Getstate() {
				int statecmp;
				statecmp = (int)xm_nUnitState::xeState;
				switch (statecmp) {
				case  MODIFIER_STATE_ROOTED | MODIFIER_STATE_DISARMED | MODIFIER_STATE_ATTACK_IMMUNE | MODIFIER_STATE_SILENCED | MODIFIER_STATE_MUTED | MODIFIER_STATE_STUNNED | MODIFIER_STATE_HEXED | MODIFIER_STATE_INVISIBLE | MODIFIER_STATE_INVULNERABLE | MODIFIER_STATE_MAGIC_IMMUNE | MODIFIER_STATE_PROVIDES_VISION | MODIFIER_STATE_NIGHTMARED | MODIFIER_STATE_BLOCK_DISABLED | MODIFIER_STATE_EVADE_DISABLED | MODIFIER_STATE_UNSELECTABLE | MODIFIER_STATE_CANNOT_MISS | MODIFIER_STATE_SPECIALLY_DENIABLE | MODIFIER_STATE_FROZEN | MODIFIER_STATE_COMMAND_RESTRICTED | MODIFIER_STATE_NOT_ON_MINIMAP | MODIFIER_STATE_NOT_ON_MINIMAP_FOR_ENEMIES | MODIFIER_STATE_LOW_ATTACK_PRIORITY | MODIFIER_STATE_NO_HEALTH_BAR | MODIFIER_STATE_FLYING | MODIFIER_STATE_NO_UNIT_COLLISION | MODIFIER_STATE_NO_TEAM_MOVE_TO | MODIFIER_STATE_NO_TEAM_SELECT | MODIFIER_STATE_PASSIVES_DISABLED | MODIFIER_STATE_DOMINATED | MODIFIER_STATE_BLIND | MODIFIER_STATE_OUT_OF_GAME | MODIFIER_STATE_FAKE_ALLY | MODIFIER_STATE_FLYING_FOR_PATHING_PURPOSES_ONLY | MODIFIER_STATE_TRUESIGHT_IMMUNE | MODIFIER_STATE_LAST:
					return statecmp;
				}

			}
			int eState = Getstate();
		}; //32 bits? define it above
		enum m_hReplicatingOtherHeroModel { eHandle };
		enum m_iUnitNameIndex { indexVpkHeroID };
		enum m_lifeState { lifestate }; // 0alive 1dying 2dead 3respawnable 4discard body
		enum m_iHealth {Health};
		enum m_iMaxHealth {MaxHealth};
		enum m_iHealthThinkRegen {HpRegen};
		enum m_iMana {Mana};
		enum m_iMaxMana {MaxMana};
		enum m_iManaThinkRegen {MpRegen};
		enum m_bIsAncient {Flag};//1 ancient-type 0 not




	};
};

class xDT_DOTA_BaseNPC_Creep_Lane{
public:
	struct PropertyType {
		enum m_iHealthPercentage {Percent};
	};
};

class xDT_DOTA_BaseNPC_Hero {
public:
	struct PropertyType {
		enum m_iCurrentXP {Xp};
		enum m_hReplicatingOtherHeroModel {eHandle};
		enum m_iPlayerID {PlayerID};
		enum m_flSpawnedAt {TheTimeAtSpawn};
		enum m_flStrength {BaseStr};
		enum m_flAgility {BaseAgi};
		enum m_flIntellect {BaseInt};
		enum m_flStrengthTotal {StrNow};
		enum m_flAgilityTotal {AgiNow};
		enum m_flIntellectTotal {IntNow};

	};
};

