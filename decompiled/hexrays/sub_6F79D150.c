signed int __cdecl sub_6F79D150(int a1, int a2, int a3, int a4)
{
  signed int result; // eax@1

  result = 6;
  if ( *(_DWORD *)(a2 + 72) == *(_DWORD *)(a1 + 16) )
  {
    if ( a3 )
      sub_6F770750(a2 + 108, a3);
    result = 0;
    if ( a4 )
    {
      sub_6F770420(a2 + 108, *(_DWORD *)a4, *(_DWORD *)(a4 + 4));
      result = 0;
    }
  }
  return result;
}
