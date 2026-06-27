unsigned int __cdecl sub_6F6BD780(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  int v11; // edx@2
  int v12; // edi@2
  int v13; // edi@3
  int v14; // eax@3
  int v15; // esi@3
  int v16; // ebx@3
  int v17; // eax@6
  int v18; // ST1C_4@6
  int v19; // esi@6
  int v20; // ebp@6
  signed int v21; // ecx@6
  signed int v22; // edx@6
  signed int v23; // ebp@6
  int v24; // eax@6
  signed int v25; // ebx@6
  int v26; // [sp+14h] [bp-38h]@2
  int v27; // [sp+18h] [bp-34h]@2
  int v28; // [sp+20h] [bp-2Ch]@3
  int v29; // [sp+24h] [bp-28h]@3
  int v30; // [sp+28h] [bp-24h]@3

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v11 = BYTE1(result);
    v26 = (unsigned __int8)(result >> 16);
    v27 = (unsigned __int8)v10;
    v12 = (unsigned __int8)result * a5 >> 7;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v17 = ((v12 - 255) >> 31) & (v12 - 255);
      v18 = v17 + 255;
      v28 = v17 + 255;
      v19 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v29 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v30 = ((((v26 * a7 >> 7) - 255) >> 31) & ((v26 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v28);
      v20 = 4 * *a1;
      v21 = dword_6FBBFE50[v20] + ((((v28 & ~(v28 >> 31)) - 255) >> 31) & ((v28 & ~(v28 >> 31)) - 255));
      v22 = dword_6FBBFE50[v20 + 1]
          + (((signed int)((v29 & ~((unsigned __int64)v29 >> 32)) - 255) >> 31) & ((v29 & ~((unsigned __int64)v29 >> 32))
                                                                                 - 255));
      v23 = dword_6FBBFE50[v20 + 2] + ((((v30 & ~(v30 >> 31)) - 255) >> 31) & ((v30 & ~(v30 >> 31)) - 255));
      *a1 = (4 * ((v22 >> 31) & v22) + 1020) & 0x3E0 | ((((unsigned __int16)v23 & (unsigned __int16)(v23 >> 31)) + 255) << 7) & 0x7C00 | ((((v21 >> 31) & v21) + 255) >> 3) & 0x1F | 0x8000;
      v24 = *a2;
      v25 = ((((v26 * a7 >> 7) - 255) >> 31) & ((v26 * a7 >> 7) - 255))
          + 255
          + (unsigned __int8)((unsigned int)*a2 >> 16)
          - 255;
      *a2 = (v27 << 24) | ((((v18 + (unsigned __int8)*a2 - 255) >> 31) & (v18 + (unsigned __int8)*a2 - 255)) + 255) | (((((v19 + BYTE1(v24) - 255) >> 31) & (v19 + BYTE1(v24) - 255)) + 255) << 8) | (((v25 & (v25 >> 31)) + 255) << 16);
    }
    else
    {
      v13 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v28 = v13;
      v14 = (((v26 * a7 >> 7) - 255) >> 31) & ((v26 * a7 >> 7) - 255);
      v15 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v16 = v14 + 255;
      v29 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v30 = v14 + 255;
      dword_6FCFFE50(a3, a4, &v28);
      *a1 = ((((unsigned __int16)(((v30 & ~(v30 >> 31)) - 255) >> 31) & (unsigned __int16)((v30 & ~(v30 >> 31)) - 255))
            + 255) << 7) & 0x7C00 | (4 * ((((v29 & ~(v29 >> 31)) - 255) >> 31) & ((v29 & ~(v29 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v28 & ~(v28 >> 31)) - 255) & (((v28 & ~(v28 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a2 = ((unsigned __int8)v10 << 24) | (v15 << 8) | (v16 << 16) | v13;
    }
    result = (unsigned int)a1;
    *(_WORD *)result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
