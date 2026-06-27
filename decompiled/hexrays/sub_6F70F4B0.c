unsigned int __cdecl sub_6F70F4B0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ebp@2
  signed int v12; // esi@2
  signed int v13; // eax@2
  __int64 v14; // rcx@3
  int v15; // ebp@3
  int v16; // [sp+30h] [bp-2Ch]@2
  int v17; // [sp+34h] [bp-28h]@2
  int v18; // [sp+38h] [bp-24h]@2

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result) * a6;
    v13 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v16 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
    v18 = ((v13 >> 31) & v13) + 255;
    v17 = ((((v12 >> 7) - 255) >> 31) & ((v12 >> 7) - 255)) + 255;
    if ( v10 >> 7 )
    {
      dword_6FCFFE50(a3, a4, &v16);
      v14 = (v16 & ~(v16 >> 31)) - 255;
      v15 = 4 * *a1;
      LODWORD(v14) = (signed int)((HIDWORD(v14) & v14) + 255) >> 1;
      result = ((v14 + (dword_6FBBFE50[v15] >> 1) - 255) & (((signed int)v14 + (dword_6FBBFE50[v15] >> 1) - 255) >> 31))
             + 255;
      *a1 = (4
           * (((((signed int)((((signed int)((v17 & ~((unsigned __int64)v17 >> 32)) - 255) >> 31) & ((v17 & ~((unsigned __int64)v17 >> 32)) - 255))
                            + 255) >> 1)
              + (dword_6FBBFE50[v15 + 1] >> 1)
              - 255) >> 31) & (((signed int)((((signed int)((v17 & ~((unsigned __int64)v17 >> 32)) - 255) >> 31) & ((v17 & ~((unsigned __int64)v17 >> 32)) - 255))
                                           + 255) >> 1)
                             + (dword_6FBBFE50[v15 + 1] >> 1)
                             - 255))
           + 1020) & 0x3E0 | ((signed int)result >> 3) & 0x1F | ((((unsigned __int16)(((((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255))
                                                                                      + 255) >> 1)
                                                                                    + (dword_6FBBFE50[v15 + 2] >> 1)
                                                                                    - 255) & (unsigned __int16)((((((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE50[v15 + 2] >> 1) - 255) >> 31))
                                                                + 255) << 7) & 0x7C00 | 0x8000;
    }
    else
    {
      dword_6FCFFE50(a3, a4, &v16);
      result = ((v18 & ~(v18 >> 31)) - 255) >> 31;
      *a1 = ((((unsigned __int16)result & (unsigned __int16)((v18 & ~(v18 >> 31)) - 255)) + 255) << 7) & 0x7C00 | (4 * ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    }
  }
  return result;
}
