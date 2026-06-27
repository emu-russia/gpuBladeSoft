void *__cdecl sub_6F83B347(int a1, size_t a2)
{
  void *result; // eax@4

  if ( a2 )
  {
    if ( a1 && *(_DWORD *)(a1 + 628) )
      result = (void *)(*(int (__cdecl **)(int, size_t))(a1 + 628))(a1, a2);
    else
      result = malloc(a2);
  }
  else
  {
    result = 0;
  }
  return result;
}
