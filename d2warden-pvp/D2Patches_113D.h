/* ==========================================================
* d2warden
* https://github.com/lolet/d2warden
* ==========================================================
* Copyright 2011-2014 Bartosz Jankowski
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
* ========================================================== */

#ifndef D2PATCHES_H__
#define D2PATCHES_H__

#define D2GAME_ON_DEBUG_PACKET 0xBFF2C

#define D2GAME_DISABLE_ROOM_CACHE 0xC0008

#define D2GAME_TIMER_EXPAND 0xC07A7

#define D2GAME_QUESTINIT_I 0xBE401
#define D2GAME_QUESTINIT_II 0xBE0F9

#define D2GAME_GOLDTRANS_I 0x734E3
#define D2GAME_GOLDTRANS_II 0x73624
#define D2GAME_GOLDTRANS_III 0x73766
#define D2COMMON_REPAIR_I	0x48C50
#define D2COMMON_REPAIR_II 0x717A8

#define D2GAME_ADDGOLD_I 0x73982
#define D2GAME_ADDGOLD_II 0x739B1

#define D2COMMON_GETBANKGOLDLIMIT_J -11025

#define D2GAME_ISDEADOVERRIDE 0x6D410
#define D2GAME_CLIENT_PACKET_WRAPPER_NEW 0xD53C5

#define D2GAME_HOSTILELVL_I 0xF2DD4
#define D2GAME_HOSTILELVL_II 0xF2DBD
#define D2GAME_HOSTILELVL_III 0xF2E15
#define D2GAME_HOSTILELVL_IV 0xF2D2C

#define D2GAME_MONSTERSPAWN_I 0x1A3C0

#define D2GAME_LASTHITINTERCEPT	0x8BEAD // k
#define D2GAME_ONDAMAGECREATION	0x41BF0 // k
#define D2NET_CLIENT_PACKET_WRAPPER	0x73AD // k
#define D2GAME_D2EX_CONNECT	0x66EA0 // k
#define D2GAME_ACT_LOAD	0x5D485 // k
#define D2GAME_MOVE_PLAYER_CORPSE_TO_TOWN	0x93BCB //0x7418B // k
#define D2GAME_HOSTILE_WP_DELAY	0xF2E67 // k
#define D2GAME_HOSTILE_BUTTON_DELAY	0xF2E2D // k
#define D2GAME_GOLD_DROP_ON_DEATH	0x9A6C0 // k
#define D2GAME_EAR_DROP_ON_DEATH	0xE0143 // k
#define D2GAME_FINDUNIT_FIX	0x6DC40 // k
#define D2GAME_PLAYER_MODE_INTERCEPT	0x922C2 //k
#define D2GAME_STRDEX_BUG_FIX	0x682CF //k
#define D2GAME_CHAT_WRAPPER	0x69300 //k
#define D2GAME_NPC_SLOW_MISSILE_HEAL	0x70B81 //k
#define D2GAME_RESSURECT_FIX	0x6CCB8 // k
#define D2GAME_ROSTER_WRAPPER	0x93DC7 // k
#define D2GAME_ON_MONSTER_DEATH	0x8A976 // k
#define D2GAME_NULL_ORIGINAL_SC_0X66	0x14F60 //k
#define D2GAME_GAME_DESTROY_WRAPPER	0xBEA8A //k
#define D2GAME_ADD_CLIENTTOGAME_WRAPPER	0xE7548 //k
#define D2GAME_PLAYER_EVENTS_WRAPPER	0x68950 //k
#define D2GAME_0X66_WARDEN_PACKET_WRAPPER	0x66AE0 //k
#define D2GAME_0X05_WRAPPER	0x69D00 //k
#define D2GAME_0X0C_WRAPPER	0x69C80 //k
#define D2GAME_0X08_WRAPPER	0x6A280 //k
#define D2GAME_0X0F_WRAPPER	0x6A120 //k
#define D2GAME_0X06_WRAPPER	0x6A360 //k
#define D2GAME_0X07_WRAPPER	0x6A2E0 //k
#define D2GAME_0X09_WRAPPER	0x6A500 //k
#define D2GAME_0X0A_WRAPPER	0x6A4A0 //k
#define D2GAME_0X0D_WRAPPER	0x6A200 //k
#define D2GAME_0X0E_WRAPPER	0x6A180 //k
#define D2GAME_0X10_WRAPPER	0x6A440 //k
#define D2GAME_0X11_WRAPPER	0x6A3E0 //k
#define D2GAME_0X41_WRAPPER 0x6CBD0 //k
#define D2GAME_0X03_WRAPPER	0x69790 //k
#define D2GAME_LOCK_HACK_WRAPPER	0xBEF50 // k
#define D2GAME_PERM_STORE_STUB_I	0x731EF // k
#define D2GAME_PERM_STORE_STUB_II	0x72C8C // k
#define D2GAME_ITEM_COST_STUB	0x733DA // k
#define D2CLIENT_EXTEND_GAME_STRUCT	0x2469 // k
#define D2COMMON_EXTEND_PLAYERDATA_STRUCT_I	0x170D9 // k
#define D2COMMON_EXTEND_PLAYERDATA_STRUCT_II	0x170EA // k
#define D2GAME_PARTY_SHARE_FIX_PREPARE	0x8A898 // k
#define D2GAME_PARTY_SHARE_FIX	0x8A89A // k
#define D2GAME_EXP_INCREASE_FIX	0x7DF97 // k
#define D2GAME_EXP_INCREASE_FIX_2	0x7DCF0 // k
#define D2GAME_MAX_PLAYERS_CHANGE	0x99810 // k
#define D2GAME_DECRESAE_CORPSE_NUMBER	0x93666 // k
#define D2GAME_NULL_IRON_MAIDEN	0xFB620 + 8 // k
#define D2GAME_NULL_LOWER_RESIST	0xFB620 + 20 // k
#define D2GAME_COWS_DROP_FIX	0xE36CA // k
#define D2GAME_COW_LEVEL_QUEST_OVERRIDE	0x95492 // k
#define D2GAME_RESPEC	0x4BC83 // STILL 1.11b 
#define D2GAME_FIRE_ENCHANTED_FIX	0xCF300 // k
#define D2COMMON_COLOUR_ITEM_INTERCEPT_IV	0x3ADCD // k
#define D2COMMON_COLOUR_ITEM_INTERCEPT_V	0x3AC6C // k
#define D2GAME_TRESURE_CLASS_CREATE_HNDLR	0xE36FB // k
#define FOG_MEM_ALLOC_OVERRIDE	0x1D380 // unused but 1.11b
#define FOG_MEM_FREE_OVERRIDE	0x1CEE0 // unused but 1.11b
#define FOG_MEM_REALLOC_OVERRIDE	0x1DBF0 // unused but 1.11b
#define D2GAME_NODESEX_AI_TEMP_FIX	0x5981C // k
#define D2GAME_NODESEX_BAAL_AI	0xC7420 //k
#define D2GAME_NODESEX_DIABLO_AI	0x2CCE0 //k
#define D2GAME_NODESEX_ALLOC_16PLAYERS_NODES	0xF07E0 // k
#define D2GAME_NODESEX_FREE_16PLAYERS_NODES	0xF0650 // k 
#define D2GAME_NODESEX_FREE_CHILD_OF_16PLAYERS_NODES	0xF0570 // k
#define D2GAME_NODESEX_GET_UNIT_NODE	0xF0530 // k
#define D2GAME_NODESEX_SET_UNIT_NODE_AS_PARENT_MONSTERS	0xF06C0 // k
#define D2GAME_NODESEX_SET_UNIT_NODE_AS_PARENT_PLAYERS	0xF0750 // k
#define D2GAME_NODESEX_FREE_ALL_NODES	0xF08A0 // k
#define D2GAME_NODESEX_CHANGE_NODE_OFFSET_I	0xB1F7B // k
#define D2GAME_NODESEX_CHANGE_NODE_OFFSET_II	0xB1F81 // k
#define D2GAME_NODESEX_CHANGE_NODE_OFFSET_III	0x49515 // k
#define D2GAME_GAMEENTER_CHECK_NUMBER_OF_PLAYERS	0xD5295 // k
#define D2GAME_GAMEENTER_CHECK_NUMBER_OF_PLAYERS_II	0xE5D53 // k
#define D2GAME_NODESEX_FIX_TREASURE_CLASS_DROP	0xE417B // k 
#define D2GAME_NODESEX_FIX_TREASURE_CLASS_DROP_II	0xE4181 // k
#define D2GAME_NODESEX_CREATE_UNITANY_CHANGE_NEUTRAL_NODE	0x6FF35 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_I_F1	0x3ADF4 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_II_F2	0x3B599 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_III_F3	0x26A7F // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPLAYER_IV_F4	0x26FD9 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATECORPSE_I	0x9375C // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_I	0x8DF43 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_II	0x8E103 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_III_F2	0x8E363 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_IV_F3	0x8E79B // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_V_F3	0x8EA0B // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_VI_F4_HUGE_ONE	0x8EDB4 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_VII_F4_HUGE_ONE	0x8F053 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_VIII_F5_SMALL_ONE	0x8F28C // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_IX_F6	0x8F68F // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_X_MOVED_ONE_F6	0x8FA1F // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XI_F7	0x8FDBB // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XII_F8	0x9009B // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XIII_F9	0x90388 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XIV_F10	0x90532 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XV_F11	0x90846 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XVI_F12	0x909D8 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XVII_F13	0x913DA //k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEPORTAL_I	0x6C8EB // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XVIII_F14	0x23867 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XIX_F15	0x23D53 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XX_F16	0x23B22 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXI_F17	0xEBA7F // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXII_F17	0xEBBEF // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXIII_F18	0x81AC8 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXIV_F19	0x8271F // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXV_F20	0x65C12 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXVI_F20	0x65D5D // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_XXVII_F21	0x65A18 // k
#define D2GAME_NODESEX_CHANGE_PLAYERS_NODES_FROM_8	0x59118 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE	0x5913C // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEMONSTER_I_F1	0x74846 // k
#define D2GAME_NODESEX_REMOVEMONSTERCORPSE_CHANGE_ITERATION_TO_16	0x5A0D5 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_MONSTERS_SKILL_NECRO	0xD6B6B // k
#define D2GAME_NODESEX_CHANGE_MONSTER_NODE_TO_17_SAME_FUNC_AS_ABOVE	0xD6BC6 // k <- confuse
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES17_SAME_FUNC_AS_ABOVE_I	0xD6B7E // k
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES17_SAME_FUNC_AS_ABOVE_II	0xD6BB4 // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_MONSTERS	0x31041 // k its NPCBARB ai function
#define D2GAME_NODESEX_CHANGE_ITERATION_TO_16_SAME_FUNC_AS_ABOVE	0x310AC // k
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES16_SAME_FUNC_AS_ABOVE_I	0x31064 // k
#define D2GAME_NODESEX_CHANGE_OFFSET_TO_NEWNODES16_SAME_FUNC_AS_ABOVE_II	0x3109A // k
#define D2GAME_NODESEX_CHANGE_ITERATION_TO_16	0xB213A // k
#define D2GAME_NODESEX_CHANGE_MONSTER_NODE_TO_16	0x59816 // k
#define D2GAME_NODESEX_CHANGE_MONSTER_NODE_TO_17	0x5982D // k
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_CREATEOBJECT_IB	0 // unused in 1.13d
// Missing ones
#define D2GAME_NODESEX_CHANGE_WUSSIE_AI_NODE_TO_16	0x30DF2
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_PLAYER_EVENT_CONTROLLER	0x30DEB // k it for Wussie too
#define D2GAME_NODESEX_CHANGE_BONEWALL_NODE_TO_17 0x491F9
#define D2GAME_NODESEX_CHANGE_ROGUE_SCOUT_SPAWN_NODE_TO_16 0xD45F2
#define D2GAME_NODESEX_CHANGE_ATTRACT_NODE_TO_17 0xD6D0E
#define D2GAME_NODESEX_CHANGE_BONEPRISON_NODE_TO_17 0xD8CC3
#define D2GAME_NODESEX_CHANGE_BONEWALL_NODE_TO_17_SKILL 0xD8EC8

// One more missing...
#define D2GAME_NODESEX_CHANGE_NEUTRAL_NODE_ITEM_CREATE_SUB	0xE3267

#endif