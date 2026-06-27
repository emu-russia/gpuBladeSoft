int __cdecl sub_6F8660D8(int a1, int a2)
{
  int result; // eax@1
  int v3; // ebx@1
  int v4; // eax@4
  int v5; // eax@10
  int v6; // eax@13

  result = a2;
  v3 = *(_DWORD *)(a1 + 412);
  if ( a2 == 2 )
  {
    result = *(_DWORD *)(v3 + 8);
    if ( !result )
    {
      v6 = *(_DWORD *)a1;
      *(_DWORD *)(v6 + 20) = 3;
      result = (*(int (__cdecl **)(int))v6)(a1);
    }
    *(_DWORD *)(v3 + 4) = sub_6F86631C;
  }
  else if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(v3 + 8) )
    {
      v5 = *(_DWORD *)a1;
      *(_DWORD *)(v5 + 20) = 3;
      result = (*(int (__cdecl **)(int))v5)(a1);
    }
    *(_DWORD *)(v3 + 4) = sub_6F866240;
  }
  else if ( a2 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 3;
    result = (*(int (__cdecl **)(int))v4)(a1);
  }
  else if ( *(_BYTE *)(a1 + 74) )
  {
    *(_DWORD *)(v3 + 4) = sub_6F8661B0;
    result = *(_DWORD *)(v3 + 12);
    if ( !result )
    {
      result = (*(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD, signed int))(*(_DWORD *)(a1 + 4) + 28))(
                 a1,
                 *(_DWORD *)(v3 + 8),
                 0,
                 *(_DWORD *)(v3 + 16),
                 1);
      *(_DWORD *)(v3 + 12) = result;
    }
  }
  else
  {
    result = *(_DWORD *)(*(_DWORD *)(a1 + 432) + 4);
    *(_DWORD *)(v3 + 4) = result;
  }
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  return result;
}
