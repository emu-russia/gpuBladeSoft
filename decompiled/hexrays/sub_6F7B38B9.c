/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F7B38B9
 * Address: 0x6F7B38B9
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F7B38B9
// Address: 0x6F7B38B9 - 0x6F7B3900
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F7B38B9: 89 E8                    mov     )!eax!)	,	 *!ebp!*
// 0x6F7B38BB: 29 D0                    sub     )!eax!)	,	 *!edx!*
// 0x6F7B38BD: 8D 14 95 FC FF FF FF     lea     )!edx!)	,	 *!ds!	:	0FFFFFFFCh	[	!edx!	*4]	*
// 0x6F7B38C4: C1 E0 02                 shl     )!eax!)	,	 *2*
// 0x6F7B38C7: 8D 34 01                 lea     )!esi!)	,	 *	[	!ecx!	+	!eax!	]	*
// 0x6F7B38CA: 8D 44 01 04              lea     )!eax!)	,	 *	[	!ecx!	+	!eax!	+	4	]	*
// 0x6F7B38CE: 8B 1E                    mov     )!ebx!)	,	 *	[	!esi!	]	*
// 0x6F7B38D0: 89 54 24 08              mov     )	[	!esp!	+	Size	]	)	,	 *!edx!* ; Size
//                                                                      ; Size
// 0x6F7B38D4: 89 44 24 04              mov     )	[	!esp!	+	Src	]	)	,	 *!eax!*  ; Src
//                                                                      ; Src
// 0x6F7B38D8: 89 34 24                 mov     )	[	!esp!	+	0	]	)	,	 *!esi!*    ; Dst
//                                                                      ; Dst
// 0x6F7B38DB: E8 D8 DD 0F 00           call    )%(6F8B16B8memmove%)
// 0x6F7B38E0: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B38E7: 8B 50 1C                 mov     )!edx!)	,	 *	[	!eax!	+	1Ch	]	*
// 0x6F7B38EA: 8B 40 18                 mov     )!eax!)	,	 *	[	!eax!	+	18h	]	*
// 0x6F7B38ED: 89 5C 90 FC              mov     )	[	!eax!	+	!edx!	*4-	4	]	)	,	 *!ebx!*
// 0x6F7B38F1: 8B 84 24 A0 00 00 00     mov     )!eax!)	,	 *	[	!esp!	+	arg_9C	]	*
// 0x6F7B38F8: 8B 40 0C                 mov     )!eax!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F7B38FB: E9 90 D4 FF FF           jmp     )(6F7B0D90loc_6F7B0D90)

// ======================================================================
// End of disassembly for sub_6F7B38B9
