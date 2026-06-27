int sub_6F8B1AC0()
{
  const char *v0; // eax@1
  char *v1; // edx@1
  int result; // eax@1

  v0 = (const char *)setlocale();
  v1 = strchr(v0, 46);
  result = 0;
  if ( v1 )
    result = atoi(v1 + 1);
  return result;
}
