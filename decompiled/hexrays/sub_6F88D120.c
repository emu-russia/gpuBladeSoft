signed int __usercall sub_6F88D120@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  int v3; // ebx@1
  int v4; // eax@3
  int v5; // edx@6
  int v6; // eax@6
  signed int result; // eax@8

  v2 = a2;
  v3 = a1;
  while ( v2 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)v3;
      if ( !*(_DWORD *)v3 )
        break;
      if ( *(_DWORD *)v3 < 0 || v4 > v2 )
      {
        v5 = v2;
        v6 = v4 - v2;
        v2 = 0;
      }
      else
      {
        v2 -= v4;
        v5 = *(_DWORD *)v3;
        v6 = 0;
      }
      *(_DWORD *)(v3 + 4) += v5;
      *(_DWORD *)(v3 + 8) += v5;
      *(_DWORD *)v3 = v6;
      if ( !v2 )
        return 0;
    }
    if ( *(_DWORD *)(v3 + 52) && !*(_DWORD *)(v3 + 88) )
      break;
    result = sub_6F88D080(v3);
    if ( result == -1 )
      return result;
  }
  return 0;
}
