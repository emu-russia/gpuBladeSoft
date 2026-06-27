int __cdecl sub_6F7167B0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  signed int v8; // edx@1
  int *v9; // esi@1
  int v10; // eax@1
  int v11; // edi@1
  int v12; // eax@1
  int result; // eax@1

  v7 = 4 * *a1;
  v8 = dword_6FBBFE50[v7];
  v9 = &dword_6FBBFE50[v7];
  v10 = 4 * ((dword_6FBBFE50[v7 + 1] >> 1) + ((signed int)a6 >> 1));
  LOWORD(v10) = v10 & 0x3E0;
  v11 = ((v9[2] >> 1) + ((signed int)a7 >> 1)) << 7;
  LOWORD(v11) = v11 & 0x7C00;
  v12 = v11 | (((v8 >> 1) + ((signed int)a5 >> 1)) >> 3) & 0x1F | v10;
  *a1 = v12;
  result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v12;
  *a1 = result;
  return result;
}
