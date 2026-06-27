void **__usercall sub_6F8A4030@<eax>(void **result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  void *v3; // esi@2
  size_t v4; // edx@3
  void **v5; // ebx@4

  if ( result )
  {
    v3 = *result;
    if ( *result )
    {
      v4 = a2 - (_DWORD)v3;
      if ( v4 != a3 )
      {
        v5 = result;
        result = (void **)realloc(v3, v4);
        if ( result )
          *v5 = result;
      }
    }
  }
  return result;
}
