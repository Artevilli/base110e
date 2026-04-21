#if defined(EXTERN_G_CVAR)
#define G_CVAR(vmCvar, cvarName, defaultString, cvarFlags, modificationCount, trackChange) extern vmCvar_t vmCvar;
#endif

#if defined(DECLARE_G_CVAR)
#define G_CVAR(vmCvar, cvarName, defaultString, cvarFlags, modificationCount, trackChange) vmCvar_t vmCvar;
#endif

#if defined(G_CVAR_LIST)
#define G_CVAR(vmCvar, cvarName, defaultString, cvarFlags, modificationCount, trackChange) {&vmCvar, cvarName, defaultString, cvarFlags, modificationCount, trackChange},
#endif

//don't override the cheat state set by the system
G_CVAR(g_cheats, "sv_cheats", "", 0, 0, qfalse)

G_CVAR(sv_fps, "sv_fps", "30", CVAR_ARCHIVE, 0, qfalse)

//noset vars
G_CVAR(g_restarted, "g_restarted", "0", CVAR_ROM, 0, qfalse)
G_CVAR(g_lockTeamsAtStart, "g_lockTeamsAtStart", "0", CVAR_ROM, 0, qfalse)

//latched vars
G_CVAR(g_maxclients, "sv_maxclients", "8", CVAR_SERVERINFO | CVAR_LATCH | CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_maxGameClients, "g_maxGameClients", "0", CVAR_SERVERINFO | CVAR_ARCHIVE | CVAR_NORESTART, 0, qtrue)

//change anytime vars
G_CVAR(g_timelimit, "timelimit", "45", CVAR_SERVERINFO | CVAR_ARCHIVE | CVAR_NORESTART, 0, qtrue)
G_CVAR(g_suddenDeathTime, "g_suddenDeathTime", "30", CVAR_SERVERINFO | CVAR_ARCHIVE | CVAR_NORESTART, 0, qtrue)
G_CVAR(g_suddenDeathMode, "g_suddenDeathMode", "0", CVAR_SERVERINFO | CVAR_ARCHIVE | CVAR_NORESTART, 0, qtrue)
G_CVAR(g_suddenDeath, "g_suddenDeath", "0", CVAR_SERVERINFO | CVAR_NORESTART, 0, qtrue)

G_CVAR(g_synchronousClients, "g_synchronousClients", "0", CVAR_SYSTEMINFO, 0, qfalse)

G_CVAR(g_friendlyFire, "g_friendlyFire", "0", CVAR_ARCHIVE | CVAR_SERVERINFO, 0, qtrue)
G_CVAR(g_friendlyFireAliens, "g_friendlyFireAliens", "0", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_friendlyFireHumans, "g_friendlyFireHumans", "0", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_retribution, "g_retribution", "0", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_friendlyBuildableFire, "g_friendlyBuildableFire", "0", CVAR_ARCHIVE | CVAR_SERVERINFO, 0, qtrue)
G_CVAR(g_friendlyFireMovementAttacks, "g_friendlyFireMovementAttacks", "1", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_devmapNoGod, "g_devmapNoGod", "0", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_devmapNoStructDmg, "g_devmapNoStructDmg", "0", CVAR_ARCHIVE, 0, qtrue)

G_CVAR(g_teamAutoJoin, "g_teamAutoJoin", "0", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_teamForceBalance, "g_teamForceBalance", "1", CVAR_ARCHIVE, 0, qtrue)

G_CVAR(g_warmup, "g_warmup", "10", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_warmupMode, "g_warmupMode", "1", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_doWarmup, "g_doWarmup", "1", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_logFile, "g_logFile", "games.log", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_logFileSync, "g_logFileSync", "0", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_password, "g_password", "", CVAR_USERINFO, 0, qfalse)

G_CVAR(g_banIPs, "g_banIPs", "", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_filterBan, "g_filterBan", "1", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_needpass, "g_needpass", "0", CVAR_SERVERINFO | CVAR_ROM, 0, qfalse)

G_CVAR(g_dedicated, "dedicated", "0", 0, 0, qfalse)

G_CVAR(g_speed, "g_speed", "320", CVAR_SERVERINFO, 0, qtrue)
G_CVAR(g_gravity, "g_gravity", "800", CVAR_SERVERINFO, 0, qtrue)
G_CVAR(g_knockback, "g_knockback", "1000", CVAR_SERVERINFO, 0, qtrue)
G_CVAR(g_quadfactor, "g_quadfactor", "3", 0, 0, qtrue)
G_CVAR(g_weaponRespawn, "g_weaponrespawn", "5", 0, 0, qtrue)
G_CVAR(g_weaponTeamRespawn, "g_weaponTeamRespawn", "30", 0, 0, qtrue)
G_CVAR(g_inactivity, "g_inactivity", "0", 0, 0, qtrue)
G_CVAR(g_debugMove, "g_debugMove", "0", 0, 0, qfalse)
G_CVAR(g_debugDamage, "g_debugDamage", "0", 0, 0, qfalse)
G_CVAR(g_debugAlloc, "g_debugAlloc", "0", 0, 0, qfalse)
G_CVAR(g_motd, "g_motd", "", 0, 0, qfalse)
G_CVAR(g_blood, "com_blood", "1", 0, 0, qfalse)

G_CVAR(g_podiumDist, "g_podiumDist", "80", 0, 0, qfalse)
G_CVAR(g_podiumDrop, "g_podiumDrop", "70", 0, 0, qfalse)

G_CVAR(g_allowVote, "g_allowVote", "1", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_requireVoteReasons, "g_requireVoteReasons", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_voteLimit, "g_voteLimit", "5", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_voteMinTime, "g_voteMinTime", "120", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_mapvoteMaxTime, "g_mapvoteMaxTime", "240", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_extendVote, "g_extendVote", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_extendVoteTime, "g_extendVoteTime", "5", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_votableMaps, "g_votableMaps", "", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_suddenDeathVotePercent, "g_suddenDeathVotePercent", "74", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_suddenDeathVoteDelay, "g_suddenDeathVoteDelay", "180", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_mapVotesPercent, "g_mapVotesPercent", "50", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_designateVotes, "g_designateVotes", "0", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_listEntity, "g_listEntity", "0", 0, 0, qfalse)
G_CVAR(g_minCommandPeriod, "g_minCommandPeriod", "500", 0, 0, qfalse)
G_CVAR(g_minNameChangePeriod, "g_minNameChangePeriod", "5", 0, 0, qfalse)
G_CVAR(g_maxNameChanges, "g_maxNameChanges", "5", 0, 0, qfalse)
G_CVAR(g_newbieNumbering, "g_newbieNumbering", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_newbieNamePrefix, "g_newbieNamePrefix", "Newbie#", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_smoothClients, "g_smoothClients", "1", 0, 0, qfalse)
G_CVAR(g_clientUpgradeNotice, "g_clientUpgradeNotice", "1", 0, 0, qfalse)
G_CVAR(pm_fixedPmove, "pm_fixedPmove", "0", CVAR_SYSTEMINFO, 0, qfalse)
G_CVAR(pm_fixedPmoveFPS, "pm_fixedPmoveFPS", "125", CVAR_SYSTEMINFO, 0, qfalse)

G_CVAR(g_humanBuildPoints, "g_humanBuildPoints", DEFAULT_HUMAN_BUILDPOINTS, CVAR_SERVERINFO, 0, qfalse)
G_CVAR(g_alienBuildPoints, "g_alienBuildPoints", DEFAULT_ALIEN_BUILDPOINTS, CVAR_SERVERINFO, 0, qfalse)
G_CVAR(g_humanStage, "g_humanStage", "0", 0, 0, qfalse)
G_CVAR(g_humanKills, "g_humanKills", "0", 0, 0, qfalse)
G_CVAR(g_humanMaxStage, "g_humanMaxStage", DEFAULT_HUMAN_MAX_STAGE, 0, 0, qfalse)
G_CVAR(g_humanStage2Threshold, "g_humanStage2Threshold", DEFAULT_HUMAN_STAGE2_THRESH, 0, 0, qfalse)
G_CVAR(g_humanStage3Threshold, "g_humanStage3Threshold", DEFAULT_HUMAN_STAGE3_THRESH, 0, 0, qfalse)
G_CVAR(g_alienStage, "g_alienStage", "0", 0, 0, qfalse)
G_CVAR(g_alienKills, "g_alienKills", "0", 0, 0, qfalse)
G_CVAR(g_alienMaxStage, "g_alienMaxStage", DEFAULT_ALIEN_MAX_STAGE, 0, 0, qfalse)
G_CVAR(g_alienStage2Threshold, "g_alienStage2Threshold", DEFAULT_ALIEN_STAGE2_THRESH, 0, 0, qfalse)
G_CVAR(g_alienStage3Threshold, "g_alienStage3Threshold", DEFAULT_ALIEN_STAGE3_THRESH, 0, 0, qfalse)

G_CVAR(g_teamImbalanceWarnings, "g_teamImbalanceWarnings", "30", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_unlagged, "g_unlagged", "1", CVAR_SERVERINFO | CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_disabledEquipment, "g_disabledEquipment", "", CVAR_ROM, 0, qfalse)
G_CVAR(g_disabledClasses, "g_disabledClasses", "", CVAR_ROM, 0, qfalse)
G_CVAR(g_disabledBuildables, "g_disabledBuildables", "", CVAR_ROM, 0, qfalse)

G_CVAR(g_chatTeamPrefix, "g_chatTeamPrefix", "1", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_actionPrefix, "g_actionPrefix", "* ", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_floodMaxDemerits, "g_floodMaxDemerits", "5000", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_floodMinTime, "g_floodMinTime", "2000", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_markDeconstruct, "g_markDeconstruct", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_deconDead, "g_deconDead", "0", CVAR_ARCHIVE, 0, qtrue)

G_CVAR(g_debugMapRotation, "g_debugMapRotation", "0", 0, 0, qfalse)
G_CVAR(g_currentMapRotation, "g_currentMapRotation", "-1", 0, 0, qfalse) //-1 = NOT_ROTATING
G_CVAR(g_currentMap, "g_currentMap", "0", 0, 0, qfalse)
G_CVAR(g_nextMap, "g_nextMap", "", 0 , 0, qtrue)
G_CVAR(g_initialMapRotation, "g_initialMapRotation", "", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_shove, "g_shove", "15", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_mapConfigs, "g_mapConfigs", "", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_layouts, "g_layouts", "", CVAR_LATCH, 0, qfalse)
G_CVAR(g_layoutAuto, "g_layoutAuto", "1", CVAR_ARCHIVE, 0, qfalse)

G_CVAR(g_admin, "g_admin", "admin.dat", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_adminLog, "g_adminLog", "admin.log", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_adminParseSay, "g_adminParseSay", "1", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_adminSayFilter, "g_adminSayFilter", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_adminNameProtect, "g_adminNameProtect", "1", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_adminTempBan, "g_adminTempBan", "2m", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_adminMaxBan, "g_adminMaxBan", "2w", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_adminMapLog, "g_adminMapLog", "", CVAR_ROM, 0, qfalse)
G_CVAR(g_minLevelToJoinTeam, "g_minLevelToJoinTeam", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_forceAutoSelect, "g_forceAutoSelect", "0", CVAR_ARCHIVE, 0, qtrue) 
 
G_CVAR(g_privateMessages, "g_privateMessages", "1", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_decolourLogfiles, "g_decolourLogfiles", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_buildLogMaxLength, "g_buildLogMaxLength", "50", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_myStats, "g_myStats", "1", CVAR_ARCHIVE, 0, qtrue)
G_CVAR(g_publicSayadmins, "g_publicSayadmins", "1", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_minLevelToSpecMM1, "g_minLevelToSpecMM1", "0", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_antiSpawnBlock, "g_antiSpawnBlock", "0", CVAR_ARCHIVE, 0, qfalse)
 
G_CVAR(g_devmapKillerHP, "g_devmapKillerHP", "0", CVAR_ARCHIVE, 0, qtrue)
 
G_CVAR(g_tag, "g_tag", "main", CVAR_INIT, 0, qfalse)
 
G_CVAR(g_dretchPunt, "g_dretchPunt", "1", CVAR_ARCHIVE, 0, qfalse)
 
G_CVAR(g_msg, "g_msg", "", CVAR_ARCHIVE, 0, qfalse)
G_CVAR(g_msgTime, "g_msgTime", "0", CVAR_ARCHIVE, 0, qfalse)
 
G_CVAR(g_rankings, "g_rankings", "0", 0, 0, qfalse)
G_CVAR(g_allowShare, "g_allowShare", "0", CVAR_ARCHIVE | CVAR_SERVERINFO, 0, qfalse)
G_CVAR(g_banNotice, "g_banNotice", "", CVAR_ARCHIVE, 0, qfalse)

#undef G_CVAR
