unsigned int __cdecl sub_6F6F7060(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebx@2
  signed int v11; // edi@2
  signed int v12; // ecx@2
  int v13; // ebp@3
  int v14; // ebx@3
  int *v15; // ebp@6
  signed int v16; // edi@6
  signed int v17; // ecx@6
  signed int v18; // ebp@6
  unsigned __int16 v19; // si@6

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = (BYTE1(result) * a6 >> 7) - 255;
    if ( result >> 31 )
    {
      v15 = &dword_6FBBFE50[4 * *a1];
      v16 = *v15 - (((v11 >> 31) & v11) + 255);
      v17 = v15[1] - (((v12 >> 31) & v12) + 255);
      v18 = v15[2] - (((v10 >> 31) & v10) + 255);
      v19 = 4 * (v17 & ~(v17 >> 31)) & 0x3E0 | ((v16 & ~(v16 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v18 & (unsigned __int16)~(v18 >> 31)) << 7) & 0x7C00 | 0x8000;
      result = v19;
      *a1 = v19;
    }
    else
    {
      v13 = 4 * ((v12 >> 31) & v12) + 1020;
      LOWORD(v13) = v13 & 0x3E0;
      v14 = (((v10 >> 31) & v10) + 255) << 7;
      LOWORD(v14) = v14 & 0x7C00;
      result = v14 | v13 | (((v11 & (v11 >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      result = (signed __int16)result;
    }
    *a2 = dword_6FCBFE50[result];
  }
  return result;
}
