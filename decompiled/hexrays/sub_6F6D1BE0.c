void __cdecl sub_6F6D1BE0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  unsigned int v10; // ecx@3
  int v11; // eax@3
  int v12; // ebx@4
  signed int v13; // edi@4
  signed int v14; // esi@4
  signed int v15; // ecx@4
  int v16; // edx@4
  int v17; // ebx@7
  int v18; // eax@7
  int v19; // [sp+18h] [bp-24h]@3
  int v20; // [sp+1Ch] [bp-20h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v19 = (unsigned __int8)v9;
      v20 = BYTE1(v9);
      v10 = v9 >> 31;
      v11 = (unsigned __int8)(v9 >> 16);
      if ( v10 )
      {
        v12 = 16 * *a1;
        v13 = *(int *)((char *)dword_6FBBFE50 + v12) + ((((v19 * a5 >> 7) - 255) >> 31) & ((v19 * a5 >> 7) - 255));
        v14 = *(int *)((char *)&dword_6FBBFE50[2] + v12) + ((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255));
        v15 = *(int *)((char *)&dword_6FBBFE50[1] + v12) + ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255));
        LOWORD(v12) = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | ((((unsigned __int16)v14 & (unsigned __int16)(v14 >> 31))
                                                                 + 255) << 7) & 0x7C00 | (((v13 & (v13 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v12;
        v16 = (unsigned __int16)v12;
      }
      else
      {
        v17 = 4 * ((((v20 * a6 >> 7) - 255) >> 31) & ((v20 * a6 >> 7) - 255)) + 1020;
        v18 = (((((v11 * a7 >> 7) - 255) >> 31) & ((v11 * a7 >> 7) - 255)) + 255) << 7;
        LOWORD(v17) = v17 & 0x3E0;
        LOWORD(v18) = v18 & 0x7C00;
        v16 = v18 | v17 | ((((((a5 * v19 >> 7) - 255) >> 31) & ((a5 * v19 >> 7) - 255)) + 255) >> 3) & 0x1F;
        *a1 = v16;
        v16 = (signed __int16)v16;
      }
      *a2 = dword_6FCBFE50[v16];
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
