signed int __usercall sub_6F897280@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  _BYTE *v3; // eax@2
  _BYTE *v5; // eax@7
  _BYTE *v6; // eax@9

  v2 = a1;
  if ( !a2 )
  {
    v3 = *(_BYTE **)(a1 + 12);
    if ( !*v3 )
      return 0;
    *(_DWORD *)(v2 + 12) = v3 + 1;
    a2 = *v3;
  }
  if ( a2 == 104 )
  {
    sub_6F896D30((_DWORD *)(v2 + 12));
  }
  else
  {
    if ( a2 != 118 )
      return 0;
    sub_6F896D30((_DWORD *)(v2 + 12));
    v5 = *(_BYTE **)(v2 + 12);
    if ( *v5 != 95 )
      return 0;
    *(_DWORD *)(v2 + 12) = v5 + 1;
    sub_6F896D30((_DWORD *)(v2 + 12));
  }
  v6 = *(_BYTE **)(v2 + 12);
  if ( *v6 != 95 )
    return 0;
  *(_DWORD *)(v2 + 12) = v6 + 1;
  return 1;
}
