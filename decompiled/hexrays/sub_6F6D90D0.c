unsigned int __cdecl sub_6F6D90D0(unsigned __int16 *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edi@1
  signed int v11; // ebp@2
  int v12; // edx@2
  unsigned int v13; // eax@2
  int v14; // ecx@2
  int v15; // edx@3
  int v16; // ecx@3
  int v17; // ebp@3
  int v18; // edx@3
  int *v19; // eax@6
  unsigned __int16 v20; // cx@6

  JUMPOUT(*a1, 0, nullsub_39);
  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = result >> 16;
    v14 = (unsigned __int8)v13;
    if ( v10 >> 7 )
    {
      v19 = &dword_6FBBFE50[4 * *a1];
      v20 = 4 * ((v19[1] - v12) & ~((v19[1] - v12) >> 31)) & 0x3E0 | (((unsigned __int16)(*((_WORD *)v19 + 4) - v14) & (unsigned __int16)~((v19[2] - v14) >> 31)) << 7) & 0x7C00 | (((*v19 - v11) & ~((*v19 - v11) >> 31)) >> 3) & 0x1F | 0x8000;
      v18 = v20;
      *a1 = v20;
    }
    else
    {
      v15 = 4 * v12;
      v16 = (unsigned __int8)v13 << 7;
      LOWORD(v15) = v15 & 0x3E0;
      LOWORD(v16) = v16 & 0x7C00;
      v17 = v15 | v16 | (v11 >> 3);
      *a1 = v17;
      v18 = (signed __int16)v17;
    }
    result = dword_6FCBFE50[v18];
    *a2 = result;
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
