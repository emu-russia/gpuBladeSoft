char *__cdecl sub_6F79BA90(unsigned int a1)
{
  char *result; // eax@2

  if ( a1 > 0x186 )
    result = 0;
  else
    result = &a_null[word_6FB672E0[a1]];
  return result;
}
