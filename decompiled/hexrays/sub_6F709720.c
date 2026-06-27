int __cdecl sub_6F709720(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int result; // eax@1
  int v8; // eax@2
  signed int v9; // ebp@2
  int *v10; // edi@2
  int v11; // eax@2
  int v12; // esi@2
  int v13; // eax@2

  result = *a1;
  if ( (signed __int16)result >= 0 )
  {
    v8 = 4 * result;
    v9 = dword_6FBBFE50[v8];
    v10 = &dword_6FBBFE50[v8];
    v11 = 4 * ((dword_6FBBFE50[v8 + 1] >> 1) + ((signed int)a6 >> 1));
    LOWORD(v11) = v11 & 0x3E0;
    v12 = ((v10[2] >> 1) + ((signed int)a7 >> 1)) << 7;
    LOWORD(v12) = v12 & 0x7C00;
    v13 = v12 | ((((signed int)a5 >> 1) + (v9 >> 1)) >> 3) & 0x1F | v11;
    *a1 = v13;
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v13;
    *a1 = result;
  }
  return result;
}
