unsigned int __cdecl sub_6F6DB5D0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // esi@2
  signed int v11; // edx@3
  unsigned int v12; // esi@3
  int v13; // ebp@3
  int v14; // edi@3
  int v15; // eax@3
  int v16; // ecx@3
  int v17; // [sp+10h] [bp-2Ch]@3
  int v18; // [sp+14h] [bp-28h]@3
  int v19; // [sp+18h] [bp-24h]@3

  result = (unsigned int)a1;
  if ( *a1 >= 0 )
  {
    result = dword_6FBBFE40(a8, a9);
    v10 = result >> 24;
    if ( (result >> 24) & 0x40 )
    {
      v17 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
      v11 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
      v18 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
      v19 = ((v11 >> 31) & v11) + 255;
      dword_6FCFFE50(a3, a4, &v17);
      v12 = v10 << 8;
      v13 = 4 * ((((v18 & ~(v18 >> 31)) - 255) >> 31) & ((v18 & ~(v18 >> 31)) - 255)) + 1020;
      LOWORD(v12) = v12 & 0x8000;
      LOWORD(v13) = v13 & 0x3E0;
      v14 = ((((v19 & ~(v19 >> 31)) - 255) & (((v19 & ~(v19 >> 31)) - 255) >> 31)) + 255) << 7;
      LOWORD(v14) = v14 & 0x7C00;
      v15 = v12 | v14 | v13 | (((((v17 & ~(v17 >> 31)) - 255) & (((v17 & ~(v17 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
      v16 = (unsigned __int16)v15;
      *a1 = v15;
      result = (unsigned int)a2;
      *a2 = dword_6FCBFE50[v16];
    }
  }
  return result;
}
