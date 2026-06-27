/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F7B379C
 * Address: 0x6F7B379C
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F7B379C
// Address: 0x6F7B379C - 0x6F7B385C
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F7B379C: 8D 44 24 52              lea     )!eax!)	,	 *	[	!esp!	+	arg_4E	]	*
// 0x6F7B37A0: 8D 4C 24 58              lea     )!ecx!)	,	 *	[	!esp!	+	arg_54	]	*
// 0x6F7B37A4: 8D 54 24 54              lea     )!edx!)	,	 *	[	!esp!	+	arg_50	]	*
// 0x6F7B37A8: 89 44 24 04              mov     )	[	!esp!	+	arg_0	]	)	,	 *!eax!*
// 0x6F7B37AC: 8D 44 24 5C              lea     )!eax!)	,	 *	[	!esp!	+	arg_58	]	*
// 0x6F7B37B0: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F7B37B3: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B37BA: E8 F1 74 FF FF           call    )(6F7AACB0sub_6F7AACB0)
// 0x6F7B37BF: 84 C0                    test    )!al!)	,	 *!al!*
// 0x6F7B37C1: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B37C8: 0F 85 03 D8 FF FF        jnz     )(6F7B0FD1loc_6F7B0FD1)
// 0x6F7B37CE: 0F B7 80 5C 01 00 00     movzx   )!eax!)	,	 * word ptr  	[	!eax!	+	15Ch	]	*
// 0x6F7B37D5: 66 85 C0                 test    )!ax!)	,	 *!ax!*
// 0x6F7B37D8: 0F 85 BA 05 00 00        jnz     )(6F7B3D98loc_6F7B3D98)
// 0x6F7B37DE: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B37E5: 0F B7 40 74              movzx   )!eax!)	,	 * word ptr  	[	!eax!	+	74h	]	*
// 0x6F7B37E9: 66 85 C0                 test    )!ax!)	,	 *!ax!*
// 0x6F7B37EC: 74 A2                    jz       short  )(6F7B3790loc_6F7B3790)
// 0x6F7B37EE: 8B B4 24 A0 00 00 00     mov     )!esi!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B37F5: 8B 54 24 6C              mov     )!edx!)	,	 *	[	!esp!	+	arg_68	]	*
// 0x6F7B37F9: 0F B7 6C 24 52           movzx   )!ebp!)	,	 *	[	!esp!	+	arg_4E	]	*
// 0x6F7B37FE: 8B 4C 24 58              mov     )!ecx!)	,	 *	[	!esp!	+	arg_54	]	*
// 0x6F7B3802: 8B 5C 24 54              mov     )!ebx!)	,	 *	[	!esp!	+	arg_50	]	*
// 0x6F7B3806: 8B 76 7C                 mov     )!esi!)	,	 *	[	!esi!	+	7Ch	]	*
// 0x6F7B3809: 39 F2                    cmp     )!edx!)	,	 *!esi!*
// 0x6F7B380B: 0F 84 E8 05 00 00        jz      )(6F7B3DF9loc_6F7B3DF9)
// 0x6F7B3811: 83 E8 01                 sub     )!eax!)	,	 *1*
// 0x6F7B3814: 8D 56 04                 lea     )!edx!)	,	 *	[	!esi!	+	4	]	*
// 0x6F7B3817: 8B BC 24 A0 00 00 00     mov     )!edi!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B381E: 0F B7 C0                 movzx   )!eax!)	,	 *!ax!*
// 0x6F7B3821: 8D 6C C6 0C              lea     )!ebp!)	,	 *	[	!esi!	+	!eax!	*8+	0Ch	]	*
// 0x6F7B3825: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B382C: 0F B7 B0 2A 01 00 00     movzx   )!esi!)	,	 * word ptr  	[	!eax!	+	12Ah	]	*
// 0x6F7B3833: 0F B7 80 2C 01 00 00     movzx   )!eax!)	,	 * word ptr  	[	!eax!	+	12Ch	]	*
// 0x6F7B383A: 66 85 F6                 test    )!si!)	,	 *!si!*
// 0x6F7B383D: 74 03                    jz       short  )(6F7B3842loc_6F7B3842)
// 0x6F7B383F: 01 5A FC                 add     )	[	!edx!	-	4	]	)	,	 *!ebx!*
// 0x6F7B3842: 66 85 C0                 test    )!ax!)	,	 *!ax!*
// 0x6F7B3845: 74 02                    jz       short  )(6F7B3849loc_6F7B3849)
// 0x6F7B3847: 01 0A                    add     )	[	!edx!	]	)	,	 *!ecx!*
// 0x6F7B3849: 83 C2 08                 add     )!edx!)	,	 *8*
// 0x6F7B384C: 39 EA                    cmp     )!edx!)	,	 *!ebp!*
// 0x6F7B384E: 75 EA                    jnz      short  )(6F7B383Aloc_6F7B383A)
// 0x6F7B3850: 89 BC 24 A0 00 00 00     mov     )	[	!esp!	+	arg_9C	]	)	,	 *!edi!*
// 0x6F7B3857: E9 34 FF FF FF           jmp     )(6F7B3790loc_6F7B3790)

// ======================================================================
// End of disassembly for sub_6F7B379C
