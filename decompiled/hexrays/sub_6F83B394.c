void *__cdecl sub_6F83B394(int a1, unsigned int a2, unsigned int a3)
{
  void *result; // eax@2

  if ( 0xFFFFFFFF / a3 < a2 )
    result = 0;
  else
    result = sub_6F83B347(a1, a3 * a2);
  return result;
}
