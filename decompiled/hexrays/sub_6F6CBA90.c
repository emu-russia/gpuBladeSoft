int __cdecl sub_6F6CBA90(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  __int64 v7; // rax@1
  int v8; // ebx@1
  __int16 v9; // cx@1
  __int64 v10; // rax@1
  int v11; // ebx@1
  signed int v12; // edi@1
  int result; // eax@1
  int v14; // [sp+30h] [bp-2Ch]@1
  int v15; // [sp+34h] [bp-28h]@1
  int v16; // [sp+38h] [bp-24h]@1

  v15 = a6;
  v14 = a5;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v7 = (signed int)((~((unsigned __int64)v15 >> 32) & v15) - 255);
  v8 = 4 * *a1;
  v9 = (4
      * (((signed int)(dword_6FBBFE54[v8] + (v7 & HIDWORD(v7))) >> 31) & (LOWORD(dword_6FBBFE54[v8]) + (v7 & WORD2(v7))))
      + 1020) & 0x3E0 | (((((dword_6FBBFE50[v8] + (((~(v14 >> 31) & v14) - 255) & (((~(v14 >> 31) & v14) - 255) >> 31))) >> 31) & (dword_6FBBFE50[v8] + (((~(v14 >> 31) & v14) - 255) & (((~(v14 >> 31) & v14) - 255) >> 31))))
                        + 255) >> 3) & 0x1F;
  v10 = dword_6FBBFE58[v8] + ((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255));
  *a1 = (((WORD2(v10) & (unsigned __int16)v10) + 255) << 7) & 0x7C00 | v9;
  v11 = *a2;
  v12 = a5 + (unsigned __int8)*a2 - 255;
  result = (((v12 >> 31) & v12) + 255) | (((((a6 + BYTE1(v11) - 255) >> 31) & (a6 + BYTE1(v11) - 255)) + 255) << 8) | ((((a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) & ((a7 + (unsigned __int8)((unsigned int)*a2 >> 16) - 255) >> 31)) + 255) << 16);
  *a2 = result;
  return result;
}
