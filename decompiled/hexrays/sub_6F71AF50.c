unsigned int __cdecl sub_6F71AF50(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // esi@1
  signed int v11; // edx@2
  int v12; // edi@2
  __int64 v13; // rcx@2
  int v14; // [sp+10h] [bp-2Ch]@2
  int v15; // [sp+14h] [bp-28h]@2
  int v16; // [sp+18h] [bp-24h]@2

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v14 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
    v11 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v15 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
    v16 = ((v11 >> 31) & v11) + 255;
    dword_6FCFFE50(a3, a4, &v14);
    v12 = 4 * ((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 1020;
    v13 = (v16 & ~(v16 >> 31)) - 255;
    LOWORD(v12) = v12 & 0x3E0;
    HIDWORD(v13) = (((unsigned int)v13 & HIDWORD(v13)) + 255) << 7;
    WORD2(v13) &= 0x7C00u;
    result = HIDWORD(v13) | v12 | (((((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    *a1 = result | ((_WORD)v10 << 8) & 0x8000;
  }
  return result;
}
