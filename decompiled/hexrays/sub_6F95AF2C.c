/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F95AF2C
 * Address: 0x6F95AF2C
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F95AF2C
// Address: 0x6F95AF2C - 0x6F95AFC4
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F95AF2C: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F95AF2F: 8B 85 7C FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	84h	]	*
// 0x6F95AF35: 83 BD 78 FF FF FF 05     cmp     ) dword ptr  	[	!ebp!	-	88h	]	)	,	 *5*; switch 6 cases 
//                                                                      ; switch 6 cases 
// 0x6F95AF3C: 89 85 6C FF FF FF        mov     )	[	!ebp!	-	94h	]	)	,	 *!eax!*
// 0x6F95AF42: 77 0D                    ja       short  )(6F95AF51loc_6F95AF51); jumptable 6F95AF4A default case
// 0x6F95AF44: 8B 85 78 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	88h	]	*
// 0x6F95AF4A: FF 24 85 60 3E BA 6F     jmp     )!ds!	:	(6FBA3E60off_6FBA3E60	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F95AF51: 0F 0B                    ud2                     ; jumptable 6F95AF4A default case
//                                                                      ; (repeatable) jumptable 6F95AF4A default case
// 0x6F95AF53: 8B 85 70 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	90h	]	*  ; jumptable 6F95AF4A case 1
//                                                                      ; (repeatable) jumptable 6F95AF4A case 1
// 0x6F95AF59: C7 00 D0 00 BB 6F        mov     ) dword ptr  	[	!eax!	]	)	,	 * offset  (6FBB00D0off_6FBB00D0*
// 0x6F95AF5F: 89 C1                    mov     )!ecx!)	,	 *!eax!*
// 0x6F95AF61: E8 0A 44 FB FF           call    )(6F90F370sub_6F90F370)
// 0x6F95AF66: 8B 85 70 FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	90h	]	*  ; jumptable 6F95AF4A case 0
//                                                                      ; (repeatable) jumptable 6F95AF4A case 0
// 0x6F95AF6C: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95AF6F: E8 6C 72 00 00           call    )(6F9621E0sub_6F9621E0)
// 0x6F95AF74: 8B 85 6C FF FF FF        mov     )!eax!)	,	 *	[	!ebp!	-	94h	]	*
// 0x6F95AF7A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95AF7D: C7 85 78 FF FF FF FF FF FF FF mov     ) dword ptr  	[	!ebp!	-	88h	]	)	,	 *0FFFFFFFFh*
// 0x6F95AF87: E8 E4 6D F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F95AF8C: 8B 45 E0                 mov     )!eax!)	,	 *	[	!ebp!	-	20h	]	*  ; jumptable 6F95AF4A case 4
//                                                                      ; (repeatable) jumptable 6F95AF4A case 4
// 0x6F95AF8F: 8D 55 E8                 lea     )!edx!)	,	 *	[	!ebp!	-	18h	]	*
// 0x6F95AF92: 39 D0                    cmp     )!eax!)	,	 *!edx!*
// 0x6F95AF94: 74 08                    jz       short  )(6F95AF9Eloc_6F95AF9E); jumptable 6F95AF4A case 3
// 0x6F95AF96: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95AF99: E8 82 6B 00 00           call    )%(6F961B20j_free_1%)
// 0x6F95AF9E: 8B 45 C8                 mov     )!eax!)	,	 *	[	!ebp!	-	38h	]	*  ; jumptable 6F95AF4A case 3
//                                                                      ; (repeatable) jumptable 6F95AF4A case 3
// 0x6F95AFA1: 8D 55 D0                 lea     )!edx!)	,	 *	[	!ebp!	-	30h	]	*
// 0x6F95AFA4: 39 D0                    cmp     )!eax!)	,	 *!edx!*
// 0x6F95AFA6: 74 08                    jz       short  )(6F95AFB0loc_6F95AFB0); jumptable 6F95AF4A cases 2,5
// 0x6F95AFA8: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95AFAB: E8 70 6B 00 00           call    )%(6F961B20j_free_1%)
// 0x6F95AFB0: 8B 45 B0                 mov     )!eax!)	,	 *	[	!ebp!	-	50h	]	*  ; jumptable 6F95AF4A cases 2,5
//                                                                      ; (repeatable) jumptable 6F95AF4A cases 2,5
// 0x6F95AFB3: 8D 55 B8                 lea     )!edx!)	,	 *	[	!ebp!	-	48h	]	*
// 0x6F95AFB6: 39 D0                    cmp     )!eax!)	,	 *!edx!*
// 0x6F95AFB8: 74 AC                    jz       short  )(6F95AF66loc_6F95AF66); jumptable 6F95AF4A case 0
// 0x6F95AFBA: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95AFBD: E8 5E 6B 00 00           call    )%(6F961B20j_free_1%)
// 0x6F95AFC2: EB A2                    jmp      short  )(6F95AF66loc_6F95AF66); jumptable 6F95AF4A case 0

// ======================================================================
// End of disassembly for sub_6F95AF2C
