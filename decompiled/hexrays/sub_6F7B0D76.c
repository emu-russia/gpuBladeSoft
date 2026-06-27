/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F7B0D76
 * Address: 0x6F7B0D76
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F7B0D76
// Address: 0x6F7B0D76 - 0x6F7B0E1F
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F7B0D76: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B0D7D: E8 7E E6 FF FF           call    )(6F7AF400sub_6F7AF400)
// 0x6F7B0D82: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B0D89: 8B 40 0C                 mov     )!eax!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F7B0D8C: 8D 74 26 00              lea     )!esi!)	,	 *	[	!esi!	+	0	]	*
// 0x6F7B0D90: 85 C0                    test    )!eax!)	,	 *!eax!*
// 0x6F7B0D92: 0F 84 DA 1A 00 00        jz      )(6F7B2872sub_6F7B2872)
// 0x6F7B0D98: 3D 80 00 00 00           cmp     )!eax!)	,	 *80h*
// 0x6F7B0D9D: 0F 85 4A 30 00 00        jnz     )(6F7B3DEDloc_6F7B3DED)
// 0x6F7B0DA3: 8B B4 24 A0 00 00 00     mov     )!esi!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B0DAA: 8B 8E 98 01 00 00        mov     )!ecx!)	,	 *	[	!esi!	+	198h	]	*
// 0x6F7B0DB0: 8B 96 A0 01 00 00        mov     )!edx!)	,	 *	[	!esi!	+	1A0h	]	*
// 0x6F7B0DB6: 8D 0C 49                 lea     )!ecx!)	,	 *	[	!ecx!	+	!ecx!	*2]	*
// 0x6F7B0DB9: 8D 0C CA                 lea     )!ecx!)	,	 *	[	!edx!	+	!ecx!	*8]	*
// 0x6F7B0DBC: 39 CA                    cmp     )!edx!)	,	 *!ecx!*
// 0x6F7B0DBE: 0F 83 27 01 00 00        jnb     )(6F7B0EEBloc_6F7B0EEB)
// 0x6F7B0DC4: 89 F7                    mov     )!edi!)	,	 *!esi!*
// 0x6F7B0DC6: 8D 76 00                 lea     )!esi!)	,	 *	[	!esi!	+	0	]	*
// 0x6F7B0DC9: 8D BC 27 00 00 00 00     lea     )!edi!)	,	 *	[	!edi!	+	0	]	*
// 0x6F7B0DD0: 80 7A 10 00              cmp     ) byte ptr  	[	!edx!	+	10h	]	)	,	 *0*
// 0x6F7B0DD4: 74 0C                    jz       short  )(6F7B0DE2loc_6F7B0DE2)
// 0x6F7B0DD6: 0F B6 9F 70 01 00 00     movzx   )!ebx!)	,	 * byte ptr  	[	!edi!	+	170h	]	*
// 0x6F7B0DDD: 38 5A 0C                 cmp     )	[	!edx!	+	0Ch	]	)	,	 *!bl!*
// 0x6F7B0DE0: 74 3E                    jz       short  )(6F7B0E20loc_6F7B0E20)
// 0x6F7B0DE2: 83 C2 18                 add     )!edx!)	,	 *18h*
// 0x6F7B0DE5: 39 D1                    cmp     )!ecx!)	,	 *!edx!*
// 0x6F7B0DE7: 77 E7                    ja       short  )(6F7B0DD0loc_6F7B0DD0)
// 0x6F7B0DE9: 89 FD                    mov     )!ebp!)	,	 *!edi!*
// 0x6F7B0DEB: 80 BD E8 01 00 00 00     cmp     ) byte ptr  	[	!ebp!	+	1E8h	]	)	,	 *0*
// 0x6F7B0DF2: 75 20                    jnz      short  )(6F7B0E14loc_6F7B0E14)
// 0x6F7B0DF4: 83 BD 60 01 00 00 03     cmp     ) dword ptr  	[	!ebp!	+	160h	]	)	,	 *3*
// 0x6F7B0DFB: 75 17                    jnz      short  )(6F7B0E14loc_6F7B0E14)
// 0x6F7B0DFD: 8B 55 04                 mov     )!edx!)	,	 *	[	!ebp!	+	4	]	*
// 0x6F7B0E00: C7 82 28 01 00 00 FF FF FF FF mov     ) dword ptr  	[	!edx!	+	128h	]	)	,	 *0FFFFFFFFh*
// 0x6F7B0E0A: C7 82 2C 01 00 00 FF FF FF FF mov     ) dword ptr  	[	!edx!	+	12Ch	]	)	,	 *0FFFFFFFFh*
// 0x6F7B0E14: 81 C4 8C 00 00 00        add     )!esp!)	,	 *8Ch*
// 0x6F7B0E1A: 5B                       pop     )!ebx!)  ; sp=140
// 0x6F7B0E1B: 5E                       pop     )!esi!)  ; sp=144
// 0x6F7B0E1C: 5F                       pop     )!edi!)  ; sp=148
// 0x6F7B0E1D: 5D                       pop     )!ebp!)  ; sp=152
// 0x6F7B0E1E: C3                       retn  ; sp=156

// ======================================================================
// End of disassembly for sub_6F7B0D76
