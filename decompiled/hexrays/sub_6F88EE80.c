int __cdecl sub_6F88EE80(int a1, int a2)
{
  unsigned int v2; // esi@1
  unsigned int v3; // edx@4
  int v4; // eax@4
  unsigned int v5; // ecx@4
  int v6; // edx@6
  unsigned int v7; // edx@10
  unsigned int v8; // edx@11
  int v9; // ecx@15
  int result; // eax@15
  int v11; // edx@15
  int v12; // ecx@16
  int v13; // ecx@19
  int v14; // edx@24
  int v15; // ecx@24

  v2 = *(_DWORD *)(a1 + 12) - 5;
  if ( v2 >= 0xFFFF )
    v2 = 0xFFFF;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 116);
    if ( v8 <= 1 )
    {
      sub_6F88E2C0(a1);
      v8 = *(_DWORD *)(a1 + 116);
      if ( !v8 )
        break;
    }
    v3 = *(_DWORD *)(a1 + 108) + v8;
    v4 = *(_DWORD *)(a1 + 92);
    *(_DWORD *)(a1 + 116) = 0;
    *(_DWORD *)(a1 + 108) = v3;
    v5 = v2 + v4;
    if ( !v3 || v3 >= v5 )
    {
      *(_DWORD *)(a1 + 116) = v3 - v5;
      v6 = 0;
      *(_DWORD *)(a1 + 108) = v5;
      if ( v4 >= 0 )
        v6 = *(_DWORD *)(a1 + 56) + v4;
      sub_6F8923F0(a1, v6, v2, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
      if ( !*(_DWORD *)(*(_DWORD *)a1 + 16) )
        return 0;
      v3 = *(_DWORD *)(a1 + 108);
      v4 = *(_DWORD *)(a1 + 92);
    }
    v7 = v3 - v4;
    if ( v7 >= *(_DWORD *)(a1 + 44) - 262 )
    {
      v13 = 0;
      if ( v4 >= 0 )
        v13 = *(_DWORD *)(a1 + 56) + v4;
      sub_6F8923F0(a1, v13, v7, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
      if ( !*(_DWORD *)(*(_DWORD *)a1 + 16) )
        return 0;
    }
  }
  if ( !a2 )
    return 0;
  *(_DWORD *)(a1 + 5812) = 0;
  if ( a2 == 4 )
  {
    v14 = *(_DWORD *)(a1 + 92);
    v15 = 0;
    if ( v14 >= 0 )
      v15 = v14 + *(_DWORD *)(a1 + 56);
    sub_6F8923F0(a1, v15, *(_DWORD *)(a1 + 108) - v14, 1);
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
    sub_6F88E5B0(*(_DWORD *)a1);
    result = 3 - (*(_DWORD *)(*(_DWORD *)a1 + 16) < 1u);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 108);
    result = 1;
    v11 = *(_DWORD *)(a1 + 92);
    if ( v9 > v11 )
    {
      v12 = v9 - v11;
      LOBYTE(result) = 0;
      if ( v11 >= 0 )
        result = v11 + *(_DWORD *)(a1 + 56);
      sub_6F8923F0(a1, result, v12, 0);
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_6F88E5B0(*(_DWORD *)a1);
      result = *(_DWORD *)(*(_DWORD *)a1 + 16) != 0;
    }
  }
  return result;
}
