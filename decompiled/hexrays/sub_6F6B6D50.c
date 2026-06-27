int __cdecl sub_6F6B6D50(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, int a7)
{
  int result; // eax@1
  int v8; // edi@2
  int v9; // eax@2
  int v10; // edx@2
  signed int v11; // ebp@2
  int v12; // [sp+30h] [bp-2Ch]@2
  int v13; // [sp+34h] [bp-28h]@2
  int v14; // [sp+38h] [bp-24h]@2

  result = a7;
  if ( *a1 >= 0 )
  {
    v12 = a5;
    v13 = a6;
    v14 = (unsigned __int8)a7;
    dword_6FCFFE50(a3, a4, &v12);
    v8 = 4 * *a1;
    v9 = dword_6FBBFE58[v8] + ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 2);
    *a1 = ((((unsigned __int16)((unsigned __int64)(v9 - 255) >> 32) & (unsigned __int16)(v9 - 255)) + 255) << 7) & 0x7C00 | (4 * (((dword_6FBBFE54[v8] + ((signed int)((((signed int)((v13 & ~((unsigned __int64)v13 >> 32)) - 255) >> 31) & ((v13 & ~((unsigned __int64)v13 >> 32)) - 255)) + 255) >> 2) - 255) >> 31) & (LOWORD(dword_6FBBFE54[v8]) + ((signed int)((((signed int)((v13 & ~((unsigned __int64)v13 >> 32)) - 255) >> 31) & ((v13 & ~((unsigned __int64)v13 >> 32)) - 255)) + 255) >> 2) - 255)) + 1020) & 0x3E0 | (((((dword_6FBBFE50[v8] + ((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 2) - 255) >> 31) & (dword_6FBBFE50[v8] + ((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 2) - 255)) + 255) >> 3) & 0x1F;
    v10 = *a2;
    v11 = (unsigned __int8)*a2 + ((signed int)a5 >> 2) - 255;
    result = (((((signed int)(unsigned __int8)a7 >> 2) + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) & ((((signed int)(unsigned __int8)a7 >> 2) + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) >> 31))
            + 255) << 16;
    *a2 = (((v11 >> 31) & v11) + 255) | result | (((((((signed int)a6 >> 2) + BYTE1(v10) - 255) >> 31) & (((signed int)a6 >> 2) + BYTE1(v10) - 255))
                                                 + 255) << 8);
    *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  }
  return result;
}
