__int16 __cdecl sub_6F709240(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int v8; // eax@2
  signed int v9; // edi@2
  int v10; // edx@2
  int v11; // ebp@2
  int v12; // esi@2
  int v13; // ebp@2

  v7 = *a1;
  if ( (signed __int16)v7 >= 0 )
  {
    v8 = 4 * v7;
    v9 = dword_6FBBFE50[v8 + 2] - a7;
    v10 = (dword_6FBBFE54[v8] - a6) & ~((unsigned __int64)(dword_6FBBFE54[v8] - a6) >> 32);
    v11 = 4 * v10;
    LOWORD(v11) = 4 * v10 & 0x3E0;
    v12 = (((dword_6FBBFE50[v8] - a5) & ~((dword_6FBBFE50[v8] - a5) >> 31)) >> 3) & 0x1F;
    v7 = (v9 & ~(v9 >> 31)) << 7;
    LOWORD(v7) = v7 & 0x7C00;
    v13 = v7 | v12 | v11;
    *a1 = v13;
    *a1 = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v13;
  }
  return v7;
}
