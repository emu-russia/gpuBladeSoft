__int16 __cdecl sub_6F6BC550(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // edx@1
  signed int v11; // eax@1
  int v12; // ebp@2
  int v13; // ecx@2
  int v14; // edx@2
  int v15; // esi@2
  int v16; // edi@3
  int v17; // ebx@3
  int v18; // esi@3
  int v19; // edx@3
  signed int v20; // eax@3
  signed int v21; // ecx@3
  signed int v22; // edx@3
  int v23; // eax@3
  signed int v24; // ecx@3
  signed int v25; // esi@3
  int v26; // ecx@5
  int v27; // edx@5
  int v29; // [sp+1Ch] [bp-20h]@2

  v9 = dword_6FBBFE48(a8, a9);
  v10 = v9;
  v11 = v9 >> 24;
  if ( v11 & 0x40 )
  {
    v12 = (unsigned __int8)v10;
    v13 = BYTE1(v10);
    v29 = (unsigned __int8)v11;
    v14 = (unsigned __int8)(v10 >> 16);
    v15 = v12 * a5 >> 7;
    if ( (unsigned int)(unsigned __int8)v11 >> 7 )
    {
      v16 = ((((v15 - 255) >> 31) & (v15 - 255)) + 255) >> 1;
      v17 = (((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255) >> 1;
      v18 = (((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255) >> 1;
      v19 = 4 * *a1;
      v20 = dword_6FBBFE50[v19 + 1];
      v21 = dword_6FBBFE50[v19 + 2];
      v22 = v16 + (dword_6FBBFE50[v19] >> 1) - 255;
      *a1 = (4 * ((v18 + (v20 >> 1) - 255) & ((v18 + (v20 >> 1) - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)(v17 + (v21 >> 1) - 255) & (unsigned __int16)((v17 + (v21 >> 1) - 255) >> 31))
                                                                                                 + 255) << 7) & 0x7C00 | (((v22 & (v22 >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v23 = *a2;
      v24 = v16 + ((*a2 >> 1) & 0x7F) - 255;
      v25 = v18 + ((signed int)BYTE1(v23) >> 1) - 255;
      v11 = v17 + (((unsigned int)*a2 >> 17) & 0x7F) - 255;
      *a2 = (((v24 >> 31) & v24) + 255) | (((v11 & (v11 >> 31)) + 255) << 16) | ((((v25 >> 31) & v25) + 255) << 8) | (v29 << 24);
    }
    else
    {
      v26 = ((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255;
      v27 = ((((a7 * v14 >> 7) - 255) >> 31) & ((a7 * v14 >> 7) - 255)) + 255;
      LOWORD(v11) = ((_WORD)v27 << 7) & 0x7C00;
      *a1 = v11 | (((((v15 - 255) >> 31) & (v15 - 255)) + 255) >> 3) & 0x1F | 4 * v26 & 0x3E0;
      *a2 = (v27 << 16) | (v26 << 8) | ((((v15 - 255) >> 31) & (v15 - 255)) + 255) | (v29 << 24);
    }
  }
  return v11;
}
