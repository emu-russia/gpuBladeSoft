/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F8D879C
 * Address: 0x6F8D879C
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F8D879C
// Address: 0x6F8D879C - 0x6F8D8856
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F8D879C: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F8D879F: 8B 45 84                 mov     )!eax!)	,	 *	[	!ebp!	-	7Ch	]	*
// 0x6F8D87A2: 89 85 78 FF FF FF        mov     )	[	!ebp!	-	88h	]	)	,	 *!eax!*
// 0x6F8D87A8: 8B 45 80                 mov     )!eax!)	,	 *	[	!ebp!	-	80h	]	*
// 0x6F8D87AB: 85 C0                    test    )!eax!)	,	 *!eax!*
// 0x6F8D87AD: 75 27                    jnz      short  )(6F8D87D6loc_6F8D87D6)
// 0x6F8D87AF: 8B 45 C8                 mov     )!eax!)	,	 *	[	!ebp!	-	38h	]	*
// 0x6F8D87B2: 8D 55 D0                 lea     )!edx!)	,	 *	[	!ebp!	-	30h	]	*
// 0x6F8D87B5: 39 D0                    cmp     )!eax!)	,	 *!edx!*
// 0x6F8D87B7: 74 08                    jz       short  )(6F8D87C1loc_6F8D87C1)
// 0x6F8D87B9: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D87BC: E8 5F 93 08 00           call    )%(6F961B20j_free_1%)
// 0x6F8D87C1: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D87C7: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D87CA: C7 45 80 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	80h	]	)	,	 *0FFFFFFFFh*
// 0x6F8D87D1: E8 9A 95 FC FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F8D87D6: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D87D9: 75 14                    jnz      short  )(6F8D87EFloc_6F8D87EF)
// 0x6F8D87DB: 8B 45 E0                 mov     )!eax!)	,	 *	[	!ebp!	-	20h	]	*
// 0x6F8D87DE: 8D 55 E8                 lea     )!edx!)	,	 *	[	!ebp!	-	18h	]	*
// 0x6F8D87E1: 39 D0                    cmp     )!eax!)	,	 *!edx!*
// 0x6F8D87E3: 74 CA                    jz       short  )(6F8D87AFloc_6F8D87AF)
// 0x6F8D87E5: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D87E8: E8 33 93 08 00           call    )%(6F961B20j_free_1%)
// 0x6F8D87ED: EB C0                    jmp      short  )(6F8D87AFloc_6F8D87AF)
// 0x6F8D87EF: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D87F2: 75 21                    jnz      short  )(6F8D8815loc_6F8D8815)
// 0x6F8D87F4: C7 45 80 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	80h	]	)	,	 *0*
// 0x6F8D87FB: E8 D0 98 08 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F8D8800: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D8806: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D8809: C7 45 80 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	80h	]	)	,	 *0FFFFFFFFh*
// 0x6F8D8810: E8 5B 95 FC FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F8D8815: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D8818: 75 25                    jnz      short  )(6F8D883Floc_6F8D883F)
// 0x6F8D881A: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D8820: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D8823: E8 D8 95 08 00           call    )(6F961E00sub_6F961E00)
// 0x6F8D8828: 8B 8D 40 FF FF FF        mov     )!ecx!)	,	 *	[	!ebp!	-	0C0h	]	*
// 0x6F8D882E: 8B 01                    mov     )!eax!)	,	 *	[	!ecx!	]	*
// 0x6F8D8830: FF 50 04                 call    ) dword ptr  	[	!eax!	+	4	]	)
// 0x6F8D8833: C7 45 80 03 00 00 00     mov     ) dword ptr  	[	!ebp!	-	80h	]	)	,	 *3*
// 0x6F8D883A: E8 01 A0 08 00           call    )(6F962840sub_6F962840)
// 0x6F8D883F: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D8842: 75 10                    jnz      short  )(6F8D8854loc_6F8D8854)
// 0x6F8D8844: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D884A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D884D: E8 AE 95 08 00           call    )(6F961E00sub_6F961E00)
// 0x6F8D8852: EB DF                    jmp      short  )(6F8D8833loc_6F8D8833)
// 0x6F8D8854: 0F 0B                    ud2

// ======================================================================
// End of disassembly for sub_6F8D879C
