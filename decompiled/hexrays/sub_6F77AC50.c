int __usercall sub_6F77AC50@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  unsigned int v2; // edx@3
  int v3; // ecx@3
  int v5; // eax@6

  if ( a2 == 0xFFFF )
    return 0;
  if ( a2 > 0x186 )
  {
    v2 = a2 - 391;
    v3 = 0;
    if ( v2 < *(_DWORD *)(a1 + 1312) )
      v3 = *(_DWORD *)(*(_DWORD *)(a1 + 1316) + 4 * v2);
    return v3;
  }
  v5 = *(_DWORD *)(a1 + 2956);
  if ( !v5 )
    return 0;
  return (*(int (__cdecl **)(unsigned int))(v5 + 20))(a2);
}
