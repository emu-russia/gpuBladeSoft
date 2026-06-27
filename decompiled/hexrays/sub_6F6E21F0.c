int __cdecl sub_6F6E21F0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // ebp@2
  signed int v9; // edi@2
  signed int v10; // ecx@2
  __int16 v11; // ax@2
  int v12; // [sp+20h] [bp-2Ch]@2
  int v13; // [sp+24h] [bp-28h]@2
  int v14; // [sp+28h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v13 = a6;
    v12 = a5;
    v14 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v12);
    v8 = 4 * *a1;
    v9 = ((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1)
       + (dword_6FBBFE50[v8] >> 1)
       - 255;
    v10 = ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 1)
        + (dword_6FBBFE50[v8 + 2] >> 1)
        - 255;
    v11 = ((((unsigned __int16)v10 & (unsigned __int16)(v10 >> 31)) + 255) << 7) & 0x7C00 | (4
                                                                                           * (((((signed int)((((signed int)((v13 & ~((unsigned __int64)v13 >> 32)) - 255) >> 31) & ((v13 & ~((unsigned __int64)v13 >> 32)) - 255)) + 255) >> 1)
                                                                                              + (dword_6FBBFE50[v8 + 1] >> 1)
                                                                                              - 255) >> 31) & (((signed int)((((signed int)((v13 & ~((unsigned __int64)v13 >> 32)) - 255) >> 31) & ((v13 & ~((unsigned __int64)v13 >> 32)) - 255)) + 255) >> 1) + (dword_6FBBFE50[v8 + 1] >> 1) - 255))
                                                                                           + 1020) & 0x3E0 | (((v9 & (v9 >> 31)) + 255) >> 3) & 0x1F;
    *a1 = v11;
    *a2 = dword_6FCBFE50[v11];
    result = ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
    *a1 |= result;
  }
  return result;
}
