char __cdecl sub_6F8617B8(int a1)
{
  int v1; // eax@1
  int v2; // edx@4
  char result; // al@5
  int v4; // edx@9
  int v5; // eax@12
  int v6; // eax@17
  int v7; // ecx@17

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == 202 )
  {
    sub_6F865760(a1);
    if ( *(_BYTE *)(a1 + 64) )
    {
      *(_DWORD *)(a1 + 20) = 207;
      return 1;
    }
    *(_DWORD *)(a1 + 20) = 203;
  }
  else if ( v1 != 203 )
  {
    if ( v1 != 204 )
    {
      v2 = *(_DWORD *)a1;
      *(_DWORD *)(v2 + 20) = 21;
      *(_DWORD *)(v2 + 24) = v1;
      (**(void (__cdecl ***)(_DWORD))a1)(a1);
    }
    return sub_6F8616DC(a1);
  }
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 416) + 16) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    while ( 1 )
    {
      if ( v4 )
        (*(void (__cdecl **)(int))v4)(a1);
      v5 = (**(int (__cdecl ***)(_DWORD))(a1 + 416))(a1);
      if ( !v5 )
        break;
      if ( v5 == 2 )
        goto LABEL_19;
      v4 = *(_DWORD *)(a1 + 8);
      if ( v4 && (v5 == 3 || v5 == 1) )
      {
        v6 = *(_DWORD *)(v4 + 4) + 1;
        *(_DWORD *)(v4 + 4) = v6;
        v7 = *(_DWORD *)(v4 + 8);
        if ( v6 >= v7 )
          *(_DWORD *)(v4 + 8) = *(_DWORD *)(a1 + 288) + v7;
      }
    }
    result = 0;
  }
  else
  {
LABEL_19:
    *(_DWORD *)(a1 + 132) = *(_DWORD *)(a1 + 124);
    result = sub_6F8616DC(a1);
  }
  return result;
}
