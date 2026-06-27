const char *__cdecl sub_6F7690C0(const char **a1, const char *a2)
{
  const char **v2; // ebx@1
  const char *result; // eax@3

  v2 = a1;
  if ( a1 && a2 && (result = *a1) != 0 )
  {
    while ( strcmp(result, a2) )
    {
      v2 += 2;
      result = *v2;
      if ( !*v2 )
        return result;
    }
    result = v2[1];
  }
  else
  {
    result = 0;
  }
  return result;
}
