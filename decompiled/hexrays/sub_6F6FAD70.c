void __cdecl sub_6F6FAD70(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  __int64 v12; // rax@4
  int *v13; // edi@4
  signed int v14; // ecx@4
  int v15; // esi@4
  __int64 v16; // rdi@7
  __int64 v17; // rcx@7
  int v18; // [sp+18h] [bp-44h]@3
  int v19; // [sp+1Ch] [bp-40h]@3
  int v20; // [sp+30h] [bp-2Ch]@4
  int v21; // [sp+34h] [bp-28h]@4
  int v22; // [sp+38h] [bp-24h]@4

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v18 = (unsigned __int8)v9;
      v19 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v21 = ((((v19 * a6 >> 7) - 255) >> 31) & ((v19 * a6 >> 7) - 255)) + 255;
        v20 = ((((v18 * a5 >> 7) - 255) >> 31) & ((v18 * a5 >> 7) - 255)) + 255;
        v22 = ((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v20);
        v12 = (v20 & ~(v20 >> 31)) - 255;
        v13 = &dword_6FBBFE50[4 * *a1];
        LODWORD(v12) = *v13 + ((signed int)((HIDWORD(v12) & v12) + 255) >> 2) - 255;
        v14 = v13[1] + ((((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255) >> 2) - 255;
        LOWORD(v15) = (4 * ((v14 >> 31) & v14) + 1020) & 0x3E0 | ((((unsigned __int16)((v13[2]
                                                                                      + (((((v22 & ~(v22 >> 31)) - 255) & (((v22 & ~(v22 >> 31)) - 255) >> 31))
                                                                                        + 255) >> 2)
                                                                                      - 255) >> 31) & (unsigned __int16)(*((_WORD *)v13 + 4) + (((((v22 & ~(v22 >> 31)) - 255) & (((v22 & ~(v22 >> 31)) - 255) >> 31)) + 255) >> 2) - 255))
                                                                 + 255) << 7) & 0x7C00 | ((signed int)((v12 & ((signed int)v12 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v15;
      }
      else
      {
        v21 = ((((v19 * a6 >> 7) - 255) >> 31) & ((v19 * a6 >> 7) - 255)) + 255;
        v20 = ((((a5 * v18 >> 7) - 255) >> 31) & ((a5 * v18 >> 7) - 255)) + 255;
        v22 = ((((a7 * v11 >> 7) - 255) >> 31) & ((a7 * v11 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v20);
        v16 = (v20 & ~(v20 >> 31)) - 255;
        HIDWORD(v16) = ((signed int)((v16 & HIDWORD(v16)) + 255) >> 3) & 0x1F;
        LODWORD(v16) = 4 * ((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 1020;
        v17 = (v22 & ~(v22 >> 31)) - 255;
        LOWORD(v16) = v16 & 0x3E0;
        HIDWORD(v17) = (((unsigned int)v17 & HIDWORD(v17)) + 255) << 7;
        WORD2(v17) &= 0x7C00u;
        v15 = HIDWORD(v17) | v16 | HIDWORD(v16);
        *a1 = v15;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v15;
    }
  }
}
