unsigned int __cdecl sub_6F71DA20(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebx@2
  signed int v11; // edi@2
  signed int v12; // ecx@2
  int v13; // edx@3
  signed int v14; // edi@3
  signed int v15; // ecx@3

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = (BYTE1(result) * a6 >> 7) - 255;
    if ( result >> 31 )
    {
      v13 = 4 * *a1;
      v14 = dword_6FBBFE50[v13] - (((v11 >> 31) & v11) + 255);
      v15 = dword_6FBBFE50[v13 + 1] - (((v12 >> 31) & v12) + 255);
      result = ((v10 >> 31) & v10) + 255;
      *a1 = ((v14 & ~(v14 >> 31)) >> 3) & 0x1F | (((unsigned __int16)(LOWORD(dword_6FBBFE50[v13 + 2]) - result) & (unsigned __int16)~((signed int)(dword_6FBBFE50[v13 + 2] - result) >> 31)) << 7) & 0x7C00 | 4 * (v15 & ~(v15 >> 31)) & 0x3E0 | 0x8000;
    }
    else
    {
      result = v10 >> 31;
      *a1 = ((((unsigned __int16)(v10 >> 31) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | (4 * ((v12 >> 31) & v12)
                                                                                             + 1020) & 0x3E0 | (((v11 & (v11 >> 31)) + 255) >> 3) & 0x1F;
    }
  }
  return result;
}
