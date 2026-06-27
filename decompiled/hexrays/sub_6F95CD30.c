bool __cdecl sub_6F95CD30(int a1)
{
  unsigned int v1; // edx@1
  bool result; // al@1
  char *v3; // edx@2

  v1 = sub_6F8C3BF0(&unk_6FB49F44);
  result = 0;
  if ( *(_DWORD *)(*(_DWORD *)a1 + 8) > v1 )
  {
    v3 = *(char **)(*(_DWORD *)(*(_DWORD *)a1 + 4) + 4 * v1);
    if ( v3 )
      result = sub_6F962940(v3, (int)&off_6FBAC374, (int)&off_6FBACAF8, 0) != 0;
  }
  return result;
}
