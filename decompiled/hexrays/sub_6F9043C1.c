/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F9043C1
 * Address: 0x6F9043C1
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F9043C1
// Address: 0x6F9043C1 - 0x6F9044D2
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F9043C1: 8B 44 24 44              mov     )!eax!)	,	 *	[	!esp!	+	arg_40	]	*
// 0x6F9043C5: 83 7C 24 40 05           cmp     )	[	!esp!	+	arg_3C	]	)	,	 *5* ; switch 6 cases 
//                                                                      ; switch 6 cases 
// 0x6F9043CA: 89 44 24 14              mov     )	[	!esp!	+	arg_10	]	)	,	 *!eax!*
// 0x6F9043CE: 8B 44 24 48              mov     )!eax!)	,	 *	[	!esp!	+	arg_44	]	*
// 0x6F9043D2: 77 0B                    ja       short  )(6F9043DFloc_6F9043DF); jumptable 6F9043D8 default case
// 0x6F9043D4: 8B 54 24 40              mov     )!edx!)	,	 *	[	!esp!	+	arg_3C	]	*
// 0x6F9043D8: FF 24 95 90 5D BA 6F     jmp     )!ds!	:	(6FBA5D90off_6FBA5D90	[	!edx!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F9043DF: 0F 0B                    ud2                     ; jumptable 6F9043D8 default case
//                                                                      ; (repeatable) jumptable 6F9043D8 default case
// 0x6F9043E1: 8B 94 24 A0 00 00 00     mov     )!edx!)	,	 *	[	!esp!	+	arg_9C	]	*; jumptable 6F9043D8 cases 3-5
//                                                                      ; (repeatable) jumptable 6F9043D8 cases 3-5
// 0x6F9043E8: 89 54 24 34              mov     )	[	!esp!	+	arg_30	]	)	,	 *!edx!*
// 0x6F9043EC: 83 E8 01                 sub     )!eax!)	,	 *1*          ; jumptable 6F9043D8 case 0
//                                                                      ; (repeatable) jumptable 6F9043D8 case 0
// 0x6F9043EF: 8B 44 24 14              mov     )!eax!)	,	 *	[	!esp!	+	arg_10	]	*
// 0x6F9043F3: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9043F6: 75 4A                    jnz      short  )(6F904442loc_6F904442)
// 0x6F9043F8: E8 03 DA 05 00           call    )(6F961E00sub_6F961E00)
// 0x6F9043FD: 8B 54 24 1C              mov     )!edx!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F904401: 8B 02                    mov     )!eax!)	,	 *	[	!edx!	]	*
// 0x6F904403: 03 50 F4                 add     )!edx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F904406: 83 4A 14 01              or      ) dword ptr  	[	!edx!	+	14h	]	)	,	 *1*
// 0x6F90440A: F6 42 10 01              test    ) byte ptr  	[	!edx!	+	10h	]	)	,	 *1*
// 0x6F90440E: C7 44 24 40 02 00 00 00  mov     )	[	!esp!	+	arg_3C	]	)	,	 *2*
// 0x6F904416: 0F 84 B1 00 00 00        jz      )(6F9044CDloc_6F9044CD)
// 0x6F90441C: E8 1F E4 05 00           call    )(6F962840sub_6F962840)
// 0x6F904421: C7 44 24 40 00 00 00 00  mov     )	[	!esp!	+	arg_3C	]	)	,	 *0* ; jumptable 6F9043D8 case 2
//                                                                      ; (repeatable) jumptable 6F9043D8 case 2
// 0x6F904429: E8 A2 DC 05 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F90442E: 8B 44 24 14              mov     )!eax!)	,	 *	[	!esp!	+	arg_10	]	*
// 0x6F904432: C7 44 24 40 FF FF FF FF  mov     )	[	!esp!	+	arg_3C	]	)	,	 *0FFFFFFFFh*
// 0x6F90443A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F90443D: E8 2E D9 F9 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F904442: E8 B9 D9 05 00           call    )(6F961E00sub_6F961E00)
// 0x6F904447: 8B 54 24 1C              mov     )!edx!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F90444B: 8B 02                    mov     )!eax!)	,	 *	[	!edx!	]	*
// 0x6F90444D: 03 50 F4                 add     )!edx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F904450: 83 4A 14 01              or      ) dword ptr  	[	!edx!	+	14h	]	)	,	 *1*
// 0x6F904454: F6 42 10 01              test    ) byte ptr  	[	!edx!	+	10h	]	)	,	 *1*
// 0x6F904458: 74 0D                    jz       short  )(6F904467loc_6F904467)
// 0x6F90445A: C7 44 24 40 03 00 00 00  mov     )	[	!esp!	+	arg_3C	]	)	,	 *3*
// 0x6F904462: E8 D9 E3 05 00           call    )(6F962840sub_6F962840)
// 0x6F904467: C7 44 24 40 FF FF FF FF  mov     )	[	!esp!	+	arg_3C	]	)	,	 *0FFFFFFFFh*
// 0x6F90446F: E8 5C DC 05 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F904474: 83 BC 24 A4 00 00 00 00  cmp     )	[	!esp!	+	arg_A0	]	)	,	 *0*
// 0x6F90447C: 7E 22                    jle      short  )(6F9044A0loc_6F9044A0)
// 0x6F90447E: 8B 44 24 34              mov     )!eax!)	,	 *	[	!esp!	+	arg_30	]	*
// 0x6F904482: C6 00 00                 mov     ) byte ptr  	[	!eax!	]	)	,	 *0*
// 0x6F904485: 8B 44 24 1C              mov     )!eax!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F904489: 83 78 04 00              cmp     ) dword ptr  	[	!eax!	+	4	]	)	,	 *0*
// 0x6F90448D: 8D 44 24 3C              lea     )!eax!)	,	 *	[	!esp!	+	arg_38	]	*
// 0x6F904491: 89 44 24 38              mov     )	[	!esp!	+	arg_34	]	)	,	 *!eax!*
// 0x6F904495: 0F 84 32 FB FF FF        jz      )(6F903FCDloc_6F903FCD)
// 0x6F90449B: E9 B3 FC FF FF           jmp     )(6F904153loc_6F904153)
// 0x6F9044A0: 8B 44 24 1C              mov     )!eax!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F9044A4: 8B 50 04                 mov     )!edx!)	,	 *	[	!eax!	+	4	]	*
// 0x6F9044A7: 8D 44 24 3C              lea     )!eax!)	,	 *	[	!esp!	+	arg_38	]	*
// 0x6F9044AB: 89 44 24 38              mov     )	[	!esp!	+	arg_34	]	)	,	 *!eax!*
// 0x6F9044AF: E9 97 FC FF FF           jmp     )(6F90414Bloc_6F90414B)
// 0x6F9044B4: E8 17 DC 05 00           call    )(6F9620D0sub_6F9620D0)    ; jumptable 6F9043D8 case 1
//                                                                      ; (repeatable) jumptable 6F9043D8 case 1
// 0x6F9044B9: 8B 44 24 14              mov     )!eax!)	,	 *	[	!esp!	+	arg_10	]	*
// 0x6F9044BD: C7 44 24 40 FF FF FF FF  mov     )	[	!esp!	+	arg_3C	]	)	,	 *0FFFFFFFFh*
// 0x6F9044C5: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9044C8: E8 A3 D8 F9 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F9044CD: E8 6E E3 05 00           call    )(6F962840sub_6F962840)

// ======================================================================
// End of disassembly for sub_6F9043C1
