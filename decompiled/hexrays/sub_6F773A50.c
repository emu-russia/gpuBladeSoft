void *__cdecl sub_6F773A50(int a1, signed int a2, signed int *a3)
{
  void *v3; // eax@2
  void *v4; // ebx@2
  signed int v6; // edx@6

  if ( a2 <= 0 )
  {
    if ( !a2 )
    {
      *a3 = 0;
      return 0;
    }
    v6 = 6;
  }
  else
  {
    v3 = (void *)(*(int (__cdecl **)(int, signed int))(a1 + 4))(a1, a2);
    v4 = v3;
    if ( v3 )
    {
      memset(v3, 0, a2);
      *a3 = 0;
      return v4;
    }
    v6 = 64;
  }
  *a3 = v6;
  return 0;
}
