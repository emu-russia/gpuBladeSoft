/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F7B3606
 * Address: 0x6F7B3606
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F7B3606
// Address: 0x6F7B3606 - 0x6F7B36AC
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F7B3606: 8D 44 24 52              lea     )!eax!)	,	 *	[	!esp!	+	arg_4E	]	*
// 0x6F7B360A: 8D 4C 24 58              lea     )!ecx!)	,	 *	[	!esp!	+	arg_54	]	*
// 0x6F7B360E: 8D 54 24 54              lea     )!edx!)	,	 *	[	!esp!	+	arg_50	]	*
// 0x6F7B3612: 89 44 24 04              mov     )	[	!esp!	+	arg_0	]	)	,	 *!eax!*
// 0x6F7B3616: 8D 44 24 5C              lea     )!eax!)	,	 *	[	!esp!	+	arg_58	]	*
// 0x6F7B361A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F7B361D: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B3624: E8 87 76 FF FF           call    )(6F7AACB0sub_6F7AACB0)
// 0x6F7B3629: 84 C0                    test    )!al!)	,	 *!al!*
// 0x6F7B362B: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B3632: 0F 85 99 D9 FF FF        jnz     )(6F7B0FD1loc_6F7B0FD1)
// 0x6F7B3638: 8B 80 30 01 00 00        mov     )!eax!)	,	 *	[	!eax!	+	130h	]	*
// 0x6F7B363E: 85 C0                    test    )!eax!)	,	 *!eax!*
// 0x6F7B3640: 0F 8E 21 07 00 00        jle     )(6F7B3D67loc_6F7B3D67)
// 0x6F7B3646: 8B 9C 24 A0 00 00 00     mov     )!ebx!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B364D: 8B 6B 1C                 mov     )!ebp!)	,	 *	[	!ebx!	+	1Ch	]	*
// 0x6F7B3650: 89 DF                    mov     )!edi!)	,	 *!ebx!*
// 0x6F7B3652: EB 1E                    jmp      short  )(6F7B3672loc_6F7B3672)
// 0x6F7B3654: 80 BF 31 02 00 00 00     cmp     ) byte ptr  	[	!edi!	+	231h	]	)	,	 *0*
// 0x6F7B365B: 0F 85 F6 F9 FF FF        jnz     )(6F7B3057loc_6F7B3057)
// 0x6F7B3661: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F7B3664: 85 C0                    test    )!eax!)	,	 *!eax!*
// 0x6F7B3666: 89 87 30 01 00 00        mov     )	[	!edi!	+	130h	]	)	,	 *!eax!*
// 0x6F7B366C: 0F 8E 1C FF FF FF        jle     )(6F7B358Eloc_6F7B358E)
// 0x6F7B3672: 8B 57 18                 mov     )!edx!)	,	 *	[	!edi!	+	18h	]	*
// 0x6F7B3675: 83 ED 01                 sub     )!ebp!)	,	 *1*
// 0x6F7B3678: 89 6F 1C                 mov     )	[	!edi!	+	1Ch	]	)	,	 *!ebp!*
// 0x6F7B367B: 8B 14 AA                 mov     )!edx!)	,	 *	[	!edx!	+	!ebp!	*4]	*
// 0x6F7B367E: 66 39 57 74              cmp     )	[	!edi!	+	74h	]	)	,	 *!dx!*
// 0x6F7B3682: 76 D0                    jbe      short  )(6F7B3654loc_6F7B3654)
// 0x6F7B3684: 8B 44 24 58              mov     )!eax!)	,	 *	[	!esp!	+	arg_54	]	*
// 0x6F7B3688: 8B 4C 24 54              mov     )!ecx!)	,	 *	[	!esp!	+	arg_50	]	*
// 0x6F7B368C: 0F B7 D2                 movzx   )!edx!)	,	 *!dx!*
// 0x6F7B368F: C7 44 24 04 01 00 00 00  mov     )	[	!esp!	+	arg_0	]	)	,	 *1*
// 0x6F7B3697: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F7B369A: 89 F8                    mov     )!eax!)	,	 *!edi!*
// 0x6F7B369C: E8 4F AE FF FF           call    )(6F7AE4F0sub_6F7AE4F0)
// 0x6F7B36A1: 8B 6F 1C                 mov     )!ebp!)	,	 *	[	!edi!	+	1Ch	]	*
// 0x6F7B36A4: 8B 87 30 01 00 00        mov     )!eax!)	,	 *	[	!edi!	+	130h	]	*
// 0x6F7B36AA: EB B5                    jmp      short  )(6F7B3661loc_6F7B3661)

// ======================================================================
// End of disassembly for sub_6F7B3606
