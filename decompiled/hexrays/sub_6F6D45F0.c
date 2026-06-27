void __cdecl sub_6F6D45F0(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // edx@2
  int v11; // ST18_4@3
  int v12; // ST1C_4@3
  int v13; // eax@3
  signed int v14; // esi@3
  int v15; // eax@4
  signed int v16; // edi@4
  unsigned __int16 v17; // dx@4
  int v18; // esi@4
  int v19; // edi@7
  int v20; // ecx@7
  int v21; // ecx@7
  int v22; // [sp+30h] [bp-2Ch]@3
  int v23; // [sp+34h] [bp-28h]@4
  int v24; // [sp+38h] [bp-24h]@4

  if ( (*a1 & 0x8000u) == 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = (unsigned __int8)v9;
      v12 = BYTE1(v9);
      v13 = (unsigned __int8)(v9 >> 16);
      v14 = (v12 * a6 >> 7) - 255;
      v22 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
      if ( v10 >> 7 )
      {
        v23 = ((v14 >> 31) & v14) + 255;
        v24 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v22);
        v15 = 4 * *a1;
        v16 = dword_6FBBFE50[v15 + 1]
            + ((((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 255) >> 2)
            - 255;
        v17 = (4 * ((v16 >> 31) & v16) + 1020) & 0x3E0 | ((((unsigned __int16)((dword_6FBBFE50[v15 + 2]
                                                                              + (((((v24 & ~(v24 >> 31)) - 255) & (((v24 & ~(v24 >> 31)) - 255) >> 31))
                                                                                + 255) >> 2)
                                                                              - 255) >> 31) & (unsigned __int16)(LOWORD(dword_6FBBFE50[v15 + 2]) + (((((v24 & ~(v24 >> 31)) - 255) & (((v24 & ~(v24 >> 31)) - 255) >> 31)) + 255) >> 2) - 255))
                                                         + 255) << 7) & 0x7C00 | ((((dword_6FBBFE50[v15]
                                                                                   + ((((((v22 & ~(v22 >> 31)) - 255) >> 31) & ((v22 & ~(v22 >> 31)) - 255))
                                                                                     + 255) >> 2)
                                                                                   - 255) & ((dword_6FBBFE50[v15]
                                                                                            + ((((((v22 & ~(v22 >> 31))
                                                                                                 - 255) >> 31) & ((v22 & ~(v22 >> 31)) - 255))
                                                                                              + 255) >> 2)
                                                                                            - 255) >> 31))
                                                                                 + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v17;
        v18 = v17;
      }
      else
      {
        v23 = ((v14 >> 31) & v14) + 255;
        v24 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v22);
        v19 = 4 * ((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 1020;
        LOWORD(v19) = v19 & 0x3E0;
        v20 = ((((v24 & ~(v24 >> 31)) - 255) & (((v24 & ~(v24 >> 31)) - 255) >> 31)) + 255) << 7;
        LOWORD(v20) = v20 & 0x7C00;
        v21 = v19 | (((((v22 & ~(v22 >> 31)) - 255) & (((v22 & ~(v22 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F | v20;
        *a1 = v21;
        v18 = (signed __int16)v21;
      }
      *a2 = dword_6FCBFE50[v18];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
