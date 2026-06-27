unsigned int __cdecl sub_6F6E7BF0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ST18_4@2
  int v12; // ST1C_4@2
  int v13; // eax@2
  signed int v14; // esi@2
  unsigned int v15; // edi@3
  int v16; // ecx@3
  int v17; // ecx@3
  int v18; // esi@3
  int v19; // eax@6
  signed int v20; // ebx@6
  signed int v21; // edi@6
  signed int v22; // ecx@6
  signed int v23; // edx@6
  int v24; // [sp+30h] [bp-2Ch]@2
  int v25; // [sp+34h] [bp-28h]@3
  int v26; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result);
    v13 = (unsigned __int8)(result >> 16);
    v14 = (v12 * a6 >> 7) - 255;
    v24 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
    if ( v10 >> 7 )
    {
      v25 = ((v14 >> 31) & v14) + 255;
      v26 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v24);
      v19 = 4 * *a1;
      v20 = dword_6FBBFE50[v19]
          + ((((((v24 & ~(v24 >> 31)) - 255) >> 31) & ((v24 & ~(v24 >> 31)) - 255)) + 255) >> 2)
          - 255;
      v21 = dword_6FBBFE50[v19 + 1]
          + ((((((v25 & ~(v25 >> 31)) - 255) >> 31) & ((v25 & ~(v25 >> 31)) - 255)) + 255) >> 2)
          - 255;
      v22 = dword_6FBBFE50[v19 + 2]
          + (((((v26 & ~(v26 >> 31)) - 255) & (((v26 & ~(v26 >> 31)) - 255) >> 31)) + 255) >> 2)
          - 255;
      v23 = v20 >> 31;
      result = v22 >> 31;
      LOWORD(v23) = (4 * ((v21 >> 31) & v21) + 1020) & 0x3E0 | ((((unsigned __int16)result & (unsigned __int16)v22) + 255) << 7) & 0x7C00 | (((v20 & v23) + 255) >> 3) & 0x1F | 0x8000;
      v18 = (unsigned __int16)v23;
      *a1 = v23;
    }
    else
    {
      v25 = ((v14 >> 31) & v14) + 255;
      v26 = ((((v13 * a7 >> 7) - 255) >> 31) & ((v13 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v24);
      result = ((v25 & ~(v25 >> 31)) - 255) >> 31;
      v15 = 4 * (result & ((v25 & ~(v25 >> 31)) - 255)) + 1020;
      LOWORD(v15) = v15 & 0x3E0;
      v16 = ((((v26 & ~(v26 >> 31)) - 255) & (((v26 & ~(v26 >> 31)) - 255) >> 31)) + 255) << 7;
      LOWORD(v16) = v16 & 0x7C00;
      v17 = v15 | (((((v24 & ~(v24 >> 31)) - 255) & (((v24 & ~(v24 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F | v16;
      *a1 = v17;
      v18 = (signed __int16)v17;
    }
    *a2 = dword_6FCBFE50[v18];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
