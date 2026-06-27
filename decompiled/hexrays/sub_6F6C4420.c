unsigned int __cdecl sub_6F6C4420(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@1
  int v11; // edx@2
  int v12; // edi@2
  int v13; // edi@3
  int v14; // eax@3
  int v15; // esi@3
  int v16; // ebx@3
  int v17; // ecx@3
  unsigned int v18; // edx@3
  int v19; // esi@6
  int v20; // ST1C_4@6
  int v21; // ST14_4@6
  int v22; // esi@6
  __int64 v23; // rcx@6
  __int64 v24; // rax@6
  signed int v25; // esi@6
  signed int v26; // edi@6
  signed int v27; // ebp@6
  int v28; // [sp+14h] [bp-38h]@2
  int v29; // [sp+18h] [bp-34h]@2
  int v30; // [sp+20h] [bp-2Ch]@3
  int v31; // [sp+24h] [bp-28h]@3
  int v32; // [sp+28h] [bp-24h]@3

  result = dword_6FBBFE40(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v11 = BYTE1(result);
    v28 = (unsigned __int8)(result >> 16);
    v29 = (unsigned __int8)v10;
    v12 = (unsigned __int8)result * a5 >> 7;
    if ( (unsigned int)(unsigned __int8)v10 >> 7 )
    {
      v19 = BYTE1(result) * a6 >> 7;
      v30 = ((v12 - 255) & ((v12 - 255) >> 31)) + 255;
      v20 = (((v19 - 255) >> 31) & (v19 - 255)) + 255;
      v31 = (((v19 - 255) >> 31) & (v19 - 255)) + 255;
      v21 = ((((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255)) + 255;
      v32 = v21;
      dword_6FCFFE50(a3, a4, &v30);
      v22 = 4 * *a1;
      v23 = (v30 & ~(v30 >> 31)) - 255;
      LODWORD(v23) = dword_6FBBFE50[v22] - ((HIDWORD(v23) & v23) + 255);
      HIDWORD(v23) = dword_6FBBFE54[v22]
                   - ((((signed int)((v31 & ~((unsigned __int64)v31 >> 32)) - 255) >> 31) & ((v31 & ~((unsigned __int64)v31 >> 32))
                                                                                           - 255))
                    + 255);
      v24 = (v32 & ~(v32 >> 31)) - 255;
      v25 = dword_6FBBFE50[v22 + 2] - ((HIDWORD(v24) & v24) + 255);
      *a1 = 4 * (~(unsigned __int16)(SHIDWORD(v23) >> 31) & WORD2(v23)) & 0x3E0 | (((unsigned __int16)v25 & (unsigned __int16)~(unsigned __int16)(v25 >> 31)) << 7) & 0x7C00 | ((signed int)(~((signed int)v23 >> 31) & v23) >> 3) & 0x1F | 0x8000;
      LODWORD(v24) = *a2;
      v26 = (unsigned __int8)*a2 - (((v12 - 255) & ((v12 - 255) >> 31)) + 255);
      v27 = BYTE1(v24) - v20;
      result = ((unsigned __int8)((unsigned int)*a2 >> 16) - v21) >> 31;
      *a2 = (v29 << 24) | ~(v26 >> 31) & v26 | ((~(v27 >> 31) & v27) << 8) | ((((unsigned __int8)((unsigned int)*a2 >> 16)
                                                                              - v21) & ~result) << 16);
    }
    else
    {
      v13 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
      v30 = v13;
      v14 = (((v28 * a7 >> 7) - 255) >> 31) & ((v28 * a7 >> 7) - 255);
      v15 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v16 = v14 + 255;
      v31 = ((((v11 * a6 >> 7) - 255) >> 31) & ((v11 * a6 >> 7) - 255)) + 255;
      v32 = v14 + 255;
      dword_6FCFFE50(a3, a4, &v30);
      v17 = 4 * ((((v31 & ~(v31 >> 31)) - 255) >> 31) & ((v31 & ~(v31 >> 31)) - 255)) + 1020;
      LOWORD(v17) = v17 & 0x3E0;
      v18 = ((((signed int)((v32 & ~((unsigned __int64)v32 >> 32)) - 255) >> 31) & ((v32 & (unsigned int)~((unsigned __int64)v32 >> 32))
                                                                                  - 255))
           + 255) << 7;
      LOWORD(v18) = v18 & 0x7C00;
      result = v18 | v17 | (((((v30 & ~(v30 >> 31)) - 255) & (((v30 & ~(v30 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      *a2 = ((unsigned __int8)v10 << 24) | (v15 << 8) | (v16 << 16) | v13;
    }
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
