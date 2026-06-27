/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F7B2DD8
 * Address: 0x6F7B2DD8
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F7B2DD8
// Address: 0x6F7B2DD8 - 0x6F7B2E8F
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F7B2DD8: 8D 73 01                 lea     )!esi!)	,	 *	[	!ebx!	+	1	]	*
// 0x6F7B2DDB: 39 FE                    cmp     )!esi!)	,	 *!edi!*
// 0x6F7B2DDD: 89 74 24 28              mov     )	[	!esp!	+	arg_24	]	)	,	 *!esi!*
// 0x6F7B2DE1: 0F 87 46 06 00 00        ja      )(6F7B342Dloc_6F7B342D)
// 0x6F7B2DE7: 89 5C 24 38              mov     )	[	!esp!	+	arg_34	]	)	,	 *!ebx!*
// 0x6F7B2DEB: 90                       nop
// 0x6F7B2DEC: 8D 74 26 00              lea     )!esi!)	,	 *	[	!esi!	+	0	]	*
// 0x6F7B2DF0: 0F B6 4C 24 18           movzx   )!ecx!)	,	 *	[	!esp!	+	arg_14	]	*
// 0x6F7B2DF5: 84 0C 30                 test    )	[	!eax!	+	!esi!	]	)	,	 *!cl!*
// 0x6F7B2DF8: 74 18                    jz       short  )(6F7B2E12loc_6F7B2E12)
// 0x6F7B2DFA: 8D 4E FF                 lea     )!ecx!)	,	 *	[	!esi!	-	1	]	*
// 0x6F7B2DFD: 8D 53 01                 lea     )!edx!)	,	 *	[	!ebx!	+	1	]	*
// 0x6F7B2E00: 39 CA                    cmp     )!edx!)	,	 *!ecx!*
// 0x6F7B2E02: 77 0C                    ja       short  )(6F7B2E10loc_6F7B2E10)
// 0x6F7B2E04: 8B 44 24 68              mov     )!eax!)	,	 *	[	!esp!	+	arg_64	]	*
// 0x6F7B2E08: 39 F0                    cmp     )!eax!)	,	 *!esi!*
// 0x6F7B2E0A: 76 04                    jbe      short  )(6F7B2E10loc_6F7B2E10)
// 0x6F7B2E0C: 39 D8                    cmp     )!eax!)	,	 *!ebx!*
// 0x6F7B2E0E: 77 11                    ja       short  )(6F7B2E21loc_6F7B2E21)
// 0x6F7B2E10: 89 F3                    mov     )!ebx!)	,	 *!esi!*
// 0x6F7B2E12: 83 C6 01                 add     )!esi!)	,	 *1*
// 0x6F7B2E15: 39 FE                    cmp     )!esi!)	,	 *!edi!*
// 0x6F7B2E17: 77 1C                    ja       short  )(6F7B2E35loc_6F7B2E35)
// 0x6F7B2E19: 8B 85 A8 00 00 00        mov     )!eax!)	,	 *	[	!ebp!	+	0A8h	]	*
// 0x6F7B2E1F: EB CF                    jmp      short  )(6F7B2DF0loc_6F7B2DF0)
// 0x6F7B2E21: 8D 44 24 5C              lea     )!eax!)	,	 *	[	!esp!	+	arg_58	]	*
// 0x6F7B2E25: 89 1C 24                 mov     )	[	!esp!	+	0	]	)	,	 *!ebx!*
// 0x6F7B2E28: 89 74 24 04              mov     )	[	!esp!	+	arg_0	]	)	,	 *!esi!*
// 0x6F7B2E2C: 89 F3                    mov     )!ebx!)	,	 *!esi!*
// 0x6F7B2E2E: E8 5D C2 FF FF           call    )(6F7AF090sub_6F7AF090)
// 0x6F7B2E33: EB DD                    jmp      short  )(6F7B2E12loc_6F7B2E12)
// 0x6F7B2E35: 89 D8                    mov     )!eax!)	,	 *!ebx!*
// 0x6F7B2E37: 89 5C 24 34              mov     )	[	!esp!	+	arg_30	]	)	,	 *!ebx!*
// 0x6F7B2E3B: 8B 5C 24 38              mov     )!ebx!)	,	 *	[	!esp!	+	arg_34	]	*
// 0x6F7B2E3F: 39 D8                    cmp     )!eax!)	,	 *!ebx!*
// 0x6F7B2E41: 0F 84 E6 05 00 00        jz      )(6F7B342Dloc_6F7B342D)
// 0x6F7B2E47: 8D 50 01                 lea     )!edx!)	,	 *	[	!eax!	+	1	]	*
// 0x6F7B2E4A: 89 C1                    mov     )!ecx!)	,	 *!eax!*
// 0x6F7B2E4C: 0F B7 D2                 movzx   )!edx!)	,	 *!dx!*
// 0x6F7B2E4F: 39 FA                    cmp     )!edx!)	,	 *!edi!*
// 0x6F7B2E51: 77 10                    ja       short  )(6F7B2E63loc_6F7B2E63)
// 0x6F7B2E53: 8B 44 24 68              mov     )!eax!)	,	 *	[	!esp!	+	arg_64	]	*
// 0x6F7B2E57: 39 C8                    cmp     )!eax!)	,	 *!ecx!*
// 0x6F7B2E59: 76 08                    jbe      short  )(6F7B2E63loc_6F7B2E63)
// 0x6F7B2E5B: 39 D8                    cmp     )!eax!)	,	 *!ebx!*
// 0x6F7B2E5D: 0F 87 2A 0B 00 00        ja      )(6F7B398Dloc_6F7B398D)
// 0x6F7B2E63: 85 DB                    test    )!ebx!)	,	 *!ebx!*
// 0x6F7B2E65: 74 1F                    jz       short  )(6F7B2E86loc_6F7B2E86)
// 0x6F7B2E67: 8B 54 24 24              mov     )!edx!)	,	 *	[	!esp!	+	arg_20	]	*
// 0x6F7B2E6B: 8D 4B FF                 lea     )!ecx!)	,	 *	[	!ebx!	-	1	]	*
// 0x6F7B2E6E: 39 CA                    cmp     )!edx!)	,	 *!ecx!*
// 0x6F7B2E70: 77 14                    ja       short  )(6F7B2E86loc_6F7B2E86)
// 0x6F7B2E72: 8B 44 24 68              mov     )!eax!)	,	 *	[	!esp!	+	arg_64	]	*
// 0x6F7B2E76: 8B 7C 24 34              mov     )!edi!)	,	 *	[	!esp!	+	arg_30	]	*
// 0x6F7B2E7A: 39 F8                    cmp     )!eax!)	,	 *!edi!*
// 0x6F7B2E7C: 76 08                    jbe      short  )(6F7B2E86loc_6F7B2E86)
// 0x6F7B2E7E: 39 D8                    cmp     )!eax!)	,	 *!ebx!*
// 0x6F7B2E80: 0F 87 C8 0E 00 00        ja      )(6F7B3D4Eloc_6F7B3D4E)
// 0x6F7B2E86: 89 74 24 24              mov     )	[	!esp!	+	arg_20	]	)	,	 *!esi!*
// 0x6F7B2E8A: E9 A5 FD FF FF           jmp     )(6F7B2C34loc_6F7B2C34)

// ======================================================================
// End of disassembly for sub_6F7B2DD8
