char *__cdecl sub_6F761630(const char *a1, const char *a2)
{
  char *v2; // eax@1
  char *result; // eax@2
  size_t v4; // eax@3

  v2 = strrchr(a1, 46);
  if ( v2 )
  {
    result = strcpy(v2, a2);
  }
  else
  {
    v4 = strlen(a1);
    a1[v4] = 46;
    result = strcpy((char *)&a1[v4 + 1], a2);
  }
  return result;
}
