int __usercall sub_6F896BC0@<eax>(int a1@<eax>, int a2@<edx>)
{
  char *v2; // ebx@1
  char v3; // cl@1
  int result; // eax@3
  int v5; // ebp@4
  int v6; // esi@4
  int v7; // edi@4

  v2 = *(char **)(a1 + 12);
  v3 = *v2;
  if ( *v2 == 82 || v3 == 79 )
  {
    v5 = *(_DWORD *)(a1 + 44);
    v6 = 32;
    v7 = v5 + 3;
    if ( v3 == 82 )
    {
      v7 = v5 + 2;
      v6 = 31;
    }
    *(_DWORD *)(a1 + 44) = v7;
    *(_DWORD *)(a1 + 12) = v2 + 1;
    result = sub_6F896B60(a1, v6, a2, 0);
  }
  else
  {
    result = a2;
  }
  return result;
}
