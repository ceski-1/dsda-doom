//
// Copyright(C) 2023 by Ryan Krafnick
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//  DSDA Name
//

#include "string.h"

#include "dsda/mobjinfo.h"

#include "name.h"

static const char* const actor_names[] = {
  "DoomPlayer",
  "ZombieMan",
  "ShotgunGuy",
  "Archvile",
  "ArchvileFire",
  "Revenant",
  "RevenantTracer",
  "RevenantTracerSmoke",
  "Fatso",
  "FatShot",
  "ChaingunGuy",
  "DoomImp",
  "Demon",
  "Spectre",
  "Cacodemon",
  "BaronOfHell",
  "BaronBall",
  "HellKnight",
  "LostSoul",
  "SpiderMastermind",
  "Arachnotron",
  "Cyberdemon",
  "PainElemental",
  "WolfensteinSS",
  "CommanderKeen",
  "BossBrain",
  "BossEye",
  "BossTarget",
  "SpawnShot",
  "SpawnFire",
  "ExplosiveBarrel",
  "DoomImpBall",
  "CacodemonBall",
  "Rocket",
  "PlasmaBall",
  "BFGBall",
  "ArachnotronPlasma",
  "BulletPuff",
  "Blood",
  "TeleportFog",
  "ItemFog",
  "TeleportDest",
  "BFGExtra",
  "GreenArmor",
  "BlueArmor",
  "HealthBonus",
  "ArmorBonus",
  "BlueCard",
  "RedCard",
  "YellowCard",
  "YellowSkull",
  "RedSkull",
  "BlueSkull",
  "Stimpack",
  "Medikit",
  "Soulsphere",
  "InvulnerabilitySphere",
  "Berserk",
  "BlurSphere",
  "RadSuit",
  "Allmap",
  "Infrared",
  "Megasphere",
  "Clip",
  "ClipBox",
  "RocketAmmo",
  "RocketBox",
  "Cell",
  "CellPack",
  "Shell",
  "ShellBox",
  "Backpack",
  "BFG9000",
  "Chaingun",
  "Chainsaw",
  "RocketLauncher",
  "PlasmaRifle",
  "Shotgun",
  "SuperShotgun",
  "TechLamp",
  "TechLamp2",
  "Column",
  "TallGreenColumn",
  "ShortGreenColumn",
  "TallRedColumn",
  "ShortRedColumn",
  "SkullColumn",
  "HeartColumn",
  "EvilEye",
  "FloatingSkull",
  "TorchTree",
  "BlueTorch",
  "GreenTorch",
  "RedTorch",
  "ShortBlueTorch",
  "ShortGreenTorch",
  "ShortRedTorch",
  "Stalagtite",
  "TechPillar",
  "CandleStick",
  "Candelabra",
  "BloodyTwitch",
  "Meat2",
  "Meat3",
  "Meat4",
  "Meat5",
  "NonsolidMeat2",
  "NonsolidMeat4",
  "NonsolidMeat3",
  "NonsolidMeat5",
  "NonsolidTwitch",
  "DeadCacodemon",
  "DeadMarine",
  "DeadZombieMan",
  "DeadDemon",
  "DeadLostSoul",
  "DeadDoomImp",
  "DeadShotgunGuy",
  "GibbedMarine",
  "GibbedMarineExtra",
  "HeadsOnAStick",
  "Gibs",
  "HeadOnAStick",
  "HeadCandles",
  "DeadStick",
  "LiveStick",
  "BigTree",
  "BurningBarrel",
  "HangNoGuts",
  "HangBNoBrain",
  "HangTLookingDown",
  "HangTSkull",
  "HangTLookingUp",
  "HangTNoBrain",
  "ColonGibs",
  "SmallBloodPool",
  "BrainStem",
  "PointPusher",
  "PointPuller",
  "MBFHelperDog",
  "PlasmaBall1",
  "PlasmaBall2",
  "EvilSceptre",
  "UnholyBible",
  "MusicChanger",
  "Deh_Actor_145",
  "Deh_Actor_146",
  "Deh_Actor_147",
  "Deh_Actor_148",
  "Deh_Actor_149",
  "Deh_Actor_150",
  "Deh_Actor_151",
  "Deh_Actor_152",
  "Deh_Actor_153",
  "Deh_Actor_154",
  "Deh_Actor_155",
  "Deh_Actor_156",
  "Deh_Actor_157",
  "Deh_Actor_158",
  "Deh_Actor_159",
  "Deh_Actor_160",
  "Deh_Actor_161",
  "Deh_Actor_162",
  "Deh_Actor_163",
  "Deh_Actor_164",
  "Deh_Actor_165",
  "Deh_Actor_166",
  "Deh_Actor_167",
  "Deh_Actor_168",
  "Deh_Actor_169",
  "Deh_Actor_170",
  "Deh_Actor_171",
  "Deh_Actor_172",
  "Deh_Actor_173",
  "Deh_Actor_174",
  "Deh_Actor_175",
  "Deh_Actor_176",
  "Deh_Actor_177",
  "Deh_Actor_178",
  "Deh_Actor_179",
  "Deh_Actor_180",
  "Deh_Actor_181",
  "Deh_Actor_182",
  "Deh_Actor_183",
  "Deh_Actor_184",
  "Deh_Actor_185",
  "Deh_Actor_186",
  "Deh_Actor_187",
  "Deh_Actor_188",
  "Deh_Actor_189",
  "Deh_Actor_190",
  "Deh_Actor_191",
  "Deh_Actor_192",
  "Deh_Actor_193",
  "Deh_Actor_194",
  "Deh_Actor_195",
  "Deh_Actor_196",
  "Deh_Actor_197",
  "Deh_Actor_198",
  "Deh_Actor_199",
  "Deh_Actor_200",
  "Deh_Actor_201",
  "Deh_Actor_202",
  "Deh_Actor_203",
  "Deh_Actor_204",
  "Deh_Actor_205",
  "Deh_Actor_206",
  "Deh_Actor_207",
  "Deh_Actor_208",
  "Deh_Actor_209",
  "Deh_Actor_210",
  "Deh_Actor_211",
  "Deh_Actor_212",
  "Deh_Actor_213",
  "Deh_Actor_214",
  "Deh_Actor_215",
  "Deh_Actor_216",
  "Deh_Actor_217",
  "Deh_Actor_218",
  "Deh_Actor_219",
  "Deh_Actor_220",
  "Deh_Actor_221",
  "Deh_Actor_222",
  "Deh_Actor_223",
  "Deh_Actor_224",
  "Deh_Actor_225",
  "Deh_Actor_226",
  "Deh_Actor_227",
  "Deh_Actor_228",
  "Deh_Actor_229",
  "Deh_Actor_230",
  "Deh_Actor_231",
  "Deh_Actor_232",
  "Deh_Actor_233",
  "Deh_Actor_234",
  "Deh_Actor_235",
  "Deh_Actor_236",
  "Deh_Actor_237",
  "Deh_Actor_238",
  "Deh_Actor_239",
  "Deh_Actor_240",
  "Deh_Actor_241",
  "Deh_Actor_242",
  "Deh_Actor_243",
  "Deh_Actor_244",
  "Deh_Actor_245",
  "Deh_Actor_246",
  "Deh_Actor_247",
  "Deh_Actor_248",
  "Deh_Actor_249",
  NULL
};

static const char* const action_names[] = {
  /*   0 */ "",
  /*   1 */ "Polyobj_StartLine",
  /*   2 */ "Polyobj_RotateLeft",
  /*   3 */ "Polyobj_RotateRight",
  /*   4 */ "Polyobj_Move",
  /*   5 */ "Polyobj_ExplicitLine",
  /*   6 */ "Polyobj_MoveTimes8",
  /*   7 */ "Polyobj_DoorSwing",
  /*   8 */ "Polyobj_DoorSlide",
  /*   9 */ "Line_Horizon",
  /*  10 */ "Door_Close",
  /*  11 */ "Door_Open",
  /*  12 */ "Door_Raise",
  /*  13 */ "Door_LockedRaise",
  /*  14 */ "Door_Animated",
  /*  15 */ "Autosave",
  /*  16 */ "Transfer_WallLight",
  /*  17 */ "Thing_Raise",
  /*  18 */ "StartConversation",
  /*  19 */ "Thing_Stop",
  /*  20 */ "Floor_LowerByValue",
  /*  21 */ "Floor_LowerToLowest",
  /*  22 */ "Floor_LowerToNearest",
  /*  23 */ "Floor_RaiseByValue",
  /*  24 */ "Floor_RaiseToHighest",
  /*  25 */ "Floor_RaiseToNearest",
  /*  26 */ "Stairs_BuildDown",
  /*  27 */ "Stairs_BuildUp",
  /*  28 */ "Floor_RaiseAndCrush",
  /*  29 */ "Pillar_Build",
  /*  30 */ "Pillar_Open",
  /*  31 */ "Stairs_BuildDownSync",
  /*  32 */ "Stairs_BuildUpSync",
  /*  33 */ "ForceField",
  /*  34 */ "ClearForceField",
  /*  35 */ "Floor_RaiseByValueTimes8",
  /*  36 */ "Floor_LowerByValueTimes8",
  /*  37 */ "Floor_MoveToValue",
  /*  38 */ "Ceiling_Waggle",
  /*  39 */ "Teleport_ZombieChanger",
  /*  40 */ "Ceiling_LowerByValue",
  /*  41 */ "Ceiling_RaiseByValue",
  /*  42 */ "Ceiling_CrushAndRaise",
  /*  43 */ "Ceiling_LowerAndCrush",
  /*  44 */ "Ceiling_CrushStop",
  /*  45 */ "Ceiling_CrushRaiseAndStay",
  /*  46 */ "Floor_CrushStop",
  /*  47 */ "Ceiling_MoveToValue",
  /*  48 */ "Sector_Attach3dMidtex",
  /*  49 */ "GlassBreak",
  /*  50 */ "ExtraFloor_LightOnly",
  /*  51 */ "Sector_SetLink",
  /*  52 */ "Scroll_Wall",
  /*  53 */ "Line_SetTextureOffset",
  /*  54 */ "Sector_ChangeFlags",
  /*  55 */ "Line_SetBlocking",
  /*  56 */ "Line_SetTextureScale",
  /*  57 */ "Sector_SetPortal",
  /*  58 */ "Sector_CopyScroller",
  /*  59 */ "Polyobj_OR_MoveToSpot",
  /*  60 */ "Plat_PerpetualRaise",
  /*  61 */ "Plat_Stop",
  /*  62 */ "Plat_DownWaitUpStay",
  /*  63 */ "Plat_DownByValue",
  /*  64 */ "Plat_UpWaitDownStay",
  /*  65 */ "Plat_UpByValue",
  /*  66 */ "Floor_LowerInstant",
  /*  67 */ "Floor_RaiseInstant",
  /*  68 */ "Floor_MoveToValueTimes8",
  /*  69 */ "Ceiling_MoveToValueTimes8",
  /*  70 */ "Teleport",
  /*  71 */ "Teleport_NoFog",
  /*  72 */ "ThrustThing",
  /*  73 */ "DamageThing",
  /*  74 */ "Teleport_NewMap",
  /*  75 */ "Teleport_EndGame",
  /*  76 */ "TeleportOther",
  /*  77 */ "TeleportGroup",
  /*  78 */ "TeleportInSector",
  /*  79 */ "Thing_SetConversation",
  /*  80 */ "ACS_Execute",
  /*  81 */ "ACS_Suspend",
  /*  82 */ "ACS_Terminate",
  /*  83 */ "ACS_LockedExecute",
  /*  84 */ "ACS_ExecuteWithResult",
  /*  85 */ "ACS_LockedExecuteDoor",
  /*  86 */ "Polyobj_MoveToSpot",
  /*  87 */ "Polyobj_Stop",
  /*  88 */ "Polyobj_MoveTo",
  /*  89 */ "Polyobj_OR_MoveTo",
  /*  90 */ "Polyobj_OR_RotateLeft",
  /*  91 */ "Polyobj_OR_RotateRight",
  /*  92 */ "Polyobj_OR_Move",
  /*  93 */ "Polyobj_OR_MoveTimes8",
  /*  94 */ "Pillar_BuildAndCrush",
  /*  95 */ "FloorAndCeiling_LowerByValue",
  /*  96 */ "FloorAndCeiling_RaiseByValue",
  /*  97 */ "Ceiling_LowerAndCrushDist",
  /*  98 */ "Sector_SetTranslucent",
  /*  99 */ "Floor_RaiseAndCrushDoom",
  /* 100 */ "Scroll_Texture_Left",
  /* 101 */ "Scroll_Texture_Right",
  /* 102 */ "Scroll_Texture_Up",
  /* 103 */ "Scroll_Texture_Down",
  /* 104 */ "Ceiling_CrushAndRaiseSilentDist",
  /* 105 */ "Door_WaitRaise",
  /* 106 */ "Door_WaitClose",
  /* 107 */ "Line_SetPortalTarget",
  /* 108 */ "",
  /* 109 */ "Light_ForceLightning",
  /* 110 */ "Light_RaiseByValue",
  /* 111 */ "Light_LowerByValue",
  /* 112 */ "Light_ChangeToValue",
  /* 113 */ "Light_Fade",
  /* 114 */ "Light_Glow",
  /* 115 */ "Light_Flicker",
  /* 116 */ "Light_Strobe",
  /* 117 */ "Light_Stop",
  /* 118 */ "Plane_Copy",
  /* 119 */ "Thing_Damage",
  /* 120 */ "Radius_Quake",
  /* 121 */ "Line_SetIdentification",
  /* 122 */ "",
  /* 123 */ "",
  /* 124 */ "",
  /* 125 */ "Thing_Move",
  /* 126 */ "",
  /* 127 */ "Thing_SetSpecial",
  /* 128 */ "ThrustThingZ",
  /* 129 */ "UsePuzzleItem",
  /* 130 */ "Thing_Activate",
  /* 131 */ "Thing_Deactivate",
  /* 132 */ "Thing_Remove",
  /* 133 */ "Thing_Destroy",
  /* 134 */ "Thing_Projectile",
  /* 135 */ "Thing_Spawn",
  /* 136 */ "Thing_ProjectileGravity",
  /* 137 */ "Thing_SpawnNoFog",
  /* 138 */ "Floor_Waggle",
  /* 139 */ "Thing_SpawnFacing",
  /* 140 */ "Sector_ChangeSound",
  /* 141 */ "",
  /* 142 */ "",
  /* 143 */ "",
  /* 144 */ "",
  /* 145 */ "",
  /* 146 */ "",
  /* 147 */ "",
  /* 148 */ "",
  /* 149 */ "",
  /* 150 */ "",
  /* 151 */ "",
  /* 152 */ "",
  /* 153 */ "",
  /* 154 */ "Teleport_NoStop",
  /* 155 */ "",
  /* 156 */ "Line_SetPortal",
  /* 157 */ "SetGlobalFogParameter",
  /* 158 */ "FS_Execute",
  /* 159 */ "Sector_SetPlaneReflection",
  /* 160 */ "Sector_Set3DFloor",
  /* 161 */ "Sector_SetContents",
  /* 162 */ "",
  /* 163 */ "",
  /* 164 */ "",
  /* 165 */ "",
  /* 166 */ "",
  /* 167 */ "",
  /* 168 */ "Ceiling_CrushAndRaiseDist",
  /* 169 */ "Generic_Crusher2",
  /* 170 */ "Sector_SetCeilingScale2",
  /* 171 */ "Sector_SetFloorScale2",
  /* 172 */ "Plat_UpNearestWaitDownStay",
  /* 173 */ "NoiseAlert",
  /* 174 */ "SendToCommunicator",
  /* 175 */ "Thing_ProjectileIntercept",
  /* 176 */ "Thing_ChangeTID",
  /* 177 */ "Thing_Hate",
  /* 178 */ "Thing_ProjectileAimed",
  /* 179 */ "ChangeSkill",
  /* 180 */ "Thing_SetTranslation",
  /* 181 */ "Plane_Align",
  /* 182 */ "Line_Mirror",
  /* 183 */ "Line_AlignCeiling",
  /* 184 */ "Line_AlignFloor",
  /* 185 */ "Sector_SetRotation",
  /* 186 */ "Sector_SetCeilingPanning",
  /* 187 */ "Sector_SetFloorPanning",
  /* 188 */ "Sector_SetCeilingScale",
  /* 189 */ "Sector_SetFloorScale",
  /* 190 */ "Static_Init",
  /* 191 */ "SetPlayerProperty",
  /* 192 */ "Ceiling_LowerToHighestFloor",
  /* 193 */ "Ceiling_LowerInstant",
  /* 194 */ "Ceiling_RaiseInstant",
  /* 195 */ "Ceiling_CrushRaiseAndStayA",
  /* 196 */ "Ceiling_CrushAndRaiseA",
  /* 197 */ "Ceiling_CrushAndRaiseSilentA",
  /* 198 */ "Ceiling_RaiseByValueTimes8",
  /* 199 */ "Ceiling_LowerByValueTimes8",
  /* 200 */ "Generic_Floor",
  /* 201 */ "Generic_Ceiling",
  /* 202 */ "Generic_Door",
  /* 203 */ "Generic_Lift",
  /* 204 */ "Generic_Stairs",
  /* 205 */ "Generic_Crusher",
  /* 206 */ "Plat_DownWaitUpStayLip",
  /* 207 */ "Plat_PerpetualRaiseLip",
  /* 208 */ "TranslucentLine",
  /* 209 */ "Transfer_Heights",
  /* 210 */ "Transfer_FloorLight",
  /* 211 */ "Transfer_CeilingLight",
  /* 212 */ "Sector_SetColor",
  /* 213 */ "Sector_SetFade",
  /* 214 */ "Sector_SetDamage",
  /* 215 */ "Teleport_Line",
  /* 216 */ "Sector_SetGravity",
  /* 217 */ "Stairs_BuildUpDoom",
  /* 218 */ "Sector_SetWind",
  /* 219 */ "Sector_SetFriction",
  /* 220 */ "Sector_SetCurrent",
  /* 221 */ "Scroll_Texture_Both",
  /* 222 */ "Scroll_Texture_Model",
  /* 223 */ "Scroll_Floor",
  /* 224 */ "Scroll_Ceiling",
  /* 225 */ "Scroll_Texture_Offsets",
  /* 226 */ "ACS_ExecuteAlways",
  /* 227 */ "PointPush_SetForce",
  /* 228 */ "Plat_RaiseAndStayTx0",
  /* 229 */ "Thing_SetGoal",
  /* 230 */ "Plat_UpByValueStayTx",
  /* 231 */ "Plat_ToggleCeiling",
  /* 232 */ "Light_StrobeDoom",
  /* 233 */ "Light_MinNeighbor",
  /* 234 */ "Light_MaxNeighbor",
  /* 235 */ "Floor_TransferTrigger",
  /* 236 */ "Floor_TransferNumeric",
  /* 237 */ "ChangeCamera",
  /* 238 */ "Floor_RaiseToLowestCeiling",
  /* 239 */ "Floor_RaiseByValueTxTy",
  /* 240 */ "Floor_RaiseByTexture",
  /* 241 */ "Floor_LowerToLowestTxTy",
  /* 242 */ "Floor_LowerToHighest",
  /* 243 */ "Exit_Normal",
  /* 244 */ "Exit_Secret",
  /* 245 */ "Elevator_RaiseToNearest",
  /* 246 */ "Elevator_MoveToFloor",
  /* 247 */ "Elevator_LowerToNearest",
  /* 248 */ "HealThing",
  /* 249 */ "Door_CloseWaitOpen",
  /* 250 */ "Floor_Donut",
  /* 251 */ "FloorAndCeiling_LowerRaise",
  /* 252 */ "Ceiling_RaiseToNearest",
  /* 253 */ "Ceiling_LowerToLowest",
  /* 254 */ "Ceiling_LowerToFloor",
  /* 255 */ "Ceiling_CrushRaiseAndStaySilA",

  /* 256 */ "Floor_LowerToHighestEE",
  /* 257 */ "Floor_RaiseToLowest",
  /* 258 */ "Floor_LowerToLowestCeiling",
  /* 259 */ "Floor_RaiseToCeiling",
  /* 260 */ "Floor_ToCeilingInstant",
  /* 261 */ "Floor_LowerByTexture",
  /* 262 */ "Ceiling_RaiseToHighest",
  /* 263 */ "Ceiling_ToHighestInstant",
  /* 264 */ "Ceiling_LowerToNearest",
  /* 265 */ "Ceiling_RaiseToLowest",
  /* 266 */ "Ceiling_RaiseToHighestFloor",
  /* 267 */ "Ceiling_ToFloorInstant",
  /* 268 */ "Ceiling_RaiseByTexture",
  /* 269 */ "Ceiling_LowerByTexture",
  /* 270 */ "Stairs_BuildDownDoom",
  /* 271 */ "Stairs_BuildUpDoomSync",
  /* 272 */ "Stairs_BuildDownDoomSync",
  /* 273 */ "Stairs_BuildUpDoomCrush",
  /* 274 */ "Door_AnimatedClose",
  /* 275 */ "Floor_Stop",
  /* 276 */ "Ceiling_Stop",
  /* 277 */ "Sector_SetFloorGlow",
  /* 278 */ "Sector_SetCeilingGlow",
  /* 279 */ "Floor_MoveToValueAndCrush",
  /* 280 */ "Ceiling_MoveToValueAndCrush",
  /* 281 */ "Line_SetAutomapFlags",
  /* 282 */ "Line_SetAutomapStyle",
  /* 283 */ "Polyobj_StopSound",

  NULL
};

int dsda_ActorNameToType(const char* name) {
  int i;

  for (i = 0; actor_names[i]; ++i)
    if (!stricmp(name, actor_names[i]))
      return dsda_GetDehMobjIndex(i);

  return NAME_NOT_FOUND;
}

int dsda_ActionNameToNumber(const char* name) {
  int i;

  for (i = 0; action_names[i]; ++i)
    if (action_names[i][0] && !stricmp(name, action_names[i]))
      return i;

  if (!stricmp(name, "Map_SetColormap"))
    return 2701;

  if (!stricmp(name, "Sector_SetColormap"))
    return 2702;

  if (!stricmp(name, "Music_ChangeSong"))
    return 2703;

  if (!stricmp(name, "Music_Stop"))
    return 2704;

  return NAME_NOT_FOUND;
}
