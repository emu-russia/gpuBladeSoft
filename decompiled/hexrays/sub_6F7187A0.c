unsigned int __cdecl sub_6F7187A0(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebx@2
  int v11; // edx@2
  unsigned int v12; // ecx@2
  int v13; // eax@2
  int v14; // ecx@3
  signed int v15; // esi@3
  int v16; // ebx@3
  signed int v17; // ecx@3
  int v18; // edx@3
  int v19; // edx@5
  int v20; // eax@5

  result = dword_6FBBFE44(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v13 = (unsigned __int8)(result >> 16);
    if ( v12 )
    {
      v14 = 4 * *a1;
      v15 = dword_6FBBFE50[v14] - v10;
      v16 = dword_6FBBFE50[v14 + 2];
      v17 = dword_6FBBFE54[v14] - v11;
      v18 = ((v16 - v13) & ~((v16 - v13) >> 31)) << 7;
      result = ((v15 & ~(v15 >> 31)) >> 3) & 0x1F;
      *a1 = result | v18 & 0x7C00 | 4 * (v17 & ~(v17 >> 31)) & 0x3E0 | 0x8000;
    }
    else
    {
      v19 = 4 * v11;
      v20 = v13 << 7;
      LOWORD(v19) = v19 & 0x3E0;
      LOWORD(v20) = v20 & 0x7C00;
      result = (v10 >> 3) | v19 | v20;
      *a1 = result;
    }
  }
  return result;
}
