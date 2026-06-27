unsigned int __cdecl sub_6F6D9130(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebp@2
  signed int v11; // esi@2
  signed int v12; // ecx@2
  int v13; // eax@3
  signed int v14; // ecx@3
  unsigned int v15; // ebp@3
  int v16; // esi@3
  int v17; // eax@6
  signed int v18; // edx@6
  signed int v19; // ST1C_4@6
  unsigned __int16 v20; // bp@6

  JUMPOUT(*a1, 0, nullsub_36);
  result = dword_6FBBFE48(a8, a9);
  if ( BYTE3(result) & 0x40 )
  {
    v10 = (unsigned __int8)result;
    v11 = BYTE1(result);
    v12 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v17 = 4 * *a1;
      v18 = dword_6FBBFE50[v17 + 2];
      v19 = dword_6FBBFE50[v17 + 1];
      result = dword_6FBBFE50[v17] >> 1;
      v20 = 4 * ((v19 >> 1) + (v11 >> 1)) & 0x3E0 | (((unsigned __int16)(v12 >> 1) + (unsigned __int16)(v18 >> 1)) << 7) & 0x7C00 | ((signed int)(result + (v10 >> 1)) >> 3) & 0x1F | 0x8000;
      v16 = v20;
      *a1 = v20;
    }
    else
    {
      v13 = 4 * BYTE1(result);
      v14 = v12 << 7;
      LOWORD(v13) = 4 * v11 & 0x3E0;
      LOWORD(v14) = v14 & 0x7C00;
      result = v14 | v13;
      v15 = result | (v10 >> 3);
      *a1 = v15;
      v16 = (signed __int16)v15;
    }
    *a2 = dword_6FCBFE50[v16];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
