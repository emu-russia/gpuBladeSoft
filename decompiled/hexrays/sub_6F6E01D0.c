unsigned int __cdecl sub_6F6E01D0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  signed int v10; // ebx@3
  int v11; // ecx@4
  signed int v12; // edi@4
  signed int v13; // eax@4
  signed int v14; // ecx@4
  int v15; // edx@4
  __int64 v16; // rdi@7
  int v17; // ecx@7
  int v18; // [sp+1Ch] [bp-40h]@3
  int v19; // [sp+30h] [bp-2Ch]@3
  int v20; // [sp+34h] [bp-28h]@4
  int v21; // [sp+38h] [bp-24h]@4

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE44(a8, a9);
    if ( BYTE3(result) & 0x40 )
    {
      v18 = (unsigned __int8)(result >> 16);
      v10 = ((unsigned __int8)result * a5 >> 7) - 255;
      v19 = ((v10 >> 31) & v10) + 255;
      if ( result >> 31 )
      {
        v21 = ((((v18 * a7 >> 7) - 255) >> 31) & ((v18 * a7 >> 7) - 255)) + 255;
        v20 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v19);
        v11 = 4 * *a1;
        v12 = dword_6FBBFE50[v11] - (((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255)) + 255);
        v13 = dword_6FBBFE50[v11 + 2] - (((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255);
        v14 = dword_6FBBFE50[v11 + 1]
            - ((((signed int)((v20 & ~((unsigned __int64)v20 >> 32)) - 255) >> 31) & ((v20 & ~((unsigned __int64)v20 >> 32))
                                                                                    - 255))
             + 255);
        LOWORD(v13) = 4 * (v14 & ~(v14 >> 31)) & 0x3E0 | ((v12 & ~(v12 >> 31)) >> 3) & 0x1F | (((unsigned __int16)v13 & (unsigned __int16)~(v13 >> 31)) << 7) & 0x7C00 | 0x8000;
        *a1 = v13;
        v15 = (unsigned __int16)v13;
      }
      else
      {
        v20 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
        v21 = ((((v18 * a7 >> 7) - 255) >> 31) & ((v18 * a7 >> 7) - 255)) + 255;
        dword_6FCFFE50(a3, a4, &v19);
        v16 = (v21 & ~(v21 >> 31)) - 255;
        v17 = 4 * ((((v20 & ~(v20 >> 31)) - 255) >> 31) & ((v20 & ~(v20 >> 31)) - 255)) + 1020;
        HIDWORD(v16) = (((unsigned int)v16 & HIDWORD(v16)) + 255) << 7;
        LOWORD(v17) = v17 & 0x3E0;
        WORD2(v16) &= 0x7C00u;
        HIDWORD(v16) |= v17 | (((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = WORD2(v16);
        v15 = SWORD2(v16);
      }
      result = (unsigned int)a2;
      *a2 = dword_6FCBFE50[v15];
    }
  }
  return result;
}
