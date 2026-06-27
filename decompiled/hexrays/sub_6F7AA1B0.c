signed int __usercall sub_6F7AA1B0@<eax>(int a1@<eax>)
{
  int v1; // edx@1
  int v2; // ebx@1
  int v3; // esi@2
  int v4; // ecx@2
  int v5; // ecx@2

  v1 = *(_DWORD *)(a1 + 360) + *(_DWORD *)(a1 + 372);
  v2 = *(_DWORD *)(a1 + 364);
  *(_DWORD *)(a1 + 360) = v1;
  if ( v1 >= v2 )
    goto LABEL_4;
  v3 = *(_DWORD *)(a1 + 356);
  v4 = *(_BYTE *)(v3 + v1);
  *(_BYTE *)(a1 + 368) = v4;
  v5 = byte_6FB69720[v4];
  *(_DWORD *)(a1 + 372) = v5;
  if ( v5 < 0 )
  {
    if ( v2 <= v1 + 1 )
      goto LABEL_4;
    v5 = 2 - *(_BYTE *)(v3 + v1 + 1) * v5;
    *(_DWORD *)(a1 + 372) = v5;
  }
  if ( v2 < v5 + v1 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 12) = 131;
    return 1;
  }
  return 0;
}
