unsigned int __cdecl sub_6F6C3D80(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  int v11; // edx@2
  int v12; // edi@2
  int v13; // edi@3
  int v14; // eax@3
  int v15; // esi@3
  int v16; // ebx@3
  signed int v17; // esi@6
  signed int v18; // ST18_4@6
  int *v19; // ebx@6
  int v20; // edx@6
  signed int v21; // eax@6
  signed int v22; // ebx@6
  int v23; // eax@6
  signed int v24; // ebp@6
  int v25; // [sp+18h] [bp-34h]@2
  int v26; // [sp+1Ch] [bp-30h]@2
  int v27; // [sp+20h] [bp-2Ch]@3
  int v28; // [sp+24h] [bp-28h]@3
  int v29; // [sp+28h] [bp-24h]@3

  result = dword_6FBBFE40(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v11 = BYTE1(result);
    v25 = (unsigned __int8)(result >> 16);
    v26 = (unsigned __int8)v10;
    v12 = (unsigned __int8)result * a5 >> 7;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v27 = ((v12 - 255) & ((v12 - 255) >> 31)) + 255;
      v17 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v18 = ((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255)) + 255;
      v28 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v29 = v18;
      dword_6FCFFE50(a3, a4, &v27);
      v19 = &dword_6FBBFE50[4 * *a1];
      v20 = *v19 + ((((((v27 & ~(v27 >> 31)) - 255) >> 31) & ((v27 & ~(v27 >> 31)) - 255)) + 255) >> 2);
      v21 = v19[1] + (((((v28 & ~(v28 >> 31)) - 255) & (((v28 & ~(v28 >> 31)) - 255) >> 31)) + 255) >> 2) - 255;
      v22 = v19[2] + ((((((v29 & ~(v29 >> 31)) - 255) >> 31) & ((v29 & ~(v29 >> 31)) - 255)) + 255) >> 2) - 255;
      *a1 = (4 * ((v21 >> 31) & v21) + 1020) & 0x3E0 | ((((unsigned __int16)v22 & (unsigned __int16)(v22 >> 31)) + 255) << 7) & 0x7C00 | (((((v20 - 255) >> 31) & (v20 - 255)) + 255) >> 3) & 0x1F | 0x8000;
      v23 = *a2;
      v24 = (unsigned __int8)*a2 + ((((v12 - 255) & ((v12 - 255) >> 31)) + 255) >> 2) - 255;
      *a2 = (v26 << 24) | (((v24 >> 31) & v24) + 255) | ((((((v17 >> 2) + BYTE1(v23) - 255) >> 31) & ((v17 >> 2) + BYTE1(v23) - 255))
                                                        + 255) << 8) | (((((v18 >> 2)
                                                                         + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                         - 255) & (((v18 >> 2)
                                                                                  + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                                  - 255) >> 31))
                                                                       + 255) << 16);
    }
    else
    {
      v13 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v27 = v13;
      v14 = (((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255);
      v15 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v16 = v14 + 255;
      v28 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v29 = v14 + 255;
      dword_6FCFFE50(a3, a4, &v27);
      *a1 = ((((unsigned __int16)((signed int)((v29 & ~((unsigned __int64)v29 >> 32)) - 255) >> 31) & (unsigned __int16)((v29 & ~((unsigned __int64)v29 >> 32)) - 255))
            + 255) << 7) & 0x7C00 | (4 * ((((v28 & ~(v28 >> 31)) - 255) >> 31) & ((v28 & ~(v28 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v27 & ~(v27 >> 31)) - 255) & (((v27 & ~(v27 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a2 = ((unsigned __int8)v10 << 24) | (v15 << 8) | (v16 << 16) | v13;
    }
    result = (unsigned int)a1;
    *(_WORD *)result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
