int __cdecl sub_6F86B1D8(int a1, int a2)
{
  int v2; // esi@1
  int result; // eax@1
  int v4; // eax@5
  int v5; // eax@7
  int v6; // eax@12
  int v7; // eax@9

  v2 = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(v2 + 8) = 0;
  result = sub_6F86B168(a1);
  if ( a2 == 2 )
  {
    result = *(_DWORD *)(v2 + 64);
    if ( !result )
    {
      v6 = *(_DWORD *)a1;
      *(_DWORD *)(v6 + 20) = 3;
      result = (*(int (__cdecl **)(int))v6)(a1);
    }
    *(_DWORD *)(v2 + 4) = sub_6F86B298;
  }
  else if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v2 + 64) )
    {
      v7 = *(_DWORD *)a1;
      *(_DWORD *)(v7 + 20) = 3;
      result = (*(int (__cdecl **)(int))v7)(a1);
    }
    *(_DWORD *)(v2 + 4) = sub_6F86B44C;
  }
  else if ( a2 )
  {
    v5 = *(_DWORD *)a1;
    *(_DWORD *)(v5 + 20) = 3;
    result = (*(int (__cdecl **)(int))v5)(a1);
  }
  else
  {
    if ( *(_DWORD *)(v2 + 64) )
    {
      v4 = *(_DWORD *)a1;
      *(_DWORD *)(v4 + 20) = 3;
      result = (*(int (__cdecl **)(int))v4)(a1);
    }
    *(_DWORD *)(v2 + 4) = sub_6F86B6A4;
  }
  return result;
}
