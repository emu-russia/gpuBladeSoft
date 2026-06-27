__int16 __cdecl sub_6F6D3090(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // ecx@2
  int v11; // ebp@3
  signed int v12; // edi@3
  signed int v13; // esi@3
  signed int v14; // edi@3
  int *v15; // ebp@4
  signed int v16; // esi@4
  int v17; // ebx@4
  signed int v18; // ebp@4
  signed int v19; // edi@4
  int v20; // ecx@4
  signed int v21; // ebp@7
  int v22; // esi@7
  int v23; // ebp@7

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE48(a8, a9);
    v10 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v11 = (unsigned __int8)v9;
      v12 = BYTE1(v9) * a6;
      v9 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v13 = (v11 * a5 >> 7) - 255;
      v14 = (v12 >> 7) - 255;
      if ( v10 >> 7 )
      {
        v15 = &dword_6FBBFE50[4 * *a1];
        v16 = ((((v13 >> 31) & v13) + 255) >> 1) + (*v15 >> 1) - 255;
        v17 = v15[1] >> 1;
        v18 = ((signed int)((v9 & ((unsigned __int64)(signed int)v9 >> 32)) + 255) >> 1) + (v15[2] >> 1) - 255;
        v19 = ((((v14 >> 31) & v14) + 255) >> 1) + v17 - 255;
        LOWORD(v9) = (4 * ((v19 >> 31) & v19) + 1020) & 0x3E0 | ((((unsigned __int16)v18 & (unsigned __int16)(v18 >> 31))
                                                                + 255) << 7) & 0x7C00 | (((v16 & (v16 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        *a1 = v9;
        v20 = (unsigned __int16)v9;
      }
      else
      {
        v21 = ((v13 >> 31) & v13) + 255;
        v22 = 4 * ((v14 >> 31) & v14) + 1020;
        LOWORD(v22) = v22 & 0x3E0;
        v9 = ((((signed int)v9 >> 31) & v9) + 255) << 7;
        LOWORD(v9) = v9 & 0x7C00;
        v23 = v9 | v22 | (v21 >> 3) & 0x1F;
        *a1 = v23;
        v20 = (signed __int16)v23;
      }
      *a2 = dword_6FCBFE50[v20];
    }
  }
  return v9;
}
