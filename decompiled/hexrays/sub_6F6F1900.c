unsigned int __cdecl sub_6F6F1900(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@1
  signed int v11; // ebp@2
  signed int v12; // ebx@2

  result = dword_6FBBFE40(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    LOWORD(v11) = ((_WORD)v10 << 8) & 0x8000 | ((((unsigned __int16)v12 & (unsigned __int16)(v12 >> 31)) + 255) << 7) & 0x7C00 | (4 * ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 1020) & 0x3E0 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
    *a1 = v11;
    *a2 = dword_6FCBFE50[(unsigned __int16)v11];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
