unsigned int __cdecl sub_6F854D45(int a1)
{
  unsigned int result; // eax@2

  if ( a1 )
  {
    result = *(_DWORD *)(a1 + 264);
    if ( *(_DWORD *)(a1 + 280) < result )
    {
      sub_6F859237(a1, 0, 0, 2);
      *(_DWORD *)(a1 + 388) = 0;
      result = sub_6F85393D(a1);
    }
  }
  return result;
}
