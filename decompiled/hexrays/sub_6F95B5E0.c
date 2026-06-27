int __cdecl sub_6F95B5E0(int a1, int a2, _BYTE *a3)
{
  __int16 *v3; // eax@1
  unsigned __int16 v4; // ax@2
  int v5; // edi@3
  int v6; // esi@5
  int v7; // eax@5
  signed int v8; // esi@7
  unsigned __int16 *v9; // ecx@8
  __int16 *v10; // ecx@10
  __int16 v11; // ax@11
  __int16 *v12; // eax@13

  *a3 = 1;
  v3 = *(__int16 **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 12) <= (unsigned int)v3 )
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
  else
    v4 = *v3;
  v5 = 0;
  if ( v4 == -1 )
    return v5;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8);
      if ( v8 <= 2 )
        break;
      v6 = v8 >> 1;
      v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 48))(a2, *(_DWORD *)(a1 + 8), v6);
      *(_DWORD *)(a1 + 8) += 2 * v7;
      v5 += v7;
      if ( v6 > v7 )
        goto LABEL_17;
LABEL_6:
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
      if ( v4 == -1 )
        return v5;
    }
    v9 = *(unsigned __int16 **)(a2 + 20);
    if ( (unsigned int)v9 < *(_DWORD *)(a2 + 24) )
    {
      *v9 = v4;
      *(_DWORD *)(a2 + 20) = v9 + 1;
      goto LABEL_10;
    }
    if ( (unsigned __int16)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 52))(a2, v4) == -1 )
      break;
LABEL_10:
    ++v5;
    v10 = *(__int16 **)(a1 + 8);
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 12) )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 40))(a1);
    }
    else
    {
      v11 = *v10;
      *(_DWORD *)(a1 + 8) = v10 + 1;
    }
    if ( v11 == -1 )
      return v5;
    v12 = *(__int16 **)(a1 + 8);
    if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 12) )
      goto LABEL_6;
    v4 = *v12;
    if ( v4 == -1 )
      return v5;
  }
LABEL_17:
  *a3 = 0;
  return v5;
}
