int __cdecl sub_6F71FA30(__int16 a1, unsigned int a2)
{
  unsigned int v2; // esi@1
  unsigned int v3; // ebp@1
  __int16 v4; // ax@1
  int result; // eax@2

  v2 = (a2 >> 1) & dword_6FD40988;
  v3 = (a2 >> 1) / dword_6FBB51DC;
  v4 = dword_6FBB51E4(v2, v3);
  if ( a2 & 1 )
  {
    result = dword_6FBB51EC(v2, v3, (unsigned __int16)((a1 << 8) | (unsigned __int8)v4));
  }
  else
  {
    LOBYTE(v4) = 0;
    result = dword_6FBB51EC(v2, v3, (unsigned __int16)((unsigned __int8)a1 | v4));
  }
  return result;
}
