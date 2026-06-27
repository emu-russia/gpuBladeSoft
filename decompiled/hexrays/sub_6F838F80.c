int __cdecl sub_6F838F80(int a1)
{
  int result; // eax@2

  if ( a1 )
  {
    result = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 )
    {
      result = *(_DWORD *)(*(_DWORD *)a1 + 8);
      if ( !result )
      {
        sub_6F839D4E(a1, (int (__cdecl *)(int))sub_6F838E90, a1);
        result = a1;
        *(_DWORD *)a1 = 0;
      }
    }
  }
  return result;
}
