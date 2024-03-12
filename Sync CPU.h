/*
 * MiB64 - A Nintendo 64 emulator.
 *
 * Project64 (c) Copyright 2001 Zilmar, Jabo, Smiff, Gent, Witten
 * Projectg64 Legacy (c) Copyright 2010 PJ64LegacyTeam
 * MiB64 (c) Copyright 2024 MiB64Team
 *
 * MiB64 Homepage: www.mib64.net
 *
 * Permission to use, copy, modify and distribute MiB64 in both binary and
 * source form, for non-commercial purposes, is hereby granted without fee,
 * providing that this license information and copyright notice appear with
 * all copies and any derived work.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event shall the authors be held liable for any damages
 * arising from the use of this software.
 *
 * MiB64 is freeware for PERSONAL USE only. Commercial users should
 * seek permission of the copyright holders first. Commercial use includes
 * charging money for MiB64 or software derived from MiB64.
 *
 * The copyright holders request that bug fixes and improvements to the code
 * should be forwarded to them so if they want them.
 *
 */
void __cdecl StartSyncCPU   ( void );
void SwitchSyncRegisters (void);
void SyncToPC       ( void );
void FreeSyncMemory ( void );


extern int SyncNextInstruction, SyncJumpToLocation, MemAddrUsedCount[2];
extern DWORD CurrentBlock, *TLB_SyncReadMap, *TLB_SyncWriteMap;
extern N64_REGISTERS SyncRegisters;
extern BYTE * SyncMemory;
extern FASTTLB SyncFastTlb[64];
extern TLB SyncTlb[32];
