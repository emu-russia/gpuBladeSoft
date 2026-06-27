unsigned int __cdecl sub_6F6BB630(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  unsigned int v10; // edx@1
  unsigned int result; // eax@1
  int v12; // ebp@2
  int v13; // ecx@2
  int v14; // edx@2
  signed int v15; // edi@2
  signed int v16; // edi@3
  int v17; // ecx@3
  int v18; // edx@3
  int v19; // esi@6
  int v20; // eax@6
  int v21; // ebx@6
  int *v22; // ebp@6
  int v23; // edx@6
  signed int v24; // edi@6
  signed int v25; // eax@6
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
      v19 = (((v15 >> 31) & v15) + 255) >> 2;
      v20 = (((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255) >> 2;
      v21 = (((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255) >> 2;
      v22 = &dword_6FBBFE50[4 * *a1];
      *a1 = (4 * (((v21 + v22[1] - 255) >> 31) & (v21 + *((_WORD *)v22 + 2) - 255)) + 1020) & 0x3E0 | ((((unsigned __int16)(v20 + *((_WORD *)v22 + 4) - 255) & (unsigned __int16)((v20 + v22[2] - 255) >> 31)) + 255) << 7) & 0x7C00 | ((((v19 + *v22 - 255) & ((v19 + *v22 - 255) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v23 = *a2;
      v24 = v19 + (unsigned __int8)*a2 - 255;
      v25 = v20 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
      *a2 = (((v24 >> 31) & v24) + 255) | (((((v21 + BYTE1(v23) - 255) >> 31) & (v21 + BYTE1(v23) - 255)) + 255) << 8) | (((v25 & (v25 >> 31)) + 255) << 16) | (v26 << 24);
    }
    else
    {
      v16 = ((v15 >> 31) & v15) + 255;
      v17 = ((((v13 * a6 >> 7) - 255) >> 31) & ((v13 * a6 >> 7) - 255)) + 255;
      v18 = ((((v14 * a7 >> 7) - 255) >> 31) & ((v14 * a7 >> 7) - 255)) + 255;
      *a1 = ((_WORD)v18 << 7) & 0x7C00 | (v16 >> 3) & 0x1F | 4 * v17 & 0x3E0;
      *a2 = (v17 << 8) | (v18 << 16) | v16 | ((unsigned __int8)result << 24);
    }
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
