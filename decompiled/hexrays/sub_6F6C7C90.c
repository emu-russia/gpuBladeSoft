signed int __cdecl sub_6F6C7C90(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
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
  int v19; // ebp@3
  signed int v20; // edx@3
  int *v21; // ecx@3
  signed int v22; // ebp@3
  int v23; // eax@3
  signed int v24; // ecx@3
  signed int v25; // esi@3
  signed int v26; // edi@5
  int v27; // ecx@5
  int v28; // edx@5
  int v29; // [sp+1Ch] [bp-20h]@2

  v9 = dword_6FBBFE40(a8, a9);
  v10 = v9;
  result = v9 >> 24;
  if ( result & 0x40 )
  {
    v12 = (unsigned __int8)v10;
    v13 = BYTE1(v10);
    v29 = (unsigned __int8)result;
    v14 = (unsigned __int8)(v10 >> 16);
    v15 = (v12 * a5 >> 7) - 255;
    if ( (unsigned int)(unsigned __int8)result >> 7 )
    {
      v16 = (((v15 >> 31) & v15) + 255) >> 1;
      v17 = (((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255) >> 1;
      v18 = (((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255) >> 1;
      v19 = 4 * *a1;
      v20 = dword_6FBBFE50[v19];
      v21 = &dword_6FBBFE50[v19];
      v22 = v18 + (dword_6FBBFE50[v19 + 2] >> 1) - 255;
      *a1 = (4 * ((v17 + (v21[1] >> 1) - 255) & ((v17 + (v21[1] >> 1) - 255) >> 31)) + 1020) & 0x3E0 | ((((unsigned __int16)v22 & (unsigned __int16)(v22 >> 31)) + 255) << 7) & 0x7C00 | ((((v16 + (v20 >> 1) - 255) & ((v16 + (v20 >> 1) - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v23 = *a2;
      v24 = v16 + ((*a2 >> 1) & 0x7F) - 255;
      v25 = v17 + ((signed int)BYTE1(v23) >> 1) - 255;
      result = v18 + (((unsigned int)*a2 >> 17) & 0x7F) - 255;
      *a2 = (((v24 >> 31) & v24) + 255) | (((result & (result >> 31)) + 255) << 16) | ((((v25 >> 31) & v25) + 255) << 8) | (v29 << 24);
    }
    else
    {
      v26 = ((v15 >> 31) & v15) + 255;
      v27 = ((((a6 * v13 >> 7) - 255) >> 31) & ((a6 * v13 >> 7) - 255)) + 255;
      v28 = ((((a7 * v14 >> 7) - 255) >> 31) & ((a7 * v14 >> 7) - 255)) + 255;
      result = (v26 >> 3) & 0x1F;
      *a1 = ((_WORD)v28 << 7) & 0x7C00 | result | 4 * v27 & 0x3E0;
      *a2 = (v28 << 16) | (v27 << 8) | v26 | (v29 << 24);
    }
  }
  return result;
}
