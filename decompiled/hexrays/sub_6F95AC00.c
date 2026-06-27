int __cdecl sub_6F95AC00(int a1)
{
  int result; // eax@1
  int v2; // edx@9

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    while ( *(_DWORD *)(result + 8) )
      result = *(_DWORD *)(result + 8);
  }
  else
  {
    result = *(_DWORD *)(a1 + 4);
    if ( a1 == *(_DWORD *)(result + 12) )
    {
      while ( 1 )
      {
        v2 = *(_DWORD *)(result + 4);
        if ( *(_DWORD *)(v2 + 12) != result )
          break;
        result = *(_DWORD *)(result + 4);
      }
      if ( v2 != *(_DWORD *)(result + 12) )
        result = *(_DWORD *)(result + 4);
    }
  }
  return result;
}
