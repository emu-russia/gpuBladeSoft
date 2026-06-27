__int16 __cdecl sub_6F6DB1A0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // edx@2
  int v11; // ebp@3
  signed int v12; // esi@3
  signed int v13; // eax@3
  int v14; // ecx@4
  int v15; // ebp@4
  signed int v16; // esi@4
  signed int v17; // ebx@4
  signed int v18; // ecx@4
  int v19; // ecx@4
  __int64 v20; // rdi@7
  int v21; // edx@7
  int v23; // [sp+30h] [bp-2Ch]@3
  int v24; // [sp+34h] [bp-28h]@3
  int v25; // [sp+38h] [bp-24h]@3

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = (unsigned __int8)v9;
      v12 = BYTE1(v9) * a6;
      v13 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v23 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
      v25 = ((v13 >> 31) & v13) + 255;
      v24 = ((((v12 >> 7) - 255) >> 31) & ((v12 >> 7) - 255)) + 255;
      if ( v10 >> 7 )
      {
        dword_6FCFFE50(a3, a4, &v23);
        v14 = 4 * *a1;
        v15 = ((((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 255) >> 1)
            + (dword_6FBBFE50[v14] >> 1)
            - 255;
        v16 = ((((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 255) >> 1)
            + (dword_6FBBFE50[v14] >> 1)
            - 255;
        v17 = ((((((v25 & ~(v25 >> 31)) - 255) >> 31) & ((v25 & ~(v25 >> 31)) - 255)) + 255) >> 1)
            + (dword_6FBBFE50[v14 + 2] >> 1)
            - 255;
        v18 = ((signed int)((((signed int)((v24 & ~((unsigned __int64)v24 >> 32)) - 255) >> 31) & ((v24 & ~((unsigned __int64)v24 >> 32))
                                                                                                 - 255))
                          + 255) >> 1)
            + (dword_6FBBFE50[v14 + 1] >> 1)
            - 255;
        LOWORD(v9) = (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0;
        LOWORD(v16) = v9 | ((((unsigned __int16)v17 & (unsigned __int16)(v17 >> 31)) + 255) << 7) & 0x7C00 | (((v15 & (v16 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v16;
        v19 = (unsigned __int16)v16;
      }
      else
      {
        dword_6FCFFE50(a3, a4, &v23);
        v9 = ((v24 & ~(v24 >> 31)) - 255) >> 31;
        v20 = (v25 & ~(v25 >> 31)) - 255;
        v21 = 4 * (v9 & ((v24 & ~(v24 >> 31)) - 255)) + 1020;
        LOWORD(v21) = v21 & 0x3E0;
        HIDWORD(v20) = (((unsigned int)v20 & HIDWORD(v20)) + 255) << 7;
        WORD2(v20) &= 0x7C00u;
        HIDWORD(v20) |= v21 | (((((v23 & ~(v23 >> 31)) - 255) & (((v23 & ~(v23 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = WORD2(v20);
        v19 = SWORD2(v20);
      }
      *a2 = dword_6FCBFE50[v19];
    }
  }
  return v9;
}
