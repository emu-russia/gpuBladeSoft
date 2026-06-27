void __cdecl sub_6F6B0FD0(_WORD *a1, unsigned int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  int v10; // edx@3
  int v11; // esi@3
  int v12; // eax@7
  unsigned int v13; // ecx@7
  int v14; // [sp+18h] [bp-34h]@3
  int v15; // [sp+1Ch] [bp-30h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = BYTE3(v9);
      v11 = (unsigned __int8)v9;
      v14 = BYTE1(v9);
      v15 = (unsigned __int8)(v9 >> 16);
      if ( (unsigned int)BYTE3(v9) >> 7 )
      {
        v12 = 4 * *a1;
        *a1 = 4 * ((LOWORD(dword_6FBBFE54[v12]) - v14) & ~(unsigned __int16)((dword_6FBBFE54[v12] - v14) >> 31)) & 0x3E0 | (((unsigned __int16)(dword_6FBBFE50[v12 + 2] - v15) & (unsigned __int16)~(unsigned __int16)((dword_6FBBFE50[v12 + 2] - v15) >> 31)) << 7) & 0x7C00 | ((~((dword_6FBBFE50[v12] - v11) >> 31) & (dword_6FBBFE50[v12] - v11)) >> 3) & 0x1F | 0x8000;
        v13 = *a2;
        *a2 = ~(((unsigned __int8)*a2 - v11) >> 31) & ((unsigned __int8)*a2 - v11) | (((BYTE1(v13) - v14) & ~((BYTE1(v13) - v14) >> 31)) << 8) | ((~(((unsigned __int8)(*a2 >> 16) - v15) >> 31) & ((unsigned __int8)(*a2 >> 16) - v15)) << 16) | (v10 << 24);
      }
      else
      {
        *a1 = ((unsigned __int8)(v9 >> 16) << 7) & 0x7C00 | 4 * BYTE1(v9) & 0x3E0 | ((signed int)(unsigned __int8)v9 >> 3);
        *a2 = v9;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
}
