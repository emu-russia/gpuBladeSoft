signed int __usercall sub_6F897340@<eax>(int a1@<eax>)
{
  int v1; // edx@1
  signed int result; // eax@2
  int v3; // ebx@3
  signed int v4; // edx@4
  signed int v5; // eax@7
  _BYTE *v6; // edx@9

  v1 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)v1 != 95 )
    return 1;
  v3 = a1;
  *(_DWORD *)(a1 + 12) = v1 + 1;
  if ( *(_BYTE *)(v1 + 1) != 95 )
  {
    v4 = sub_6F896D30((_DWORD *)(a1 + 12));
    result = 0;
    if ( v4 < 0 )
      return result;
    return 1;
  }
  *(_DWORD *)(a1 + 12) = v1 + 2;
  v5 = sub_6F896D30((_DWORD *)(a1 + 12));
  if ( v5 < 0 )
    return 0;
  if ( v5 <= 9 )
    return 1;
  v6 = *(_BYTE **)(v3 + 12);
  result = 0;
  if ( *v6 == 95 )
  {
    *(_DWORD *)(v3 + 12) = v6 + 1;
    return 1;
  }
  return result;
}
