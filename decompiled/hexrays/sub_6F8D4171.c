/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F8D4171
 * Address: 0x6F8D4171
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F8D4171
// Address: 0x6F8D4171 - 0x6F8D422B
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F8D4171: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F8D4174: 8B 45 8C                 mov     )!eax!)	,	 *	[	!ebp!	-	74h	]	*
// 0x6F8D4177: 89 85 78 FF FF FF        mov     )	[	!ebp!	-	88h	]	)	,	 *!eax!*
// 0x6F8D417D: 8B 45 88                 mov     )!eax!)	,	 *	[	!ebp!	-	78h	]	*
// 0x6F8D4180: 85 C0                    test    )!eax!)	,	 *!eax!*
// 0x6F8D4182: 75 27                    jnz      short  )(6F8D41ABloc_6F8D41AB)
// 0x6F8D4184: 8B 45 C8                 mov     )!eax!)	,	 *	[	!ebp!	-	38h	]	*
// 0x6F8D4187: 8D 55 D0                 lea     )!edx!)	,	 *	[	!ebp!	-	30h	]	*
// 0x6F8D418A: 39 D0                    cmp     )!eax!)	,	 *!edx!*
// 0x6F8D418C: 74 08                    jz       short  )(6F8D4196loc_6F8D4196)
// 0x6F8D418E: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D4191: E8 8A D9 08 00           call    )%(6F961B20j_free_1%)
// 0x6F8D4196: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D419C: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D419F: C7 45 88 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	78h	]	)	,	 *0FFFFFFFFh*
// 0x6F8D41A6: E8 C5 DB FC FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F8D41AB: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D41AE: 75 14                    jnz      short  )(6F8D41C4loc_6F8D41C4)
// 0x6F8D41B0: 8B 45 E0                 mov     )!eax!)	,	 *	[	!ebp!	-	20h	]	*
// 0x6F8D41B3: 8D 55 E8                 lea     )!edx!)	,	 *	[	!ebp!	-	18h	]	*
// 0x6F8D41B6: 39 D0                    cmp     )!eax!)	,	 *!edx!*
// 0x6F8D41B8: 74 CA                    jz       short  )(6F8D4184loc_6F8D4184)
// 0x6F8D41BA: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D41BD: E8 5E D9 08 00           call    )%(6F961B20j_free_1%)
// 0x6F8D41C2: EB C0                    jmp      short  )(6F8D4184loc_6F8D4184)
// 0x6F8D41C4: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D41C7: 75 21                    jnz      short  )(6F8D41EAloc_6F8D41EA)
// 0x6F8D41C9: C7 45 88 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	78h	]	)	,	 *0*
// 0x6F8D41D0: E8 FB DE 08 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F8D41D5: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D41DB: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D41DE: C7 45 88 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	78h	]	)	,	 *0FFFFFFFFh*
// 0x6F8D41E5: E8 86 DB FC FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F8D41EA: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D41ED: 75 25                    jnz      short  )(6F8D4214loc_6F8D4214)
// 0x6F8D41EF: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D41F5: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D41F8: E8 03 DC 08 00           call    )(6F961E00sub_6F961E00)
// 0x6F8D41FD: 8B 8D 48 FF FF FF        mov     )!ecx!)	,	 *	[	!ebp!	-	0B8h	]	*
// 0x6F8D4203: 8B 01                    mov     )!eax!)	,	 *	[	!ecx!	]	*
// 0x6F8D4205: FF 50 04                 call    ) dword ptr  	[	!eax!	+	4	]	)
// 0x6F8D4208: C7 45 88 03 00 00 00     mov     ) dword ptr  	[	!ebp!	-	78h	]	)	,	 *3*
// 0x6F8D420F: E8 2C E6 08 00           call    )(6F962840sub_6F962840)
// 0x6F8D4214: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8D4217: 75 10                    jnz      short  )(6F8D4229loc_6F8D4229)
// 0x6F8D4219: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F8D421F: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8D4222: E8 D9 DB 08 00           call    )(6F961E00sub_6F961E00)
// 0x6F8D4227: EB DF                    jmp      short  )(6F8D4208loc_6F8D4208)
// 0x6F8D4229: 0F 0B                    ud2

// ======================================================================
// End of disassembly for sub_6F8D4171
