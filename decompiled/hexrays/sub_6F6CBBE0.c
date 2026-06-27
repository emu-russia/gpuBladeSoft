int __cdecl sub_6F6CBBE0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edi@1
  signed int v8; // edx@1
  int v9; // eax@1
  int v10; // edx@1
  int result; // eax@1
  int v12; // [sp+30h] [bp-2Ch]@1
  int v13; // [sp+34h] [bp-28h]@1
  int v14; // [sp+38h] [bp-24h]@1

  v12 = a5;
  v13 = a6;
  v14 = a7;
  dword_6FCFFE50(a3, a4, &v12);
  v7 = 4 * *a1;
  v8 = ((signed int)((((signed int)((v13 & ~((unsigned __int64)v13 >> 32)) - 255) >> 31) & ((v13 & ~((unsigned __int64)v13 >> 32))
                                                                                          - 255))
                   + 255) >> 1)
     + (dword_6FBBFE54[v7] >> 1)
     - 255;
  v9 = ((((((v14 & ~(v14 >> 31)) - 255) >> 31) & ((v14 & ~(v14 >> 31)) - 255)) + 255) >> 1)
     + (dword_6FBBFE50[v7 + 2] >> 1)
     - 255;
  *a1 = ((((unsigned __int16)((unsigned __int64)v9 >> 32) & (unsigned __int16)v9) + 255) << 7) & 0x7C00 | (4 * ((v8 >> 31) & v8) + 1020) & 0x3E0 | (((((((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE50[v7] >> 1) - 255) >> 31) & (((((((v12 & ~(v12 >> 31)) - 255) >> 31) & ((v12 & ~(v12 >> 31)) - 255)) + 255) >> 1) + (dword_6FBBFE50[v7] >> 1) - 255)) + 255) >> 3) & 0x1F;
  v10 = *a2;
  result = (((signed int)a5 >> 1) + ((*a2 >> 1) & 0x7F)) | ((((signed int)a6 >> 1) + ((signed int)BYTE1(v10) >> 1)) << 8) | ((((signed int)a7 >> 1) + (((unsigned int)*a2 >> 17) & 0x7F)) << 16);
  *a2 = result;
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
