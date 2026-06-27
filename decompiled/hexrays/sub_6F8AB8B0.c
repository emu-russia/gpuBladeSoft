int __usercall sub_6F8AB8B0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  int v4; // esi@1
  int v5; // eax@3
  int v6; // eax@7
  char *v7; // esi@8
  char *v8; // ebp@8
  int result; // eax@12
  int v10; // eax@14
  int v11; // eax@16
  int v12; // [sp+18h] [bp-44h]@1
  int v13; // [sp+1Ch] [bp-40h]@1
  int i; // [sp+1Ch] [bp-40h]@5
  char v15[44]; // [sp+30h] [bp-2Ch]@1

  v3 = a3;
  v12 = a1;
  v13 = a2;
  sub_6F8A3660(v15, 0);
  v4 = *(_DWORD *)(v3 + 12);
  if ( v4 >= v13 || v4 < 0 )
    v4 = v13;
  v5 = *(_DWORD *)(v3 + 8);
  if ( v5 > v4 )
  {
    v10 = v5 - v4;
    *(_DWORD *)(v3 + 8) = v10;
    if ( !(*(_BYTE *)(v3 + 5) & 4) )
    {
      *(_DWORD *)(v3 + 8) = v10 - 1;
      do
      {
        sub_6F8AB850(32, v3);
        v11 = *(_DWORD *)(v3 + 8);
        *(_DWORD *)(v3 + 8) = v11 - 1;
      }
      while ( v11 );
    }
  }
  else
  {
    *(_DWORD *)(v3 + 8) = -1;
  }
  for ( i = v4; i > 0; --i )
  {
    v12 += 2;
    v6 = sub_6F8A3660(v15, *(_WORD *)(v12 - 2));
    if ( v6 <= 0 )
      break;
    v7 = &v15[v6];
    v8 = v15;
    do
      sub_6F8AB850(*(++v8 - 1), v3);
    while ( v8 != v7 );
  }
  while ( 1 )
  {
    result = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 8) = result - 1;
    if ( result <= 0 )
      break;
    sub_6F8AB850(32, v3);
  }
  return result;
}
