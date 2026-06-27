unsigned int __cdecl sub_6F6AA680(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ebp@2
  signed int v11; // edi@3
  int v12; // esi@3
  signed int v13; // edi@3
  signed int v14; // ebp@4
  signed int v15; // ST18_4@4
  int *v16; // ebx@4
  signed int v17; // ecx@4
  signed int v18; // esi@4
  __int64 v19; // rax@4
  signed int v20; // ecx@4
  signed int v21; // ebp@4
  int v22; // esi@6
  int v23; // ecx@6
  int v24; // edx@6
  int v25; // [sp+18h] [bp-34h]@3
  int v26; // [sp+1Ch] [bp-30h]@3
  int v27; // [sp+20h] [bp-2Ch]@3
  int v28; // [sp+24h] [bp-28h]@4
  int v29; // [sp+28h] [bp-24h]@4

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE48(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v25 = (unsigned __int8)(result >> 16);
      v26 = (unsigned __int8)v10;
      v11 = ((unsigned __int8)result * a5 >> 7) - 255;
      v12 = BYTE1(result) * a6 >> 7;
      v13 = ((v11 >> 31) & v11) + 255;
      v27 = v13;
      if ( (unsigned int)(unsigned __int8)v10 >> 7 )
      {
        v14 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
        v28 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
        v15 = ((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255)) + 255;
        v29 = v15;
        dword_6FCFFE50(a3, a4, &v27);
        v16 = &dword_6FBBFE50[4 * *a1];
        v17 = ((((((v27 & ~(v27 >> 31)) - 255) >> 31) & ((v27 & ~(v27 >> 31)) - 255)) + 255) >> 1) + (*v16 >> 1) - 255;
        v18 = ((signed int)((((signed int)((v28 & ~((unsigned __int64)v28 >> 32)) - 255) >> 31) & ((v28 & ~((unsigned __int64)v28 >> 32))
                                                                                                 - 255))
                          + 255) >> 1)
            + (v16[1] >> 1)
            - 255;
        v19 = (v29 & ~(v29 >> 31)) - 255;
        HIDWORD(v19) = ((signed int)((HIDWORD(v19) & v19) + 255) >> 1) + (v16[2] >> 1) - 255;
        *a1 = (4 * ((v18 >> 31) & v18) + 1020) & 0x3E0 | (((WORD2(v19) & (unsigned __int16)(SHIDWORD(v19) >> 31)) + 255) << 7) & 0x7C00 | ((((v17 >> 31) & v17) + 255) >> 3) & 0x1F | 0x8000;
        HIDWORD(v19) = *a2;
        v20 = ((*a2 >> 1) & 0x7F) + (v13 >> 1) - 255;
        v21 = ((signed int)BYTE5(v19) >> 1) + (v14 >> 1) - 255;
        result = v21 >> 31;
        *a2 = (v26 << 24) | (((v20 >> 31) & v20) + 255) | (((((((unsigned int)*a2 >> 17) & 0x7F) + (v15 >> 1) - 255) & ((signed int)((((unsigned int)*a2 >> 17) & 0x7F) + (v15 >> 1) - 255) >> 31))
                                                          + 255) << 16) | ((((v21 >> 31) & v21) + 255) << 8);
      }
      else
      {
        v22 = (((v12 - 255) >> 31) & (v12 - 255)) + 255;
        v28 = v22;
        v29 = ((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v27);
        v23 = 4 * ((((v28 & ~(v28 >> 31)) - 255) >> 31) & ((v28 & ~(v28 >> 31)) - 255)) + 1020;
        LOWORD(v23) = v23 & 0x3E0;
        v24 = (((((v29 & ~(v29 >> 31)) - 255) >> 31) & ((v29 & ~(v29 >> 31)) - 255)) + 255) << 7;
        LOWORD(v24) = v24 & 0x7C00;
        result = v24 | v23 | (((((v27 & ~(v27 >> 31)) - 255) & (((v27 & ~(v27 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = result;
        *a2 = ((unsigned __int8)v10 << 24) | (v22 << 8) | ((((((v25 * a7 >> 7) - 255) >> 31) & ((v25 * a7 >> 7) - 255))
                                                          + 255) << 16) | v13;
      }
    }
  }
  return result;
}
