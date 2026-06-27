unsigned int __usercall sub_6F77C9E0@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  signed int v3; // ebx@1
  unsigned int v4; // eax@2
  unsigned int v5; // ecx@5
  int v6; // ebx@7
  unsigned int result; // eax@9
  int v8; // eax@21

  v2 = *(_DWORD *)a1;
  v3 = **(_BYTE **)a1;
  if ( (_BYTE)v3 == 30 )
    return sub_6F77A6B0((_BYTE *)v2, *(_DWORD *)(a1 + 4), a2, 0);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v3 != 28 )
  {
    if ( v3 != 29 )
    {
      if ( v3 <= 246 )
      {
        v6 = v3 - 139;
      }
      else
      {
        v5 = v2 + 2;
        if ( v3 > 250 )
        {
          if ( v4 >= v5 )
          {
            v6 = ((251 - v3) << 8) - *(_BYTE *)(v2 + 1) - 108;
            goto LABEL_8;
          }
LABEL_11:
          v6 = 0;
          result = 0;
          if ( !a2 )
            return result;
          goto LABEL_12;
        }
        if ( v4 < v5 )
          goto LABEL_11;
        v6 = ((v3 - 247) << 8) + *(_BYTE *)(v2 + 1) + 108;
      }
LABEL_8:
      if ( !a2 )
        return v6 << 16;
      goto LABEL_12;
    }
    if ( v4 < v2 + 5 )
      goto LABEL_11;
    v6 = _byteswap_ulong(*(_DWORD *)(v2 + 1));
    if ( !a2 )
    {
LABEL_13:
      if ( v6 > 0x7FFF )
        return 0x7FFFFFFF;
      goto LABEL_22;
    }
LABEL_12:
    v6 *= dword_6FB57520[a2];
    goto LABEL_13;
  }
  if ( v4 < v2 + 3 )
    goto LABEL_11;
  v8 = *(_BYTE *)(v2 + 2);
  v6 = (signed __int16)_byteswap_ushort(*(_WORD *)(v2 + 1));
  if ( a2 )
    goto LABEL_12;
LABEL_22:
  result = -2147483647;
  if ( v6 >= -32767 )
    return v6 << 16;
  return result;
}
