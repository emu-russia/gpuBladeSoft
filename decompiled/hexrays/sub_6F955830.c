/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F955830
 * Address: 0x6F955830
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F955830
// Address: 0x6F955830 - 0x6F9559B3
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F955830: 83 C5 08                 add     )!ebp!)	,	 *8*
// 0x6F955833: 8B 45 CC                 mov     )!eax!)	,	 *	[	!ebp!	-	34h	]	*
// 0x6F955836: 83 7D C8 07              cmp     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *7*; switch 8 cases 
//                                                                      ; switch 8 cases 
// 0x6F95583A: 89 45 C0                 mov     )	[	!ebp!	-	40h	]	)	,	 *!eax!*
// 0x6F95583D: 77 0A                    ja       short  )(6F955849loc_6F955849); jumptable 6F955842 default case
// 0x6F95583F: 8B 45 C8                 mov     )!eax!)	,	 *	[	!ebp!	-	38h	]	*
// 0x6F955842: FF 24 85 4C 2C BA 6F     jmp     )!ds!	:	(6FBA2C4Coff_6FBA2C4C	[	!eax!	*4]	); switch jump
//                                                                      ; switch jump
// 0x6F955849: 0F 0B                    ud2                     ; jumptable 6F955842 default case
//                                                                      ; (repeatable) jumptable 6F955842 default case
// 0x6F95584B: C7 05 E4 A1 B4 6F C0 0F BB 6F mov     )(6FB4A1E4dword_6FB4A1E4)	,	 * offset  (6FBB0FC0off_6FBB0FC0*; jumptable 6F955842 case 7
//                                                                      ; (repeatable) jumptable 6F955842 case 7
// 0x6F955855: B9 E4 A1 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A1E4dword_6FB4A1E4*
// 0x6F95585A: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F955861: E8 BA 10 00 00           call    )(6F956920sub_6F956920)
// 0x6F955866: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F955869: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95586C: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F955873: E8 F8 C4 F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F955878: C7 05 C4 A3 B4 6F D0 0F BB 6F mov     )(6FB4A3C4dword_6FB4A3C4)	,	 * offset  (6FBB0FD0off_6FBB0FD0*; jumptable 6F955842 case 0
//                                                                      ; (repeatable) jumptable 6F955842 case 0
// 0x6F955882: B9 C4 A3 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A3C4dword_6FB4A3C4*
// 0x6F955887: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F95588E: E8 8D 10 00 00           call    )(6F956920sub_6F956920)
// 0x6F955893: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F955896: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F955899: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F9558A0: E8 CB C4 F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F9558A5: C7 05 24 A3 B4 6F D0 0F BB 6F mov     )(6FB4A324dword_6FB4A324)	,	 * offset  (6FBB0FD0off_6FBB0FD0*; jumptable 6F955842 case 1
//                                                                      ; (repeatable) jumptable 6F955842 case 1
// 0x6F9558AF: B9 24 A3 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A324dword_6FB4A324*
// 0x6F9558B4: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F9558BB: E8 60 10 00 00           call    )(6F956920sub_6F956920)
// 0x6F9558C0: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F9558C3: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9558C6: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F9558CD: E8 9E C4 F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F9558D2: C7 05 88 A2 B4 6F D0 0F BB 6F mov     )(6FB4A288dword_6FB4A288)	,	 * offset  (6FBB0FD0off_6FBB0FD0*; jumptable 6F955842 case 2
//                                                                      ; (repeatable) jumptable 6F955842 case 2
// 0x6F9558DC: B9 88 A2 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A288dword_6FB4A288*
// 0x6F9558E1: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F9558E8: E8 33 10 00 00           call    )(6F956920sub_6F956920)
// 0x6F9558ED: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F9558F0: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9558F3: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F9558FA: E8 71 C4 F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F9558FF: C7 05 64 A4 B4 6F D0 0F BB 6F mov     )(6FB4A464dword_6FB4A464)	,	 * offset  (6FBB0FD0off_6FBB0FD0*; jumptable 6F955842 case 3
//                                                                      ; (repeatable) jumptable 6F955842 case 3
// 0x6F955909: B9 64 A4 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A464dword_6FB4A464*
// 0x6F95590E: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F955915: E8 06 10 00 00           call    )(6F956920sub_6F956920)
// 0x6F95591A: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F95591D: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F955920: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F955927: E8 44 C4 F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F95592C: C7 05 44 A1 B4 6F C0 0F BB 6F mov     )(6FB4A144dword_6FB4A144)	,	 * offset  (6FBB0FC0off_6FBB0FC0*; jumptable 6F955842 case 4
//                                                                      ; (repeatable) jumptable 6F955842 case 4
// 0x6F955936: B9 44 A1 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A144dword_6FB4A144*
// 0x6F95593B: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F955942: E8 D9 0F 00 00           call    )(6F956920sub_6F956920)
// 0x6F955947: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F95594A: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95594D: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F955954: E8 17 C4 F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F955959: C7 05 A4 A0 B4 6F C0 0F BB 6F mov     )(6FB4A0A4dword_6FB4A0A4)	,	 * offset  (6FBB0FC0off_6FBB0FC0*; jumptable 6F955842 case 5
//                                                                      ; (repeatable) jumptable 6F955842 case 5
// 0x6F955963: B9 A4 A0 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A0A4dword_6FB4A0A4*
// 0x6F955968: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F95596F: E8 AC 0F 00 00           call    )(6F956920sub_6F956920)
// 0x6F955974: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F955977: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F95597A: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F955981: E8 EA C3 F4 FF           call    )(6F8A1D70sub_6F8A1D70)
// 0x6F955986: C7 05 08 A0 B4 6F C0 0F BB 6F mov     )(6FB4A008dword_6FB4A008)	,	 * offset  (6FBB0FC0off_6FBB0FC0*; jumptable 6F955842 case 6
//                                                                      ; (repeatable) jumptable 6F955842 case 6
// 0x6F955990: B9 08 A0 B4 6F           mov     )!ecx!)	,	 * offset  (6FB4A008dword_6FB4A008*
// 0x6F955995: C7 45 C8 00 00 00 00     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0*
// 0x6F95599C: E8 7F 0F 00 00           call    )(6F956920sub_6F956920)
// 0x6F9559A1: 8B 45 C0                 mov     )!eax!)	,	 *	[	!ebp!	-	40h	]	*
// 0x6F9559A4: 89 04 24                 mov     )	[	!esp!	+	0	]	)	,	 *!eax!*
// 0x6F9559A7: C7 45 C8 FF FF FF FF     mov     ) dword ptr  	[	!ebp!	-	38h	]	)	,	 *0FFFFFFFFh*
// 0x6F9559AE: E8 BD C3 F4 FF           call    )(6F8A1D70sub_6F8A1D70)

// ======================================================================
// End of disassembly for sub_6F955830
