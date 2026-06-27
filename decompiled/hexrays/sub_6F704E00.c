int __cdecl sub_6F704E00(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, __int64 a6)
{
  int result; // eax@1
  int v7; // eax@2
  int v8; // edx@2

  result = a6;
  if ( *a1 >= 0 )
  {
    v7 = 4 * a6;
    v8 = HIDWORD(a6) << 7;
    LOWORD(v7) = 4 * a6 & 0x3E0;
    LOWORD(v8) = (WORD2(a6) << 7) & 0x7C00;
    result = v8 | ((signed int)a5 >> 3) | v7;
    *a1 = result;
  }
  return result;
}
