int __cdecl sub_6F773F40(int *a1, int a2)
{
  int result; // eax@2

  if ( a1 && (result = *a1) != 0 )
  {
    if ( a2 != *(_DWORD *)(result + 8) )
    {
      do
        result = *(_DWORD *)(result + 4);
      while ( result && *(_DWORD *)(result + 8) != a2 );
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
