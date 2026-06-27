signed int __cdecl sub_6F76DE10(int *a1)
{
  signed int result; // eax@1
  int v2; // ecx@2

  result = 36;
  if ( a1 )
  {
    v2 = *a1;
    result = 35;
    if ( *a1 )
    {
      if ( *(_DWORD *)(v2 + 96) )
      {
        *(_DWORD *)(v2 + 88) = a1;
        result = 0;
      }
    }
  }
  return result;
}
