signed int __cdecl sub_6F6CB4C0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edi@1
  __int64 v8; // rax@1
  signed int v9; // esi@1
  signed int result; // eax@1
  int v11; // [sp+30h] [bp-2Ch]@1
  int v12; // [sp+34h] [bp-28h]@1
  int v13; // [sp+38h] [bp-24h]@1

  v11 = a5;
  v12 = a6;
  v13 = a7;
  dword_6FCFFE50(a3, a4, &v11);
  v7 = 4 * *a1;
  v8 = dword_6FBBFE58[v7] + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2) - 255;
  *a1 = (((WORD2(v8) & (unsigned __int16)v8) + 255) << 7) & 0x7C00 | (4
                                                                    * (((dword_6FBBFE54[v7]
                                                                       + ((signed int)((((signed int)((v12 & ~((unsigned __int64)v12 >> 32)) - 255) >> 31) & ((v12 & ~((unsigned __int64)v12 >> 32)) - 255))
                                                                                     + 255) >> 2)
                                                                       - 255) >> 31) & (LOWORD(dword_6FBBFE54[v7])
                                                                                      + ((signed int)((((signed int)((v12 & ~((unsigned __int64)v12 >> 32)) - 255) >> 31) & ((v12 & ~((unsigned __int64)v12 >> 32)) - 255)) + 255) >> 2)
                                                                                      - 255))
                                                                    + 1020) & 0x3E0 | (((((dword_6FBBFE50[v7]
                                                                                         + ((((((v11 & ~(v11 >> 31))
                                                                                              - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255))
                                                                                           + 255) >> 2)
                                                                                         - 255) >> 31) & (dword_6FBBFE50[v7] + ((((((v11 & ~(v11 >> 31)) - 255) >> 31) & ((v11 & ~(v11 >> 31)) - 255)) + 255) >> 2) - 255))
                                                                                      + 255) >> 3) & 0x1F;
  LODWORD(v8) = *a2;
  v9 = (unsigned __int8)*a2 + ((signed int)a5 >> 2) - 255;
  HIDWORD(v8) = ((((signed int)a6 >> 2) + BYTE1(v8) - 255) >> 31) & (((signed int)a6 >> 2) + BYTE1(v8) - 255);
  result = v9 >> 31;
  *a2 = (((v9 >> 31) & v9) + 255) | ((HIDWORD(v8) + 255) << 8) | ((((((signed int)a7 >> 2)
                                                                   + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                   - 255) & ((((signed int)a7 >> 2)
                                                                            + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                            - 255) >> 31))
                                                                 + 255) << 16);
  return result;
}
