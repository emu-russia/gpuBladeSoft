signed int __usercall sub_6F88D9C0@<eax>(int a1@<eax>, signed int a2@<edx>)
{
  signed int v2; // edi@1
  int v3; // esi@1
  signed int v4; // eax@2
  signed int v5; // ebx@3
  int v6; // eax@6

  v2 = a2;
  v3 = a1;
  if ( !*(_DWORD *)(a1 + 88) || sub_6F88D830(a1, 0) != -1 )
  {
    v4 = 1;
    if ( !v2 )
      return 0;
    v5 = *(_DWORD *)(v3 + 24);
    if ( v5 < 0 )
      goto LABEL_9;
    while ( v5 > v2 )
    {
      do
      {
LABEL_9:
        v5 = v2;
        if ( v4 )
LABEL_10:
          memset(*(void **)(v3 + 32), 0, v5);
LABEL_6:
        v6 = *(_DWORD *)(v3 + 32);
        *(_DWORD *)(v3 + 8) += v5;
        *(_DWORD *)(v3 + 88) = v5;
        *(_DWORD *)(v3 + 84) = v6;
        if ( sub_6F88D830(v3, 0) == -1 )
          return -1;
        v2 -= v5;
        if ( !v2 )
          return 0;
        v5 = *(_DWORD *)(v3 + 24);
        v4 = 0;
      }
      while ( v5 < 0 );
    }
    if ( v4 )
      goto LABEL_10;
    goto LABEL_6;
  }
  return -1;
}
