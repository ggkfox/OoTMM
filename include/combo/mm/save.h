#ifndef MM_SAVE_H
#define MM_SAVE_H

#include <combo/types.h>

typedef struct
{
    char    newf[6];
    u16     deaths;
    u8      playerName[8];
    s16     healthCapacity;
    s16     health;
    s8      magicLevel;
    s8      magic;
    s16     rupees;
    u16     swordHealth;
    u16     tatlTimer;
    u8      magicAcquired;
    u8      doubleMagic;
    u8      doubleDefense;
    u8      unk_1F;
    u16     unk_20;
    u16     owlActivationFlags;
    u16     unk_24;
    s16     savedSceneNum;
}
MmSavePlayerData;

typedef struct
{
    u8      buttonItems[4][4];
    u8      cButtonSlots[4][4];
    u16     unused:10;
    u16     shield:2;
    u16     sword:4;
}
MmItemEquips;

typedef struct
{
    u32     unused:16;
    u32     unused2:2;
    u32     wallet:2;
    u32     unused3:6;
    u32     bombBag:3;
    u32     quiver:3;
}
MmUpgrades;

typedef struct
{
    u8 unused:5;
    u8 map:1;
    u8 compass:1;
    u8 bossKey:1;
}
MmDungeonItems;

typedef struct
{
    u32 heartPieces:4;
    u32 unused:3;
    u32 songLullabyIntro:1;
    u32 unused2:5;
    u32 notebook:1;
    u32 songGlitch1:1;
    u32 songStorms:1;
    u32 songSoaring:1;
    u32 songEpona:1;
    u32 songHealing:1;
    u32 songTime:1;
    u32 songGlitch2:1;
    u32 songOrder:1;
    u32 songEmpty:1;
    u32 songNewWave:1;
    u32 songLullaby:1;
    u32 songAwakening:1;
    u32 unused3:2;
    u32 remainsTwinmold:1;
    u32 remainsGyorg:1;
    u32 remainsGoht:1;
    u32 remainsOdolwa:1;
}
MmQuestItems;

typedef struct
{
    u8              items[48];
    s8              ammo[24];
    MmUpgrades      upgrades;
    MmQuestItems    questItems;
    MmDungeonItems  dungeonItems[10];
    s8              dungeonKeys[9];
    s8              defenseHearts;
    s8              strayFairies[10];
    char            dekuPlaygroundPlayerName[3][8];
}
MmInventory;

typedef struct
{
    u32 chest;
    u32 switch0;
    u32 switch1;
    u32 clearedRoom;
    u32 collectible;
    u32 clearedFloors;
    u32 rooms;
}
MmPermanentSceneFlags;

typedef struct
{
    s16         scene;
    Vector3s    pos;
    s16         yaw;
}
MmHorseData;

typedef struct
{
    s32                     entranceIndex;
    u8                      equippedMask;
    u8                      isFirstCycle;
    char                    unk_006;
    u8                      linkAge;
    s32                     cutscene;
    u16                     time;
    u16                     owlLocation;
    s32                     isNight;
    s32                     daySpeed;
    s32                     day;
    u32                     daysElapsed;
    u8                      playerForm;
    u8                      snowheadCleared;
    u8                      hasTatl;
    u8                      isOwlSave;
    MmSavePlayerData        playerData;
    MmItemEquips            itemEquips;
    MmInventory             inventory;
    MmPermanentSceneFlags   permanentSceneFlags[120];
    u8                      unk_E18[0x54];
    u32                     dekuPlaygroundHighScores[3];
    u32                     pictoFlags0;
    u32                     pictoFlags1;
    u32                     unk_E80;
    u32                     unk_E84;
    u32                     unk_E88[7];
    u32                     scenesVisible[7];
    u32                     skullTokenCount;
    u32                     unk_EC4;
    u32                     unk_EC8;
    u32                     unk_ECC[2];
    u32                     stolenItems;
    u32                     unk_DD8;
    u32                     bankRupees;
    u32                     unk_ee0;
    u32                     unk_ee4;
    u32                     unk_ee8;
    u32                     horseBackBalloonHighScore;
    u32                     lotteryCodeGuess;
    u32                     shootingGalleryHighScore;
    u8                      weekEventReg[100];
    u32                     mapsVisited;
    u32                     mapsVisible;
    u8                      unk_F64;
    u8                      unk_F65;
    u8                      scarecrowSpawnSong[128];
    s8                      bombersCaughtNum;
    s8                      bombersCaughtOrder[5];
    s8                      lotteryCodes[3][3];
    s8                      spiderHouseMaskOrder[6];
    s8                      bomberCode[5];
    MmHorseData             horseData;
    u16                     checksum;
    u8                      eventInf[8];
    u8                      unk_1014;
    u8                      unk_1015;
    u16                     jinxTimer;
    s16                     rupeesDelta;
    char                    unk[0x2c86];
}
MmSave;

typedef struct
{
    MmSave  save;
    u32     fileIndex;
    char    unk_3ca4[0x28c];
    u16     magicTarget;
    char    unk_3f32[0x978];
    u16     dungeonId;
    u8      maskMaskBit[27];
}
MmSaveContext;

_Static_assert(sizeof(MmSave) == 0x3ca0, "MmSave size is wrong");
_Static_assert(sizeof(MmSaveContext) == 0x48c8, "MmSaveContext size is wrong");

#if defined(GAME_MM)
ALIGNED(16) extern MmSaveContext gSaveContext;
# define gMmSave    (gSaveContext.save)
# define gSave      gMmSave
#else
ALIGNED(16) extern MmSave gMmSave;
#endif

#define gMmSaveBoss (gMmSave.permanentSceneFlags[1].clearedRoom)

#endif /* MM_SAVE_H */
