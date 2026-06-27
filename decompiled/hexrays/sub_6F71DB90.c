unsigned int __cdecl sub_6F71DB90(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ebx@2
  signed int v11; // edi@2
  signed int v12; // ebp@2
  signed int v13; // eax@3
  int v14; // edi@3
  int v15; // ebx@3
  int v16; // eax@3
  _WORD *v17; // ebx@3
  int v18; // edx@6
  int v19; // eax@6
  int v20; // ecx@6
  signed int v21; // edi@6
  signed int v22; // ebp@6
  signed int v23; // ecx@6
  int v24; // eax@6
  int v25; // ebp@6
  int v26; // edi@6

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)(result >> 16) * a7 >> 7;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = (BYTE1(result) * a6 >> 7) - 255;
    if ( result >> 31 )
    {
      v18 = v10 - 255;
      v19 = (v10 - 255) >> 31;
      v17 = a1;
      v20 = 4 * *a1;
      v21 = dword_6FBBFE50[v20] + ((v11 >> 31) & v11);
      v22 = dword_6FBBFE54[v20] + ((v12 >> 31) & v12);
      v23 = (v19 & v18) + dword_6FBBFE50[v20 + 2];
      v24 = v21 & (v21 >> 31);
      v25 = 4 * ((v22 >> 31) & v22) + 1020;
      LOWORD(v25) = v25 & 0x3E0;
      v26 = ((v23 & (v23 >> 31)) + 255) << 7;
      LOWORD(v26) = v26 & 0x7C00;
      v16 = v25 | v26 | ((v24 + 255) >> 3) & 0x1F;
      LOWORD(v16) = v16 | 0x8000;
      *a1 = v16;
    }
    else
    {
      v13 = ((v11 >> 31) & v11) + 255;
      v14 = 4 * ((v12 >> 31) & v12) + 1020;
      LOWORD(v14) = v14 & 0x3E0;
      v15 = ((((v10 - 255) >> 31) & (v10 - 255)) + 255) << 7;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = v15 | v14 | (v13 >> 3) & 0x1F;
      v17 = a1;
      *a1 = v16;
    }
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v16;
    *v17 = result;
  }
  return result;
}
