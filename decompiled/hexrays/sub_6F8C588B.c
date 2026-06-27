/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F8C588B
 * Address: 0x6F8C588B
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F8C588B
// Address: 0x6F8C588B - 0x6F8C5997
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F8C588B: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F8C588E: 8B 45 CC                 mov     )!eax!)	,	 *	[	!ebp!	-	34h	]	*
// 0x6F8C5891: 83 7D C8 0F              cmp     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0Fh*; switch 16 cases 
//                                                                      ; switch 16 cases 
// 0x6F8C5895: 89 45 C0                 mov     )	[	!ebp!	-	40h	]	)	,	 *!eax!*
// 0x6F8C5898: 77 0A                    ja       short  )(6F8C58A4loc_6F8C58A4); jumptable 6F8C589D default case
// 0x6F8C589A: 8B 45 C8                 mov     )!eax!)	,	 *	[	!ebp!	-	38h	]	*
// 0x6F8C589D: FF 24 85 C4 36 BA 6F     jmp     )!ds!	:	(6FBA36C4off_6FBA36C4	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F8C58A4: 0F 0B                    ud2                     ; jumptable 6F8C589D default case
//                                                                      ; (repeatable) jumptable 6F8C589D default case
// 0x6F8C58A6: 8B 4D A0                 mov     )!ecx!)	,	 *	[	!ebp!	-	60h	]	*  ; jumptable 6F8C589D case 15
//                                                                      ; (repeatable) jumptable 6F8C589D case 15
// 0x6F8C58A9: E8 C2 27 07 00           call    )(6F938070nullsub_18)
// 0x6F8C58AE: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D cases 0,1
//                                                                      ; (repeatable) jumptable 6F8C589D cases 0,1
// 0x6F8C58B1: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8C58B4: E8 67 C2 09 00           call    )%(6F961B20j_free_1%)
// 0x6F8C58B9: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F8C58BC: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F8C58BF: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F8C58C6: E8 A5 C4 FD FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F8C58CB: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D case 2
//                                                                      ; (repeatable) jumptable 6F8C589D case 2
// 0x6F8C58CE: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C58D1: E8 CA 00 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C58D6: 8B 4D B4                 mov     )!ecx!)	,	 *	[	!ebp!	-	4Ch	]	*
// 0x6F8C58D9: E8 12 DA 08 00           call    )(6F9532F0sub_6F9532F0)
// 0x6F8C58DE: EB CE                    jmp      short  )(6F8C58AEloc_6F8C58AE); jumptable 6F8C589D cases 0,1
// 0x6F8C58E0: 8B 4D B4                 mov     )!ecx!)	,	 *	[	!ebp!	-	4Ch	]	*  ; jumptable 6F8C589D case 3
//                                                                      ; (repeatable) jumptable 6F8C589D case 3
// 0x6F8C58E3: E8 88 27 07 00           call    )(6F938070nullsub_18)
// 0x6F8C58E8: EB C4                    jmp      short  )(6F8C58AEloc_6F8C58AE); jumptable 6F8C589D cases 0,1
// 0x6F8C58EA: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D case 5
//                                                                      ; (repeatable) jumptable 6F8C589D case 5
// 0x6F8C58ED: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C58F0: E8 AB 00 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C58F5: 8B 4D B0                 mov     )!ecx!)	,	 *	[	!ebp!	-	50h	]	*
// 0x6F8C58F8: E8 03 3A 07 00           call    )(6F939300sub_6F939300)
// 0x6F8C58FD: EB AF                    jmp      short  )(6F8C58AEloc_6F8C58AE); jumptable 6F8C589D cases 0,1
// 0x6F8C58FF: 8B 4D B0                 mov     )!ecx!)	,	 *	[	!ebp!	-	50h	]	*  ; jumptable 6F8C589D case 6
//                                                                      ; (repeatable) jumptable 6F8C589D case 6
// 0x6F8C5902: E8 69 27 07 00           call    )(6F938070nullsub_18)
// 0x6F8C5907: EB A5                    jmp      short  )(6F8C58AEloc_6F8C58AE); jumptable 6F8C589D cases 0,1
// 0x6F8C5909: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D case 7
//                                                                      ; (repeatable) jumptable 6F8C589D case 7
// 0x6F8C590C: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C590F: E8 8C 00 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C5914: 8B 4D AC                 mov     )!ecx!)	,	 *	[	!ebp!	-	54h	]	*
// 0x6F8C5917: E8 84 33 07 00           call    )(6F938CA0sub_6F938CA0)
// 0x6F8C591C: EB 90                    jmp      short  )(6F8C58AEloc_6F8C58AE); jumptable 6F8C589D cases 0,1
// 0x6F8C591E: 8B 4D AC                 mov     )!ecx!)	,	 *	[	!ebp!	-	54h	]	*  ; jumptable 6F8C589D case 8
//                                                                      ; (repeatable) jumptable 6F8C589D case 8
// 0x6F8C5921: E8 4A 27 07 00           call    )(6F938070nullsub_18)
// 0x6F8C5926: EB 86                    jmp      short  )(6F8C58AEloc_6F8C58AE); jumptable 6F8C589D cases 0,1
// 0x6F8C5928: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D case 9
//                                                                      ; (repeatable) jumptable 6F8C589D case 9
// 0x6F8C592B: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C592E: E8 6D 00 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C5933: 8B 4D A8                 mov     )!ecx!)	,	 *	[	!ebp!	-	58h	]	*
// 0x6F8C5936: E8 A5 DF 08 00           call    )(6F9538E0sub_6F9538E0)
// 0x6F8C593B: E9 6E FF FF FF           jmp     )(6F8C58AEloc_6F8C58AE)    ; jumptable 6F8C589D cases 0,1
// 0x6F8C5940: 8B 4D A8                 mov     )!ecx!)	,	 *	[	!ebp!	-	58h	]	*  ; jumptable 6F8C589D case 10
//                                                                      ; (repeatable) jumptable 6F8C589D case 10
// 0x6F8C5943: E8 28 27 07 00           call    )(6F938070nullsub_18)
// 0x6F8C5948: E9 61 FF FF FF           jmp     )(6F8C58AEloc_6F8C58AE)    ; jumptable 6F8C589D cases 0,1
// 0x6F8C594D: 8B 4D BC                 mov     )!ecx!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D cases 4,11
//                                                                      ; (repeatable) jumptable 6F8C589D cases 4,11
// 0x6F8C5950: E8 1B 27 07 00           call    )(6F938070nullsub_18)
// 0x6F8C5955: E9 54 FF FF FF           jmp     )(6F8C58AEloc_6F8C58AE)    ; jumptable 6F8C589D cases 0,1
// 0x6F8C595A: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D case 12
//                                                                      ; (repeatable) jumptable 6F8C589D case 12
// 0x6F8C595D: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C5960: E8 3B 00 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C5965: 8B 4D A4                 mov     )!ecx!)	,	 *	[	!ebp!	-	5Ch	]	*
// 0x6F8C5968: E8 73 46 07 00           call    )(6F939FE0sub_6F939FE0)
// 0x6F8C596D: E9 3C FF FF FF           jmp     )(6F8C58AEloc_6F8C58AE)    ; jumptable 6F8C589D cases 0,1
// 0x6F8C5972: 8B 4D A4                 mov     )!ecx!)	,	 *	[	!ebp!	-	5Ch	]	*  ; jumptable 6F8C589D case 13
//                                                                      ; (repeatable) jumptable 6F8C589D case 13
// 0x6F8C5975: E8 F6 26 07 00           call    )(6F938070nullsub_18)
// 0x6F8C597A: E9 2F FF FF FF           jmp     )(6F8C58AEloc_6F8C58AE)    ; jumptable 6F8C589D cases 0,1
// 0x6F8C597F: 8B 45 BC                 mov     )!eax!)	,	 *	[	!ebp!	-	44h	]	*  ; jumptable 6F8C589D case 14
//                                                                      ; (repeatable) jumptable 6F8C589D case 14
// 0x6F8C5982: 8B 48 0C                 mov     )!ecx!)	,	 *	[	!eax!	+	0Ch	]	*
// 0x6F8C5985: E8 16 00 00 00           call    )(6F8C59A0sub_6F8C59A0)
// 0x6F8C598A: 8B 4D A0                 mov     )!ecx!)	,	 *	[	!ebp!	-	60h	]	*
// 0x6F8C598D: E8 DE 3F 07 00           call    )(6F939970sub_6F939970)
// 0x6F8C5992: E9 17 FF FF FF           jmp     )(6F8C58AEloc_6F8C58AE)    ; jumptable 6F8C589D cases 0,1

// ======================================================================
// End of disassembly for sub_6F8C588B
