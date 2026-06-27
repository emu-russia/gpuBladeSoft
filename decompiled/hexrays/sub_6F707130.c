void __cdecl sub_6F707130(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  int v12; // esi@4
  signed int v13; // esi@4
  signed int v14; // ebx@4
  signed int v15; // ecx@4
  int v16; // eax@4
  int v17; // esi@7
  int v18; // edi@7
  int v19; // [sp+18h] [bp-44h]@3
  int v20; // [sp+1Ch] [bp-40h]@3
  int v21; // [sp+30h] [bp-2Ch]@4
  int v22; // [sp+34h] [bp-28h]@4
  int v23; // [sp+38h] [bp-24h]@4

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v19 = (unsigned __int8)v9;
      v20 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v21 = ((((v19 * a5 >> 7) - 255) >> 31) & ((v19 * a5 >> 7) - 255)) + 255;
        v22 = ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255)) + 255;
        v23 = ((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v21);
        v12 = 4 * *a1;
        v16 = (int)&dword_6FBBFE50[v12];
        v13 = ((((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255) >> 1)
            + (dword_6FBBFE50[v12] >> 1)
            - 255;
        v14 = ((((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 255) >> 1)
            + (*(_DWORD *)(v16 + 8) >> 1)
            - 255;
        v15 = ((signed int)((((signed int)((v22 & ~((unsigned __int64)v22 >> 32)) - 255) >> 31) & ((v22 & ~((unsigned __int64)v22 >> 32))
                                                                                                 - 255))
                          + 255) >> 1)
            + (*(_DWORD *)(v16 + 4) >> 1)
            - 255;
        LOWORD(v16) = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)v14 & (unsigned __int16)(v14 >> 31))
                                                                 + 255) << 7) & 0x7C00 | (((v13 & (v13 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v16;
      }
      else
      {
        v22 = ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255)) + 255;
        v21 = ((((a5 * v19 >> 7) - 255) >> 31) & ((a5 * v19 >> 7) - 255)) + 255;
        v23 = ((((a7 * v11 >> 7) - 255) >> 31) & ((a7 * v11 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v21);
        v17 = 4 * ((((v22 & ~(v22 >> 31)) - 255) >> 31) & ((v22 & ~(v22 >> 31)) - 255)) + 1020;
        LOWORD(v17) = v17 & 0x3E0;
        v18 = ((((v23 & ~(v23 >> 31)) - 255) & (((v23 & ~(v23 >> 31)) - 255) >> 31)) + 255) << 7;
        LOWORD(v18) = v18 & 0x7C00;
        v16 = v18 | v17 | (((((v21 & ~(v21 >> 31)) - 255) & (((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = v16;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v16;
    }
  }
}
