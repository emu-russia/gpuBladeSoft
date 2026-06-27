int __cdecl sub_6F95E0F0(int a1)
{
  unsigned int v1; // eax@1
  char *v2; // eax@2
  int result; // eax@3

  v1 = sub_6F8C3BF0(&unk_6FB49FDC);
  if ( *(_DWORD *)(*(_DWORD *)a1 + 8) <= v1 || (v2 = *(char **)(*(_DWORD *)(*(_DWORD *)a1 + 4) + 4 * v1)) == 0 )
    sub_6F95AA30();
  result = sub_6F962940(v2, (int)&off_6FBAC374, (int)&off_6FBACBDC, 0);
  if ( !result )
    sub_6F961DA0();
  return result;
}
