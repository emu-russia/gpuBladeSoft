int __cdecl sub_6F6B7980(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // [sp+20h] [bp-2Ch]@2
  int v9; // [sp+24h] [bp-28h]@2
  int v10; // [sp+28h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v8 = a5;
    v9 = a6;
    v10 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v8);
    *a1 = ((((unsigned __int16)(((v10 & ~(v10 >> 31)) - 255) >> 31) & (unsigned __int16)((v10 & ~(v10 >> 31)) - 255))
          + 255) << 7) & 0x7C00 | (4 * ((((v9 & ~(v9 >> 31)) - 255) >> 31) & ((v9 & ~(v9 >> 31)) - 255)) + 1020) & 0x3E0 | (((((v8 & ~(v8 >> 31)) - 255) & (((v8 & ~(v8 >> 31)) - 255) >> 31)) + 255) >> 3) & 0x1F;
    *a2 = ((unsigned __int8)a7 << 16) | (a6 << 8) | a5;
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
