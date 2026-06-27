/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F9344E6
 * Address: 0x6F9344E6
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F9344E6
// Address: 0x6F9344E6 - 0x6F93465F
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F9344E6: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F9344E9: 8B 45 AC                 mov     )!eax!)	,	 *	[	!ebp!	-	54h	]	*
// 0x6F9344EC: 83 7D A8 12              cmp     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *12h*; switch 19 cases 
//                                                                      ; switch 19 cases 
// 0x6F9344F0: 89 45 A0                 mov     )	[	!ebp!	-	60h	]	)	,	 *!eax!*
// 0x6F9344F3: 77 0A                    ja       short  )(6F9344FFloc_6F9344FF); jumptable 6F9344F8 default case
// 0x6F9344F5: 8B 45 A8                 mov     )!eax!)	,	 *	[	!ebp!	-	58h	]	*
// 0x6F9344F8: FF 24 85 90 33 BA 6F     jmp     )!ds!	:	(6FBA3390off_6FBA3390	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F9344FF: 0F 0B                    ud2                     ; jumptable 6F9344F8 default case
//                                                                      ; (repeatable) jumptable 6F9344F8 default case
// 0x6F934501: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F9344F8 cases 0,16,18
//                                                                      ; (repeatable) jumptable 6F9344F8 cases 0,16,18
// 0x6F934508: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F93450F: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F934516: 8B 45 E8                 mov     )!eax!)	,	 *	[	!ebp!	-	18h	]	*
// 0x6F934519: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F93451C: 8D 45 E4                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ch	]	*
// 0x6F93451F: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F934522: E8 C9 41 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F934527: 50                       push    )!eax!)             ; Memory  ; sp=4
//                                                                      ; Memory
// 0x6F934528: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F93452B: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F93452E: E8 CD D8 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F934533: 83 7D 98 00              cmp     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F934537: 74 0B                    jz       short  )(6F934544loc_6F934544)
// 0x6F934539: 8B 45 98                 mov     )!eax!)	,	 *	[	!ebp!	-	68h	]	*
// 0x6F93453C: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F93453F: E8 BC D5 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F934544: 83 7D 8C 00              cmp     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F934548: 74 0B                    jz       short  )(6F934555loc_6F934555)
// 0x6F93454A: 8B 45 8C                 mov     )!eax!)	,	 *	[	!ebp!	-	74h	]	*
// 0x6F93454D: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F934550: E8 AB D5 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F934555: 83 7D 90 00              cmp     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F934559: 74 0B                    jz       short  )(6F934566loc_6F934566)
// 0x6F93455B: 8B 45 90                 mov     )!eax!)	,	 *	[	!ebp!	-	70h	]	*
// 0x6F93455E: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F934561: E8 9A D5 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F934566: 83 7D 94 00              cmp     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F93456A: 74 0B                    jz       short  )(6F934577loc_6F934577)
// 0x6F93456C: 8B 45 94                 mov     )!eax!)	,	 *	[	!ebp!	-	6Ch	]	*
// 0x6F93456F: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F934572: E8 89 D5 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F934577: C7 45 A8 05 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *5*
// 0x6F93457E: E8 BD E2 02 00           call    )(6F962840sub_6F962840)
// 0x6F934583: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F9344F8 cases 6,7
//                                                                      ; (repeatable) jumptable 6F9344F8 cases 6,7
// 0x6F93458A: 8B 45 F4                 mov     )!eax!)	,	 *	[	!ebp!	-	0Ch	]	*  ; jumptable 6F9344F8 case 3
//                                                                      ; (repeatable) jumptable 6F9344F8 case 3
// 0x6F93458D: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F934590: 8D 45 E7                 lea     )!eax!)	,	 *	[	!ebp!	-	19h	]	*
// 0x6F934593: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F934596: E8 25 91 FC FF           call    )(6F8FD6C0sub_6F8FD6C0)
// 0x6F93459B: 53                       push    )!ebx!)  ; sp=4
// 0x6F93459C: 8B 45 F0                 mov     )!eax!)	,	 *	[	!ebp!	-	10h	]	*
// 0x6F93459F: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F9345A2: 8D 45 E6                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ah	]	*
// 0x6F9345A5: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9345A8: E8 13 91 FC FF           call    )(6F8FD6C0sub_6F8FD6C0)
// 0x6F9345AD: 51                       push    )!ecx!)  ; sp=4
// 0x6F9345AE: 8B 45 EC                 mov     )!eax!)	,	 *	[	!ebp!	-	14h	]	*
// 0x6F9345B1: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F9345B4: 8D 45 E5                 lea     )!eax!)	,	 *	[	!ebp!	-	1Bh	]	*
// 0x6F9345B7: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9345BA: E8 01 91 FC FF           call    )(6F8FD6C0sub_6F8FD6C0)
// 0x6F9345BF: 52                       push    )!edx!)  ; sp=4
// 0x6F9345C0: E9 51 FF FF FF           jmp     )(6F934516loc_6F934516)
// 0x6F9345C5: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F9344F8 cases 8,10
//                                                                      ; (repeatable) jumptable 6F9344F8 cases 8,10
// 0x6F9345CC: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F9345D3: EB C7                    jmp      short  )(6F93459Cloc_6F93459C)
// 0x6F9345D5: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*  ; jumptable 6F9344F8 case 5
//                                                                      ; (repeatable) jumptable 6F9344F8 case 5
// 0x6F9345D8: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9345DB: E8 20 D8 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F9345E0: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F9345E7: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F9345EE: EB 87                    jmp      short  )(6F934577loc_6F934577)
// 0x6F9345F0: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F9344F8 cases 12,14
//                                                                      ; (repeatable) jumptable 6F9344F8 cases 12,14
// 0x6F9345F7: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F9345FE: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F934605: EB A7                    jmp      short  )(6F9345AEloc_6F9345AE)
// 0x6F934607: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F9344F8 cases 2,9,11
//                                                                      ; (repeatable) jumptable 6F9344F8 cases 2,9,11
// 0x6F93460E: EB 8C                    jmp      short  )(6F93459Cloc_6F93459C)
// 0x6F934610: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F9344F8 cases 1,13,15
//                                                                      ; (repeatable) jumptable 6F9344F8 cases 1,13,15
// 0x6F934617: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F93461E: EB 8E                    jmp      short  )(6F9345AEloc_6F9345AE)
// 0x6F934620: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F9344F8 case 17
//                                                                      ; (repeatable) jumptable 6F9344F8 case 17
// 0x6F934627: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F93462E: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F934635: C7 45 98 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F93463C: E9 D5 FE FF FF           jmp     )(6F934516loc_6F934516)
// 0x6F934641: C7 45 A8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0*; jumptable 6F9344F8 case 4
//                                                                      ; (repeatable) jumptable 6F9344F8 case 4
// 0x6F934648: E8 83 DA 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F93464D: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F934650: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F934653: C7 45 A8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0FFFFFFFFh*
// 0x6F93465A: E8 11 D7 F6 FF           call    )(6F8A1D70sub_6F8A1D70)

// ======================================================================
// End of disassembly for sub_6F9344E6
