/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F932AF1
 * Address: 0x6F932AF1
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F932AF1
// Address: 0x6F932AF1 - 0x6F932C70
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F932AF1: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F932AF4: 8B 45 AC                 mov     )!eax!)	,	 *	[	!ebp!	-	54h	]	*
// 0x6F932AF7: 83 7D A8 0F              cmp     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0Fh*; switch 16 cases 
//                                                                      ; switch 16 cases 
// 0x6F932AFB: 89 45 A0                 mov     )	[	!ebp!	-	60h	]	)	,	 *!eax!*
// 0x6F932AFE: 77 0A                    ja       short  )(6F932B0Aloc_6F932B0A); jumptable 6F932B03 default case
// 0x6F932B00: 8B 45 A8                 mov     )!eax!)	,	 *	[	!ebp!	-	58h	]	*
// 0x6F932B03: FF 24 85 7C 37 BA 6F     jmp     )!ds!	:	(6FBA377Coff_6FBA377C	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F932B0A: 0F 0B                    ud2                     ; jumptable 6F932B03 default case
//                                                                      ; (repeatable) jumptable 6F932B03 default case
// 0x6F932B0C: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F932B03 cases 0,13,15
//                                                                      ; (repeatable) jumptable 6F932B03 cases 0,13,15
// 0x6F932B13: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F932B1A: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F932B21: 8B 45 E8                 mov     )!eax!)	,	 *	[	!ebp!	-	18h	]	*
// 0x6F932B24: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F932B27: 8D 45 E4                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ch	]	*
// 0x6F932B2A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932B2D: E8 BE 5B FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F932B32: 50                       push    )!eax!)             ; Memory  ; sp=4
//                                                                      ; Memory
// 0x6F932B33: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F932B36: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932B39: E8 C2 F2 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F932B3E: 83 7D 98 00              cmp     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F932B42: 74 0B                    jz       short  )(6F932B4Floc_6F932B4F)
// 0x6F932B44: 8B 45 98                 mov     )!eax!)	,	 *	[	!ebp!	-	68h	]	*
// 0x6F932B47: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932B4A: E8 B1 EF 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F932B4F: 83 7D 8C 00              cmp     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F932B53: 74 0B                    jz       short  )(6F932B60loc_6F932B60)
// 0x6F932B55: 8B 45 8C                 mov     )!eax!)	,	 *	[	!ebp!	-	74h	]	*
// 0x6F932B58: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932B5B: E8 A0 EF 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F932B60: 83 7D 90 00              cmp     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F932B64: 74 0B                    jz       short  )(6F932B71loc_6F932B71)
// 0x6F932B66: 8B 45 90                 mov     )!eax!)	,	 *	[	!ebp!	-	70h	]	*
// 0x6F932B69: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932B6C: E8 8F EF 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F932B71: 83 7D 94 00              cmp     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F932B75: 74 0B                    jz       short  )(6F932B82loc_6F932B82)
// 0x6F932B77: 8B 45 94                 mov     )!eax!)	,	 *	[	!ebp!	-	6Ch	]	*
// 0x6F932B7A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932B7D: E8 7E EF 02 00           call    )%(6F961B00j_j_free_1%)
// 0x6F932B82: C7 45 A8 05 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *5*
// 0x6F932B89: E8 B2 FC 02 00           call    )(6F962840sub_6F962840)
// 0x6F932B8E: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F932B03 case 6
//                                                                      ; (repeatable) jumptable 6F932B03 case 6
// 0x6F932B95: 8B 45 F4                 mov     )!eax!)	,	 *	[	!ebp!	-	0Ch	]	*  ; jumptable 6F932B03 case 3
//                                                                      ; (repeatable) jumptable 6F932B03 case 3
// 0x6F932B98: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F932B9B: 8D 45 E7                 lea     )!eax!)	,	 *	[	!ebp!	-	19h	]	*
// 0x6F932B9E: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932BA1: E8 4A 5B FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F932BA6: 50                       push    )!eax!)  ; sp=4
// 0x6F932BA7: 8B 45 F0                 mov     )!eax!)	,	 *	[	!ebp!	-	10h	]	*
// 0x6F932BAA: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F932BAD: 8D 45 E6                 lea     )!eax!)	,	 *	[	!ebp!	-	1Ah	]	*
// 0x6F932BB0: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932BB3: E8 38 5B FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F932BB8: 51                       push    )!ecx!)  ; sp=4
// 0x6F932BB9: 8B 45 EC                 mov     )!eax!)	,	 *	[	!ebp!	-	14h	]	*
// 0x6F932BBC: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F932BBF: 8D 45 E5                 lea     )!eax!)	,	 *	[	!ebp!	-	1Bh	]	*
// 0x6F932BC2: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932BC5: E8 26 5B FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F932BCA: 52                       push    )!edx!)  ; sp=4
// 0x6F932BCB: E9 51 FF FF FF           jmp     )(6F932B21loc_6F932B21)
// 0x6F932BD0: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*  ; jumptable 6F932B03 case 5
//                                                                      ; (repeatable) jumptable 6F932B03 case 5
// 0x6F932BD3: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932BD6: E8 25 F2 02 00           call    )(6F961E00sub_6F961E00)
// 0x6F932BDB: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F932BE2: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*
// 0x6F932BE9: EB 97                    jmp      short  )(6F932B82loc_6F932B82)
// 0x6F932BEB: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F932B03 case 8
//                                                                      ; (repeatable) jumptable 6F932B03 case 8
// 0x6F932BF2: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F932BF9: EB AC                    jmp      short  )(6F932BA7loc_6F932BA7)
// 0x6F932BFB: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F932B03 case 11
//                                                                      ; (repeatable) jumptable 6F932B03 case 11
// 0x6F932C02: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F932C09: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F932C10: EB A7                    jmp      short  )(6F932BB9loc_6F932BB9)
// 0x6F932C12: C7 45 A8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0*; jumptable 6F932B03 case 4
//                                                                      ; (repeatable) jumptable 6F932B03 case 4
// 0x6F932C19: E8 B2 F4 02 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F932C1E: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F932C21: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F932C24: C7 45 A8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0FFFFFFFFh*
// 0x6F932C2B: E8 40 F1 F6 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F932C30: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F932B03 cases 1,10,12
//                                                                      ; (repeatable) jumptable 6F932B03 cases 1,10,12
// 0x6F932C37: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F932C3E: E9 76 FF FF FF           jmp     )(6F932BB9loc_6F932BB9)
// 0x6F932C43: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F932B03 case 14
//                                                                      ; (repeatable) jumptable 6F932B03 case 14
// 0x6F932C4A: C7 45 90 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	70h	]	)	,	 *0*
// 0x6F932C51: C7 45 8C 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	74h	]	)	,	 *0*
// 0x6F932C58: C7 45 98 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	68h	]	)	,	 *0*
// 0x6F932C5F: E9 BD FE FF FF           jmp     )(6F932B21loc_6F932B21)
// 0x6F932C64: C7 45 94 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	6Ch	]	)	,	 *0*; jumptable 6F932B03 cases 2,7,9
//                                                                      ; (repeatable) jumptable 6F932B03 cases 2,7,9
// 0x6F932C6B: E9 37 FF FF FF           jmp     )(6F932BA7loc_6F932BA7)

// ======================================================================
// End of disassembly for sub_6F932AF1
