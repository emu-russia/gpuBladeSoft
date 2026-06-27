unsigned int __cdecl sub_6F6C94C0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // edx@2
  signed int v11; // ecx@2
  signed int v12; // ecx@3
  signed int v13; // ebx@3
  signed int v14; // edi@3
  unsigned int v15; // eax@3
  unsigned int v16; // esi@3
  signed int v17; // ebp@3

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = BYTE3(result);
    v11 = (unsigned __int8)(result >> 16);
    if ( (unsigned int)BYTE3(result) >> 7 )
    {
      v12 = v11 >> 1;
      v13 = (signed int)BYTE1(result) >> 1;
      v14 = (signed int)(unsigned __int8)result >> 1;
      *a1 = ((v14 + (dword_6FBBFE50[4 * *a1] >> 1)) >> 3) & 0x1F | (((_WORD)v12
                                                                   + (unsigned __int16)(dword_6FBBFE58[4 * *a1] >> 1)) << 7) & 0x7C00 | 4 * (v13 + (dword_6FBBFE50[4 * *a1 + 1] >> 1)) & 0x3E0 | 0x8000;
      v15 = *a2;
      v16 = v15;
      v17 = (signed int)BYTE1(v15) >> 1;
      result = ((signed int)*a2 >> 1) & 0x7F;
      *a2 = ((v17 + v13) << 8) | ((((v16 >> 17) & 0x7F) + v12) << 16) | (result + v14) | (v10 << 24);
    }
    else
    {
      *a1 = 4 * BYTE1(result) & 0x3E0 | ((_WORD)v11 << 7) & 0x7C00 | ((signed int)(unsigned __int8)result >> 3);
      *a2 = result;
    }
  }
  return result;
}
