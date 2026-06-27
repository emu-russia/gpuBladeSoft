/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F91FD42
 * Address: 0x6F91FD42
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F91FD42
// Address: 0x6F91FD42 - 0x6F91FE15
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F91FD42: 8B 44 24 34              mov     )!eax!)	,	 *	[	!esp!	+	arg_30	]	*
// 0x6F91FD46: 8B 54 24 38              mov     )!edx!)	,	 *	[	!esp!	+	arg_34	]	*
// 0x6F91FD4A: 89 44 24 1C              mov     )	[	!esp!	+	arg_18	]	)	,	 *!eax!*
// 0x6F91FD4E: 8B 44 24 30              mov     )!eax!)	,	 *	[	!esp!	+	arg_2C	]	*
// 0x6F91FD52: 85 C0                    test    )!eax!)	,	 *!eax!*
// 0x6F91FD54: 75 35                    jnz      short  )(6F91FD8Bloc_6F91FD8B)
// 0x6F91FD56: 8B 44 24 1C              mov     )!eax!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F91FD5A: 83 EA 01                 sub     )!edx!)	,	 *1*
// 0x6F91FD5D: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F91FD60: 75 47                    jnz      short  )(6F91FDA9loc_6F91FDA9)
// 0x6F91FD62: E8 99 20 04 00           call    )(6F961E00sub_6F961E00)
// 0x6F91FD67: 8B 54 24 18              mov     )!edx!)	,	 *	[	!esp!	+	arg_14	]	*
// 0x6F91FD6B: 8B 02                    mov     )!eax!)	,	 *	[	!edx!	]	*
// 0x6F91FD6D: 03 50 F4                 add     )!edx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F91FD70: 83 4A 14 01              or      ) dword ptr  	[	!edx!	+	14h	]	)	,	 *1*
// 0x6F91FD74: F6 42 10 01              test    ) byte ptr  	[	!edx!	+	10h	]	)	,	 *1*
// 0x6F91FD78: C7 44 24 30 02 00 00 00  mov     )	[	!esp!	+	arg_2C	]	)	,	 *2*
// 0x6F91FD80: 0F 84 8A 00 00 00        jz      )(6F91FE10loc_6F91FE10)
// 0x6F91FD86: E8 B5 2A 04 00           call    )(6F962840sub_6F962840)
// 0x6F91FD8B: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F91FD8E: 75 58                    jnz      short  )(6F91FDE8loc_6F91FDE8)
// 0x6F91FD90: E8 3B 23 04 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F91FD95: 8B 44 24 1C              mov     )!eax!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F91FD99: C7 44 24 30 FF FF FF FF  mov     )	[	!esp!	+	arg_2C	]	)	,	 *0FFFFFFFFh*
// 0x6F91FDA1: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F91FDA4: E8 C7 1F F8 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F91FDA9: E8 52 20 04 00           call    )(6F961E00sub_6F961E00)
// 0x6F91FDAE: 8B 74 24 18              mov     )!esi!)	,	 *	[	!esp!	+	arg_14	]	*
// 0x6F91FDB2: 8B 06                    mov     )!eax!)	,	 *	[	!esi!	]	*
// 0x6F91FDB4: 03 70 F4                 add     )!esi!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F91FDB7: 83 4E 14 01              or      ) dword ptr  	[	!esi!	+	14h	]	)	,	 *1*
// 0x6F91FDBB: F6 46 10 01              test    ) byte ptr  	[	!esi!	+	10h	]	)	,	 *1*
// 0x6F91FDBF: 74 0D                    jz       short  )(6F91FDCEloc_6F91FDCE)
// 0x6F91FDC1: C7 44 24 30 03 00 00 00  mov     )	[	!esp!	+	arg_2C	]	)	,	 *3*
// 0x6F91FDC9: E8 72 2A 04 00           call    )(6F962840sub_6F962840)
// 0x6F91FDCE: C7 44 24 30 FF FF FF FF  mov     )	[	!esp!	+	arg_2C	]	)	,	 *0FFFFFFFFh*
// 0x6F91FDD6: E8 F5 22 04 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F91FDDB: 8D 44 24 2C              lea     )!eax!)	,	 *	[	!esp!	+	arg_28	]	*
// 0x6F91FDDF: 89 44 24 24              mov     )	[	!esp!	+	arg_20	]	)	,	 *!eax!*
// 0x6F91FDE3: E9 5F FE FF FF           jmp     )(6F91FC47loc_6F91FC47)
// 0x6F91FDE8: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F91FDEB: 75 21                    jnz      short  )(6F91FE0Eloc_6F91FE0E)
// 0x6F91FDED: C7 44 24 30 00 00 00 00  mov     )	[	!esp!	+	arg_2C	]	)	,	 *0*
// 0x6F91FDF5: E8 D6 22 04 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F91FDFA: 8B 44 24 1C              mov     )!eax!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F91FDFE: C7 44 24 30 FF FF FF FF  mov     )	[	!esp!	+	arg_2C	]	)	,	 *0FFFFFFFFh*
// 0x6F91FE06: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F91FE09: E8 62 1F F8 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F91FE0E: 0F 0B                    ud2
// 0x6F91FE10: E8 2B 2A 04 00           call    )(6F962840sub_6F962840)

// ======================================================================
// End of disassembly for sub_6F91FD42
