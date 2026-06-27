unsigned int __stdcall sub_6F8C3700(wint_t *a1, unsigned int a2)
{
  wint_t *v2; // ebx@1
  wint_t v3; // ax@2

  v2 = a1;
  if ( (unsigned int)a1 < a2 )
  {
    do
    {
      v3 = *v2;
      ++v2;
      *(v2 - 1) = towlower(v3);
    }
    while ( v2 != &a1[((a2 - 1 - (unsigned int)a1) >> 1) + 1] );
  }
  return a2;
}
