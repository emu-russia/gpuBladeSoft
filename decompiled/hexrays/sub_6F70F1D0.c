unsigned int __cdecl sub_6F70F1D0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  _WORD *v10; // esi@3
  int v11; // ecx@3
  int v12; // edi@3
  int v13; // eax@3
  __int64 v14; // rcx@6
  int v15; // esi@6
  signed int v16; // ebp@6
  int v17; // edi@6
  int v18; // edx@6
  int v19; // [sp+1Ch] [bp-40h]@2
  int v20; // [sp+30h] [bp-2Ch]@3
  int v21; // [sp+34h] [bp-28h]@3
  int v22; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE48(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v19 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v20 = (((((unsigned __int8)result * a5 >> 7) - 255) >> 31) & (((unsigned __int8)result * a5 >> 7) - 255)) + 255;
      v21 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v22 = ((((v19 * a7 >> 7) - 255) >> 31) & ((v19 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v20);
      v14 = (v20 & ~(v20 >> 31)) - 255;
      v15 = 4 * *a1;
      v16 = ((signed int)((HIDWORD(v14) & v14) + 255) >> 1) + (dword_6FBBFE50[v15] >> 1) - 255;
      HIDWORD(v14) = ((((((v22 & ~(v22 >> 31)) - 255) >> 31) & ((v22 & ~(v22 >> 31)) - 255)) + 255) >> 1)
                   + (dword_6FBBFE50[v15 + 2] >> 1)
                   - 255;
      LODWORD(v14) = ((((signed int)((((signed int)((v21 & ~((unsigned __int64)v21 >> 32)) - 255) >> 31) & ((v21 & ~((unsigned __int64)v21 >> 32)) - 255))
                                   + 255) >> 1)
                     + (dword_6FBBFE50[v15 + 1] >> 1)
                     - 255) >> 31) & (((signed int)((((signed int)((v21 & ~((unsigned __int64)v21 >> 32)) - 255) >> 31) & ((v21 & ~((unsigned __int64)v21 >> 32)) - 255))
                                                  + 255) >> 1)
                                    + (dword_6FBBFE50[v15 + 1] >> 1)
                                    - 255);
      v10 = a1;
      v17 = 4 * v14 + 1020;
      v18 = ((HIDWORD(v14) & (SHIDWORD(v14) >> 31)) + 255) << 7;
      LOWORD(v17) = v17 & 0x3E0;
      LOWORD(v18) = v18 & 0x7C00;
      v13 = v17 | v18 | (((v16 & (v16 >> 31)) + 255) >> 3) & 0x1F;
      LOWORD(v13) = v13 | 0x8000;
      *a1 = v13;
    }
    else
    {
      v20 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
      v21 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v22 = ((((a7 * v19 >> 7) - 255) >> 31) & ((a7 * v19 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v20);
      v10 = a1;
      v11 = 4 * ((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 1020;
      LOWORD(v11) = v11 & 0x3E0;
      v12 = ((((v22 & ~(v22 >> 31)) - 255) & (((v22 & ~(v22 >> 31)) - 255) >> 31)) + 255) << 7;
      LOWORD(v12) = v12 & 0x7C00;
      v13 = v12 | v11 | (((((v20 & ~(v20 >> 31)) - 255) & (((v20 & ~(v20 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = v13;
    }
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v13;
    *v10 = result;
  }
  return result;
}
