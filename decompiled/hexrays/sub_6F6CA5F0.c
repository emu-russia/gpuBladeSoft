unsigned int __cdecl sub_6F6CA5F0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  signed int v11; // ebx@2
  int v12; // edi@3
  int v13; // ebx@3
  int v14; // ebp@3
  int v15; // ST18_4@3
  int v16; // edi@3
  signed int v17; // ecx@3
  signed int v18; // edx@3
  signed int v19; // edi@3
  int v20; // ecx@3
  signed int v21; // edx@3
  signed int v22; // ebp@3
  signed int v23; // ebx@3
  int v24; // ebp@5
  int v25; // ebx@5
  int v26; // ecx@5
  int v27; // edx@5
  int v28; // [sp+18h] [bp-34h]@2
  int v29; // [sp+1Ch] [bp-30h]@2
  int v30; // [sp+20h] [bp-2Ch]@3
  int v31; // [sp+24h] [bp-28h]@3
  int v32; // [sp+28h] [bp-24h]@3

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v28 = (unsigned __int8)(result >> 16);
    v29 = (unsigned __int8)v10;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v12 = BYTE1(result) * a6 >> 7;
      v13 = ((v11 >> 31) & v11) + 255;
      v30 = v13;
      v14 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v31 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v15 = ((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255)) + 255;
      v32 = v15;
      dword_6FCFFE50(a3, a4, &v30);
      v16 = 4 * *a1;
      v17 = dword_6FBBFE50[v16] + ((((v30 & ~(v30 >> 31)) - 255) >> 31) & ((v30 & ~(v30 >> 31)) - 255));
      v18 = dword_6FBBFE50[v16 + 1]
          + (((signed int)((v31 & ~((unsigned __int64)v31 >> 32)) - 255) >> 31) & ((v31 & ~((unsigned __int64)v31 >> 32))
                                                                                 - 255));
      v19 = dword_6FBBFE50[v16 + 2] + ((((v32 & ~(v32 >> 31)) - 255) >> 31) & ((v32 & ~(v32 >> 31)) - 255));
      *a1 = (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0 | ((((unsigned __int16)v19 & (unsigned __int16)(v19 >> 31)) + 255) << 7) & 0x7C00 | ((((v17 >> 31) & v17) + 255) >> 3) & 0x1F | 0x8000;
      v20 = *a2;
      v21 = v13 + (unsigned __int8)*a2 - 255;
      v22 = v14 + BYTE1(v20) - 255;
      v23 = v15 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
      result = v22 >> 31;
      *a2 = (v29 << 24) | (((v21 >> 31) & v21) + 255) | (((v23 & (v23 >> 31)) + 255) << 16) | ((((v22 >> 31) & v22) + 255) << 8);
    }
    else
    {
      v24 = (v11 & (v11 >> 31)) + 255;
      v30 = (v11 & (v11 >> 31)) + 255;
      v25 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v31 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v32 = ((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v30);
      v26 = 4 * ((((v31 & ~(v31 >> 31)) - 255) >> 31) & ((v31 & ~(v31 >> 31)) - 255)) + 1020;
      LOWORD(v26) = v26 & 0x3E0;
      v27 = (((((v32 & ~(v32 >> 31)) - 255) >> 31) & ((v32 & ~(v32 >> 31)) - 255)) + 255) << 7;
      LOWORD(v27) = v27 & 0x7C00;
      result = v27 | v26 | (((((v30 & ~(v30 >> 31)) - 255) & (((v30 & ~(v30 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      *a2 = (v29 << 24) | (v25 << 8) | ((((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255)) + 255) << 16) | v24;
    }
  }
  return result;
}
