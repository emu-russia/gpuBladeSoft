signed int __usercall sub_6F90DE20@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, char a4)
{
  unsigned int v4; // edi@1
  int v5; // esi@1
  int v6; // ebx@1
  _WORD *v7; // ecx@7
  int v8; // edx@7
  unsigned int v9; // eax@9
  signed int result; // eax@10

  v4 = a3;
  v5 = a2;
  v6 = a1;
  sub_6F90D9E0(a3, &a4, a1);
  if ( v4 >= 0xFFFF )
    v4 = 0xFFFF;
  if ( (unsigned int)(*(_DWORD *)(v6 + 4) - *(_DWORD *)v6) <= 1 )
  {
LABEL_11:
    result = 0;
  }
  else if ( *(_DWORD *)(v5 + 4) == *(_DWORD *)v5 )
  {
LABEL_12:
    result = 1;
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_6F90DC70(v6, v4, a4);
      if ( v9 == -2 || v4 < v9 )
        break;
      v7 = *(_WORD **)v5;
      v8 = *(_DWORD *)v5 + 2;
      *(_DWORD *)v5 = v8;
      *v7 = v9;
      if ( (unsigned int)(*(_DWORD *)(v6 + 4) - *(_DWORD *)v6) <= 1 )
        goto LABEL_11;
      if ( *(_DWORD *)(v5 + 4) == v8 )
        goto LABEL_12;
    }
    result = 2;
  }
  return result;
}
