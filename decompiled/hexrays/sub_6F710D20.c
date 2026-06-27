__int16 __cdecl sub_6F710D20(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int v8; // edi@1
  int v9; // ebx@1
  __int64 v10; // rax@1
  int v11; // esi@1
  int v12; // edi@1
  int v13; // eax@1
  int v14; // edi@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = dword_6FBBFE50[v7 + 2];
  v10 = dword_6FBBFE50[v7 + 1] - a6;
  HIDWORD(v10) = v10 & ~HIDWORD(v10);
  v11 = (v8 - a5) & ~((v8 - a5) >> 31);
  v12 = 4 * HIDWORD(v10);
  LOWORD(v12) = 4 * WORD2(v10) & 0x3E0;
  v13 = ((v9 - a7) & ~((v9 - a7) >> 31)) << 7;
  LOWORD(v13) = v13 & 0x7C00;
  v14 = v13 | (v11 >> 3) & 0x1F | v12;
  *a1 = v14;
  *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v14;
  return v13;
}
