int __cdecl sub_6F771FD0(int a1)
{
  int result; // eax@1
  int (*v2)(void); // edx@2

  result = a1;
  if ( a1 )
  {
    v2 = *(int (**)(void))(a1 + 24);
    if ( v2 )
      result = v2();
  }
  return result;
}
