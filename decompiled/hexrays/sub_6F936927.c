/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F936927
 * Address: 0x6F936927
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F936927
// Address: 0x6F936927 - 0x6F936A1E
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F936927: 8B 44 24 54              mov     )!eax!)	,	 *	[	!esp!	+	arg_50	]	*
// 0x6F93692B: 83 7C 24 50 09           cmp     )	[	!esp!	+	arg_4C	]	)	,	 *9* ; switch 10 cases 
//                                                                      ; switch 10 cases 
// 0x6F936930: 89 44 24 18              mov     )	[	!esp!	+	arg_14	]	)	,	 *!eax!*
// 0x6F936934: 8B 44 24 58              mov     )!eax!)	,	 *	[	!esp!	+	arg_54	]	*
// 0x6F936938: 77 0B                    ja       short  )(6F936945loc_6F936945); jumptable 6F93693E default case
// 0x6F93693A: 8B 54 24 50              mov     )!edx!)	,	 *	[	!esp!	+	arg_4C	]	*
// 0x6F93693E: FF 24 95 00 2D BA 6F     jmp     )!ds!	:	(6FBA2D00off_6FBA2D00	[	!edx!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F936945: 0F 0B                    ud2                     ; jumptable 6F93693E default case
//                                                                      ; (repeatable) jumptable 6F93693E default case
// 0x6F936947: 8B 44 24 18              mov     )!eax!)	,	 *	[	!esp!	+	arg_14	]	*; jumptable 6F93693E case 9
//                                                                      ; (repeatable) jumptable 6F93693E case 9
// 0x6F93694B: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F93694E: E8 AD B4 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F936953: C7 44 24 50 09 00 00 00  mov     )	[	!esp!	+	arg_4C	]	)	,	 *9*
// 0x6F93695B: E8 70 B7 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F936960: E9 6F FE FF FF           jmp     )(6F9367D4loc_6F9367D4)
// 0x6F936965: 8B 44 24 18              mov     )!eax!)	,	 *	[	!esp!	+	arg_14	]	*; jumptable 6F93693E case 3
//                                                                      ; (repeatable) jumptable 6F93693E case 3
// 0x6F936969: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F93696C: E8 8F B4 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F936971: C7 44 24 50 03 00 00 00  mov     )	[	!esp!	+	arg_4C	]	)	,	 *3*
// 0x6F936979: E8 52 B7 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F93697E: E9 08 FE FF FF           jmp     )(6F93678Bloc_6F93678B)
// 0x6F936983: C7 44 24 50 00 00 00 00  mov     )	[	!esp!	+	arg_4C	]	)	,	 *0* ; jumptable 6F93693E case 1
//                                                                      ; (repeatable) jumptable 6F93693E case 1
// 0x6F93698B: E8 40 B7 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F936990: 8B 44 24 18              mov     )!eax!)	,	 *	[	!esp!	+	arg_14	]	*
// 0x6F936994: C7 44 24 50 FF FF FF FF  mov     )	[	!esp!	+	arg_4C	]	)	,	 *0FFFFFFFFh*
// 0x6F93699C: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F93699F: E8 CC B3 F6 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F9369A4: 8B 44 24 18              mov     )!eax!)	,	 *	[	!esp!	+	arg_14	]	*; jumptable 6F93693E case 5
//                                                                      ; (repeatable) jumptable 6F93693E case 5
// 0x6F9369A8: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9369AB: E8 50 B4 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F9369B0: C7 44 24 50 05 00 00 00  mov     )	[	!esp!	+	arg_4C	]	)	,	 *5*
// 0x6F9369B8: E8 13 B7 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F9369BD: E9 2B FF FF FF           jmp     )(6F9368EDloc_6F9368ED)
// 0x6F9369C2: 8B 44 24 18              mov     )!eax!)	,	 *	[	!esp!	+	arg_14	]	*; jumptable 6F93693E case 7
//                                                                      ; (repeatable) jumptable 6F93693E case 7
// 0x6F9369C6: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9369C9: E8 32 B4 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F9369CE: C7 44 24 50 07 00 00 00  mov     )	[	!esp!	+	arg_4C	]	)	,	 *7*
// 0x6F9369D6: E8 F5 B6 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F9369DB: E9 CB FD FF FF           jmp     )(6F9367ABloc_6F9367AB)
// 0x6F9369E0: 83 C0 01                 add     )!eax!)	,	 *1*          ; jumptable 6F93693E cases 2,4,6,8
//                                                                      ; (repeatable) jumptable 6F93693E cases 2,4,6,8
// 0x6F9369E3: 8B 44 24 18              mov     )!eax!)	,	 *	[	!esp!	+	arg_14	]	*
// 0x6F9369E7: C7 44 24 50 FF FF FF FF  mov     )	[	!esp!	+	arg_4C	]	)	,	 *0FFFFFFFFh*
// 0x6F9369EF: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9369F2: 75 AB                    jnz      short  )(6F93699Floc_6F93699F)
// 0x6F9369F4: E8 D7 B4 02 00           call    )(6F961ED0sub_6F961ED0)
// 0x6F9369F9: 8B 44 24 18              mov     )!eax!)	,	 *	[	!esp!	+	arg_14	]	*; jumptable 6F93693E case 0
//                                                                      ; (repeatable) jumptable 6F93693E case 0
// 0x6F9369FD: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F936A00: E8 FB B3 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F936A05: 8B 44 24 2C              mov     )!eax!)	,	 *	[	!esp!	+	arg_28	]	*
// 0x6F936A09: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F936A0C: E8 EF B0 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F936A11: C7 44 24 50 02 00 00 00  mov     )	[	!esp!	+	arg_4C	]	)	,	 *2*
// 0x6F936A19: E8 22 BE 02 00           call    )(6F962840sub_6F962840)

// ======================================================================
// End of disassembly for sub_6F936927
