/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F933C26
 * Address: 0x6F933C26
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F933C26
// Address: 0x6F933C26 - 0x6F933D9F
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F933C26: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F933C29: 8B 45 AC                 mov     )!eax!)	,	 *	[	!ebp!	-	54h	]	*
// 0x6F933C2C: 83 7D A8 12              cmp     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *12h*; switch 19 cases 
//                                                                      ; switch 19 cases 
// 0x6F933C30: 89 45 A0                 mov     )	[	!ebp!	-	60h	]	)	,	 *!eax!*
// 0x6F933C33: 77 0A                    ja       short  )(6F933C3Floc_6F933C3F); jumptable 6F933C38 default case
// 0x6F933C35: 8B 45 A8                 mov     )!eax!)	,	 *	[	!ebp!	-	58h	]	*
// 0x6F933C38: FF 24 85 DC 33 BA 6F     jmp     )!ds!	:	(6FBA33DCoff_6FBA33DC	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F933C3F: 0F 0B                    ud2                     ; jumptable 6F933C38 default case
//                                                                      ; (repeatable) jumptable 6F933C38 default case
// 0x6F933C41: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933C38 cases 0,16,18
//                                                                      ; (repeatable) jumptable 6F933C38 cases 0,16,18
// 0x6F933C48: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933C4F: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F933C56: 8B 45 E8                 mov     )!eax!)	,	 *	[	!ebp!	-	18h	]	*
// 0x6F933C59: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F933C5C: 8D 45 E4                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ch	]	*
// 0x6F933C5F: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933C62: E8 89 4A FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F933C67: 50                       push    )!eax!)             ; Memory  ; sp=4
//                                                                      ; Memory
// 0x6F933C68: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F933C6B: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933C6E: E8 8D E1 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F933C73: 83 7D 98 00              cmp     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F933C77: 74 0B                    jz       short  )(6F933C84loc_6F933C84)
// 0x6F933C79: 8B 45 98                 mov     )!eax!)	,	 *	[	!ebp!	-	68h	]	*
// 0x6F933C7C: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933C7F: E8 7C DE 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F933C84: 83 7D 8C 00              cmp     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F933C88: 74 0B                    jz       short  )(6F933C95loc_6F933C95)
// 0x6F933C8A: 8B 45 8C                 mov     )!eax!)	,	 *	[	!ebp!	-	74h	]	*
// 0x6F933C8D: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933C90: E8 6B DE 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F933C95: 83 7D 90 00              cmp     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933C99: 74 0B                    jz       short  )(6F933CA6loc_6F933CA6)
// 0x6F933C9B: 8B 45 90                 mov     )!eax!)	,	 *	[	!ebp!	-	70h	]	*
// 0x6F933C9E: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933CA1: E8 5A DE 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F933CA6: 83 7D 94 00              cmp     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F933CAA: 74 0B                    jz       short  )(6F933CB7loc_6F933CB7)
// 0x6F933CAC: 8B 45 94                 mov     )!eax!)	,	 *	[	!ebp!	-	6Ch	]	*
// 0x6F933CAF: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933CB2: E8 49 DE 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F933CB7: C7 45 A8 05 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *5*
// 0x6F933CBE: E8 7D EB 02 00           call    )(6F962840sub_6F962840)
// 0x6F933CC3: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933C38 cases 6,7
//                                                                      ; (repeatable) jumptable 6F933C38 cases 6,7
// 0x6F933CCA: 8B 45 F4                 mov     )!eax!)	,	 *	[	!ebp!	-	0Ch	]	*  ; jumptable 6F933C38 case 3
//                                                                      ; (repeatable) jumptable 6F933C38 case 3
// 0x6F933CCD: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F933CD0: 8D 45 E7                 lea     )!eax!)	,	 *	[	!ebp!	-	19h	]	*
// 0x6F933CD3: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933CD6: E8 E5 99 FC FF           call    )(6F8FD6C0sub_6F8FD6C0)
// 0x6F933CDB: 53                       push    )!ebx!)  ; sp=4
// 0x6F933CDC: 8B 45 F0                 mov     )!eax!)	,	 *	[	!ebp!	-	10h	]	*
// 0x6F933CDF: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F933CE2: 8D 45 E6                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ah	]	*
// 0x6F933CE5: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933CE8: E8 D3 99 FC FF           call    )(6F8FD6C0sub_6F8FD6C0)
// 0x6F933CED: 51                       push    )!ecx!)  ; sp=4
// 0x6F933CEE: 8B 45 EC                 mov     )!eax!)	,	 *	[	!ebp!	-	14h	]	*
// 0x6F933CF1: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F933CF4: 8D 45 E5                 lea     )!eax!)	,	 *	[	!ebp!	-	1Bh	]	*
// 0x6F933CF7: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933CFA: E8 C1 99 FC FF           call    )(6F8FD6C0sub_6F8FD6C0)
// 0x6F933CFF: 52                       push    )!edx!)  ; sp=4
// 0x6F933D00: E9 51 FF FF FF           jmp     )(6F933C56loc_6F933C56)
// 0x6F933D05: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933C38 cases 8,10
//                                                                      ; (repeatable) jumptable 6F933C38 cases 8,10
// 0x6F933D0C: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933D13: EB C7                    jmp      short  )(6F933CDCloc_6F933CDC)
// 0x6F933D15: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*  ; jumptable 6F933C38 case 5
//                                                                      ; (repeatable) jumptable 6F933C38 case 5
// 0x6F933D18: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933D1B: E8 E0 E0 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F933D20: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933D27: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F933D2E: EB 87                    jmp      short  )(6F933CB7loc_6F933CB7)
// 0x6F933D30: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933C38 cases 12,14
//                                                                      ; (repeatable) jumptable 6F933C38 cases 12,14
// 0x6F933D37: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933D3E: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F933D45: EB A7                    jmp      short  )(6F933CEEloc_6F933CEE)
// 0x6F933D47: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933C38 cases 2,9,11
//                                                                      ; (repeatable) jumptable 6F933C38 cases 2,9,11
// 0x6F933D4E: EB 8C                    jmp      short  )(6F933CDCloc_6F933CDC)
// 0x6F933D50: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933C38 cases 1,13,15
//                                                                      ; (repeatable) jumptable 6F933C38 cases 1,13,15
// 0x6F933D57: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933D5E: EB 8E                    jmp      short  )(6F933CEEloc_6F933CEE)
// 0x6F933D60: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F933C38 case 17
//                                                                      ; (repeatable) jumptable 6F933C38 case 17
// 0x6F933D67: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F933D6E: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F933D75: C7 45 98 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F933D7C: E9 D5 FE FF FF           jmp     )(6F933C56loc_6F933C56)
// 0x6F933D81: C7 45 A8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0*; jumptable 6F933C38 case 4
//                                                                      ; (repeatable) jumptable 6F933C38 case 4
// 0x6F933D88: E8 43 E3 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F933D8D: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F933D90: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F933D93: C7 45 A8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0FFFFFFFFh*
// 0x6F933D9A: E8 D1 DF F6 FF           call    )(6F8A1D70sub_6F8A1D70)

// ======================================================================
// End of disassembly for sub_6F933C26
