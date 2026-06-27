int __usercall sub_6F68F970@<eax>(_WORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int *v7; // ebp@1
  _WORD *v8; // ST10_4@1
  __int64 v9; // rax@1
  int *v10; // esi@1
  signed int v11; // edi@1
  int result; // eax@1
  int v13; // [sp+20h] [bp-3Ch]@1
  int v14; // [sp+24h] [bp-38h]@1
  int v15; // [sp+28h] [bp-34h]@1

  v7 = a2;
  v8 = a1;
  v13 = a5;
  v14 = a6;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v9 = (v15 & ~(v15 >> 31)) - 255;
  LODWORD(v9) = (HIDWORD(v9) & v9) + 255;
  v10 = &dword_6FBBFE50[4 * *v8];
  HIDWORD(v9) = *v10 - (((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255);
  v11 = v10[1] - (((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255);
  *v8 = (((unsigned __int16)~(unsigned __int16)((v10[2] - (signed int)v9) >> 31) & (unsigned __int16)(*((_WORD *)v10 + 4) - v9)) << 7) & 0x7C00 | 4 * (~(unsigned __int16)(v11 >> 31) & v11) & 0x3E0 | ((~(SHIDWORD(v9) >> 31) & HIDWORD(v9)) >> 3) & 0x1F;
  HIDWORD(v9) = *v7;
  result = ~(((unsigned __int8)*v7 - a5) >> 31) & ((unsigned __int8)*v7 - a5) | ((((unsigned __int8)((unsigned int)*v7 >> 16)
                                                                                 - a7) & ~(((unsigned __int8)((unsigned int)*v7 >> 16)
                                                                                          - a7) >> 31)) << 16) | (((BYTE5(v9) - a6) & ~((BYTE5(v9) - a6) >> 31)) << 8);
  *v7 = result;
  return result;
}
