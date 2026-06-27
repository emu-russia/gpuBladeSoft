signed int __cdecl sub_6F7687D0(void **a1)
{
  signed int result; // eax@1
  void *v2; // ebx@2

  result = 33;
  if ( a1 )
  {
    v2 = *a1;
    sub_6F76F580((int)a1);
    j_free(v2);
    result = 0;
  }
  return result;
}
