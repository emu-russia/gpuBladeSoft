signed int __cdecl sub_6F6CF3E0(_WORD *a1, int *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // edx@1
  int v8; // ebx@1
  int v9; // ecx@1
  __int64 v10; // rax@1
  int v11; // ebx@1
  signed int v12; // ecx@1
  signed int result; // eax@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7 + 1];
  v9 = dword_6FBBFE50[v7 + 2];
  v10 = dword_6FBBFE50[v7] - a5;
  *a1 = (((unsigned __int16)(v9 - a7) & (unsigned __int16)~(unsigned __int16)((v9 - a7) >> 31)) << 7) & 0x7C00 | 4 * ((v8 - a6) & ~(unsigned __int16)((v8 - a6) >> 31)) & 0x3E0 | ((signed int)(v10 & ~HIDWORD(v10)) >> 3) & 0x1F;
  v11 = *a2;
  v12 = (unsigned __int8)*a2 - a5;
  result = (unsigned __int8)((unsigned int)*a2 >> 16) - a7;
  *a2 = ~(v12 >> 31) & v12 | ((result & ~(result >> 31)) << 16) | (((BYTE1(v11) - a6) & ~((BYTE1(v11) - a6) >> 31)) << 8);
  return result;
}
