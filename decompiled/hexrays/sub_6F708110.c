__int16 __cdecl sub_6F708110(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, __int16 a7)
{
  int v7; // eax@1
  int *v8; // eax@2
  signed int v9; // edi@2
  signed int v10; // edx@2
  int v11; // ecx@2
  int v12; // ebp@2
  signed int v13; // edi@2
  int v14; // edi@2
  int v15; // ebp@2
  int v17; // [sp+20h] [bp-2Ch]@2
  int v18; // [sp+24h] [bp-28h]@2
  int v19; // [sp+28h] [bp-24h]@2

  LOWORD(v7) = a7;
  if ( *a1 >= 0 )
  {
    v18 = a6;
    v17 = a5;
    v19 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v17);
    v8 = &dword_6FBBFE50[4 * *a1];
    v9 = ((((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 255) >> 1) + (*v8 >> 1) - 255;
    v10 = ((signed int)((((signed int)((v18 & ~((unsigned __int64)v18 >> 32)) - 255) >> 31) & ((v18 & ~((unsigned __int64)v18 >> 32))
                                                                                             - 255))
                      + 255) >> 1)
        + (v8[1] >> 1)
        - 255;
    v11 = ((((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255)) + 255) >> 1) + (v8[2] >> 1) - 255;
    v12 = v9 & (v9 >> 31);
    v13 = ((((((v19 & ~(v19 >> 31)) - 255) >> 31) & ((v19 & ~(v19 >> 31)) - 255)) + 255) >> 1) + (v8[2] >> 1) - 255;
    v7 = 4 * ((v10 >> 31) & v10) + 1020;
    LOWORD(v7) = v7 & 0x3E0;
    v14 = ((v11 & (v13 >> 31)) + 255) << 7;
    LOWORD(v14) = v14 & 0x7C00;
    v15 = v14 | v7 | ((v12 + 255) >> 3) & 0x1F;
    *a1 = v15;
    *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v15;
  }
  return v7;
}
