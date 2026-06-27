int __usercall sub_6F79E1B0@<eax>(int result@<eax>)
{
  int v1; // edx@1
  unsigned int v2; // edx@2
  unsigned int v3; // esi@2
  int v4; // ebp@3
  unsigned __int32 v5; // ebx@4
  unsigned __int32 v6; // edi@4
  unsigned __int32 v7; // esi@4
  int v8; // ecx@7
  unsigned int v9; // [sp+0h] [bp-18h]@2

  v1 = *(_DWORD *)(result + 28);
  if ( v1 == -1 )
  {
    *(_BYTE *)(result + 24) = 0;
    return result;
  }
  v2 = v1 + 1;
  v3 = *(_DWORD *)(result + 36);
  v9 = *(_DWORD *)(result + 36);
  if ( v3 >= *(_DWORD *)(result + 40) )
  {
LABEL_12:
    *(_BYTE *)(result + 24) = 0;
    return result;
  }
  v4 = *(_DWORD *)(result + 16) + 12 * v3;
  while ( 1 )
  {
    v5 = _byteswap_ulong(*(_DWORD *)(v4 + 16));
    v6 = _byteswap_ulong(*(_DWORD *)(v4 + 20));
    v7 = _byteswap_ulong(*(_DWORD *)(v4 + 24));
    if ( v2 < v5 )
      v2 = v5;
    if ( v6 >= v2 )
      break;
LABEL_11:
    ++v9;
    v4 += 12;
    if ( v9 >= *(_DWORD *)(result + 40) )
      goto LABEL_12;
  }
  v8 = v7 + v2 - v5;
  if ( !v8 )
  {
    while ( v6 >= ++v2 )
    {
      v8 = v7 + v2 - v5;
      if ( v7 + v2 != v5 )
        goto LABEL_13;
    }
    goto LABEL_11;
  }
LABEL_13:
  *(_DWORD *)(result + 28) = v2;
  *(_DWORD *)(result + 32) = v8;
  *(_DWORD *)(result + 36) = v9;
  return result;
}
