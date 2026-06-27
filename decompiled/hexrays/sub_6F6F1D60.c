int __cdecl sub_6F6F1D60(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int v8; // edi@1
  int v9; // ebx@1
  __int64 v10; // rax@1
  int result; // eax@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = dword_6FBBFE50[v7 + 2];
  v10 = dword_6FBBFE50[v7 + 1] - a6;
  LOWORD(result) = (((unsigned __int16)(v9 - a7) & (unsigned __int16)~((v9 - a7) >> 31)) << 7) & 0x7C00 | (((v8 - a5) & ~((v8 - a5) >> 31)) >> 3) & 0x1F | 4 * (v10 & ~WORD2(v10)) & 0x3E0;
  *a1 = result;
  result = (signed __int16)result;
  *a2 = dword_6FCBFE50[(signed __int16)result];
  *a1 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
