/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F920EDA
 * Address: 0x6F920EDA
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F920EDA
// Address: 0x6F920EDA - 0x6F920F8F
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F920EDA: 8B 44 24 44              mov     )!eax!)	,	 *	[	!esp!	+	arg_40	]	*
// 0x6F920EDE: 83 7C 24 40 05           cmp     )	[	!esp!	+	arg_3C	]	)	,	 *5* ; switch 6 cases 
//                                                                      ; switch 6 cases 
// 0x6F920EE3: 89 44 24 20              mov     )	[	!esp!	+	arg_1C	]	)	,	 *!eax!*
// 0x6F920EE7: 8B 44 24 48              mov     )!eax!)	,	 *	[	!esp!	+	arg_44	]	*
// 0x6F920EEB: 77 0B                    ja       short  )(6F920EF8loc_6F920EF8); jumptable 6F920EF1 default case
// 0x6F920EED: 8B 54 24 40              mov     )!edx!)	,	 *	[	!esp!	+	arg_3C	]	*
// 0x6F920EF1: FF 24 95 A8 5D BA 6F     jmp     )!ds!	:	(6FBA5DA8off_6FBA5DA8	[	!edx!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F920EF8: 0F 0B                    ud2                     ; jumptable 6F920EF1 default case
//                                                                      ; (repeatable) jumptable 6F920EF1 default case
// 0x6F920EFA: C7 44 24 40 00 00 00 00  mov     )	[	!esp!	+	arg_3C	]	)	,	 *0* ; jumptable 6F920EF1 case 2
//                                                                      ; (repeatable) jumptable 6F920EF1 case 2
// 0x6F920F02: E8 C9 11 04 00           call    )(6F9620D0sub_6F9620D0)
// 0x6F920F07: 8B 44 24 20              mov     )!eax!)	,	 *	[	!esp!	+	arg_1C	]	*
// 0x6F920F0B: C7 44 24 40 FF FF FF FF  mov     )	[	!esp!	+	arg_3C	]	)	,	 *0FFFFFFFFh*
// 0x6F920F13: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F920F16: E8 55 0E F8 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F920F1B: E8 E0 0E 04 00           call    )(6F961E00sub_6F961E00)
// 0x6F920F20: 8B 5C 24 1C              mov     )!ebx!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F920F24: 8B 03                    mov     )!eax!)	,	 *	[	!ebx!	]	*
// 0x6F920F26: 03 58 F4                 add     )!ebx!)	,	 *	[	!eax!	-	0Ch	]	*
// 0x6F920F29: 83 4B 14 01              or      ) dword ptr  	[	!ebx!	+	14h	]	)	,	 *1*
// 0x6F920F2D: F6 43 10 01              test    ) byte ptr  	[	!ebx!	+	10h	]	)	,	 *1*
// 0x6F920F31: C7 44 24 40 02 00 00 00  mov     )	[	!esp!	+	arg_3C	]	)	,	 *2*
// 0x6F920F39: 74 4F                    jz       short  )(6F920F8Aloc_6F920F8A)
// 0x6F920F3B: E8 00 19 04 00           call    )(6F962840sub_6F962840)
// 0x6F920F40: C7 44 24 40 03 00 00 00  mov     )	[	!esp!	+	arg_3C	]	)	,	 *3*
// 0x6F920F48: E8 F3 18 04 00           call    )(6F962840sub_6F962840)
// 0x6F920F4D: 8B 44 24 30              mov     )!eax!)	,	 *	[	!esp!	+	arg_2C	]	*
// 0x6F920F51: 66 C7 00 00 00           mov     ) word ptr  	[	!eax!	]	)	,	 *0*
// 0x6F920F56: 8B 44 24 1C              mov     )!eax!)	,	 *	[	!esp!	+	arg_18	]	*
// 0x6F920F5A: 83 78 04 00              cmp     ) dword ptr  	[	!eax!	+	4	]	)	,	 *0*
// 0x6F920F5E: 8D 44 24 3C              lea     )!eax!)	,	 *	[	!esp!	+	arg_38	]	*
// 0x6F920F62: 89 44 24 34              mov     )	[	!esp!	+	arg_30	]	)	,	 *!eax!*
// 0x6F920F66: 0F 84 0E FD FF FF        jz      )(6F920C7Aloc_6F920C7A)
// 0x6F920F6C: E9 9A FD FF FF           jmp     )(6F920D0Bloc_6F920D0B)
// 0x6F920F71: E8 5A 11 04 00           call    )(6F9620D0sub_6F9620D0)    ; jumptable 6F920EF1 case 1
//                                                                      ; (repeatable) jumptable 6F920EF1 case 1
// 0x6F920F76: 8B 44 24 20              mov     )!eax!)	,	 *	[	!esp!	+	arg_1C	]	*
// 0x6F920F7A: C7 44 24 40 FF FF FF FF  mov     )	[	!esp!	+	arg_3C	]	)	,	 *0FFFFFFFFh*
// 0x6F920F82: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F920F85: E8 E6 0D F8 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F920F8A: E8 B1 18 04 00           call    )(6F962840sub_6F962840)

// ======================================================================
// End of disassembly for sub_6F920EDA
