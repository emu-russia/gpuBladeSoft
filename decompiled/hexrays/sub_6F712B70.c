unsigned int __cdecl sub_6F712B70(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ecx@2
  signed int v11; // edx@2
  unsigned int v12; // ebx@2
  signed int v13; // eax@2
  int *v14; // esi@3
  signed int v15; // eax@3
  signed int v16; // edx@3
  int v17; // eax@3
  int v18; // ecx@3
  int v19; // edx@5
  signed int v20; // eax@5

  result = dword_6FBBFE40(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = result >> 31;
    v13 = (unsigned __int8)(result >> 16);
    if ( v12 )
    {
      v14 = &dword_6FBBFE50[4 * *a1];
      v15 = v14[2] + (v13 >> 2) - 255;
      v16 = v14[1] + (v11 >> 2) - 255;
      v17 = (((v15 >> 31) & v15) + 255) << 7;
      LOWORD(v17) = v17 & 0x7C00;
      v18 = v17 | ((((*v14 + (v10 >> 2) - 255) & ((*v14 + (v10 >> 2) - 255) >> 31)) + 255) >> 3) & 0x1F;
      result = v16 >> 31;
      *a1 = (4 * ((v16 >> 31) & v16) + 1020) & 0x3E0 | v18 | 0x8000;
    }
    else
    {
      v19 = 4 * v11;
      v20 = v13 << 7;
      LOWORD(v19) = v19 & 0x3E0;
      LOWORD(v20) = v20 & 0x7C00;
      result = v19 | v20;
      *a1 = result | (v10 >> 3);
    }
  }
  return result;
}
