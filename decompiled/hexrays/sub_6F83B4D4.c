void *__cdecl sub_6F83B4D4(int a1, size_t a2)
{
  void *result; // eax@2
  void *v3; // [sp+1Ch] [bp-Ch]@3

  if ( a1 )
  {
    v3 = sub_6F83B347(a1, a2);
    if ( !v3 )
      sub_6F839044(a1, (int)"Out of memory");
    result = v3;
  }
  else
  {
    result = 0;
  }
  return result;
}
