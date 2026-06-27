void __cdecl sub_6F6D1850(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  int v12; // edi@4
  signed int v13; // ebx@4
  int *v14; // eax@4
  signed int v15; // edi@4
  signed int v16; // ecx@4
  signed int v17; // eax@4
  int v18; // edx@4
  int v19; // esi@7
  int v20; // eax@7
  int v21; // [sp+18h] [bp-24h]@3
  int v22; // [sp+1Ch] [bp-20h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v21 = (unsigned __int8)v9;
      v22 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v12 = 4 * *a1;
        v13 = (v11 * a7 >> 7) - 255;
        v14 = &dword_6FBBFE50[v12];
        v15 = dword_6FBBFE50[v12] - (((((v21 * a5 >> 7) - 255) >> 31) & ((v21 * a5 >> 7) - 255)) + 255);
        v16 = v14[1] - (((((v22 * a6 >> 7) - 255) >> 31) & ((v22 * a6 >> 7) - 255)) + 255);
        v17 = v14[2] - (((v13 >> 31) & v13) + 255);
        LOWORD(v17) = 4 * (v16 & ~(v16 >> 31)) & 0x3E0 | ((v15 & ~(v15 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v17 & (unsigned __int16)~(v17 >> 31)) << 7) & 0x7C00 | 0x8000;
        *a1 = v17;
        v18 = (unsigned __int16)v17;
      }
      else
      {
        v19 = 4 * ((((v22 * a6 >> 7) - 255) >> 31) & ((v22 * a6 >> 7) - 255)) + 1020;
        v20 = (((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255) << 7;
        LOWORD(v19) = v19 & 0x3E0;
        LOWORD(v20) = v20 & 0x7C00;
        v18 = v20 | v19 | ((((((a5 * v21 >> 7) - 255) >> 31) & ((a5 * v21 >> 7) - 255)) + 255) >> 3) & 0x1F;
        *a1 = v18;
        v18 = (signed __int16)v18;
      }
      *a2 = dword_6FCBFE50[v18];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
