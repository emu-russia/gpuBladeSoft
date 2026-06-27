__int16 __cdecl sub_6F707C60(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, __int16 a7)
{
  int v7; // eax@1
  int v8; // ebp@2
  int v9; // edi@2
  int v10; // eax@2
  signed int v11; // ecx@2
  int v12; // esi@2
  int v13; // edx@2
  int v14; // esi@2
  int v16; // [sp+20h] [bp-2Ch]@2
  int v17; // [sp+24h] [bp-28h]@2
  int v18; // [sp+28h] [bp-24h]@2

  LOWORD(v7) = a7;
  if ( *a1 >= 0 )
  {
    v17 = a6;
    v16 = a5;
    v18 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v16);
    v8 = (((signed int)((v17 & ~((unsigned __int64)v17 >> 32)) - 255) >> 31) & ((v17 & ~((unsigned __int64)v17 >> 32))
                                                                              - 255))
       + 255;
    v9 = ((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255)) + 255;
    v10 = 4 * *a1;
    v11 = dword_6FBBFE50[v10 + 2] - (((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255)) + 255);
    v12 = (dword_6FBBFE50[v10] - v9) & ~((dword_6FBBFE50[v10] - v9) >> 31);
    v13 = 4 * ((dword_6FBBFE54[v10] - v8) & ~((dword_6FBBFE54[v10] - v8) >> 31));
    LOWORD(v13) = v13 & 0x3E0;
    v7 = (v11 & ~(v11 >> 31)) << 7;
    LOWORD(v7) = v7 & 0x7C00;
    v14 = v7 | v13 | (v12 >> 3) & 0x1F;
    *a1 = v14;
    *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v14;
  }
  return v7;
}
