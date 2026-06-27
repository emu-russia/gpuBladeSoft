int __cdecl sub_6F7612A0(const char *a1)
{
  char *v1; // eax@1
  const char *v2; // eax@2

  v1 = strrchr(a1, 47);
  if ( v1 )
  {
    v2 = v1 + 1;
    if ( v2 )
      strcpy((char *)a1, v2);
  }
  return 0;
}
