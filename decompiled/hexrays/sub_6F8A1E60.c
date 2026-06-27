int (__cdecl *__cdecl sub_6F8A1E60(int a1))(signed int, int)
{
  int (__cdecl *result)(signed int, int); // eax@1

  result = *(int (__cdecl **)(signed int, int))(a1 + 8);
  if ( result )
    result = (int (__cdecl *)(signed int, int))result(1, a1);
  return result;
}
