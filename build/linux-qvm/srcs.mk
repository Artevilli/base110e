QA_SRC = \
 g_main $(QADIR)/g_syscalls.asm \
 bg_misc bg_lib bg_pmove bg_slidemove \
 q_math q_shared \
 g_active g_admin g_buildable g_client g_cmds g_combat g_maprotation \
 g_mem g_misc g_missile g_mover g_physics g_ptr g_session g_spawn g_svcmds \
 g_target g_team g_trigger g_unlagged g_utils g_weapon \

CG_SRC = \
 cg_main $(CGDIR)/cg_syscalls.asm \
 cg_animation cg_animmapobj cg_attachment cg_buildable cg_consolecmds \
 cg_draw cg_drawtools cg_ents cg_event cg_marks cg_mem cg_particles \
 cg_players cg_playerstate cg_predict cg_ptr cg_scanner cg_servercmds \
 cg_snapshot cg_trails cg_tutorial cg_view cg_weapons \
 bg_slidemove bg_pmove bg_lib bg_misc \
 q_math q_shared \
 ui_shared \

UI_SRC = \
 ui_main $(UIDIR)/ui_syscalls.asm \
 ui_atoms ui_gameinfo ui_players ui_shared \
 bg_misc bg_lib \
 q_math q_shared \
