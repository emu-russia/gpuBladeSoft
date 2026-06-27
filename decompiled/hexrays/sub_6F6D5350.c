__int16 __cdecl sub_6F6D5350(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  int v10; // esi@4
  __int64 v11; // rcx@4
  int v12; // edx@4
  int v13; // ecx@7
  __int64 v14; // rdi@7
  int v16; // [sp+1Ch] [bp-40h]@3
  int v17; // [sp+30h] [bp-2Ch]@4
  int v18; // [sp+34h] [bp-28h]@4
  int v19; // [sp+38h] [bp-24h]@4

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v16 = (unsigned __int8)(v9 >> 16);
      if ( v9 >> 31 )
      {
        v17 = (((((unsigned __int8)v9 * a5 >> 7) - 255) >> 31) & (((unsigned __int8)v9 * a5 >> 7) - 255)) + 255;
        v19 = ((((v16 * a7 >> 7) - 255) >> 31) & ((v16 * a7 >> 7) - 255)) + 255;
        v18 = ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v17);
        v10 = 4 * *a1;
        v11 = dword_6FBBFE54[v10] + ((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255));
        LOWORD(v9) = (4 * (WORD2(v11) & v11) + 1020) & 0x3E0 | ((((unsigned __int16)(LOWORD(dword_6FBBFE58[v10])
                                                                                   + ((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255))) & (unsigned __int16)((dword_6FBBFE58[v10] + ((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255))) >> 31))
                                                               + 255) << 7) & 0x7C00 | ((((dword_6FBBFE50[v10]
                                                                                         + (((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31))) & ((dword_6FBBFE50[v10] + (((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31))) >> 31))
                                                                                       + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v9;
        v12 = (unsigned __int16)v9;
      }
      else
      {
        v17 = ((((a5 * (unsigned __int8)v9 >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)v9 >> 7) - 255)) + 255;
        v18 = ((((a6 * BYTE1(v9) >> 7) - 255) >> 31) & ((a6 * BYTE1(v9) >> 7) - 255)) + 255;
        v19 = ((((v16 * a7 >> 7) - 255) >> 31) & ((v16 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v17);
        v9 = ((v18 & ~(v18 >> 31)) - 255) >> 31;
        v13 = 4 * (v9 & ((v18 & ~(v18 >> 31)) - 255)) + 1020;
        LOWORD(v13) = v13 & 0x3E0;
        v14 = (v19 & ~(v19 >> 31)) - 255;
        HIDWORD(v14) = (((unsigned int)v14 & HIDWORD(v14)) + 255) << 7;
        WORD2(v14) &= 0x7C00u;
        HIDWORD(v14) |= v13 | (((((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = WORD2(v14);
        v12 = SWORD2(v14);
      }
      *a2 = dword_6FCBFE50[v12];
    }
  }
  return v9;
}
