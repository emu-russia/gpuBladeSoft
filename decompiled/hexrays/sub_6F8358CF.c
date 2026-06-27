signed int __cdecl sub_6F8358CF(int a1)
{
  signed int result; // eax@10
  int v2; // [sp+1Ch] [bp-Ch]@11
  int v3; // [sp+1Ch] [bp-Ch]@13
  signed int v4; // [sp+1Ch] [bp-Ch]@15

  if ( *(_DWORD *)(a1 + 4) < 0
    || *(_DWORD *)(a1 + 16) < 0
    || *(_DWORD *)(a1 + 28) < 0
    || *(_DWORD *)a1 < 0
    || *(_DWORD *)(a1 + 12) < 0
    || *(_DWORD *)(a1 + 24) < 0
    || *(_DWORD *)(a1 + 8) < 0
    || *(_DWORD *)(a1 + 20) < 0
    || *(_DWORD *)(a1 + 32) < 0 )
  {
    return 1;
  }
  v2 = *(_DWORD *)(a1 + 4);
  if ( 0x7FFFFFFF - v2 < *(_DWORD *)(a1 + 12) )
    return 1;
  v3 = *(_DWORD *)(a1 + 16) + v2;
  if ( 0x7FFFFFFF - v3 < *(_DWORD *)(a1 + 24) )
    return 1;
  v4 = *(_DWORD *)(a1 + 28) + v3;
  if ( v4 == 100000 )
    goto LABEL_37;
  if ( !sub_6F8380D8((_DWORD *)a1, *(_DWORD *)a1, 100000, v4) )
    return 1;
  if ( !sub_6F8380D8((_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 4), 100000, v4) )
    return 1;
  if ( !sub_6F8380D8((_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 8), 100000, v4) )
    return 1;
  if ( !sub_6F8380D8((_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 12), 100000, v4) )
    return 1;
  if ( !sub_6F8380D8((_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 16), 100000, v4) )
    return 1;
  if ( !sub_6F8380D8((_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 20), 100000, v4) )
    return 1;
  if ( !sub_6F8380D8((_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 24), 100000, v4) )
    return 1;
  if ( !sub_6F8380D8((_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 28), 100000, v4) )
    return 1;
  if ( sub_6F8380D8((_DWORD *)(a1 + 32), *(_DWORD *)(a1 + 32), 100000, v4) )
LABEL_37:
    result = 0;
  else
    result = 1;
  return result;
}
