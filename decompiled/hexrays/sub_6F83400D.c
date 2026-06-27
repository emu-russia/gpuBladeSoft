void *__cdecl sub_6F83400D(int a1)
{
  void *result; // eax@2
  void *v2; // [sp+1Ch] [bp-Ch]@3

  if ( a1 )
  {
    v2 = sub_6F83B347(a1, 0x10Cu);
    if ( v2 )
      memset(v2, 0, 0x10Cu);
    result = v2;
  }
  else
  {
    result = 0;
  }
  return result;
}
