unsigned int __cdecl sub_6F6F4550(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@2
  int v11; // eax@2
  unsigned __int16 v12; // cx@3
  int v13; // edi@3
  int v14; // edi@6
  __int64 v15; // rcx@6
  unsigned __int16 v16; // ax@6
  int v17; // [sp+18h] [bp-44h]@2
  int v18; // [sp+1Ch] [bp-40h]@2
  int v19; // [sp+30h] [bp-2Ch]@3
  int v20; // [sp+34h] [bp-28h]@3
  int v21; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v17 = (unsigned __int8)result;
    v18 = BYTE1(result);
    v10 = result >> 31;
    v11 = (unsigned __int8)(result >> 16);
    if ( v10 )
    {
      v19 = ((((v17 * a5 >> 7) - 255) >> 31) & ((v17 * a5 >> 7) - 255)) + 255;
      v20 = ((((v18 * a6 >> 7) - 255) >> 31) & ((v18 * a6 >> 7) - 255)) + 255;
      v21 = ((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v19);
      v14 = 4 * *a1;
      v15 = dword_6FBBFE54[v14] + ((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255));
      v16 = (4 * (WORD2(v15) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)(LOWORD(dword_6FBBFE58[v14])
                                                                          + ((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255))) & (unsigned __int16)((dword_6FBBFE58[v14] + ((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255))) >> 31))
                                                      + 255) << 7) & 0x7C00 | ((((dword_6FBBFE50[v14]
                                                                                + (((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31))) & ((dword_6FBBFE50[v14] + (((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31))) >> 31))
                                                                              + 255) >> 3) & 0x1F | 0x8000;
      v13 = v16;
      *a1 = v16;
    }
    else
    {
      v20 = ((((v18 * a6 >> 7) - 255) >> 31) & ((v18 * a6 >> 7) - 255)) + 255;
      v19 = ((((a5 * v17 >> 7) - 255) >> 31) & ((a5 * v17 >> 7) - 255)) + 255;
      v21 = ((((a7 * v11 >> 7) - 255) >> 31) & ((a7 * v11 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v19);
      v12 = (4 * ((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F | ((((unsigned __int16)((v21 & ~(v21 >> 31)) - 255) & (unsigned __int16)(((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) << 7) & 0x7C00;
      *a1 = v12;
      v13 = (signed __int16)v12;
    }
    *a2 = dword_6FCBFE50[v13];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
