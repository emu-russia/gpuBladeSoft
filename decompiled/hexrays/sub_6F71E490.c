unsigned int __cdecl sub_6F71E490(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  __int16 v10; // di@2
  signed int v11; // ebp@2
  signed int v12; // ecx@2
  signed int v13; // edx@2

  result = dword_6FBBFE44(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v10 = (result >> 24 << 8) & 0x8000;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = (BYTE1(result) * a6 >> 7) - 255;
    v13 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    result = v13 >> 31;
    *a1 = ((((unsigned __int16)(v13 >> 31) & (unsigned __int16)v13) + 255) << 7) & 0x7C00 | (4 * ((v12 >> 31) & v12)
                                                                                           + 1020) & 0x3E0 | ((((v11 >> 31) & v11) + 255) >> 3) & 0x1F | v10;
  }
  return result;
}
