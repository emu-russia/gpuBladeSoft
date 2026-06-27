signed int __cdecl sub_6F6B7510(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, signed int a7)
{
  signed int result; // eax@1
  __int64 v8; // rax@2
  int v9; // edi@2
  __int16 v10; // cx@2
  __int64 v11; // rax@2
  signed int v12; // edi@2
  int v13; // [sp+30h] [bp-2Ch]@2
  int v14; // [sp+34h] [bp-28h]@2
  int v15; // [sp+38h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v13 = a5;
    v14 = a6;
    v15 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v13);
    v8 = (signed int)((~((unsigned __int64)v14 >> 32) & v14) - 255);
    v9 = 4 * *a1;
    v10 = (4
         * (((signed int)(dword_6FBBFE54[v9] + (v8 & HIDWORD(v8))) >> 31) & (LOWORD(dword_6FBBFE54[v9])
                                                                           + (v8 & WORD2(v8))))
         + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9]
                              + (((~(v13 >> 31) & v13) - 255) & (((~(v13 >> 31) & v13) - 255) >> 31))) >> 31) & (dword_6FBBFE50[v9] + (((~(v13 >> 31) & v13) - 255) & (((~(v13 >> 31) & v13) - 255) >> 31))))
                           + 255) >> 3) & 0x1F;
    v11 = dword_6FBBFE58[v9] + ((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255));
    *a1 = (((WORD2(v11) & (unsigned __int16)v11) + 255) << 7) & 0x7C00 | v10;
    LODWORD(v11) = *a2;
    v12 = a5 + (unsigned __int8)*a2 - 255;
    HIDWORD(v11) = ((a6 + BYTE1(v11) - 255) >> 31) & (a6 + BYTE1(v11) - 255);
    result = v12 >> 31;
    *a2 = (((v12 >> 31) & v12) + 255) | ((HIDWORD(v11) + 255) << 8) | (((((unsigned __int8)a7
                                                                        + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                        - 255) & (((unsigned __int8)a7
                                                                                 + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                 - 255) >> 31))
                                                                      + 255) << 16);
  }
  return result;
}
