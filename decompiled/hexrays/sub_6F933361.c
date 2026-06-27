/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F933361
 * Address: 0x6F933361
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F933361
// Address: 0x6F933361 - 0x6F9334E0
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F933361: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F933364: 8B 45 AC                 mov     )!eax!)	,	 *	[	!ebp!	-	54h	]	*
// 0x6F933367: 83 7D A8 0F              cmp     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0Fh*; switch 16 cases 
//                                                                      ; switch 16 cases 
// 0x6F93336B: 89 45 A0                 mov     )	[	!ebp!	-	60h	]	)	,	 *!eax!*
// 0x6F93336E: 77 0A                    ja       short  )(6F93337Aloc_6F93337A); jumptable 6F933373 default case
// 0x6F933370: 8B 45 A8                 mov     )!eax!)	,	 *	[	!ebp!	-	58h	]	*
// 0x6F933373: FF 24 85 3C 37 BA 6F     jmp     )!ds!	:	(6FBA373Coff_6FBA373C	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F93337A: 0F 0B                    ud2                     ; jumptable 6F933373 default case
//                                                                      ; (repeatable) jumptable 6F933373 default case
// 0x6F93337C: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933373 cases 0,13,15
//                                                                      ; (repeatable) jumptable 6F933373 cases 0,13,15
// 0x6F933383: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F93338A: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F933391: 8B 45 E8                 mov     )!eax!)	,	 *	[	!ebp!	-	18h	]	*
// 0x6F933394: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F933397: 8D 45 E4                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ch	]	*
// 0x6F93339A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F93339D: E8 4E 53 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F9333A2: 50                       push    )!eax!)             ; Memory  ; sp=4
//                                                                      ; Memory
// 0x6F9333A3: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F9333A6: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9333A9: E8 52 EA 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F9333AE: 83 7D 98 00              cmp     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F9333B2: 74 0B                    jz       short  )(6F9333BFloc_6F9333BF)
// 0x6F9333B4: 8B 45 98                 mov     )!eax!)	,	 *	[	!ebp!	-	68h	]	*
// 0x6F9333B7: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9333BA: E8 41 E7 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F9333BF: 83 7D 8C 00              cmp     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F9333C3: 74 0B                    jz       short  )(6F9333D0loc_6F9333D0)
// 0x6F9333C5: 8B 45 8C                 mov     )!eax!)	,	 *	[	!ebp!	-	74h	]	*
// 0x6F9333C8: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9333CB: E8 30 E7 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F9333D0: 83 7D 90 00              cmp     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F9333D4: 74 0B                    jz       short  )(6F9333E1loc_6F9333E1)
// 0x6F9333D6: 8B 45 90                 mov     )!eax!)	,	 *	[	!ebp!	-	70h	]	*
// 0x6F9333D9: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9333DC: E8 1F E7 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F9333E1: 83 7D 94 00              cmp     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F9333E5: 74 0B                    jz       short  )(6F9333F2loc_6F9333F2)
// 0x6F9333E7: 8B 45 94                 mov     )!eax!)	,	 *	[	!ebp!	-	6Ch	]	*
// 0x6F9333EA: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9333ED: E8 0E E7 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F9333F2: C7 45 A8 05 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *5*
// 0x6F9333F9: E8 42 F4 02 00           call    )(6F962840sub_6F962840)
// 0x6F9333FE: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933373 case 6
//                                                                      ; (repeatable) jumptable 6F933373 case 6
// 0x6F933405: 8B 45 F4                 mov     )!eax!)	,	 *	[	!ebp!	-	0Ch	]	*  ; jumptable 6F933373 case 3
//                                                                      ; (repeatable) jumptable 6F933373 case 3
// 0x6F933408: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F93340B: 8D 45 E7                 lea     )!eax!)	,	 *	[	!ebp!	-	19h	]	*
// 0x6F93340E: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933411: E8 DA 52 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F933416: 50                       push    )!eax!)  ; sp=4
// 0x6F933417: 8B 45 F0                 mov     )!eax!)	,	 *	[	!ebp!	-	10h	]	*
// 0x6F93341A: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F93341D: 8D 45 E6                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ah	]	*
// 0x6F933420: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933423: E8 C8 52 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F933428: 51                       push    )!ecx!)  ; sp=4
// 0x6F933429: 8B 45 EC                 mov     )!eax!)	,	 *	[	!ebp!	-	14h	]	*
// 0x6F93342C: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F93342F: 8D 45 E5                 lea     )!eax!)	,	 *	[	!ebp!	-	1Bh	]	*
// 0x6F933432: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933435: E8 B6 52 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F93343A: 52                       push    )!edx!)  ; sp=4
// 0x6F93343B: E9 51 FF FF FF           jmp     )(6F933391loc_6F933391)
// 0x6F933440: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*  ; jumptable 6F933373 case 5
//                                                                      ; (repeatable) jumptable 6F933373 case 5
// 0x6F933443: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933446: E8 B5 E9 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F93344B: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933452: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F933459: EB 97                    jmp      short  )(6F9333F2loc_6F9333F2)
// 0x6F93345B: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933373 case 8
//                                                                      ; (repeatable) jumptable 6F933373 case 8
// 0x6F933462: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933469: EB AC                    jmp      short  )(6F933417loc_6F933417)
// 0x6F93346B: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933373 case 11
//                                                                      ; (repeatable) jumptable 6F933373 case 11
// 0x6F933472: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933479: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F933480: EB A7                    jmp      short  )(6F933429loc_6F933429)
// 0x6F933482: C7 45 A8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0*; jumptable 6F933373 case 4
//                                                                      ; (repeatable) jumptable 6F933373 case 4
// 0x6F933489: E8 42 EC 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F93348E: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F933491: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933494: C7 45 A8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0FFFFFFFFh*
// 0x6F93349B: E8 D0 E8 F6 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F9334A0: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933373 cases 1,10,12
//                                                                      ; (repeatable) jumptable 6F933373 cases 1,10,12
// 0x6F9334A7: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F9334AE: E9 76 FF FF FF           jmp     )(6F933429loc_6F933429)
// 0x6F9334B3: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933373 case 14
//                                                                      ; (repeatable) jumptable 6F933373 case 14
// 0x6F9334BA: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F9334C1: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F9334C8: C7 45 98 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F9334CF: E9 BD FE FF FF           jmp     )(6F933391loc_6F933391)
// 0x6F9334D4: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933373 cases 2,7,9
//                                                                      ; (repeatable) jumptable 6F933373 cases 2,7,9
// 0x6F9334DB: E9 37 FF FF FF           jmp     )(6F933417loc_6F933417)

// ======================================================================
// End of disassembly for sub_6F933361
