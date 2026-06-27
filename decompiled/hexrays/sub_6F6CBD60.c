int *__cdecl sub_6F6CBD60(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edi@1
  signed int v8; // ebp@1
  int v9; // eax@1
  int v10; // eax@1
  int v11; // ebx@1
  int *result; // eax@1
  int v13; // [sp+30h] [bp-2Ch]@1
  int v14; // [sp+34h] [bp-28h]@1
  int v15; // [sp+38h] [bp-24h]@1

  v13 = a5;
  v14 = a6;
  v15 = a7;
  dword_6FCFFE50(a3, a4, &v13);
  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = ((((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255)) + 255) >> 1)
     + (dword_6FBBFE50[v7 + 2] >> 1)
     - 255;
  *a1 = ((((unsigned __int16)((unsigned __int64)v9 >> 32) & (unsigned __int16)v9) + 255) << 7) & 0x7C00 | (4 * (((((signed int)((((signed int)((v14 & ~((unsigned __int64)v14 >> 32)) - 255) >> 31) & ((v14 & ~((unsigned __int64)v14 >> 32)) - 255)) + 255) >> 1) + (dword_6FBBFE54[v7] >> 1) - 255) >> 31) & (((signed int)((((signed int)((v14 & ~((unsigned __int64)v14 >> 32)) - 255) >> 31) & ((v14 & ~((unsigned __int64)v14 >> 32)) - 255)) + 255) >> 1) + (dword_6FBBFE54[v7] >> 1) - 255)) + 1020) & 0x3E0 | (((((((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 1) + (v8 >> 1) - 255) >> 31) & (((((((v13 & ~(v13 >> 31)) - 255) >> 31) & ((v13 & ~(v13 >> 31)) - 255)) + 255) >> 1) + (v8 >> 1) - 255)) + 255) >> 3) & 0x1F;
  v10 = *a2;
  v11 = (((signed int)a5 >> 1) + ((*a2 >> 1) & 0x7F)) | ((((signed int)BYTE1(v10) >> 1) + ((signed int)a6 >> 1)) << 8) | ((((signed int)a7 >> 1) + (((unsigned int)*a2 >> 17) & 0x7F)) << 16);
  result = a2;
  *a2 = v11;
  return result;
}
