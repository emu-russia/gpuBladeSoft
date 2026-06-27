signed int __usercall sub_6F79D520@<eax>(signed int result@<eax>)
{
  int v1; // esi@1
  unsigned int v2; // ebx@1
  unsigned int v3; // ebx@2
  unsigned int v4; // eax@3
  unsigned int v5; // ecx@3
  int v6; // edx@6
  int v7; // edi@6
  int v8; // edx@7
  __int16 v9; // ax@8

  v1 = result;
  v2 = *(_DWORD *)(result + 24);
  if ( v2 > 0xFFFE )
  {
LABEL_12:
    *(_DWORD *)(v1 + 24) = -1;
    *(_DWORD *)(v1 + 28) = 0;
  }
  else
  {
    v3 = v2 + 1;
    while ( 1 )
    {
      v4 = *(_DWORD *)(v1 + 40);
      v5 = *(_DWORD *)(v1 + 44);
      if ( v3 < v4 )
        v3 = *(_DWORD *)(v1 + 40);
      if ( v3 <= v5 )
        break;
LABEL_11:
      result = sub_6F79D3B0(v1, *(_DWORD *)(v1 + 36) + 1);
      if ( result < 0 )
        goto LABEL_12;
    }
    v6 = *(_DWORD *)(v1 + 52);
    v7 = *(_DWORD *)(v1 + 48);
    if ( v6 )
    {
      v8 = v6 + 2 * (v3 - v4);
      while ( 1 )
      {
        v8 += 2;
        v9 = *(_BYTE *)(v8 - 1) | (unsigned __int16)(*(_BYTE *)(v8 - 2) << 8);
        if ( v9 )
        {
          result = (unsigned __int16)(v7 + v9);
          if ( result )
            break;
        }
        if ( v5 < ++v3 )
          goto LABEL_11;
      }
    }
    else
    {
      while ( 1 )
      {
        result = (unsigned __int16)(v3 + v7);
        if ( (_WORD)v3 + (_WORD)v7 )
          break;
        if ( v5 < ++v3 )
          goto LABEL_11;
      }
    }
    *(_DWORD *)(v1 + 24) = v3;
    *(_DWORD *)(v1 + 28) = result;
  }
  return result;
}
