int __cdecl sub_6F71FB20(__int16 a1, unsigned int a2)
{
  unsigned int v2; // edi@1
  unsigned int v3; // ebp@1
  unsigned __int16 v4; // ax@1

  v2 = (a2 >> 1) & dword_6FD40988;
  v3 = (a2 >> 1) / dword_6FBB51DC;
  v4 = dword_6FBB51E4(v2, v3);
  if ( a2 & 1 )
  {
    dword_6FBB51EC(v2, v3, (unsigned __int16)(a1 << 8) | (unsigned __int8)v4);
  }
  else
  {
    LOBYTE(v4) = 0;
    dword_6FBB51EC(v2, v3, v4 | (unsigned __int8)a1);
  }
  return sub_6F71FA30(HIBYTE(a1), a2 + 1);
}
