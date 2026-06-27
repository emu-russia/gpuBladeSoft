void __cdecl sub_6F7013D0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  int v12; // eax@4
  int *v13; // edx@4
  int v14; // ebx@4
  signed int v15; // edx@4
  signed int v16; // ebx@4
  int v17; // eax@4
  int v18; // esi@7
  int v19; // edi@7
  int v20; // [sp+18h] [bp-44h]@3
  int v21; // [sp+1Ch] [bp-40h]@3
  int v22; // [sp+30h] [bp-2Ch]@4
  int v23; // [sp+34h] [bp-28h]@4
  int v24; // [sp+38h] [bp-24h]@4

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v20 = (unsigned __int8)v9;
      v21 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v22 = ((((v20 * a5 >> 7) - 255) >> 31) & ((v20 * a5 >> 7) - 255)) + 255;
        v23 = ((((v21 * a6 >> 7) - 255) >> 31) & ((v21 * a6 >> 7) - 255)) + 255;
        v24 = ((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v22);
        v12 = 4 * *a1;
        v13 = &dword_6FBBFE50[v12];
        v14 = dword_6FBBFE50[v12 + 1];
        v17 = dword_6FBBFE50[v12] - (((((v22 & ~(v22 >> 31)) - 255) >> 31) & ((v22 & ~(v22 >> 31)) - 255)) + 255);
        v15 = v13[2] - (((((v24 & ~(v24 >> 31)) - 255) >> 31) & ((v24 & ~(v24 >> 31)) - 255)) + 255);
        v16 = v14
            - ((((signed int)((v23 & ~((unsigned __int64)v23 >> 32)) - 255) >> 31) & ((v23 & ~((unsigned __int64)v23 >> 32))
                                                                                    - 255))
             + 255);
        LOWORD(v17) = 4 * (v16 & ~(v16 >> 31)) & 0x3E0 | (((unsigned __int16)v15 & (unsigned __int16)~(v15 >> 31)) << 7) & 0x7C00 | ((v17 & ~(v17 >> 31)) >> 3) & 0x1F | 0x8000;
        *a1 = v17;
      }
      else
      {
        v23 = ((((v21 * a6 >> 7) - 255) >> 31) & ((v21 * a6 >> 7) - 255)) + 255;
        v22 = ((((a5 * v20 >> 7) - 255) >> 31) & ((a5 * v20 >> 7) - 255)) + 255;
        v24 = ((((a7 * v11 >> 7) - 255) >> 31) & ((a7 * v11 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v22);
        v18 = 4 * ((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 1020;
        LOWORD(v18) = v18 & 0x3E0;
        v19 = ((((v24 & ~(v24 >> 31)) - 255) & (((v24 & ~(v24 >> 31)) - 255) >> 31)) + 255) << 7;
        LOWORD(v19) = v19 & 0x7C00;
        v17 = v19 | v18 | (((((v22 & ~(v22 >> 31)) - 255) & (((v22 & ~(v22 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = v17;
      }
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v17;
    }
  }
}
