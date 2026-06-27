int __cdecl sub_6F6A0B70(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  int result; // eax@1
  unsigned int v10; // eax@2
  unsigned int v11; // edx@2
  int v12; // ebp@3
  int v13; // ecx@3
  int v14; // edx@3
  signed int v15; // edi@3
  int v16; // edi@4
  int v17; // esi@4
  int v18; // ebx@4
  int v19; // edx@4
  signed int v20; // eax@4
  signed int v21; // ecx@4
  signed int v22; // edx@4
  int v23; // eax@4
  signed int v24; // esi@4
  signed int v25; // ebx@4
  signed int v26; // edi@4
  signed int v27; // edi@6
  int v28; // ecx@6
  int v29; // edx@6
  int v30; // [sp+1Ch] [bp-20h]@3

  result = (int)a1;
  if ( *a1 >= 0 )
  {
    v10 = dword_6FBBFE48(a8, a9);
    v11 = v10;
    result = v10 >> 24;
    if ( result & 0x40 )
    {
      v12 = (unsigned __int8)v11;
      v13 = BYTE1(v11);
      v30 = (unsigned __int8)result;
      v14 = (unsigned __int8)(v11 >> 16);
      v15 = (v12 * a5 >> 7) - 255;
      if ( (unsigned int)(unsigned __int8)result >> 7 )
      {
        v16 = (((v15 >> 31) & v15) + 255) >> 1;
        v17 = (((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255) >> 1;
        v18 = (((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255) >> 1;
        v19 = 4 * *a1;
        v20 = dword_6FBBFE50[v19 + 1];
        v21 = dword_6FBBFE50[v19 + 2];
        v22 = v16 + (dword_6FBBFE50[v19] >> 1) - 255;
        *a1 = (4 * ((v17 + (v20 >> 1) - 255) & ((v17 + (v20 >> 1) - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)(v18 + (v21 >> 1) - 255) & (unsigned __int16)((v18 + (v21 >> 1) - 255) >> 31)) + 255) << 7) & 0x7C00 | (((v22 & (v22 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
        v23 = *a2;
        v24 = v17 + ((signed int)BYTE1(v23) >> 1) - 255;
        v25 = v18 + (((unsigned int)*a2 >> 17) & 0x7F) - 255;
        v26 = v16 + ((*a2 >> 1) & 0x7F) - 255;
        result = ((v25 & (v25 >> 31)) + 255) << 16;
        *a2 = (((v26 >> 31) & v26) + 255) | result | ((((v24 >> 31) & v24) + 255) << 8) | (v30 << 24);
      }
      else
      {
        v27 = ((v15 >> 31) & v15) + 255;
        v28 = ((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255;
        v29 = ((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255;
        result = (v27 >> 3) & 0x1F;
        *a1 = ((_WORD)v29 << 7) & 0x7C00 | result | 4 * v28 & 0x3E0;
        *a2 = (v29 << 16) | (v28 << 8) | v27 | (v30 << 24);
      }
    }
  }
  return result;
}
