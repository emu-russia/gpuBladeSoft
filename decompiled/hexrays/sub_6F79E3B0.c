int __usercall sub_6F79E3B0@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  unsigned int v2; // edi@2
  unsigned int v3; // ebp@2
  unsigned int v4; // ebx@2
  int v5; // eax@3
  unsigned __int32 v6; // edx@5
  unsigned __int32 v7; // ecx@5
  unsigned __int32 v8; // esi@5
  int result; // eax@9
  int v10; // [sp+0h] [bp-14h]@1

  v1 = *(_DWORD *)(a1 + 28);
  v10 = a1;
  if ( v1 == -1 || (v2 = *(_DWORD *)(a1 + 36), v3 = *(_DWORD *)(a1 + 40), v4 = v1 + 1, v2 >= v3) )
  {
LABEL_10:
    result = v10;
    *(_BYTE *)(v10 + 24) = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 16) + 12 * v2;
    while ( 1 )
    {
      v6 = _byteswap_ulong(*(_DWORD *)(v5 + 16));
      v7 = _byteswap_ulong(*(_DWORD *)(v5 + 24));
      v8 = _byteswap_ulong(*(_DWORD *)(v5 + 20));
      if ( v4 < v6 )
        v4 = v6;
      if ( v7 && v8 >= v4 )
        break;
      ++v2;
      v5 += 12;
      if ( v2 >= v3 )
        goto LABEL_10;
    }
    result = v10;
    *(_DWORD *)(v10 + 28) = v4;
    *(_DWORD *)(v10 + 32) = v7;
    *(_DWORD *)(v10 + 36) = v2;
  }
  return result;
}
