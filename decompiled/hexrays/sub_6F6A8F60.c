unsigned int __cdecl sub_6F6A8F60(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@2
  int v11; // edi@3
  signed int v12; // edi@4
  signed int v13; // ecx@4
  signed int v14; // ebp@4
  signed int v15; // ST18_4@4
  int v16; // eax@4
  int *v17; // ebx@4
  int v18; // edx@4
  signed int v19; // eax@4
  signed int v20; // ebx@4
  int v21; // edx@4
  int v22; // eax@4
  int v23; // ecx@4
  int v24; // edi@7
  int v25; // esi@7
  int v26; // ecx@7
  int v27; // edx@7
  int v28; // [sp+18h] [bp-34h]@3
  int v29; // [sp+1Ch] [bp-30h]@3
  int v30; // [sp+20h] [bp-2Ch]@4
  int v31; // [sp+24h] [bp-28h]@4
  int v32; // [sp+28h] [bp-24h]@4

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v28 = (unsigned __int8)(result >> 16);
      v29 = (unsigned __int8)v10;
      v11 = (unsigned __int8)result * a5 >> 7;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v12 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        v13 = (BYTE1(result) * a6 >> 7) - 255;
        v30 = v12;
        v14 = ((v13 >> 31) & v13) + 255;
        v31 = ((v13 >> 31) & v13) + 255;
        v15 = ((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255)) + 255;
        v32 = v15;
        dword_6FCFFE50(a3, a4, &v30);
        v16 = 4 * *a1;
        v17 = &dword_6FBBFE50[v16];
        v18 = dword_6FBBFE50[v16] + ((((((v30 & ~(v30 >> 31)) - 255) >> 31) & ((v30 & ~(v30 >> 31)) - 255)) + 255) >> 2);
        v19 = dword_6FBBFE50[v16 + 1]
            + (((((v31 & ~(v31 >> 31)) - 255) & (((v31 & ~(v31 >> 31)) - 255) >> 31)) + 255) >> 2)
            - 255;
        v20 = v17[2] + ((((((v32 & ~(v32 >> 31)) - 255) >> 31) & ((v32 & ~(v32 >> 31)) - 255)) + 255) >> 2) - 255;
        *a1 = (4 * ((v19 >> 31) & v19) + 1020) & 0x3E0 | ((((unsigned __int16)v20 & (unsigned __int16)(v20 >> 31)) + 255) << 7) & 0x7C00 | (((((v18 - 255) >> 31) & (v18 - 255)) + 255) >> 3) & 0x1F | 0x8000;
        v21 = *a2;
        v22 = (unsigned __int8)*a2 + (v12 >> 2) - 255;
        v23 = ((((unsigned __int64)v22 >> 32) & v22) + 255) | (((((v15 >> 2)
                                                                + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                - 255) & (((v15 >> 2)
                                                                         + (unsigned __int8)((unsigned int)*a2 >> 16)
                                                                         - 255) >> 31))
                                                              + 255) << 16) | ((((((v14 >> 2) + BYTE1(v21) - 255) >> 31) & ((v14 >> 2) + BYTE1(v21) - 255))
                                                                              + 255) << 8);
        result = v29 << 24;
        *a2 = (v29 << 24) | v23;
      }
      else
      {
        v24 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        v30 = v24;
        v25 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v31 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v32 = ((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v30);
        v26 = 4 * ((((v31 & ~(v31 >> 31)) - 255) >> 31) & ((v31 & ~(v31 >> 31)) - 255)) + 1020;
        LOWORD(v26) = v26 & 0x3E0;
        v27 = (((((v32 & ~(v32 >> 31)) - 255) >> 31) & ((v32 & ~(v32 >> 31)) - 255)) + 255) << 7;
        LOWORD(v27) = v27 & 0x7C00;
        result = v27 | v26 | (((((v30 & ~(v30 >> 31)) - 255) & (((v30 & ~(v30 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = result;
        *a2 = ((unsigned __int8)v10 << 24) | (v25 << 8) | ((((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255))
                                                          + 255) << 16) | v24;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
  return result;
}
