int __cdecl sub_6F703350(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, int a6, int a7)
{
  int v7; // eax@2
  int v8; // ebx@2
  int v9; // eax@2
  int result; // eax@2

  if ( *a1 >= 0 )
  {
    v7 = 4 * a6;
    v8 = a7 << 7;
    LOWORD(v7) = 4 * a6 & 0x3E0;
    LOWORD(v8) = ((_WORD)a7 << 7) & 0x7C00;
    v9 = v8 | ((signed int)a5 >> 3) | v7;
    *a1 = v9;
    result = (((HIBYTE(word_6FBB979C) >> 3) & 1) << 15) | v9;
    *a1 = result;
  }
  return result;
}
