unsigned int __cdecl sub_6F713690(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  signed int v11; // esi@2
  unsigned int v12; // ebx@2
  signed int v13; // eax@2
  int v14; // edx@3
  int v15; // ebx@3
  int v16; // esi@5
  signed int v17; // eax@5

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v13 = (unsigned __int8)(result >> 16);
    if ( v12 )
    {
      v14 = 4 * *a1;
      v15 = (v13 >> 1) + (dword_6FBBFE50[v14 + 2] >> 1);
      result = (unsigned int)a1;
      *a1 = (((dword_6FBBFE50[v14] >> 1) + (v10 >> 1)) >> 3) & 0x1F | ((_WORD)v15 << 7) & 0x7C00 | 4
                                                                                                 * ((dword_6FBBFE54[v14] >> 1)
                                                                                                  + (v11 >> 1)) & 0x3E0 | 0x8000;
    }
    else
    {
      v16 = 4 * v11;
      v17 = v13 << 7;
      LOWORD(v16) = v16 & 0x3E0;
      LOWORD(v17) = v17 & 0x7C00;
      result = v16 | v17;
      *a1 = result | (v10 >> 3);
    }
  }
  return result;
}
