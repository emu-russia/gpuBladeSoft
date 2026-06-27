void __cdecl sub_6F707680(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int v9; // eax@2
  signed int v10; // edx@3
  unsigned int v11; // ebx@3
  int v12; // ebp@3
  int v13; // edi@3
  int v14; // eax@3
  unsigned int v15; // [sp+1Ch] [bp-30h]@2
  int v16; // [sp+20h] [bp-2Ch]@3
  int v17; // [sp+24h] [bp-28h]@3
  int v18; // [sp+28h] [bp-24h]@3

  if ( *a1 >= 0 )
  {
    v9 = dword_6FBBFE44(a8, a9);
    v15 = v9 >> 24;
    if ( BYTE3(v9) & 0x40 )
    {
      v16 = ((((a5 * (unsigned __int8)v9 >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)v9 >> 7) - 255)) + 255;
      v10 = ((unsigned __int8)(v9 >> 16) * a7 >> 7) - 255;
      v17 = ((((BYTE1(v9) * a6 >> 7) - 255) >> 31) & ((BYTE1(v9) * a6 >> 7) - 255)) + 255;
      v18 = ((v10 >> 31) & v10) + 255;
      dword_6FCFFE50(a3, a4, &v16);
      v11 = v15 << 8;
      v12 = 4 * ((((v17 & ~(v17 >> 31)) - 255) >> 31) & ((v17 & ~(v17 >> 31)) - 255)) + 1020;
      LOWORD(v11) = ((_WORD)v15 << 8) & 0x8000;
      LOWORD(v12) = v12 & 0x3E0;
      v13 = ((((v18 & ~(v18 >> 31)) - 255) & (((v18 & ~(v18 >> 31)) - 255) >> 31)) + 255) << 7;
      LOWORD(v13) = v13 & 0x7C00;
      v14 = v11 | v13 | v12 | (((((v16 & ~(v16 >> 31)) - 255) & (((v16 & ~(v16 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      *a1 = v14;
      *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v14;
    }
  }
}
