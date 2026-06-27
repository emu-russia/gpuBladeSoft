unsigned int __cdecl sub_6F6E8EE0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@1
  int v11; // ebp@2
  signed int v12; // esi@2
  signed int v13; // eax@2
  int v14; // edx@3
  __int64 v15; // rdi@3
  int v16; // esi@6
  signed int v17; // edi@6
  signed int v18; // ebp@6
  int v19; // [sp+30h] [bp-2Ch]@2
  int v20; // [sp+34h] [bp-28h]@2
  int v21; // [sp+38h] [bp-24h]@2

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = (unsigned __int8)result;
    v12 = BYTE1(result) * a6;
    v13 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v19 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
    v21 = ((v13 >> 31) & v13) + 255;
    v20 = ((((v12 >> 7) - 255) >> 31) & ((v12 >> 7) - 255)) + 255;
    if ( v10 >> 7 )
    {
      dword_6FCFFE50(a3, a4, &v19);
      v16 = 4 * *a1;
      v17 = ((((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255)) + 255) >> 1)
          + (dword_6FBBFE50[v16] >> 1)
          - 255;
      v18 = ((((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255) >> 1)
          + (dword_6FBBFE50[v16 + 2] >> 1)
          - 255;
      LOWORD(v17) = (((v17 & (v17 >> 31)) + 255) >> 3) & 0x1F | ((((unsigned __int16)v18 & (unsigned __int16)(v18 >> 31))
                                                                + 255) << 7) & 0x7C00 | (4
                                                                                       * (((((signed int)((((signed int)((v20 & ~((unsigned __int64)v20 >> 32)) - 255) >> 31) & ((v20 & ~((unsigned __int64)v20 >> 32)) - 255)) + 255) >> 1)
                                                                                          + (dword_6FBBFE54[v16] >> 1)
                                                                                          - 255) >> 31) & (((signed int)((((signed int)((v20 & ~((unsigned __int64)v20 >> 32)) - 255) >> 31) & ((v20 & ~((unsigned __int64)v20 >> 32)) - 255)) + 255) >> 1) + (dword_6FBBFE54[v16] >> 1) - 255))
                                                                                       + 1020) & 0x3E0 | 0x8000;
      result = (unsigned __int16)v17;
      *a1 = v17;
    }
    else
    {
      dword_6FCFFE50(a3, a4, &v19);
      v14 = 4 * ((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 1020;
      v15 = (v21 & ~(v21 >> 31)) - 255;
      LOWORD(v14) = v14 & 0x3E0;
      LODWORD(v15) = ((HIDWORD(v15) & (unsigned int)v15) + 255) << 7;
      LOWORD(v15) = v15 & 0x7C00;
      result = v15 | v14 | (((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = result;
      result = (signed __int16)result;
    }
    *a2 = dword_6FCBFE50[result];
  }
  return result;
}
