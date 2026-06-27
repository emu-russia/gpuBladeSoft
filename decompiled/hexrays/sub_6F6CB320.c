int __cdecl sub_6F6CB320(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edi@1
  int v8; // eax@1
  int v9; // edx@1
  signed int v10; // ebp@1
  signed int v11; // esi@1
  int result; // eax@1
  int v13; // [sp+30h] [bp-2Ch]@1
  int v14; // [sp+34h] [bp-28h]@1
  int v15; // [sp+38h] [bp-24h]@1

  v13 = a5;
  v14 = a6;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v7 = 4 * *a1;
  v8 = dword_6FBBFE58[v7] + ((((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255) >> 2);
  *a1 = ((((unsigned __int16)((unsigned __int64)(v8 - 255) >> 32) & (unsigned __int16)(v8 - 255)) + 255) << 7) & 0x7C00 | (4 * (((dword_6FBBFE54[v7] + ((signed int)((((signed int)((v14 & ~((unsigned __int64)v14 >> 32)) - 255) >> 31) & ((v14 & ~((unsigned __int64)v14 >> 32)) - 255)) + 255) >> 2) - 255) >> 31) & (LOWORD(dword_6FBBFE54[v7]) + ((signed int)((((signed int)((v14 & ~((unsigned __int64)v14 >> 32)) - 255) >> 31) & ((v14 & ~((unsigned __int64)v14 >> 32)) - 255)) + 255) >> 2) - 255)) + 1020) & 0x3E0 | (((((dword_6FBBFE50[v7] + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2) - 255) >> 31) & (dword_6FBBFE50[v7] + ((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 2) - 255)) + 255) >> 3) & 0x1F;
  v9 = *a2;
  v10 = (unsigned __int8)*a2 + ((signed int)a5 >> 2) - 255;
  v11 = ((signed int)a6 >> 2) + BYTE1(v9) - 255;
  result = (((((signed int)a7 >> 2) + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) & ((((signed int)a7 >> 2)
                                                                                          + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                          - 255) >> 31))
          + 255) << 16;
  *a2 = (((v10 >> 31) & v10) + 255) | result | ((((v11 >> 31) & v11) + 255) << 8);
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
