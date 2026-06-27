int __usercall sub_6F8AB9D0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // esi@1
  int v5; // ebx@1
  int result; // eax@3
  int v7; // edi@5
  int v8; // eax@10

  v3 = *(_DWORD *)(a3 + 12);
  v4 = a1;
  v5 = a3;
  if ( v3 >= a2 || v3 < 0 )
    v3 = a2;
  result = *(_DWORD *)(a3 + 8);
  if ( result <= v3 )
  {
    *(_DWORD *)(a3 + 8) = -1;
    if ( v3 )
      goto LABEL_5;
LABEL_18:
    *(_DWORD *)(v5 + 8) = -2;
    return result;
  }
  v8 = result - v3;
  *(_DWORD *)(a3 + 8) = v8;
  if ( *(_BYTE *)(a3 + 5) & 4 )
  {
    if ( !v3 )
    {
      *(_DWORD *)(a3 + 8) = v8 - 1;
      do
      {
LABEL_8:
        sub_6F8AB850(32, v5);
        result = *(_DWORD *)(v5 + 8);
        *(_DWORD *)(v5 + 8) = result - 1;
      }
      while ( result > 0 );
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 8) = v8 - 1;
    do
    {
      sub_6F8AB850(32, v5);
      result = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v5 + 8) = result - 1;
    }
    while ( result );
    if ( !v3 )
      goto LABEL_18;
  }
LABEL_5:
  v7 = v4 + v3;
  do
    sub_6F8AB850(*(_BYTE *)(++v4 - 1), v5);
  while ( v4 != v7 );
  result = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = result - 1;
  if ( result > 0 )
    goto LABEL_8;
  return result;
}
