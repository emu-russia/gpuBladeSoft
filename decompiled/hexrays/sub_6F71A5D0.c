unsigned int __cdecl sub_6F71A5D0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  int v10; // esi@3
  signed int v11; // edx@3
  int v12; // edi@5
  int v13; // edx@5
  int v14; // [sp+1Ch] [bp-40h]@2
  int v15; // [sp+30h] [bp-2Ch]@3
  int v16; // [sp+34h] [bp-28h]@3
  int v17; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE44(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v14 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v15 = (((((unsigned __int8)result * a5 >> 7) - 255) >> 31) & (((unsigned __int8)result * a5 >> 7) - 255)) + 255;
      v16 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v17 = (((unsigned __int64)((a7 * v14 >> 7) - 255) >> 32) & ((a7 * v14 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v15);
      v10 = 4 * *a1;
      v11 = dword_6FBBFE54[v10] + ((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255));
      result = (unsigned int)a1;
      *a1 = (4 * ((v11 >> 31) & v11) + 1020) & 0x3E0 | (((((((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31))
                                                         + dword_6FBBFE50[v10]) & (((((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31))
                                                                                  + dword_6FBBFE50[v10]) >> 31))
                                                       + 255) >> 3) & 0x1F | ((((unsigned __int16)(LOWORD(dword_6FBBFE58[v10])
                                                                                                 + (((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31))) & (unsigned __int16)((dword_6FBBFE58[v10] + (((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31))) >> 31))
                                                                             + 255) << 7) & 0x7C00 | 0x8000;
    }
    else
    {
      v15 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
      v16 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v17 = (((unsigned __int64)((a7 * v14 >> 7) - 255) >> 32) & ((a7 * v14 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v15);
      v12 = 4 * ((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 1020;
      LOWORD(v12) = v12 & 0x3E0;
      v13 = (((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 255) << 7;
      LOWORD(v13) = v13 & 0x7C00;
      result = v13 | v12 | (((((v15 & ~(v15 >> 31)) - 255) & (((v15 & ~(v15 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
    }
  }
  return result;
}
