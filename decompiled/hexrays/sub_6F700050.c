void __cdecl sub_6F700050(_WORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // ecx@3
  int v11; // edx@3
  unsigned int v12; // esi@3
  int v13; // eax@3
  int *v14; // edi@6

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( (v9 >> 24) & 0x40 )
    {
      v10 = (unsigned __int8)v9;
      v11 = BYTE1(v9);
      v12 = v9 >> 31;
      v13 = (unsigned __int8)(v9 >> 16);
      if ( v12 )
      {
        v14 = &dword_6FBBFE50[4 * *a1];
        *a1 = (4 * (((v14[1] + v11 - 255) >> 31) & (*((_WORD *)v14 + 2) + v11 - 255)) + 1020) & 0x3E0 | ((((unsigned __int16)((v14[2] + v13 - 255) >> 31) & (unsigned __int16)(*((_WORD *)v14 + 4) + v13 - 255)) + 255) << 7) & 0x7C00 | (((((*v14 + v10 - 255) >> 31) & (*v14 + v10 - 255)) + 255) >> 3) & 0x1F | 0x8000;
      }
      else
      {
        *a1 = 4 * v11 & 0x3E0 | ((_WORD)v13 << 7) & 0x7C00 | (v10 >> 3);
      }
    }
  }
}
