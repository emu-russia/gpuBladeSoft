int *__cdecl sub_6F8A2530(int a1)
{
  int *result; // eax@2

  *errno() = 0;
  if ( a1 )
  {
    result = *(int **)(a1 + 548);
    if ( result != (int *)-1 )
      result = (int *)findclose(*(_DWORD *)(a1 + 548));
    *(_DWORD *)(a1 + 548) = -1;
    *(_DWORD *)(a1 + 552) = 0;
  }
  else
  {
    result = errno();
    *result = 14;
  }
  return result;
}
