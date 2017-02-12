#pragma once

#include <cstdint>
#include "GBA.h"

extern reg_pair reg[45];
extern bool ioReadable[0x400];
extern bool N_FLAG;
extern bool C_FLAG;
extern bool Z_FLAG;
extern bool V_FLAG;
extern bool armState;
extern bool armIrqEnable;
extern uint32_t armNextPC;
extern int armMode;
extern bool cpuIsMultiBoot;
extern int layerSettings;
extern int layerEnable;

extern uint8_t bios[0x4000];
extern uint8_t rom[0x2000000];
extern uint8_t internalRAM[0x8000];
extern uint8_t workRAM[0x40000];
extern uint8_t paletteRAM[0x400];
extern uint8_t vram[0x20000];
extern uint8_t oam[0x400];
extern uint8_t ioMem[0x400];

extern uint16_t DISPCNT;
extern uint16_t DISPSTAT;
extern uint16_t VCOUNT;
extern uint16_t BG0CNT;
extern uint16_t BG1CNT;
extern uint16_t BG2CNT;
extern uint16_t BG3CNT;
extern uint16_t BG0HOFS;
extern uint16_t BG0VOFS;
extern uint16_t BG1HOFS;
extern uint16_t BG1VOFS;
extern uint16_t BG2HOFS;
extern uint16_t BG2VOFS;
extern uint16_t BG3HOFS;
extern uint16_t BG3VOFS;
extern uint16_t BG2PA;
extern uint16_t BG2PB;
extern uint16_t BG2PC;
extern uint16_t BG2PD;
extern uint16_t BG2X_L;
extern uint16_t BG2X_H;
extern uint16_t BG2Y_L;
extern uint16_t BG2Y_H;
extern uint16_t BG3PA;
extern uint16_t BG3PB;
extern uint16_t BG3PC;
extern uint16_t BG3PD;
extern uint16_t BG3X_L;
extern uint16_t BG3X_H;
extern uint16_t BG3Y_L;
extern uint16_t BG3Y_H;
extern uint16_t WIN0H;
extern uint16_t WIN1H;
extern uint16_t WIN0V;
extern uint16_t WIN1V;
extern uint16_t WININ;
extern uint16_t WINOUT;
extern uint16_t MOSAIC;
extern uint16_t BLDMOD;
extern uint16_t COLEV;
extern uint16_t COLY;
extern uint16_t DM0SAD_L;
extern uint16_t DM0SAD_H;
extern uint16_t DM0DAD_L;
extern uint16_t DM0DAD_H;
extern uint16_t DM0CNT_L;
extern uint16_t DM0CNT_H;
extern uint16_t DM1SAD_L;
extern uint16_t DM1SAD_H;
extern uint16_t DM1DAD_L;
extern uint16_t DM1DAD_H;
extern uint16_t DM1CNT_L;
extern uint16_t DM1CNT_H;
extern uint16_t DM2SAD_L;
extern uint16_t DM2SAD_H;
extern uint16_t DM2DAD_L;
extern uint16_t DM2DAD_H;
extern uint16_t DM2CNT_L;
extern uint16_t DM2CNT_H;
extern uint16_t DM3SAD_L;
extern uint16_t DM3SAD_H;
extern uint16_t DM3DAD_L;
extern uint16_t DM3DAD_H;
extern uint16_t DM3CNT_L;
extern uint16_t DM3CNT_H;
extern uint16_t TM0D;
extern uint16_t TM0CNT;
extern uint16_t TM1D;
extern uint16_t TM1CNT;
extern uint16_t TM2D;
extern uint16_t TM2CNT;
extern uint16_t TM3D;
extern uint16_t TM3CNT;
extern uint16_t P1;
extern uint16_t IE;
extern uint16_t IF;
extern uint16_t IME;