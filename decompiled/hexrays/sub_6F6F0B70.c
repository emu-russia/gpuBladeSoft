unsigned int __cdecl sub_6F6F0B70(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ebx@2
  signed int v11; // esi@2
  signed int v12; // ecx@2
  int v13; // esi@3
  int v14; // eax@3
  int v15; // edi@3
  int v16; // edx@3
  int v17; // edx@6
  signed int v18; // edi@6
  signed int v19; // ecx@6
  signed int v20; // eax@6

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)(result >> 16) * a7 >> 7;
    v11 = (BYTE1(result) * a6 >> 7) - 255;
    v12 = ((unsigned __int8)result * a5 >> 7) - 255;
    if ( result >> 31 )
    {
      v17 = 4 * *a1;
      v18 = dword_6FBBFE50[v17] - (((v12 >> 31) & v12) + 255);
      v19 = dword_6FBBFE50[v17 + 1] - (((v11 >> 31) & v11) + 255);
      v20 = dword_6FBBFE50[v17 + 2] - ((((v10 - 255) >> 31) & (v10 - 255)) + 255);
      LOWORD(v20) = 4 * (v19 & ~(v19 >> 31)) & 0x3E0 | ((v18 & ~(v18 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v20 & (unsigned __int16)~(v20 >> 31)) << 7) & 0x7C00 | 0x8000;
      v16 = (unsigned __int16)v20;
      *a1 = v20;
    }
    else
    {
      v13 = 4 * ((v11 >> 31) & v11) + 1020;
      LOWORD(v13) = v13 & 0x3E0;
      v14 = ((((v10 - 255) >> 31) & (v10 - 255)) + 255) << 7;
      LOWORD(v14) = v14 & 0x7C00;
      v15 = v14 | v13 | ((((v12 >> 31) & v12) + 255) >> 3) & 0x1F;
      *a1 = v15;
      v16 = (signed __int16)v15;
    }
    *a2 = dword_6FCBFE50[v16];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
