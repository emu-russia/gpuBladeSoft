unsigned int __cdecl sub_6F69FE50(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // eax@2
  unsigned int v11; // edx@2
  int v12; // ebp@3
  int v13; // ecx@3
  int v14; // edx@3
  signed int v15; // edi@3
  int v16; // edi@4
  int v17; // esi@4
  int v18; // ebx@4
  int *v19; // ebp@4
  int v20; // eax@4
  signed int v21; // esi@4
  signed int v22; // edi@4
  signed int v23; // ebx@4
  signed int v24; // edi@6
  int v25; // ecx@6
  int v26; // edx@6
  int v27; // [sp+1Ch] [bp-20h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    v10 = dword_6FBBFE48(a8, a9);
    v11 = v10;
    result = v10 >> 24;
    if ( result & 0x40 )
    {
      v12 = (unsigned __int8)v11;
      v13 = BYTE1(v11);
      v27 = (unsigned __int8)result;
      v14 = (unsigned __int8)(v11 >> 16);
      v15 = (v12 * a5 >> 7) - 255;
      if ( (unsigned int)(unsigned __int8)result >> 7 )
      {
        v16 = (((v15 >> 31) & v15) + 255) >> 2;
        v17 = (((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255) >> 2;
        v18 = (((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255) >> 2;
        v19 = &dword_6FBBFE50[4 * *a1];
        *a1 = (4 * ((v17 + v19[1] - 255) & ((v17 + v19[1] - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)(v18 + *((_WORD *)v19 + 4) - 255) & (unsigned __int16)((v18 + v19[2] - 255) >> 31))
                                                                                           + 255) << 7) & 0x7C00 | ((((v16 + *v19 - 255) & ((v16 + *v19 - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        v20 = *a2;
        v21 = v17 + BYTE1(v20) - 255;
        v22 = v16 + (unsigned __int8)*a2 - 255;
        v23 = v18 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
        result = v21 >> 31;
        *a2 = (((v22 >> 31) & v22) + 255) | (((v23 & (v23 >> 31)) + 255) << 16) | ((((v21 >> 31) & v21) + 255) << 8) | (v27 << 24);
      }
      else
      {
        v24 = ((v15 >> 31) & v15) + 255;
        v25 = ((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255;
        v26 = ((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255;
        result = (v24 >> 3) & 0x1F;
        *a1 = ((_WORD)v26 << 7) & 0x7C00 | result | 4 * v25 & 0x3E0;
        *a2 = (v26 << 16) | (v25 << 8) | v24 | (v27 << 24);
      }
    }
  }
  return result;
}
