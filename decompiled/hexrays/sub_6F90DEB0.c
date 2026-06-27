signed int __usercall sub_6F90DEB0@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, char a4)
{
  unsigned int v4; // edi@1
  int v5; // esi@1
  int v6; // ebx@1
  unsigned int *v7; // edx@7
  int v8; // ecx@7
  unsigned int v9; // eax@9
  signed int result; // eax@10

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a4 & 4 )
    sub_6F90DF70(a1);
  if ( *(_DWORD *)(v6 + 4) == *(_DWORD *)v6 )
  {
LABEL_11:
    result = 0;
  }
  else
  {
    if ( *(_DWORD *)(v5 + 4) != *(_DWORD *)v5 )
    {
      do
      {
        v9 = sub_6F90DAC0(v6, v4);
        if ( v9 == -2 )
          break;
        if ( v4 < v9 )
          return 2;
        v7 = *(unsigned int **)v5;
        v8 = *(_DWORD *)v5 + 4;
        *(_DWORD *)v5 = v8;
        *v7 = v9;
        if ( *(_DWORD *)v6 == *(_DWORD *)(v6 + 4) )
          goto LABEL_11;
      }
      while ( *(_DWORD *)(v5 + 4) != v8 );
    }
    result = 1;
  }
  return result;
}
