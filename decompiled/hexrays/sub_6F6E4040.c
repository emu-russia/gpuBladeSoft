int __cdecl sub_6F6E4040(_WORD *a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6, int a7)
{
  int v7; // eax@2
  int v8; // ecx@2
  int result; // eax@2

  if ( *a1 >= 0 )
  {
    v7 = 4 * a6;
    v8 = a7 << 7;
    LOWORD(v7) = 4 * a6 & 0x3E0;
    LOWORD(v8) = ((_WORD)a7 << 7) & 0x7C00;
    result = v8 | ((signed int)a5 >> 3) | v7;
    *a1 = result;
    result = (signed __int16)result;
    *a2 = dword_6FCBFE50[(signed __int16)result];
  }
  return result;
}
