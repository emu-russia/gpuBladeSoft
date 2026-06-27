unsigned int __cdecl sub_6F6ADE20(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ecx@2
  signed int v11; // edx@2
  signed int v12; // esi@6
  signed int v13; // edi@6
  unsigned int v14; // ebp@6

  JUMPOUT(*a1, 0, nullsub_49);
  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE3(result);
    v11 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v12 = (signed int)BYTE1(result) >> 1;
      v13 = (signed int)(unsigned __int8)result >> 1;
      *a1 = ((v13 + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | (((unsigned __int16)(v11 >> 1)
                                                                   + (unsigned __int16)(dword_6FBBFE58[4 * *a1] >> 1)) << 7) & 0x7C00 | 4 * (v12 + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0 | 0x8000;
      v14 = *a2;
      result = (signed int)BYTE1(v14) >> 1;
      *a2 = ((((signed int)*a2 >> 1) & 0x7F) + v13) | (((v11 >> 1) + ((*a2 >> 17) & 0x7F)) << 16) | ((result + v12) << 8) | (v10 << 24);
    }
    else
    {
      *a1 = ((_WORD)v11 << 7) & 0x7C00 | 4 * BYTE1(result) & 0x3E0 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
