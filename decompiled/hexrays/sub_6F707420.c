__int16 __cdecl sub_6F707420(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // edx@2
  int v11; // ebp@3
  signed int v12; // esi@3
  signed int v13; // eax@3
  __int64 v14; // rcx@4
  signed int v15; // esi@4
  __int64 v16; // rdi@6
  int v18; // [sp+30h] [bp-2Ch]@3
  int v19; // [sp+34h] [bp-28h]@3
  int v20; // [sp+38h] [bp-24h]@3

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = (unsigned __int8)v9;
      v12 = BYTE1(v9) * a6;
      v13 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v18 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
      v20 = ((v13 >> 31) & v13) + 255;
      v19 = ((((v12 >> 7) - 255) >> 31) & ((v12 >> 7) - 255)) + 255;
      if ( v10 >> 7 )
      {
        dword_6FCFFE50(a3, a4, &v18);
        v14 = (v18 & ~(v18 >> 31)) - 255;
        LODWORD(v14) = (signed int)((HIDWORD(v14) & v14) + 255) >> 1;
        HIDWORD(v14) = 16 * *a1;
        v15 = v14 + (*(int *)((char *)dword_6FBBFE50 + HIDWORD(v14)) >> 1) - 255;
        LOWORD(v9) = (4
                    * (((((signed int)((((signed int)((v19 & ~((unsigned __int64)v19 >> 32)) - 255) >> 31) & ((v19 & ~((unsigned __int64)v19 >> 32)) - 255))
                                     + 255) >> 1)
                       + (*(int *)((char *)&dword_6FBBFE50[1] + HIDWORD(v14)) >> 1)
                       - 255) >> 31) & (((signed int)((((signed int)((v19 & ~((unsigned __int64)v19 >> 32)) - 255) >> 31) & ((v19 & ~((unsigned __int64)v19 >> 32)) - 255))
                                                    + 255) >> 1)
                                      + (*(int *)((char *)&dword_6FBBFE50[1] + HIDWORD(v14)) >> 1)
                                      - 255))
                    + 1020) & 0x3E0 | ((((unsigned __int16)(((((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255))
                                                            + 255) >> 1)
                                                          + (*(int *)((char *)&dword_6FBBFE50[2] + HIDWORD(v14)) >> 1)
                                                          - 255) & (unsigned __int16)((((((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255))
                                                                                       + 255) >> 1)
                                                                                     + (*(int *)((char *)&dword_6FBBFE50[2]
                                                                                               + HIDWORD(v14)) >> 1)
                                                                                     - 255) >> 31))
                                      + 255) << 7) & 0x7C00 | (((v15 & (v15 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v9;
      }
      else
      {
        dword_6FCFFE50(a3, a4, &v18);
        v16 = (v20 & ~(v20 >> 31)) - 255;
        LOWORD(v9) = (4 * ((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255)) + 1020) & 0x3E0;
        *a1 = ((((unsigned __int16)v16 & WORD2(v16)) + 255) << 7) & 0x7C00 | v9 | (((((v18 & ~(v18 >> 31)) - 255) & (((v18 & ~(v18 >> 31)) - 255) >> 31))
                                                                                  + 255) >> 3) & 0x1F;
      }
    }
  }
  return v9;
}
