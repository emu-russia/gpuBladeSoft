/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F92FD69
 * Address: 0x6F92FD69
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F92FD69
// Address: 0x6F92FD69 - 0x6F92FE83
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F92FD69: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F92FD6C: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*
// 0x6F92FD6F: 83 7D B8 0B              cmp     ) dword ptr  	[	!ebp!	-	48h	]	)	,	 *0Bh*; switch 12 cases 
//                                                                      ; switch 12 cases 
// 0x6F92FD73: 89 45 B0                 mov     )	[	!ebp!	-	50h	]	)	,	 *!eax!*
// 0x6F92FD76: 77 0A                    ja       short  )(6F92FD82loc_6F92FD82); jumptable 6F92FD7B default case
// 0x6F92FD78: 8B 45 B8                 mov     )!eax!)	,	 *	[	!ebp!	-	48h	]	*
// 0x6F92FD7B: FF 24 85 0C 37 BA 6F     jmp     )!ds!	:	(6FBA370Coff_6FBA370C	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F92FD82: 0F 0B                    ud2                     ; jumptable 6F92FD7B default case
//                                                                      ; (repeatable) jumptable 6F92FD7B default case
// 0x6F92FD84: C7 45 A4 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	5Ch	]	)	,	 *0*; jumptable 6F92FD7B cases 0,9,11
//                                                                      ; (repeatable) jumptable 6F92FD7B cases 0,9,11
// 0x6F92FD8B: C7 45 A0 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	60h	]	)	,	 *0*
// 0x6F92FD92: 8B 45 EC                 mov     )!eax!)	,	 *	[	!ebp!	-	14h	]	*
// 0x6F92FD95: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F92FD98: 8D 45 E9                 lea     )!eax!)	,	 *	[	!ebp!	-	17h	]	*
// 0x6F92FD9B: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FD9E: E8 4D 89 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F92FDA3: 50                       push    )!eax!)             ; Memory  ; sp=4
//                                                                      ; Memory
// 0x6F92FDA4: 8B 45 B0                 mov     )!eax!)	,	 *	[	!ebp!	-	50h	]	*
// 0x6F92FDA7: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FDAA: E8 51 20 03 00           call    )(6F961E00sub_6F961E00)
// 0x6F92FDAF: 83 7D A8 00              cmp     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0*
// 0x6F92FDB3: 74 0B                    jz       short  )(6F92FDC0loc_6F92FDC0)
// 0x6F92FDB5: 8B 45 A8                 mov     )!eax!)	,	 *	[	!ebp!	-	58h	]	*
// 0x6F92FDB8: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FDBB: E8 40 1D 03 00           call    )%(6F961B00j_j_free_1%)
// 0x6F92FDC0: 83 7D A0 00              cmp     ) dword ptr  	[	!ebp!	-	60h	]	)	,	 *0*
// 0x6F92FDC4: 74 0B                    jz       short  )(6F92FDD1loc_6F92FDD1)
// 0x6F92FDC6: 8B 45 A0                 mov     )!eax!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F92FDC9: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FDCC: E8 2F 1D 03 00           call    )%(6F961B00j_j_free_1%)
// 0x6F92FDD1: 83 7D A4 00              cmp     ) dword ptr  	[	!ebp!	-	5Ch	]	)	,	 *0*
// 0x6F92FDD5: 74 0B                    jz       short  )(6F92FDE2loc_6F92FDE2)
// 0x6F92FDD7: 8B 45 A4                 mov     )!eax!)	,	 *	[	!ebp!	-	5Ch	]	*
// 0x6F92FDDA: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FDDD: E8 1E 1D 03 00           call    )%(6F961B00j_j_free_1%)
// 0x6F92FDE2: C7 45 B8 04 00 00 00     mov     ) dword ptr  	[	!ebp!	-	48h	]	)	,	 *4*
// 0x6F92FDE9: E8 52 2A 03 00           call    )(6F962840sub_6F962840)
// 0x6F92FDEE: 8B 45 B0                 mov     )!eax!)	,	 *	[	!ebp!	-	50h	]	*  ; jumptable 6F92FD7B case 4
//                                                                      ; (repeatable) jumptable 6F92FD7B case 4
// 0x6F92FDF1: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FDF4: E8 07 20 03 00           call    )(6F961E00sub_6F961E00)
// 0x6F92FDF9: C7 45 A4 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	5Ch	]	)	,	 *0*
// 0x6F92FE00: EB E0                    jmp      short  )(6F92FDE2loc_6F92FDE2)
// 0x6F92FE02: C7 45 A4 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	5Ch	]	)	,	 *0*; jumptable 6F92FD7B case 5
//                                                                      ; (repeatable) jumptable 6F92FD7B case 5
// 0x6F92FE09: 8B 45 F4                 mov     )!eax!)	,	 *	[	!ebp!	-	0Ch	]	*  ; jumptable 6F92FD7B case 2
//                                                                      ; (repeatable) jumptable 6F92FD7B case 2
// 0x6F92FE0C: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F92FE0F: 8D 45 EB                 lea     )!eax!)	,	 *	[	!ebp!	-	15h	]	*
// 0x6F92FE12: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FE15: E8 D6 88 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F92FE1A: 51                       push    )!ecx!)  ; sp=4
// 0x6F92FE1B: 8B 45 F0                 mov     )!eax!)	,	 *	[	!ebp!	-	10h	]	*
// 0x6F92FE1E: 8D 48 F4                 lea     )!ecx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F92FE21: 8D 45 EA                 lea     )!eax!)	,	 *	[	!ebp!	-	16h	]	*
// 0x6F92FE24: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FE27: E8 C4 88 FD FF           call    )(6F9086F0sub_6F9086F0)
// 0x6F92FE2C: 52                       push    )!edx!)  ; sp=4
// 0x6F92FE2D: E9 60 FF FF FF           jmp     )(6F92FD92loc_6F92FD92)
// 0x6F92FE32: C7 45 B8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	48h	]	)	,	 *0*; jumptable 6F92FD7B case 3
//                                                                      ; (repeatable) jumptable 6F92FD7B case 3
// 0x6F92FE39: E8 92 22 03 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F92FE3E: 8B 45 B0                 mov     )!eax!)	,	 *	[	!ebp!	-	50h	]	*
// 0x6F92FE41: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F92FE44: C7 45 B8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	48h	]	)	,	 *0FFFFFFFFh*
// 0x6F92FE4B: E8 20 1F F7 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F92FE50: C7 45 A4 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	5Ch	]	)	,	 *0*; jumptable 6F92FD7B case 7
//                                                                      ; (repeatable) jumptable 6F92FD7B case 7
// 0x6F92FE57: C7 45 A0 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	60h	]	)	,	 *0*
// 0x6F92FE5E: EB BB                    jmp      short  )(6F92FE1Bloc_6F92FE1B)
// 0x6F92FE60: C7 45 A4 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	5Ch	]	)	,	 *0*; jumptable 6F92FD7B cases 1,6,8
//                                                                      ; (repeatable) jumptable 6F92FD7B cases 1,6,8
// 0x6F92FE67: EB B2                    jmp      short  )(6F92FE1Bloc_6F92FE1B)
// 0x6F92FE69: C7 45 A4 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	5Ch	]	)	,	 *0*; jumptable 6F92FD7B case 10
//                                                                      ; (repeatable) jumptable 6F92FD7B case 10
// 0x6F92FE70: C7 45 A0 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	60h	]	)	,	 *0*
// 0x6F92FE77: C7 45 A8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	58h	]	)	,	 *0*
// 0x6F92FE7E: E9 0F FF FF FF           jmp     )(6F92FD92loc_6F92FD92)

// ======================================================================
// End of disassembly for sub_6F92FD69
