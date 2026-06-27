signed int __usercall sub_6F88D830@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  int v3; // ebx@1
  int v4; // ebp@3
  signed int v5; // eax@3
  int v6; // eax@4
  int v7; // edx@15
  int v8; // eax@16
  signed int result; // eax@20
  int v10; // eax@25
  int *v11; // eax@28
  char *v12; // eax@28
  int v13; // [sp+18h] [bp-24h]@16
  signed int v14; // [sp+1Ch] [bp-20h]@2

  v2 = a2;
  v3 = a1;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v14 = *(_DWORD *)(a1 + 40);
    if ( !*(_DWORD *)(a1 + 40) )
      goto LABEL_3;
  }
  else
  {
    v14 = sub_6F88D720(a1);
    if ( v14 == -1 )
      return v14;
    v14 = *(_DWORD *)(v3 + 40);
    if ( !*(_DWORD *)(v3 + 40) )
    {
LABEL_3:
      v4 = *(_DWORD *)(v3 + 100);
      v5 = 0;
      while ( 1 )
      {
        if ( !v4 || v2 && (v2 != 4 || v5 == 1) )
        {
          if ( *(_DWORD *)(v3 + 96) != *(_DWORD *)(v3 + 4) )
          {
            v13 = *(_DWORD *)(v3 + 96) - *(_DWORD *)(v3 + 4);
            v8 = write_0(*(_DWORD *)(v3 + 16), *(_DWORD *)(v3 + 4), v13);
            if ( v8 < 0 || v8 != v13 )
              goto LABEL_28;
            v4 = *(_DWORD *)(v3 + 100);
          }
          if ( v4 )
          {
            v6 = *(_DWORD *)(v3 + 96);
          }
          else
          {
            v7 = *(_DWORD *)(v3 + 24);
            v6 = *(_DWORD *)(v3 + 36);
            *(_DWORD *)(v3 + 100) = v7;
            v4 = v7;
            *(_DWORD *)(v3 + 96) = v6;
          }
          *(_DWORD *)(v3 + 4) = v6;
        }
        v5 = sub_6F88F670(v3 + 84, v2);
        if ( v5 == -2 )
        {
          sub_6F88C430(v3, -2, "internal error: deflate stream corrupt");
          return -1;
        }
        if ( *(_DWORD *)(v3 + 100) == v4 )
          break;
        v4 = *(_DWORD *)(v3 + 100);
      }
      if ( v2 == 4 )
        sub_6F88F350(v3 + 84);
      return v14;
    }
  }
  v10 = write_0(*(_DWORD *)(v3 + 16), *(_DWORD *)(v3 + 84), *(_DWORD *)(v3 + 88));
  if ( v10 < 0 || v10 != *(_DWORD *)(v3 + 88) )
  {
LABEL_28:
    v11 = _errno();
    v12 = strerror(*v11);
    sub_6F88C430(v3, -1, v12);
    result = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 88) = 0;
    result = 0;
  }
  return result;
}
