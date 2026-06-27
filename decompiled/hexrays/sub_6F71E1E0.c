unsigned int __cdecl sub_6F71E1E0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@2
  signed int v11; // ebp@2
  signed int v12; // edx@2
  signed int v13; // ebx@2
  int v14; // edx@2
  int v15; // edi@2
  int v16; // ebp@2

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = result >> 24 << 8;
    LOWORD(v10) = v10 & 0x8000;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = (BYTE1(result) * a6 >> 7) - 255;
    v13 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    result = v12 >> 31;
    v14 = 4 * ((v12 >> 31) & v12) + 1020;
    LOWORD(v14) = v14 & 0x3E0;
    v15 = ((v13 & (v13 >> 31)) + 255) << 7;
    LOWORD(v15) = v15 & 0x7C00;
    v16 = v10 | v15 | v14 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F;
    *a1 = v16;
    *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v16;
  }
  return result;
}
