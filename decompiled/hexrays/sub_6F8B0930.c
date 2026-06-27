int *__cdecl sub_6F8B0930(int a1)
{
  int *result; // eax@1

  result = sub_6F8B0700(1);
  if ( result )
  {
    result[4] = 1;
    result[5] = a1;
  }
  return result;
}
