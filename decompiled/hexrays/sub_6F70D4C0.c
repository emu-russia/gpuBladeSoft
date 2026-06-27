int __cdecl sub_6F70D4C0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edx@1
  signed int v8; // edi@1
  signed int v9; // esi@1
  int v10; // esi@1
  int v11; // edx@1
  int result; // eax@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7] + a5 - 255;
  v9 = dword_6FBBFE54[v7] + a6 - 255;
  v10 = 4 * ((v9 >> 31) & v9) + 1020;
  v11 = (((dword_6FBBFE50[v7 + 2] + a7 - 255) & ((dword_6FBBFE50[v7 + 2] + a7 - 255) >> 31)) + 255) << 7;
  LOWORD(v10) = v10 & 0x3E0;
  LOWORD(v11) = v11 & 0x7C00;
  result = v11 | v10 | (((v8 & (v8 >> 31)) + 255) >> 3) & 0x1F;
  *a1 = result;
  return result;
}
