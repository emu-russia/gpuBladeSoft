int __cdecl sub_6F773D90(int a1, int a2)
{
  int result; // eax@1

  result = a2;
  if ( a2 )
    result = (*(int (**)(void))(a1 + 8))();
  return result;
}
