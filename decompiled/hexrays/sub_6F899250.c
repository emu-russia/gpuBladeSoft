int __usercall sub_6F899250@<eax>(int a1@<eax>)
{
  int v1; // edx@1
  int v2; // ebx@4
  int v3; // eax@4
  int result; // eax@4
  _BYTE *v5; // edx@4

  v1 = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)v1 == 70 )
  {
    *(_DWORD *)(a1 + 12) = v1 + 1;
    if ( *(_BYTE *)(v1 + 1) == 89 )
      *(_DWORD *)(a1 + 12) = v1 + 2;
    v2 = a1;
    v3 = sub_6F8991E0(a1, 1);
    result = sub_6F896BC0(v2, v3);
    v5 = *(_BYTE **)(v2 + 12);
    if ( *v5 == 69 )
      *(_DWORD *)(v2 + 12) = v5 + 1;
    else
      result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
