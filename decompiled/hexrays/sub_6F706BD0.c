void __cdecl sub_6F706BD0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  __int64 v12; // rcx@4
  __int64 v13; // rdi@4
  __int64 v14; // rax@4
  int v15; // esi@7
  int v16; // edi@7
  int v17; // [sp+18h] [bp-44h]@3
  int v18; // [sp+1Ch] [bp-40h]@3
  int v19; // [sp+30h] [bp-2Ch]@4
  int v20; // [sp+34h] [bp-28h]@4
  int v21; // [sp+38h] [bp-24h]@4

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v17 = (unsigned __int8)v9;
      v18 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v19 = ((((v17 * a5 >> 7) - 255) >> 31) & ((v17 * a5 >> 7) - 255)) + 255;
        v20 = ((((v18 * a6 >> 7) - 255) >> 31) & ((v18 * a6 >> 7) - 255)) + 255;
        v21 = ((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v19);
        v12 = (v19 & ~(v19 >> 31)) - 255;
        HIDWORD(v12) &= v12;
        v13 = (v20 & ~(v20 >> 31)) - 255;
        LODWORD(v12) = 16 * *a1;
        v14 = (v21 & ~(v21 >> 31)) - 255;
        LOWORD(v14) = (4
                     * (((signed int)(*(int *)((char *)dword_6FBBFE54 + v12) + (HIDWORD(v13) & v13)) >> 31) & (*(_WORD *)((char *)dword_6FBBFE54 + v12) + (WORD2(v13) & v13)))
                     + 1020) & 0x3E0 | ((((unsigned __int16)(*(_WORD *)((char *)dword_6FBBFE58 + v12)
                                                           + (WORD2(v14) & v14)) & (unsigned __int16)((signed int)(*(int *)((char *)dword_6FBBFE58 + v12) + (HIDWORD(v14) & v14)) >> 31))
                                       + 255) << 7) & 0x7C00 | ((((*(int *)((char *)dword_6FBBFE50 + v12) + HIDWORD(v12)) & ((*(int *)((char *)dword_6FBBFE50 + v12) + HIDWORD(v12)) >> 31))
                                                               + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v14;
      }
      else
      {
        v20 = ((((v18 * a6 >> 7) - 255) >> 31) & ((v18 * a6 >> 7) - 255)) + 255;
        v19 = ((((a5 * v17 >> 7) - 255) >> 31) & ((a5 * v17 >> 7) - 255)) + 255;
        v21 = ((((a7 * v11 >> 7) - 255) >> 31) & ((a7 * v11 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v19);
        v15 = 4 * ((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 1020;
        LOWORD(v15) = v15 & 0x3E0;
        v16 = ((((v21 & ~(v21 >> 31)) - 255) & (((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) << 7;
        LOWORD(v16) = v16 & 0x7C00;
        LODWORD(v14) = v16 | v15 | (((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = v14;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v14;
    }
  }
}
