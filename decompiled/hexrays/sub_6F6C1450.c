signed int __cdecl sub_6F6C1450(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // edx@1
  signed int result; // eax@1
  int v12; // ebp@2
  int v13; // ecx@2
  int v14; // edx@2
  signed int v15; // edi@2
  int v16; // edi@3
  int v17; // esi@3
  int v18; // ebx@3
  int *v19; // ebp@3
  int v20; // eax@3
  signed int v21; // ecx@3
  signed int v22; // esi@3
  signed int v23; // edi@5
  int v24; // ecx@5
  int v25; // edx@5
  int v26; // [sp+1Ch] [bp-20h]@2

  v9 = dword_6FBBFE48(a8, a9);
  v10 = v9;
  result = v9 >> 24;
  if ( result & 0x40 )
  {
    v12 = (unsigned __int8)v10;
    v13 = BYTE1(v10);
    v26 = (unsigned __int8)result;
    v14 = (unsigned __int8)(v10 >> 16);
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
      v21 = v16 + (unsigned __int8)*a2 - 255;
      v22 = v17 + BYTE1(v20) - 255;
      result = v18 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
      *a2 = (((v21 >> 31) & v21) + 255) | (((result & (result >> 31)) + 255) << 16) | ((((v22 >> 31) & v22) + 255) << 8) | (v26 << 24);
    }
    else
    {
      v23 = ((v15 >> 31) & v15) + 255;
      v24 = ((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255;
      v25 = ((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255;
      result = (v23 >> 3) & 0x1F;
      *a1 = ((_WORD)v25 << 7) & 0x7C00 | result | 4 * v24 & 0x3E0;
      *a2 = (v25 << 16) | (v24 << 8) | v23 | (v26 << 24);
    }
  }
  return result;
}
