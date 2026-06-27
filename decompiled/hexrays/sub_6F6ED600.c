unsigned int __cdecl sub_6F6ED600(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  signed int v11; // edx@2
  unsigned int v12; // ebx@2
  signed int v13; // eax@2
  int v14; // edx@3
  signed int v15; // eax@3
  unsigned __int16 v16; // dx@6

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v13 = (unsigned __int8)(result >> 16);
    if ( v12 )
    {
      v16 = (((v10 >> 1) + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | (((unsigned __int16)(v13 >> 1)
                                                                          + (unsigned __int16)(dword_6FBBFE50[4 * *a1 + 2] >> 1)) << 7) & 0x7C00 | 4 * ((dword_6FBBFE54[4 * *a1] >> 1) + (v11 >> 1)) & 0x3E0 | 0x8000;
      result = v16;
      *a1 = v16;
    }
    else
    {
      v14 = 4 * v11;
      v15 = v13 << 7;
      LOWORD(v14) = v14 & 0x3E0;
      LOWORD(v15) = v15 & 0x7C00;
      result = (v10 >> 3) | v14 | v15;
      *a1 = result;
      result = (signed __int16)result;
    }
    *a2 = dword_6FCBFE50[result];
  }
  return result;
}
