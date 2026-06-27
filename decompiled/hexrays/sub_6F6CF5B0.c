signed int __cdecl sub_6F6CF5B0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // ecx@1
  int v8; // ebp@1
  int *v9; // edx@1
  signed int v10; // ecx@1
  signed int v11; // edx@1
  int v12; // eax@1
  signed int v13; // esi@1
  signed int v14; // ebx@1
  signed int result; // eax@1
  signed int v16; // edi@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = &dword_6FBBFE50[v7];
  v10 = a6 + dword_6FBBFE54[v7] - 255;
  v11 = a7 + v9[2] - 255;
  *a1 = ((((unsigned __int16)(v11 >> 31) & (unsigned __int16)v11) + 255) << 7) & 0x7C00 | (4 * ((v10 >> 31) & v10) + 1020) & 0x3E0 | ((((a5 + v8 - 255) & ((a5 + v8 - 255) >> 31)) + 255) >> 3) & 0x1F;
  v12 = *a2;
  v13 = a6 + BYTE1(v12) - 255;
  v14 = a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255;
  result = v13 >> 31;
  v16 = a5 + (unsigned __int8)*a2 - 255;
  *a2 = (((v16 >> 31) & v16) + 255) | ((((v13 >> 31) & v13) + 255) << 8) | (((v14 & (v14 >> 31)) + 255) << 16);
  return result;
}
