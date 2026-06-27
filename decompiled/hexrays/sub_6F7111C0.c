int __cdecl sub_6F7111C0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int v8; // ecx@1
  int v9; // eax@1
  int result; // eax@1

  v7 = 4 * a6;
  LOWORD(v7) = v7 & 0x3E0;
  v8 = a7 << 7;
  LOWORD(v8) = v8 & 0x7C00;
  v9 = v8 | ((signed int)a5 >> 3) | v7;
  *a1 = v9;
  result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v9;
  *a1 = result;
  return result;
}
