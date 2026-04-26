# base110e

Unofficial Tremulous 1.1.0 gamecode patch

# What is done:

 * new toolchain used (optimized q3lcc and q3asm)
 * upstream security fixes
 * unlagged weapons
 * improved prediction
 * weapon reload fix
 * field of view automatically adjusts to your screen resolution rather than stretching or adding black borders (`cg_fovAdjust`)
 * field of view is optionally customizable to a fixed value (`cg_fovCustom`)
 * option for better pmove (`pm_fixedPmove`/`pm_fixedPmoveFPS`) while maintaining low bandwidth usage
 * option for exact pmove prediction (`pm_exactPmove`) at the cost of higher bandwidth usage
 * fancy warmup countdown, similar to KoRx
 * better handling for systeminfo, can properly be changed on the client now (bypasses "server is not allowed to set ...")
 * cgame.qvm/ui.qvm compatible with other 1.1.0 mods, excluding the more heavily changed ones
 * single-line cvar declaration, improved cvar code readability and development efficiency
 * single-line event (EV_*) declaration
 * single-line mean of death (MOD_*) declaration

# TODO:

 * extension system for Tremulous 1.1.0e
 * bugfixes
