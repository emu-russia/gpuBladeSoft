unsigned int __cdecl sub_6F6DA190(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // edx@2
  int v11; // ebp@3
  signed int v12; // esi@3
  signed int v13; // eax@3
  int *v14; // esi@4
  signed int v15; // ebp@4
  int v16; // eax@4
  int v17; // edx@4
  int v18; // ecx@4
  __int64 v19; // rdi@7
  unsigned int v20; // edx@7
  int v21; // [sp+30h] [bp-2Ch]@3
  int v22; // [sp+34h] [bp-28h]@3
  int v23; // [sp+38h] [bp-24h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE40(a8, a9);
    v10 = result >> 24;
    if ( BYTE3(result) & 0x40 )
    {
      v11 = (unsigned __int8)result;
      v12 = BYTE1(result) * a6;
      v13 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
      v21 = ((((v11 * a5 >> 7) - 255) >> 31) & ((v11 * a5 >> 7) - 255)) + 255;
      v23 = ((v13 >> 31) & v13) + 255;
      v22 = ((((v12 >> 7) - 255) >> 31) & ((v12 >> 7) - 255)) + 255;
      if ( v10 >> 7 )
      {
        dword_6FCFFE50(a3, a4, &v21);
        v14 = &dword_6FBBFE50[4 * *a1];
        v15 = v14[1] + ((((((v22 & ~(v22 >> 31)) - 255) >> 31) & ((v22 & ~(v22 >> 31)) - 255)) + 255) >> 2) - 255;
        v16 = ((((v14[2] + (((((v23 & ~(v23 >> 31)) - 255) & (((v23 & ~(v23 >> 31)) - 255) >> 31)) + 255) >> 2) - 255) >> 31) & (v14[2] + (((((v23 & ~(v23 >> 31)) - 255) & (((v23 & ~(v23 >> 31)) - 255) >> 31)) + 255) >> 2) - 255))
             + 255) << 7;
        LOWORD(v16) = v16 & 0x7C00;
        v17 = v16 | ((((*v14 + ((((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255) >> 2) - 255) & ((*v14 + ((((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255) >> 2) - 255) >> 31))
                    + 255) >> 3) & 0x1F;
        result = v15 >> 31;
        LOWORD(v17) = (4 * ((v15 >> 31) & v15) + 1020) & 0x3E0 | v17 | 0x8000;
        *a1 = v17;
        v18 = (unsigned __int16)v17;
      }
      else
      {
        dword_6FCFFE50(a3, a4, &v21);
        result = ((v22 & ~(v22 >> 31)) - 255) >> 31;
        v19 = (v23 & ~(v23 >> 31)) - 255;
        v20 = 4 * (result & ((v22 & ~(v22 >> 31)) - 255)) + 1020;
        LOWORD(v20) = v20 & 0x3E0;
        HIDWORD(v19) = (((unsigned int)v19 & HIDWORD(v19)) + 255) << 7;
        WORD2(v19) &= 0x7C00u;
        HIDWORD(v19) |= v20 | (((((v21 & ~(v21 >> 31)) - 255) & (((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
        *a1 = WORD2(v19);
        v18 = SWORD2(v19);
      }
      *a2 = dword_6FCBFE50[v18];
    }
  }
  return result;
}
