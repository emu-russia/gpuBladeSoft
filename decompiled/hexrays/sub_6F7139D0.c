unsigned int __cdecl sub_6F7139D0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  __int16 v10; // cx@2

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = ((signed int)result >> 3) & 0x1F | (result >> 9) & 0x7C00 | ((unsigned __int16)result >> 6) & 0x3E0 | (result >> 24 << 8) & 0x8000;
    *a1 = v10;
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 = result | v10;
  }
  return result;
}
