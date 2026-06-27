/*
 * WARNING: Hex-Rays decompilation failed for this function
 * Function: sub_6F72BD60
 * Address: 0x6F72BD60
 * Error: Decompilation failed: 
 * Stack pointer at entry: 0
 * 
 * The following is a disassembly listing for manual analysis.
 * Each instruction is commented with // for C compatibility.
 */

// ======================================================================
// Function: sub_6F72BD60
// Address: 0x6F72BD60 - 0x6F72BF4E
// Error: Decompilation failed: 
// SP value at entry: 0
// ======================================================================

// 0x6F72BD60: 55                       push    )!ebp!)
// 0x6F72BD61: 57                       push    )!edi!)  ; sp=-4
// 0x6F72BD62: 56                       push    )!esi!)  ; sp=-8
// 0x6F72BD63: 53                       push    )!ebx!)  ; sp=-12
// 0x6F72BD64: 50                       push    )!eax!)  ; sp=-16
// 0x6F72BD65: B8 58 10 00 00           mov     )!eax!)	,	 *1058h*  ; sp=-20
// 0x6F72BD6A: E8 41 56 17 00           call    )(6F8A13B0sub_6F8A13B0)  ; sp=-20
// 0x6F72BD6F: 29 C4                    sub     )!esp!)	,	 *!eax!*  ; sp=-20
// 0x6F72BD71: 8B 0C 04                 mov     )!ecx!)	,	 *	[	!esp!	+	!eax!	+	14h	+	Memory	]	*  ; sp=-20
// 0x6F72BD74: 89 54 24 14              mov     )	[	!esp!	+	14h	]	)	,	 *!edx!*  ; sp=-20
// 0x6F72BD78: 8D 74 24 50              lea     )!esi!)	,	 *	[	!esp!	+	14h	+	arg_38	]	*  ; sp=-20
// 0x6F72BD7C: 8D 6C 24 40              lea     )!ebp!)	,	 *	[	!esp!	+	14h	+	arg_28	]	*  ; sp=-20
// 0x6F72BD80: 8B 15 E8 51 BB 6F        mov     )!edx!)	,	 *!ds!	:	(6FBB51E8dword_6FBB51E8*  ; sp=-20
// 0x6F72BD86: 89 F7                    mov     )!edi!)	,	 *!esi!*  ; sp=-20
// 0x6F72BD88: 89 4C 24 10              mov     )	[	!esp!	+	14h	+	var_4	]	)	,	 *!ecx!*  ; sp=-20
// 0x6F72BD8C: 8B 5A 20                 mov     )!ebx!)	,	 *	[	!edx!	+	20h	]	*  ; sp=-20
// 0x6F72BD8F: C7 44 24 08 6D 2C B5 6F  mov     )	[	!esp!	+	14h	+	var_C	]	)	,	 * offset  (6FB52C6DaSS_I_png*; "%s/%s.%i.png"  ; sp=-20
// 0x6F72BD97: C7 44 24 04 00 10 00 00  mov     )	[	!esp!	+	14h	+	var_10	]	)	,	 *1000h*  ; sp=-20
// 0x6F72BD9F: 89 5C 24 0C              mov     )	[	!esp!	+	14h	+	var_8	]	)	,	 *!ebx!*  ; sp=-20
// 0x6F72BDA3: 89 34 24                 mov     )	[	!esp!	+	14h	+	Memory	]	)	,	 *!esi!*  ; sp=-20
// 0x6F72BDA6: E8 85 57 02 00           call    )(6F751530sub_6F751530)  ; sp=-20
// 0x6F72BDAB: C7 44 24 24 00 00 00 00  mov     )	[	!esp!	+	14h	+	arg_C	]	)	,	 *0*  ; sp=-20
// 0x6F72BDB3: C7 44 24 28 00 00 00 00  mov     )	[	!esp!	+	14h	+	arg_10	]	)	,	 *0*  ; sp=-20
// 0x6F72BDBB: C7 44 24 2C 00 00 00 00  mov     )	[	!esp!	+	14h	+	arg_14	]	)	,	 *0*  ; sp=-20
// 0x6F72BDC3: C7 44 24 30 00 00 00 00  mov     )	[	!esp!	+	14h	+	arg_18	]	)	,	 *0*  ; sp=-20
// 0x6F72BDCB: C7 44 24 34 00 00 00 00  mov     )	[	!esp!	+	14h	+	arg_1C	]	)	,	 *0*  ; sp=-20
// 0x6F72BDD3: 89 6C 24 38              mov     )	[	!esp!	+	14h	+	arg_20	]	)	,	 *!ebp!*  ; sp=-20
// 0x6F72BDD7: 8B 07                    mov     )!eax!)	,	 *	[	!edi!	]	*  ; sp=-20
// 0x6F72BDD9: 83 C7 04                 add     )!edi!)	,	 *4*  ; sp=-20
// 0x6F72BDDC: 8D 88 FF FE FE FE        lea     )!ecx!)	,	 *	[	!eax!	-	1010101h	]	*  ; sp=-20
// 0x6F72BDE2: F7 D0                    not     )!eax!)  ; sp=-20
// 0x6F72BDE4: 21 C1                    and     )!ecx!)	,	 *!eax!*  ; sp=-20
// 0x6F72BDE6: 89 CA                    mov     )!edx!)	,	 *!ecx!*  ; sp=-20
// 0x6F72BDE8: 81 E2 80 80 80 80        and     )!edx!)	,	 *80808080h*  ; sp=-20
// 0x6F72BDEE: 74 E7                    jz       short  )(6F72BDD7loc_6F72BDD7)  ; sp=-20
// 0x6F72BDF0: 89 D0                    mov     )!eax!)	,	 *!edx!*  ; sp=-20
// 0x6F72BDF2: 8D 5F 02                 lea     )!ebx!)	,	 *	[	!edi!	+	2	]	*  ; sp=-20
// 0x6F72BDF5: C1 E8 10                 shr     )!eax!)	,	 *10h*  ; sp=-20
// 0x6F72BDF8: 81 E1 80 80 00 00        and     )!ecx!)	,	 *8080h*  ; sp=-20
// 0x6F72BDFE: 0F 45 C2                 cmovnz  )!eax!)	,	 *!edx!*  ; sp=-20
// 0x6F72BE01: 0F 45 DF                 cmovnz  )!ebx!)	,	 *!edi!*  ; sp=-20
// 0x6F72BE04: 89 C1                    mov     )!ecx!)	,	 *!eax!*  ; sp=-20
// 0x6F72BE06: 00 C1                    add     )!cl!)	,	 *!al!*  ; sp=-20
// 0x6F72BE08: 83 DB 03                 sbb     )!ebx!)	,	 *3*  ; sp=-20
// 0x6F72BE0B: 29 F3                    sub     )!ebx!)	,	 *!esi!*  ; sp=-20
// 0x6F72BE0D: 83 FB 0F                 cmp     )!ebx!)	,	 *0Fh*  ; sp=-20
// 0x6F72BE10: 0F 87 BA 00 00 00        ja      )(6F72BED0loc_6F72BED0)  ; sp=-20
// 0x6F72BE16: 83 FB 01                 cmp     )!ebx!)	,	 *1*  ; sp=-20
// 0x6F72BE19: 75 75                    jnz      short  )(6F72BE90loc_6F72BE90)  ; sp=-20
// 0x6F72BE1B: 0F B6 54 24 50           movzx   )!edx!)	,	 * byte ptr  	[	!esp!	+	14h	+	arg_38	]	*  ; sp=-20
// 0x6F72BE20: 89 E8                    mov     )!eax!)	,	 *!ebp!*  ; sp=-20
// 0x6F72BE22: 88 54 24 40              mov     ) byte ptr  	[	!esp!	+	14h	+	arg_28	]	)	,	 *!dl!*  ; sp=-20
// 0x6F72BE26: 89 5C 24 3C              mov     )	[	!esp!	+	14h	+	arg_24	]	)	,	 *!ebx!*  ; sp=-20
// 0x6F72BE2A: 8D 4C 24 24              lea     )!ecx!)	,	 *	[	!esp!	+	14h	+	arg_C	]	*  ; sp=-20
// 0x6F72BE2E: C6 04 18 00              mov     ) byte ptr  	[	!eax!	+	!ebx!	]	)	,	 *0*  ; sp=-20
// 0x6F72BE32: 8D 44 24 38              lea     )!eax!)	,	 *	[	!esp!	+	14h	+	arg_20	]	*  ; sp=-20
// 0x6F72BE36: 89 04 24                 mov     )	[	!esp!	+	14h	+	Memory	]	)	,	 *!eax!*  ; sp=-20
// 0x6F72BE39: E8 52 DF 02 00           call    )(6F759D90sub_6F759D90)  ; sp=-20
// 0x6F72BE3E: 83 EC 04                 sub     )!esp!)	,	 *4*  ; sp=-16
// 0x6F72BE41: 89 C3                    mov     )!ebx!)	,	 *!eax!*  ; sp=-20
// 0x6F72BE43: 8B 74 24 38              mov     )!esi!)	,	 *	[	!esp!	+	14h	+	arg_20	]	*  ; sp=-20
// 0x6F72BE47: 39 EE                    cmp     )!esi!)	,	 *!ebp!*  ; sp=-20
// 0x6F72BE49: 74 08                    jz       short  )(6F72BE53loc_6F72BE53)  ; sp=-20
// 0x6F72BE4B: 89 34 24                 mov     )	[	!esp!	+	14h	+	Memory	]	)	,	 *!esi!*; Memory  ; sp=-20
//                                                                      ; Memory
// 0x6F72BE4E: E8 CD 5C 23 00           call    )%(6F961B20j_free_1%)  ; sp=-20
// 0x6F72BE53: 85 DB                    test    )!ebx!)	,	 *!ebx!*  ; sp=-20
// 0x6F72BE55: 78 49                    js       short  )(6F72BEA0loc_6F72BEA0)  ; sp=-20
// 0x6F72BE57: 8D 6C 24 24              lea     )!ebp!)	,	 *	[	!esp!	+	14h	+	arg_C	]	*  ; sp=-20
// 0x6F72BE5B: C7 44 24 04 01 00 00 00  mov     )	[	!esp!	+	14h	+	var_10	]	)	,	 *1*  ; sp=-20
// 0x6F72BE63: B9 70 FD BB 6F           mov     )!ecx!)	,	 * offset  (6FBBFD70dword_6FBBFD70*  ; sp=-20
// 0x6F72BE68: 89 2C 24                 mov     )	[	!esp!	+	14h	+	Memory	]	)	,	 *!ebp!*  ; sp=-20
// 0x6F72BE6B: E8 90 EB F6 FF           call    )(6F69AA00sub_6F69AA00)  ; sp=-20
// 0x6F72BE70: 83 EC 08                 sub     )!esp!)	,	 *8*  ; sp=-12
// 0x6F72BE73: 8B 54 24 34              mov     )!edx!)	,	 *	[	!esp!	+	14h	+	arg_1C	]	*  ; sp=-20
// 0x6F72BE77: 85 D2                    test    )!edx!)	,	 *!edx!*  ; sp=-20
// 0x6F72BE79: 0F 85 81 00 00 00        jnz     )(6F72BF00loc_6F72BF00)  ; sp=-20
// 0x6F72BE7F: 81 C4 5C 10 00 00        add     )!esp!)	,	 *105Ch*  ; sp=-20
// 0x6F72BE85: 5B                       pop     )!ebx!)  ; sp=4168
// 0x6F72BE86: 5E                       pop     )!esi!)  ; sp=4172
// 0x6F72BE87: 5F                       pop     )!edi!)  ; sp=4176
// 0x6F72BE88: 5D                       pop     )!ebp!)  ; sp=4180
// 0x6F72BE89: C3                       retn  ; sp=4184
// 0x6F72BE8A: 8D B6 00 00 00 00         align  10h  ; sp=4184
// 0x6F72BE90: 89 E8                    mov     )!eax!)	,	 *!ebp!*  ; sp=-20
// 0x6F72BE92: 85 DB                    test    )!ebx!)	,	 *!ebx!*  ; sp=-20
// 0x6F72BE94: 74 90                    jz       short  )(6F72BE26loc_6F72BE26)  ; sp=-20
// 0x6F72BE96: EB 4B                    jmp      short  )(6F72BEE3loc_6F72BEE3)  ; sp=-20
// 0x6F72BE98: 8D B4 26 00 00 00 00 90   align  10h  ; sp=-20
// 0x6F72BEA0: C7 04 24 A0 5B B4 6F     mov     )	[	!esp!	+	14h	+	Memory	]	)	,	 * offset  $(6FB45BA0unk_6FB45BA0$*  ; sp=-20
// 0x6F72BEA7: 8D 4C 24 24              lea     )!ecx!)	,	 *	[	!esp!	+	14h	+	arg_C	]	*  ; sp=-20
// 0x6F72BEAB: E8 E0 D4 02 00           call    )(6F759390sub_6F759390)  ; sp=-20
// 0x6F72BEB0: 83 EC 04                 sub     )!esp!)	,	 *4*  ; sp=-16
// 0x6F72BEB3: 85 C0                    test    )!eax!)	,	 *!eax!*  ; sp=-20
// 0x6F72BEB5: 79 A0                    jns      short  )(6F72BE57loc_6F72BE57)  ; sp=-20
// 0x6F72BEB7: 81 C4 5C 10 00 00        add     )!esp!)	,	 *105Ch*  ; sp=-20
// 0x6F72BEBD: 5B                       pop     )!ebx!)  ; sp=4168
// 0x6F72BEBE: 5E                       pop     )!esi!)  ; sp=4172
// 0x6F72BEBF: 5F                       pop     )!edi!)  ; sp=4176
// 0x6F72BEC0: 5D                       pop     )!ebp!)  ; sp=4180
// 0x6F72BEC1: C3                       retn  ; sp=4184
// 0x6F72BEC2: 8D B4 26 00 00 00 00 8D B4 26 00 00 00 00  align  10h  ; sp=4184
// 0x6F72BED0: 8D 7B 01                 lea     )!edi!)	,	 *	[	!ebx!	+	1	]	*  ; sp=-20
// 0x6F72BED3: 89 3C 24                 mov     )	[	!esp!	+	14h	+	Memory	]	)	,	 *!edi!*  ; sp=-20
// 0x6F72BED6: E8 85 5C 23 00           call    )(6F961B60sub_6F961B60)  ; sp=-20
// 0x6F72BEDB: 89 5C 24 40              mov     )	[	!esp!	+	14h	+	arg_28	]	)	,	 *!ebx!*  ; sp=-20
// 0x6F72BEDF: 89 44 24 38              mov     )	[	!esp!	+	14h	+	arg_20	]	)	,	 *!eax!*  ; sp=-20
// 0x6F72BEE3: 83 FB 04                 cmp     )!ebx!)	,	 *4*  ; sp=-20
// 0x6F72BEE6: 73 38                    jnb      short  )(6F72BF20loc_6F72BF20)  ; sp=-20
// 0x6F72BEE8: 85 DB                    test    )!ebx!)	,	 *!ebx!*  ; sp=-20
// 0x6F72BEEA: 74 0A                    jz       short  )(6F72BEF6loc_6F72BEF6)  ; sp=-20
// 0x6F72BEEC: 0F B6 0E                 movzx   )!ecx!)	,	 * byte ptr  	[	!esi!	]	*  ; sp=-20
// 0x6F72BEEF: 88 08                    mov     )	[	!eax!	]	)	,	 *!cl!*  ; sp=-20
// 0x6F72BEF1: F6 C3 02                 test    )!bl!)	,	 *2*  ; sp=-20
// 0x6F72BEF4: 75 4C                    jnz      short  )(6F72BF42loc_6F72BF42)  ; sp=-20
// 0x6F72BEF6: 8B 44 24 38              mov     )!eax!)	,	 *	[	!esp!	+	14h	+	arg_20	]	*  ; sp=-20
// 0x6F72BEFA: E9 27 FF FF FF           jmp     )(6F72BE26loc_6F72BE26)  ; sp=-20
// 0x6F72BEFF: 90                        align  10h  ; sp=-20
// 0x6F72BF00: 8B 4C 24 24              mov     )!ecx!)	,	 *	[	!esp!	+	14h	+	arg_C	]	*  ; sp=-20
// 0x6F72BF04: 89 0C 24                 mov     )	[	!esp!	+	14h	+	Memory	]	)	,	 *!ecx!*; Memory  ; sp=-20
//                                                                      ; Memory
// 0x6F72BF07: E8 4C 58 18 00           call    )%(6F8B1758free%)  ; sp=-20
// 0x6F72BF0C: 81 C4 5C 10 00 00        add     )!esp!)	,	 *105Ch*  ; sp=-20
// 0x6F72BF12: 5B                       pop     )!ebx!)  ; sp=4168
// 0x6F72BF13: 5E                       pop     )!esi!)  ; sp=4172
// 0x6F72BF14: 5F                       pop     )!edi!)  ; sp=4176
// 0x6F72BF15: 5D                       pop     )!ebp!)  ; sp=4180
// 0x6F72BF16: C3                       retn  ; sp=4184
// 0x6F72BF17: 8D B4 26 00 00 00 00 66 90  align  10h  ; sp=4184
// 0x6F72BF20: 8B 54 24 50              mov     )!edx!)	,	 *	[	!esp!	+	14h	+	arg_38	]	*  ; sp=-20
// 0x6F72BF24: 89 10                    mov     )	[	!eax!	]	)	,	 *!edx!*  ; sp=-20
// 0x6F72BF26: 8B 7C 1C 4C              mov     )!edi!)	,	 *	[	!esp!	+	!ebx!	+	14h	+	arg_34	]	*  ; sp=-20
// 0x6F72BF2A: 89 7C 18 FC              mov     )	[	!eax!	+	!ebx!	-	4	]	)	,	 *!edi!*  ; sp=-20
// 0x6F72BF2E: 8D 78 04                 lea     )!edi!)	,	 *	[	!eax!	+	4	]	*  ; sp=-20
// 0x6F72BF31: 83 E7 FC                 and     )!edi!)	,	 *0FFFFFFFCh*  ; sp=-20
// 0x6F72BF34: 29 F8                    sub     )!eax!)	,	 *!edi!*  ; sp=-20
// 0x6F72BF36: 8D 0C 03                 lea     )!ecx!)	,	 *	[	!ebx!	+	!eax!	]	*  ; sp=-20
// 0x6F72BF39: 29 C6                    sub     )!esi!)	,	 *!eax!*  ; sp=-20
// 0x6F72BF3B: C1 E9 02                 shr     )!ecx!)	,	 *2*  ; sp=-20
// 0x6F72BF3E: F3 A5                    rep movsd  ; sp=-20
// 0x6F72BF40: EB B4                    jmp      short  )(6F72BEF6loc_6F72BEF6)  ; sp=-20
// 0x6F72BF42: 0F B7 74 1E FE           movzx   )!esi!)	,	 * word ptr  	[	!esi!	+	!ebx!	-	2	]	*  ; sp=-20
// 0x6F72BF47: 66 89 74 18 FE           mov     )	[	!eax!	+	!ebx!	-	2	]	)	,	 *!si!*  ; sp=-20
// 0x6F72BF4C: EB A8                    jmp      short  )(6F72BEF6loc_6F72BEF6)  ; sp=-20

// ======================================================================
// End of disassembly for sub_6F72BD60
