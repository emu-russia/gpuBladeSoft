unsigned int __cdecl sub_6F6ADD60(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // ecx@2
  signed int v11; // ebp@2
  signed int v12; // edi@2
  signed int v13; // edx@2
  signed int v14; // ST18_4@6
  int v15; // eax@6
  signed int v16; // esi@6
  signed int v17; // ST1C_4@6
  signed int v18; // edx@6
  int v19; // edi@6
  int v20; // ebp@6
  __int64 v21; // rax@6
  signed int v22; // edi@6

  JUMPOUT(*a1, 0, nullsub_55);
  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE3(result);
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v14 = (signed int)(unsigned __int8)result >> 2;
      v15 = 4 * *a1;
      v16 = v13 >> 2;
      v17 = v12 >> 2;
      v18 = v11 >> 2;
      v19 = dword_6FBBFE50[v15 + 1] + (v12 >> 2);
      v20 = dword_6FBBFE50[v15 + 2];
      v21 = dword_6FBBFE50[v15] + v18 - 255;
      *a1 = (4 * (((v19 - 255) >> 31) & (v19 - 255)) + 1020) & 0x3E0 | ((((unsigned __int16)(v16 + v20 - 255) & (unsigned __int16)((v16 + v20 - 255) >> 31))
                                                                       + 255) << 7) & 0x7C00 | ((signed int)((v21 & HIDWORD(v21)) + 255) >> 3) & 0x1F | 0x8000;
      LODWORD(v21) = *a2;
      HIDWORD(v21) = v14 + (unsigned __int8)*a2 - 255;
      v22 = v17 + BYTE1(v21) - 255;
      result = v22 >> 31;
      *a2 = (((SHIDWORD(v21) >> 31) & HIDWORD(v21)) + 255) | ((((v22 >> 31) & v22) + 255) << 8) | ((((v16 + (unsigned __int8)(*a2 >> 16) - 255) & ((v16 + (unsigned __int8)(*a2 >> 16) - 255) >> 31))
                                                                                                  + 255) << 16) | (v10 << 24);
    }
    else
    {
      *a1 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v13 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
