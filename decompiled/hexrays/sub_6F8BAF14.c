/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F8BAF14
 * Address: 0x6F8BAF14
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F8BAF14
// Address: 0x6F8BAF14 - 0x6F8BAFFC
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F8BAF14: 8B 44 24 24              mov     )!eax!)	,	 *	[	!esp!	+	arg_20	]	*
// 0x6F8BAF18: 8B 54 24 28              mov     )!edx!)	,	 *	[	!esp!	+	arg_24	]	*
// 0x6F8BAF1C: 89 44 24 14              mov     )	[	!esp!	+	arg_10	]	)	,	 *!eax!*
// 0x6F8BAF20: 8B 44 24 20              mov     )!eax!)	,	 *	[	!esp!	+	arg_1C	]	*
// 0x6F8BAF24: 85 C0                    test    )!eax!)	,	 *!eax!*
// 0x6F8BAF26: 0F 85 99 00 00 00        jnz     )(6F8BAFC5loc_6F8BAFC5)
// 0x6F8BAF2C: 8B 44 24 14              mov     )!eax!)	,	 *	[	!esp!	+	arg_10	]	*
// 0x6F8BAF30: 83 EA 01                 sub     )!edx!)	,	 *1*
// 0x6F8BAF33: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8BAF36: 0F 85 A7 00 00 00        jnz     )(6F8BAFE3loc_6F8BAFE3)
// 0x6F8BAF3C: E8 BF 6E 0A 00           call    )(6F961E00sub_6F961E00)
// 0x6F8BAF41: 8B 10                    mov     )!edx!)	,	 *	[	!eax!	]	*
// 0x6F8BAF43: 89 C1                    mov     )!ecx!)	,	 *!eax!*
// 0x6F8BAF45: FF 52 08                 call    ) dword ptr  	[	!edx!	+	8	]	)
// 0x6F8BAF48: C7 04 24 02 00 00 00     mov     ) dword ptr  	[	!esp!	+	0	]	)	,	 *2*
// 0x6F8BAF4F: 89 44 24 14              mov     )	[	!esp!	+	arg_10	]	)	,	 *!eax!*
// 0x6F8BAF53: 8B 44 24 10              mov     )!eax!)	,	 *	[	!esp!	+	arg_C	]	*
// 0x6F8BAF57: C7 44 24 20 02 00 00 00  mov     )	[	!esp!	+	arg_1C	]	)	,	 *2*
// 0x6F8BAF5F: FF D0                    call    )!eax!)
// 0x6F8BAF61: 89 44 24 0C              mov     )	[	!esp!	+	arg_8	]	)	,	 *!eax!*
// 0x6F8BAF65: C7 44 24 08 0B 00 00 00  mov     )	[	!esp!	+	arg_4	]	)	,	 *0Bh*
// 0x6F8BAF6D: C7 44 24 04 01 00 00 00  mov     )	[	!esp!	+	arg_0	]	)	,	 *1*
// 0x6F8BAF75: C7 04 24 C6 43 BA 6F     mov     ) dword ptr  	[	!esp!	+	0	]	)	,	 * offset  (6FBA43C6aWhat*; "  what():  "
// 0x6F8BAF7C: E8 AF 67 FF FF           call    )%(6F8B1730fwrite%)
// 0x6F8BAF81: C7 04 24 02 00 00 00     mov     ) dword ptr  	[	!esp!	+	0	]	)	,	 *2*
// 0x6F8BAF88: 8B 44 24 10              mov     )!eax!)	,	 *	[	!esp!	+	arg_C	]	*
// 0x6F8BAF8C: FF D0                    call    )!eax!)
// 0x6F8BAF8E: 89 44 24 04              mov     )	[	!esp!	+	arg_0	]	)	,	 *!eax!*
// 0x6F8BAF92: 8B 44 24 14              mov     )!eax!)	,	 *	[	!esp!	+	arg_10	]	*
// 0x6F8BAF96: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8BAF99: E8 CA 67 FF FF           call    )%(6F8B1768fputs%)
// 0x6F8BAF9E: C7 04 24 02 00 00 00     mov     ) dword ptr  	[	!esp!	+	0	]	)	,	 *2*
// 0x6F8BAFA5: 8B 44 24 10              mov     )!eax!)	,	 *	[	!esp!	+	arg_C	]	*
// 0x6F8BAFA9: FF D0                    call    )!eax!)
// 0x6F8BAFAB: 89 44 24 04              mov     )	[	!esp!	+	arg_0	]	)	,	 *!eax!*
// 0x6F8BAFAF: C7 04 24 0A 00 00 00     mov     ) dword ptr  	[	!esp!	+	0	]	)	,	 *0Ah*
// 0x6F8BAFB6: E8 B5 67 FF FF           call    )%(6F8B1770fputc%)
// 0x6F8BAFBB: E8 10 71 0A 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F8BAFC0: E9 08 FF FF FF           jmp     )(6F8BAECDloc_6F8BAECD)
// 0x6F8BAFC5: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F8BAFC8: 75 30                    jnz      short  )(6F8BAFFAloc_6F8BAFFA)
// 0x6F8BAFCA: E8 01 71 0A 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F8BAFCF: 8B 44 24 14              mov     )!eax!)	,	 *	[	!esp!	+	arg_10	]	*
// 0x6F8BAFD3: C7 44 24 20 FF FF FF FF  mov     )	[	!esp!	+	arg_1C	]	)	,	 *0FFFFFFFFh*
// 0x6F8BAFDB: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8BAFDE: E8 8D 6D FE FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F8BAFE3: E8 18 6E 0A 00           call    )(6F961E00sub_6F961E00)
// 0x6F8BAFE8: C7 44 24 20 FF FF FF FF  mov     )	[	!esp!	+	arg_1C	]	)	,	 *0FFFFFFFFh*
// 0x6F8BAFF0: E8 DB 70 0A 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F8BAFF5: E9 D3 FE FF FF           jmp     )(6F8BAECDloc_6F8BAECD)
// 0x6F8BAFFA: 0F 0B                    ud2

// ======================================================================
// End of disassembly for sub_6F8BAF14
