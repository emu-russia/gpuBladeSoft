unsigned int __cdecl sub_6F6CA910(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  signed int v11; // edi@2
  int v12; // esi@2
  signed int v13; // edi@2
  int v14; // esi@3
  int v15; // eax@3
  int v16; // ebx@3
  signed int v17; // ebp@6
  signed int v18; // ST18_4@6
  int v19; // ebx@6
  int v20; // esi@6
  int *v21; // ebx@6
  signed int v22; // ecx@6
  signed int v23; // esi@6
  __int64 v24; // rax@6
  signed int v25; // esi@6
  signed int v26; // ebp@6
  __int64 v27; // rcx@6
  int v28; // [sp+18h] [bp-34h]@2
  int v29; // [sp+1Ch] [bp-30h]@2
  int v30; // [sp+20h] [bp-2Ch]@2
  int v31; // [sp+24h] [bp-28h]@3
  int v32; // [sp+28h] [bp-24h]@3

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v28 = (unsigned __int8)(result >> 16);
    v29 = (unsigned __int8)v10;
    v11 = ((unsigned __int8)result * a5 >> 7) - 255;
    v12 = BYTE1(result) * a6 >> 7;
    v13 = ((v11 >> 31) & v11) + 255;
    v30 = v13;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v17 = ((v12 - 255) & ((v12 - 255) >> 31)) + 255;
      v31 = ((v12 - 255) & ((v12 - 255) >> 31)) + 255;
      v18 = ((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255)) + 255;
      v32 = v18;
      dword_6FCFFE50(a3, a4, &v30);
      v19 = 4 * *a1;
      v20 = v19 * 4;
      v21 = &dword_6FBBFE50[v19];
      v22 = ((((((v30 & ~(v30 >> 31)) - 255) >> 31) & ((v30 & ~(v30 >> 31)) - 255)) + 255) >> 1)
          + (*(int *)((char *)dword_6FBBFE50 + v20) >> 1)
          - 255;
      v23 = ((signed int)((((signed int)((v31 & ~((unsigned __int64)v31 >> 32)) - 255) >> 31) & ((v31 & ~((unsigned __int64)v31 >> 32))
                                                                                               - 255))
                        + 255) >> 1)
          + (v21[1] >> 1)
          - 255;
      v24 = (v32 & ~(v32 >> 31)) - 255;
      HIDWORD(v24) = ((signed int)((HIDWORD(v24) & v24) + 255) >> 1) + (v21[2] >> 1) - 255;
      *a1 = (4 * ((v23 >> 31) & v23) + 1020) & 0x3E0 | (((WORD2(v24) & (unsigned __int16)(SHIDWORD(v24) >> 31)) + 255) << 7) & 0x7C00 | ((((v22 >> 31) & v22) + 255) >> 3) & 0x1F | 0x8000;
      LODWORD(v24) = *a2;
      v25 = ((*a2 >> 1) & 0x7F) + (v13 >> 1) - 255;
      v26 = ((signed int)BYTE1(v24) >> 1) + (v17 >> 1) - 255;
      v27 = ((*a2 >> 17) & 0x7F) + (v18 >> 1) - 255;
      *a2 = (v29 << 24) | (((v25 >> 31) & v25) + 255) | ((((v26 >> 31) & v26) + 255) << 8) | ((((unsigned int)v27 & HIDWORD(v27))
                                                                                             + 255) << 16);
    }
    else
    {
      v14 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v31 = v14;
      v15 = (((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255);
      v16 = v15 + 255;
      v32 = v15 + 255;
      dword_6FCFFE50(a3, a4, &v30);
      *a1 = ((((unsigned __int16)((signed int)((v32 & ~((unsigned __int64)v32 >> 32)) - 255) >> 31) & (unsigned __int16)((v32 & ~((unsigned __int64)v32 >> 32)) - 255))
            + 255) << 7) & 0x7C00 | (4 * ((((v31 & ~(v31 >> 31)) - 255) >> 31) & ((v31 & ~(v31 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v30 & ~(v30 >> 31)) - 255) & (((v30 & ~(v30 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a2 = ((unsigned __int8)v10 << 24) | (v14 << 8) | (v16 << 16) | v13;
    }
    result = (unsigned int)a1;
    *(_WORD *)result |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
