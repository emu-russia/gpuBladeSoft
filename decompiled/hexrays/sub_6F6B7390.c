signed int __cdecl sub_6F6B7390(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, signed int a7)
{
  signed int result; // eax@1
  __int64 v8; // rax@2
  int v9; // edi@2
  signed int v10; // ebp@2
  int v11; // [sp+30h] [bp-2Ch]@2
  int v12; // [sp+34h] [bp-28h]@2
  int v13; // [sp+38h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v11 = a5;
    v12 = a6;
    v13 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v11);
    v8 = (signed int)((~((unsigned __int64)v12 >> 32) & v12) - 255);
    HIDWORD(v8) &= v8;
    v9 = 4 * *a1;
    LODWORD(v8) = dword_6FBBFE58[v9] + ((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255));
    *a1 = ((((unsigned __int16)((unsigned __int64)(signed int)v8 >> 32) & (unsigned __int16)v8) + 255) << 7) & 0x7C00 | (4 * (((dword_6FBBFE54[v9] + HIDWORD(v8)) >> 31) & (LOWORD(dword_6FBBFE54[v9]) + WORD2(v8))) + 1020) & 0x3E0 | (((((dword_6FBBFE50[v9] + (((~(v11 >> 31) & v11) - 255) & (((~(v11 >> 31) & v11) - 255) >> 31))) >> 31) & (dword_6FBBFE50[v9] + (((~(v11 >> 31) & v11) - 255) & (((~(v11 >> 31) & v11) - 255) >> 31)))) + 255) >> 3) & 0x1F;
    HIDWORD(v8) = *a2;
    v10 = a5 + (unsigned __int8)*a2 - 255;
    result = v10 >> 31;
    *a2 = (((v10 >> 31) & v10) + 255) | (((((unsigned __int8)a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) & (((unsigned __int8)a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) >> 31))
                                        + 255) << 16) | (((((a6 + BYTE5(v8) - 255) >> 31) & (a6 + BYTE5(v8) - 255)) + 255) << 8);
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
