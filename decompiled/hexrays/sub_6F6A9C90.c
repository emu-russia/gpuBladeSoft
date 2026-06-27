unsigned int __cdecl sub_6F6A9C90(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@2
  int v11; // edi@3
  int v12; // edi@4
  signed int v13; // ecx@4
  int v14; // ebp@4
  int v15; // ST18_4@4
  int v16; // esi@4
  __int64 v17; // rcx@4
  signed int v18; // edx@4
  signed int v19; // esi@4
  int v20; // edx@4
  int v21; // eax@4
  int v22; // edi@7
  int v23; // esi@7
  int v24; // ecx@7
  int v25; // edx@7
  int v26; // [sp+18h] [bp-34h]@3
  int v27; // [sp+1Ch] [bp-30h]@3
  int v28; // [sp+20h] [bp-2Ch]@4
  int v29; // [sp+24h] [bp-28h]@4
  int v30; // [sp+28h] [bp-24h]@4

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v26 = (unsigned __int8)(result >> 16);
      v27 = (unsigned __int8)v10;
      v11 = (unsigned __int8)result * a5 >> 7;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v12 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        v13 = (BYTE1(result) * a6 >> 7) - 255;
        v28 = v12;
        v14 = ((v13 >> 31) & v13) + 255;
        v29 = ((v13 >> 31) & v13) + 255;
        v15 = ((((v26 * a7 >> 7) - 255) >> 31) & ((v26 * a7 >> 7) - 255)) + 255;
        v30 = v15;
        dword_6FCFFE50(a3, a4, &v28);
        v16 = 4 * *a1;
        v17 = (v28 & ~(v28 >> 31)) - 255;
        LODWORD(v17) = dword_6FBBFE50[v16] + (HIDWORD(v17) & v17);
        v18 = dword_6FBBFE50[v16 + 1]
            + (((signed int)((v29 & ~((unsigned __int64)v29 >> 32)) - 255) >> 31) & ((v29 & ~((unsigned __int64)v29 >> 32))
                                                                                   - 255));
        v19 = dword_6FBBFE50[v16 + 2] + ((((v30 & ~(v30 >> 31)) - 255) >> 31) & ((v30 & ~(v30 >> 31)) - 255));
        *a1 = (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0 | ((((unsigned __int16)v19 & (unsigned __int16)(v19 >> 31)) + 255) << 7) & 0x7C00 | ((signed int)((((signed int)v17 >> 31) & v17) + 255) >> 3) & 0x1F | 0x8000;
        v20 = *a2;
        v21 = v12 + (unsigned __int8)*a2 - 255;
        HIDWORD(v17) = v15 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
        LODWORD(v17) = ((((unsigned __int64)v21 >> 32) & v21) + 255) | (((HIDWORD(v17) & (SHIDWORD(v17) >> 31)) + 255) << 16) | (((((v14 + BYTE1(v20) - 255) >> 31) & (v14 + BYTE1(v20) - 255)) + 255) << 8);
        result = v27 << 24;
        *a2 = (v27 << 24) | v17;
      }
      else
      {
        v22 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        v28 = v22;
        v23 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v29 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        v30 = ((((v26 * a7 >> 7) - 255) >> 31) & ((v26 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v28);
        v24 = 4 * ((((v29 & ~(v29 >> 31)) - 255) >> 31) & ((v29 & ~(v29 >> 31)) - 255)) + 1020;
        LOWORD(v24) = v24 & 0x3E0;
        v25 = (((((v30 & ~(v30 >> 31)) - 255) >> 31) & ((v30 & ~(v30 >> 31)) - 255)) + 255) << 7;
        LOWORD(v25) = v25 & 0x7C00;
        result = v25 | v24 | (((((v28 & ~(v28 >> 31)) - 255) & (((v28 & ~(v28 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = result;
        *a2 = ((unsigned __int8)v10 << 24) | (v23 << 8) | ((((((v26 * a7 >> 7) - 255) >> 31) & ((v26 * a7 >> 7) - 255))
                                                          + 255) << 16) | v22;
      }
      *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    }
  }
  return result;
}
