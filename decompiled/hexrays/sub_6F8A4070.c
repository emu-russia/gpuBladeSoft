void __usercall sub_6F8A4070(int *a1@<eax>, void **a2@<edx>)
{
  int *v2; // edi@1
  void **v3; // ebx@1
  int v4; // esi@1
  unsigned int v5; // ebx@2
  _DWORD *v6; // eax@3
  int v7; // ebx@4

  v2 = a1;
  v3 = a2;
  free(*a2);
  v4 = *v2;
  *v3 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = 0;
      if ( *(_DWORD *)v4 )
      {
        do
        {
          free(**(void ***)(v4 + 4 * v5 + 8));
          v6 = *(_DWORD **)(v4 + 4 * v5++ + 8);
          *v6 = 0;
        }
        while ( *(_DWORD *)v4 > v5 );
      }
      v7 = *(_DWORD *)(v4 + 4);
      free((void *)v4);
      if ( !v7 )
        break;
      v4 = v7;
    }
    *v2 = 0;
  }
}
