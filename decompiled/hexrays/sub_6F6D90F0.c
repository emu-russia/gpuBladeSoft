unsigned int __cdecl sub_6F6D90F0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  signed int v11; // edx@2
  int v12; // ebx@2
  unsigned int v13; // eax@2
  int v14; // ebx@3
  int v15; // ecx@3
  int v16; // edx@3
  int v17; // ecx@3
  int v18; // ebp@6

  JUMPOUT(*a1, 0, nullsub_38);
  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = result >> 16;
    if ( v10 >> 7 )
    {
      v18 = 16 * *a1;
      LOWORD(v18) = (4
                   * (((*(int *)((char *)dword_6FBBFE54 + v18) + v12 - 255) >> 31) & (*(_WORD *)((char *)dword_6FBBFE54
                                                                                               + v18)
                                                                                    + v12
                                                                                    - 255))
                   + 1020) & 0x3E0 | (((((*(int *)((char *)dword_6FBBFE50 + v18) + v11 - 255) >> 31) & (*(int *)((char *)dword_6FBBFE50 + v18) + v11 - 255))
                                     + 255) >> 3) & 0x1F | ((((unsigned __int16)(*(_WORD *)((char *)dword_6FBBFE58 + v18)
                                                                               + (unsigned __int8)v13
                                                                               - 255) & (unsigned __int16)((*(int *)((char *)dword_6FBBFE58 + v18) + (unsigned __int8)v13 - 255) >> 31))
                                                           + 255) << 7) & 0x7C00 | 0x8000;
      v17 = (unsigned __int16)v18;
      *a1 = v18;
    }
    else
    {
      v14 = 4 * v12;
      v15 = (unsigned __int8)v13 << 7;
      LOWORD(v14) = v14 & 0x3E0;
      LOWORD(v15) = v15 & 0x7C00;
      v16 = v14 | v15 | (v11 >> 3);
      *a1 = v16;
      v17 = (signed __int16)v16;
    }
    result = dword_6FCBFE50[v17];
    *a2 = result;
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
