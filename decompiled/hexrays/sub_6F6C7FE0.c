unsigned int __cdecl sub_6F6C7FE0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@1
  signed int v11; // ebp@2
  signed int v12; // ebp@2
  signed int v13; // ebx@2
  int v14; // edx@2
  int v15; // eax@2
  int v16; // ebx@2
  int v17; // esi@2
  int v18; // eax@2
  int v19; // esi@2

  result = dword_6FBBFE40(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = ((v11 >> 31) & v11) + 255;
    v13 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v14 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
    v15 = 4 * v14;
    v16 = ((v13 >> 31) & v13) + 255;
    LOWORD(v15) = 4 * v14 & 0x3E0;
    v17 = v16 << 7;
    LOWORD(v17) = ((_WORD)v16 << 7) & 0x7C00;
    v18 = v17 | (v12 >> 3) & 0x1F | v15;
    v19 = (unsigned __int8)v10 << 8;
    LOWORD(v19) = v19 & 0x8000;
    result = v19 | v18;
    *a1 = result;
    *a2 = (v16 << 16) | (v14 << 8) | v12 | ((unsigned __int8)v10 << 24);
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
