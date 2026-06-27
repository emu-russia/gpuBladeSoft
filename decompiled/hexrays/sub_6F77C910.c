int __usercall sub_6F77C910@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  signed int v2; // edx@1
  unsigned int v3; // ecx@2
  int result; // eax@4
  unsigned int v5; // esi@5
  int v6; // edx@10

  v1 = *(_DWORD *)a1;
  v2 = **(_BYTE **)a1;
  if ( (_BYTE)v2 == 30 )
  {
    result = (signed int)sub_6F77A6B0((_BYTE *)v1, *(_DWORD *)(a1 + 4), 0, 0) >> 16;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v2 == 28 )
    {
      result = 0;
      if ( v3 >= v1 + 3 )
      {
        v6 = *(_BYTE *)(v1 + 2);
        result = (signed __int16)_byteswap_ushort(*(_WORD *)(v1 + 1));
      }
    }
    else if ( v2 == 29 )
    {
      result = 0;
      if ( v3 >= v1 + 5 )
        result = _byteswap_ulong(*(_DWORD *)(v1 + 1));
    }
    else
    {
      result = v2 - 139;
      if ( v2 > 246 )
      {
        result = 0;
        v5 = v1 + 2;
        if ( v2 > 250 )
        {
          if ( v3 >= v5 )
            result = ((251 - v2) << 8) - *(_BYTE *)(v1 + 1) - 108;
        }
        else if ( v3 >= v5 )
        {
          result = ((v2 - 247) << 8) + *(_BYTE *)(v1 + 1) + 108;
        }
      }
    }
  }
  return result;
}
