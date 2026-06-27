unsigned int __cdecl sub_6F6F2800(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  int v11; // edx@2
  unsigned int v12; // esi@2
  int v13; // eax@2
  int v14; // edx@3
  int v15; // eax@3
  int v16; // edx@3
  int v17; // ecx@3
  int *v18; // esi@6
  unsigned __int16 v19; // ax@6

  result = dword_6FBBFE44(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v13 = (unsigned __int8)(result >> 16);
    if ( v12 )
    {
      v18 = &dword_6FBBFE50[4 * *a1];
      v19 = 4 * ((*((_WORD *)v18 + 2) - v11) & ~((v18[1] - v11) >> 31)) & 0x3E0 | (((*v18 - v10) & ~((*v18 - v10) >> 31)) >> 3) & 0x1F | (((unsigned __int16)(*((_WORD *)v18 + 4) - v13) & (unsigned __int16)~((v18[2] - v13) >> 31)) << 7) & 0x7C00 | 0x8000;
      v17 = v19;
      *a1 = v19;
    }
    else
    {
      v14 = 4 * v11;
      v15 = v13 << 7;
      LOWORD(v14) = v14 & 0x3E0;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = (v10 >> 3) | v15 | v14;
      *a1 = v16;
      v17 = (signed __int16)v16;
    }
    *a2 = dword_6FCBFE50[v17];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
