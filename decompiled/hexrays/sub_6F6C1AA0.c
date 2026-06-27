unsigned int __cdecl sub_6F6C1AA0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ebp@2
  int v12; // ecx@2
  int v13; // eax@2
  signed int v14; // edi@2
  signed int v15; // ebp@2
  signed int v16; // ebp@3
  int v17; // ecx@3
  int v18; // eax@3
  int v19; // ebp@6
  int v20; // esi@6
  int v21; // ebx@6
  int v22; // edx@6
  int v23; // edx@6
  signed int v24; // eax@6
  int v25; // [sp+1Ch] [bp-20h]@2

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v25 = (unsigned __int8)v10;
    v13 = (unsigned __int8)(result >> 16);
    v14 = (v11 * a5 >> 7) - 255;
    v15 = v14 >> 31;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v19 = v14 & v15;
      v20 = (((v12 * a6 >> 7) - 255) >> 31) & ((v12 * a6 >> 7) - 255);
      v21 = (((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255);
      v22 = 4 * *a1;
      *a1 = (4 * (((v20 + dword_6FBBFE50[v22 + 1]) >> 31) & (v20 + dword_6FBBFE50[v22 + 1])) + 1020) & 0x3E0 | ((((unsigned __int16)(v21 + LOWORD(dword_6FBBFE50[v22 + 2])) & (unsigned __int16)((v21 + dword_6FBBFE50[v22 + 2]) >> 31)) + 255) << 7) & 0x7C00 | ((((v19 + dword_6FBBFE50[v22]) & ((v19 + dword_6FBBFE50[v22]) >> 31)) + 255) >> 3) & 0x1F | 0x8000;
      v23 = *a2;
      v24 = v21 + (unsigned __int8)((unsigned int)*a2 >> 16);
      *a2 = ((((v19 + (unsigned __int8)*a2) >> 31) & (v19 + (unsigned __int8)*a2)) + 255) | (((((BYTE1(v23) + v20) >> 31) & (BYTE1(v23) + v20))
                                                                                            + 255) << 8) | (((v24 & (v24 >> 31)) + 255) << 16) | (v25 << 24);
    }
    else
    {
      v16 = (v15 & v14) + 255;
      v17 = ((((a6 * v12 >> 7) - 255) >> 31) & ((a6 * v12 >> 7) - 255)) + 255;
      v18 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      *a1 = ((_WORD)v18 << 7) & 0x7C00 | (v16 >> 3) & 0x1F | 4 * v17 & 0x3E0;
      *a2 = (v17 << 8) | (v18 << 16) | v16 | ((unsigned __int8)v10 << 24);
    }
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
