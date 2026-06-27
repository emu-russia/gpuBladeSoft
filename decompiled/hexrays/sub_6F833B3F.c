void *__cdecl sub_6F833B3F(int a1, unsigned int a2, unsigned int a3)
{
  void *result; // eax@2

  if ( a1 )
  {
    if ( 0xFFFFFFFF / a3 > a2 )
    {
      result = sub_6F83B561(a1, a2 * a3);
    }
    else
    {
      sub_6F839262(a1, "Potential overflow in png_zalloc()");
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
