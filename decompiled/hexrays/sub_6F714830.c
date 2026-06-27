unsigned int __cdecl sub_6F714830(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  _WORD *v10; // esi@3
  int v11; // ecx@3
  int v12; // edi@3
  int v13; // eax@3
  int *v14; // esi@6
  signed int v15; // eax@6
  signed int v16; // ecx@6
  signed int v17; // ebx@6
  int v18; // ecx@6
  int v19; // ebp@6
  int v20; // [sp+1Ch] [bp-40h]@2
  int v21; // [sp+30h] [bp-2Ch]@3
  int v22; // [sp+34h] [bp-28h]@3
  int v23; // [sp+38h] [bp-24h]@3

  result = dword_6FBBFE40(a8, a9);
  if ( (result >> 24) & 0x40 )
  {
    v20 = (unsigned __int8)(result >> 16);
    if ( result >> 31 )
    {
      v21 = (((((unsigned __int8)result * a5 >> 7) - 255) >> 31) & (((unsigned __int8)result * a5 >> 7) - 255)) + 255;
      v22 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v23 = ((((v20 * a7 >> 7) - 255) >> 31) & ((v20 * a7 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v21);
      v14 = &dword_6FBBFE50[4 * *a1];
      v15 = *v14 - (((((v21 & ~(v21 >> 31)) - 255) >> 31) & ((v21 & ~(v21 >> 31)) - 255)) + 255);
      v16 = v14[2] - (((((v23 & ~(v23 >> 31)) - 255) >> 31) & ((v23 & ~(v23 >> 31)) - 255)) + 255);
      v17 = v14[1]
          - ((((signed int)((v22 & ~((unsigned __int64)v22 >> 32)) - 255) >> 31) & ((v22 & ~((unsigned __int64)v22 >> 32))
                                                                                  - 255))
           + 255);
      v10 = a1;
      v18 = (v16 & ~(v16 >> 31)) << 7;
      LOWORD(v18) = v18 & 0x7C00;
      v19 = 4 * (v17 & ~(v17 >> 31));
      LOWORD(v19) = v19 & 0x3E0;
      v13 = v19 | v18 | ((v15 & ~(v15 >> 31)) >> 3) & 0x1F;
      LOWORD(v13) = v13 | 0x8000;
      *a1 = v13;
    }
    else
    {
      v21 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
      v22 = ((((a6 * BYTE1(result) >> 7) - 255) >> 31) & ((a6 * BYTE1(result) >> 7) - 255)) + 255;
      v23 = ((((a7 * v20 >> 7) - 255) >> 31) & ((a7 * v20 >> 7) - 255)) + 255;
      dword_6FCFFE50(a3, a4, &v21);
      v10 = a1;
      v11 = 4 * ((((v22 & ~(v22 >> 31)) - 255) >> 31) & ((v22 & ~(v22 >> 31)) - 255)) + 1020;
      LOWORD(v11) = v11 & 0x3E0;
      v12 = ((((v23 & ~(v23 >> 31)) - 255) & (((v23 & ~(v23 >> 31)) - 255) >> 31)) + 255) << 7;
      LOWORD(v12) = v12 & 0x7C00;
      v13 = v12 | v11 | (((((v21 & ~(v21 >> 31)) - 255) & (((v21 & ~(v21 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = v13;
    }
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v13;
    *v10 = result;
  }
  return result;
}
