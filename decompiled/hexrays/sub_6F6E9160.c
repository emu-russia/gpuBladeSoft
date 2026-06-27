unsigned int __cdecl sub_6F6E9160(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // esi@1
  signed int v11; // edx@2
  unsigned __int16 v12; // ax@2
  int v13; // ecx@2
  int v14; // [sp+10h] [bp-2Ch]@2
  int v15; // [sp+14h] [bp-28h]@2
  int v16; // [sp+18h] [bp-24h]@2

  result = dword_6FBBFE48(a8, a9);
  v10 = result >> 24;
  if ( (result >> 24) & 0x40 )
  {
    v14 = ((((a5 * (unsigned __int8)result >> 7) - 255) >> 31) & ((a5 * (unsigned __int8)result >> 7) - 255)) + 255;
    v11 = ((unsigned __int8)(result >> 16) * a7 >> 7) - 255;
    v15 = ((((BYTE1(result) * a6 >> 7) - 255) >> 31) & ((BYTE1(result) * a6 >> 7) - 255)) + 255;
    v16 = ((v11 >> 31) & v11) + 255;
    dword_6FCFFE50(a3, a4, &v14);
    v12 = ((_WORD)v10 << 8) & 0x8000 | ((((unsigned __int16)((v16 & ~(v16 >> 31)) - 255) & (unsigned __int16)(((v16 & ~(v16 >> 31)) - 255) >> 31))
                                       + 255) << 7) & 0x7C00 | (4
                                                              * ((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255))
                                                              + 1020) & 0x3E0 | (((((v14 & ~(v14 >> 31)) - 255) & (((v14 & ~(v14 >> 31)) - 255) >> 31))
                                                                                + 255) >> 3) & 0x1F;
    v13 = v12;
    *a1 = v12;
    result = (unsigned int)a2;
    *a2 = dword_6FCBFE50[v13];
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
