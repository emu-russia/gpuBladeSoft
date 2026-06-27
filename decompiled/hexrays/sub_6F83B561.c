void *__cdecl sub_6F83B561(int a1, size_t a2)
{
  void *v3; // [sp+1Ch] [bp-Ch]@2

  if ( a1 )
  {
    v3 = sub_6F83B347(a1, a2);
    if ( v3 )
      return v3;
    sub_6F839262(a1, "Out of memory");
  }
  return 0;
}
