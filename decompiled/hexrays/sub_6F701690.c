__int16 __cdecl sub_6F701690(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@1
  signed int v10; // esi@3
  int v11; // edi@3
  int v12; // edx@4
  signed int v13; // edi@4
  signed int v14; // ecx@4
  int v16; // [sp+30h] [bp-2Ch]@3
  int v17; // [sp+34h] [bp-28h]@3
  int v18; // [sp+38h] [bp-24h]@4

  LOWORD(v9) = (_WORD)a1;
  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE40(a8, a9);
    if ( BYTE3(v9) & 0x40 )
    {
      v10 = ((unsigned __int8)v9 * a5 >> 7) - 255;
      v11 = (unsigned __int8)(v9 >> 16) * a7 >> 7;
      v16 = ((v10 >> 31) & v10) + 255;
      v17 = ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 255;
      if ( v9 >> 31 )
      {
        v18 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v16);
        v12 = 4 * *a1;
        v13 = dword_6FBBFE50[v12] - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255);
        v14 = dword_6FBBFE50[v12 + 1]
            - ((((signed int)((v17 & ~((unsigned __int64)v17 >> 32)) - 255) >> 31) & ((v17 & ~((unsigned __int64)v17 >> 32))
                                                                                    - 255))
             + 255);
        v9 = dword_6FBBFE50[v12 + 2] - (((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255)) + 255);
        LOWORD(v9) = 4 * (v14 & ~(v14 >> 31)) & 0x3E0 | ((v13 & ~(v13 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v9 & (unsigned __int16)~((signed int)v9 >> 31)) << 7) & 0x7C00 | 0x8000;
        *a1 = v9;
      }
      else
      {
        v18 = (((v11 - 255) >> 31) & (v11 - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v16);
        v9 = v18 & ~(v18 >> 31);
        *a1 = ((((unsigned __int16)(v9 - 255) & (unsigned __int16)((signed int)(v9 - 255) >> 31)) + 255) << 7) & 0x7C00 | (4 * ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      }
    }
  }
  return v9;
}
