void *__cdecl sub_6F75FD40(signed int a1)
{
  int v1; // edx@1
  void *result; // eax@2

  v1 = a1 & 0x1F;
  if ( a1 > 31 )
  {
    strcpy((char *)&unk_7035CA40, (const char *)*(&off_6FB54F60 + v1));
    result = &unk_7035CA40;
  }
  else
  {
    strcpy((char *)&unk_7035CA40, (const char *)*(&off_6FB550E0 + v1));
    result = &unk_7035CA40;
  }
  return result;
}
