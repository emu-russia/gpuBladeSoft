int __cdecl sub_6F8A3840(const char *a1)
{
  const char *v1; // eax@1
  int v2; // ebx@1

  v1 = "alnum";
  v2 = 0;
  while ( strcmp(a1, v1) )
  {
    if ( ++v2 == 11 )
      return 0;
    v1 = (&off_6FBA6540)[8 * v2];
  }
  return (unsigned __int16)word_6FBA6544[4 * v2];
}
