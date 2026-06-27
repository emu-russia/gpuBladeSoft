/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F8C4DDB
 * Address: 0x6F8C4DDB
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F8C4DDB
// Address: 0x6F8C4DDB - 0x6F8C4EE7
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F8C4DDB: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F8C4DDE: 8B 45 CC                 mov     )!eax!)	,	 *	[	!ebp!	-	34h	]	*
// 0x6F8C4DE1: 83 7D C8 0F              cmp     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0Fh*; switch 16 cases 
//                                                                      ; switch 16 cases 
// 0x6F8C4DE5: 89 45 C0                 mov     )	[	!ebp!	-	40h	]	)	,	 *!eax!*
// 0x6F8C4DE8: 77 0A                    ja       short  )(6F8C4DF4loc_6F8C4DF4); jumptable 6F8C4DED default case
// 0x6F8C4DEA: 8B 45 C8                 mov     )!eax!)	,	 *	[	!ebp!	-	38h	]	*
// 0x6F8C4DED: FF 24 85 40 41 BA 6F     jmp     )!ds!	:	(6FBA4140off_6FBA4140	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F8C4DF4: 0F 0B                    ud2                     ; jumptable 6F8C4DED default case
//                                                                      ; (repeatable) jumptable 6F8C4DED default case
// 0x6F8C4DF6: 8B 4D A0                 mov     )!ecx!)	,	 *	[	!ebp!	-	60h	]	*  ; jumptable 6F8C4DED case 15
//                                                                      ; (repeatable) jumptable 6F8C4DED case 15
// 0x6F8C4DF9: E8 72 32 07 00           call    )(6F938070nullsub_18)
// 0x6F8C4DFE: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED cases 0,1
//                                                                      ; (repeatable) jumptable 6F8C4DED cases 0,1
// 0x6F8C4E01: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8C4E04: E8 17 CD 09 00           call    )%(6F961B20j_free_1%)
// 0x6F8C4E09: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F8C4E0C: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8C4E0F: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F8C4E16: E8 55 CF FD FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F8C4E1B: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED case 2
//                                                                      ; (repeatable) jumptable 6F8C4DED case 2
// 0x6F8C4E1E: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C4E21: E8 7A 0B 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C4E26: 8B 4D B4                 mov     )!ecx!)	,	 *	[	!ebp!	-	4Ch	]	*
// 0x6F8C4E29: E8 E2 27 09 00           call    )(6F957610sub_6F957610)
// 0x6F8C4E2E: EB CE                    jmp      short  )(6F8C4DFEloc_6F8C4DFE); jumptable 6F8C4DED cases 0,1
// 0x6F8C4E30: 8B 4D B4                 mov     )!ecx!)	,	 *	[	!ebp!	-	4Ch	]	*  ; jumptable 6F8C4DED case 3
//                                                                      ; (repeatable) jumptable 6F8C4DED case 3
// 0x6F8C4E33: E8 38 32 07 00           call    )(6F938070nullsub_18)
// 0x6F8C4E38: EB C4                    jmp      short  )(6F8C4DFEloc_6F8C4DFE); jumptable 6F8C4DED cases 0,1
// 0x6F8C4E3A: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED case 5
//                                                                      ; (repeatable) jumptable 6F8C4DED case 5
// 0x6F8C4E3D: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C4E40: E8 5B 0B 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C4E45: 8B 4D B0                 mov     )!ecx!)	,	 *	[	!ebp!	-	50h	]	*
// 0x6F8C4E48: E8 83 65 04 00           call    )(6F90B3D0sub_6F90B3D0)
// 0x6F8C4E4D: EB AF                    jmp      short  )(6F8C4DFEloc_6F8C4DFE); jumptable 6F8C4DED cases 0,1
// 0x6F8C4E4F: 8B 4D B0                 mov     )!ecx!)	,	 *	[	!ebp!	-	50h	]	*  ; jumptable 6F8C4DED case 6
//                                                                      ; (repeatable) jumptable 6F8C4DED case 6
// 0x6F8C4E52: E8 19 32 07 00           call    )(6F938070nullsub_18)
// 0x6F8C4E57: EB A5                    jmp      short  )(6F8C4DFEloc_6F8C4DFE); jumptable 6F8C4DED cases 0,1
// 0x6F8C4E59: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED case 7
//                                                                      ; (repeatable) jumptable 6F8C4DED case 7
// 0x6F8C4E5C: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C4E5F: E8 3C 0B 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C4E64: 8B 4D AC                 mov     )!ecx!)	,	 *	[	!ebp!	-	54h	]	*
// 0x6F8C4E67: E8 04 5F 04 00           call    )(6F90AD70sub_6F90AD70)
// 0x6F8C4E6C: EB 90                    jmp      short  )(6F8C4DFEloc_6F8C4DFE); jumptable 6F8C4DED cases 0,1
// 0x6F8C4E6E: 8B 4D AC                 mov     )!ecx!)	,	 *	[	!ebp!	-	54h	]	*  ; jumptable 6F8C4DED case 8
//                                                                      ; (repeatable) jumptable 6F8C4DED case 8
// 0x6F8C4E71: E8 FA 31 07 00           call    )(6F938070nullsub_18)
// 0x6F8C4E76: EB 86                    jmp      short  )(6F8C4DFEloc_6F8C4DFE); jumptable 6F8C4DED cases 0,1
// 0x6F8C4E78: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED case 9
//                                                                      ; (repeatable) jumptable 6F8C4DED case 9
// 0x6F8C4E7B: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C4E7E: E8 1D 0B 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C4E83: 8B 4D A8                 mov     )!ecx!)	,	 *	[	!ebp!	-	58h	]	*
// 0x6F8C4E86: E8 75 2D 09 00           call    )(6F957C00sub_6F957C00)
// 0x6F8C4E8B: E9 6E FF FF FF           jmp     )(6F8C4DFEloc_6F8C4DFE)    ; jumptable 6F8C4DED cases 0,1
// 0x6F8C4E90: 8B 4D A8                 mov     )!ecx!)	,	 *	[	!ebp!	-	58h	]	*  ; jumptable 6F8C4DED case 10
//                                                                      ; (repeatable) jumptable 6F8C4DED case 10
// 0x6F8C4E93: E8 D8 31 07 00           call    )(6F938070nullsub_18)
// 0x6F8C4E98: E9 61 FF FF FF           jmp     )(6F8C4DFEloc_6F8C4DFE)    ; jumptable 6F8C4DED cases 0,1
// 0x6F8C4E9D: 8B 4D BC                 mov     )!ecx!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED cases 4,11
//                                                                      ; (repeatable) jumptable 6F8C4DED cases 4,11
// 0x6F8C4EA0: E8 CB 31 07 00           call    )(6F938070nullsub_18)
// 0x6F8C4EA5: E9 54 FF FF FF           jmp     )(6F8C4DFEloc_6F8C4DFE)    ; jumptable 6F8C4DED cases 0,1
// 0x6F8C4EAA: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED case 12
//                                                                      ; (repeatable) jumptable 6F8C4DED case 12
// 0x6F8C4EAD: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C4EB0: E8 EB 0A 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C4EB5: 8B 4D A4                 mov     )!ecx!)	,	 *	[	!ebp!	-	5Ch	]	*
// 0x6F8C4EB8: E8 F3 71 04 00           call    )(6F90C0B0sub_6F90C0B0)
// 0x6F8C4EBD: E9 3C FF FF FF           jmp     )(6F8C4DFEloc_6F8C4DFE)    ; jumptable 6F8C4DED cases 0,1
// 0x6F8C4EC2: 8B 4D A4                 mov     )!ecx!)	,	 *	[	!ebp!	-	5Ch	]	*  ; jumptable 6F8C4DED case 13
//                                                                      ; (repeatable) jumptable 6F8C4DED case 13
// 0x6F8C4EC5: E8 A6 31 07 00           call    )(6F938070nullsub_18)
// 0x6F8C4ECA: E9 2F FF FF FF           jmp     )(6F8C4DFEloc_6F8C4DFE)    ; jumptable 6F8C4DED cases 0,1
// 0x6F8C4ECF: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C4DED case 14
//                                                                      ; (repeatable) jumptable 6F8C4DED case 14
// 0x6F8C4ED2: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C4ED5: E8 C6 0A 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C4EDA: 8B 4D A0                 mov     )!ecx!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F8C4EDD: E8 5E 6B 04 00           call    )(6F90BA40sub_6F90BA40)
// 0x6F8C4EE2: E9 17 FF FF FF           jmp     )(6F8C4DFEloc_6F8C4DFE)    ; jumptable 6F8C4DED cases 0,1

// ======================================================================
// End of disassembly for sub_6F8C4DDB
