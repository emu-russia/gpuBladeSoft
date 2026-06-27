unsigned int __cdecl sub_6F6F61E0(unsigned __int16 *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int result; // eax@1
  unsigned int v10; // ecx@1
  __int16 v11; // dx@2
  unsigned __int16 v12; // cx@2

  result = dword_6FBBFE44(a8, a9);
  v10 = result >> 24;
  if ( BYTE3(result) & 0x40 )
  {
    v11 = ((signed int)result >> 3) & 0x1F | (result >> 9) & 0x7C00 | ((unsigned __int16)result >> 6) & 0x3E0;
    result = (unsigned int)a1;
    v12 = v11 | ((_WORD)v10 << 8) & 0x8000;
    *a1 = v12;
    *a2 = dword_6FCBFE50[v12];
  }
  return result;
}
