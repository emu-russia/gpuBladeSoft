unsigned int __cdecl sub_6F6C9930(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  signed int v11; // edi@2
  int v12; // esi@2
  signed int v13; // edi@2
  signed int v14; // ST18_4@3
  int v15; // eax@3
  int v16; // edx@3
  int *v17; // ebx@3
  signed int v18; // eax@3
  signed int v19; // ebx@3
  int v20; // ecx@3
  signed int v21; // edx@3
  signed int v22; // ebp@3
  signed int v23; // esi@3
  int v24; // esi@5
  int v25; // ecx@5
  int v26; // edx@5
  int v27; // [sp+18h] [bp-34h]@2
  int v28; // [sp+1Ch] [bp-30h]@2
  int v29; // [sp+20h] [bp-2Ch]@2
  int v30; // [sp+24h] [bp-28h]@3
  int v31; // [sp+28h] [bp-24h]@3

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v27 = (unsigned __int8)(result >> 16);
    v28 = (unsigned __int8)v10;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = BYTE1(result) * a6 >> 7;
    v13 = ((v11 >> 31) & v11) + 255;
    v29 = v13;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v30 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v14 = ((((v27 * a7 >> 7) - 255) >> 31) & ((v27 * a7 >> 7) - 255)) + 255;
      v31 = v14;
      dword_6FCFFE50(a3, a4, &v29);
      v15 = 4 * *a1;
      v16 = dword_6FBBFE50[v15] + ((((((v29 & ~(v29 >> 31)) - 255) >> 31) & ((v29 & ~(v29 >> 31)) - 255)) + 255) >> 2);
      v17 = &dword_6FBBFE50[v15];
      v18 = dword_6FBBFE50[v15 + 1]
          + (((((v30 & ~(v30 >> 31)) - 255) & (((v30 & ~(v30 >> 31)) - 255) >> 31)) + 255) >> 2)
          - 255;
      v19 = v17[2] + ((((((v31 & ~(v31 >> 31)) - 255) >> 31) & ((v31 & ~(v31 >> 31)) - 255)) + 255) >> 2) - 255;
      *a1 = (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0 | ((((unsigned __int16)v19 & (unsigned __int16)(v19 >> 31)) + 255) << 7) & 0x7C00 | (((((v16 - 255) >> 31) & (v16 - 255)) + 255) >> 3) & 0x1F | 0x8000;
      v20 = *a2;
      v21 = (unsigned __int8)*a2 + (v13 >> 2) - 255;
      v22 = (((((v12 - 255) >> 31) & (v12 - 255)) + 255) >> 2) + BYTE1(v20) - 255;
      v23 = (v14 >> 2) + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
      result = v22 >> 31;
      *a2 = (v28 << 24) | (((v21 >> 31) & v21) + 255) | (((v23 & (v23 >> 31)) + 255) << 16) | ((((v22 >> 31) & v22) + 255) << 8);
    }
    else
    {
      v24 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v30 = v24;
      v31 = ((((v27 * a7 >> 7) - 255) >> 31) & ((v27 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v29);
      v25 = 4 * ((((v30 & ~(v30 >> 31)) - 255) >> 31) & ((v30 & ~(v30 >> 31)) - 255)) + 1020;
      LOWORD(v25) = v25 & 0x3E0;
      v26 = (((((v31 & ~(v31 >> 31)) - 255) >> 31) & ((v31 & ~(v31 >> 31)) - 255)) + 255) << 7;
      LOWORD(v26) = v26 & 0x7C00;
      result = v26 | v25 | (((((v29 & ~(v29 >> 31)) - 255) & (((v29 & ~(v29 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      *a2 = ((unsigned __int8)v10 << 24) | (v24 << 8) | ((((((v27 * a7 >> 7) - 255) >> 31) & ((v27 * a7 >> 7) - 255))
                                                        + 255) << 16) | v13;
    }
  }
  return result;
}
