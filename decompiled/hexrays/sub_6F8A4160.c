int __usercall sub_6F8A4160@<eax>(int a1@<eax>, int *a2@<edx>, void **a3@<ecx>, void **a4)
{
  int *v4; // ebp@1
  int v5; // esi@1
  int v6; // eax@2
  void **v7; // edi@2
  int v8; // ebx@3
  int result; // eax@6

  v4 = a2;
  v5 = a1;
  if ( a1 == -1 )
  {
    sub_6F8A4070(a2, a4);
    result = v5;
  }
  else
  {
    v6 = *a2;
    v7 = a3;
    if ( *a2 )
    {
      do
      {
        v8 = *(_DWORD *)(v6 + 4);
        free((void *)v6);
        v6 = v8;
      }
      while ( v8 );
    }
    *v4 = 0;
    if ( v7 )
    {
      free(*v7);
      *v7 = 0;
    }
    free(*a4);
    *a4 = 0;
    result = v5;
  }
  return result;
}
