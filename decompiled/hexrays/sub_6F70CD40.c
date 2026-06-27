__int16 __cdecl sub_6F70CD40(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int v8; // edi@1
  int v9; // ebx@1
  __int64 v10; // rax@1
  __int16 result; // ax@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = dword_6FBBFE50[v7 + 2];
  v10 = dword_6FBBFE50[v7 + 1] - a6;
  HIDWORD(v10) = v10 & ~HIDWORD(v10);
  result = (((unsigned __int16)(v9 - a7) & (unsigned __int16)~((v9 - a7) >> 31)) << 7) & 0x7C00;
  *a1 = result | (((v8 - a5) & ~((v8 - a5) >> 31)) >> 3) & 0x1F | 4 * WORD2(v10) & 0x3E0;
  return result;
}
