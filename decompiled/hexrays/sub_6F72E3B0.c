int __usercall sub_6F72E3B0@<eax>(int a1@<eax>)
{
  void **v1; // ebx@1
  const void *v2; // ebp@1
  size_t v3; // edi@2
  void *v4; // esi@3
  int result; // eax@5

  v1 = (void **)dword_6FBBFBE0;
  v2 = *(const void **)a1;
  if ( dword_6FBBFBE0 == &dword_6FBBFBE0 )
  {
LABEL_5:
    nullsub_10();
    result = 0;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    while ( 1 )
    {
      v4 = v1[2];
      if ( *((_DWORD *)v4 + 5) == v3 && (!v3 || !memcmp(*((const void **)v4 + 4), v2, v3)) )
        break;
      v1 = (void **)*v1;
      if ( v1 == &dword_6FBBFBE0 )
        goto LABEL_5;
    }
    result = *((_DWORD *)v4 + 2);
  }
  return result;
}
