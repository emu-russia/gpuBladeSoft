int __cdecl sub_6F6E6FD0(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int v8; // edi@1
  int v9; // ebx@1
  __int64 v10; // rax@1
  int v11; // esi@1
  int v12; // edi@1
  int result; // eax@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = dword_6FBBFE50[v7 + 2];
  v10 = dword_6FBBFE50[v7 + 1] - a6;
  HIDWORD(v10) = v10 & ~HIDWORD(v10);
  LODWORD(v10) = 4 * HIDWORD(v10);
  LOWORD(v10) = 4 * WORD2(v10) & 0x3E0;
  v11 = (((v8 - a5) & ~((v8 - a5) >> 31)) >> 3) & 0x1F;
  v12 = ((v9 - a7) & ~((v9 - a7) >> 31)) << 7;
  LOWORD(v12) = v12 & 0x7C00;
  result = v12 | v11 | v10;
  *a1 = result;
  result = (signed __int16)result;
  *a2 = dword_6FCBFE50[(signed __int16)result];
  return result;
}
