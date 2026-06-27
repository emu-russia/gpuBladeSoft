void *__usercall sub_6F8A40E0@<eax>(int a1@<eax>, size_t *a2@<edx>, void *a3@<ecx>)
{
  size_t v3; // ebx@2
  void *v4; // edi@2
  size_t *v5; // esi@2
  void *result; // eax@5

  if ( *a2 == a1 )
  {
    v3 = 2 * *a2;
    v4 = a3;
    v5 = a2;
    if ( v3 < 0x100 )
      v3 = 256;
    if ( a3 )
    {
      result = realloc(a3, v3);
      if ( result )
      {
        *v5 = v3;
      }
      else
      {
        free(v4);
        result = 0;
      }
    }
    else
    {
      result = malloc(v3);
      if ( result )
        *v5 = v3;
    }
  }
  else
  {
    result = a3;
  }
  return result;
}
