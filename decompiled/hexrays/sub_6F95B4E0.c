int __cdecl sub_6F95B4E0(int a1, int a2, _BYTE *a3)
{
  _BYTE *v3; // ecx@1
  unsigned int v4; // ebx@1
  int v5; // eax@2
  int v6; // edi@3
  int v7; // ebx@4
  int v8; // eax@5
  _BYTE *v9; // ecx@8
  unsigned int v10; // ecx@10

  v3 = *(_BYTE **)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  *a3 = 1;
  if ( v4 <= (unsigned int)v3 )
  {
    v6 = 0;
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
    if ( v5 == -1 )
      return v6;
    v4 = *(_DWORD *)(a1 + 12);
    v3 = *(_BYTE **)(a1 + 8);
  }
  else
  {
    LOBYTE(v5) = *v3;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = v4 - (_DWORD)v3;
    if ( v7 > 1 )
      break;
    while ( 1 )
    {
      v9 = *(_BYTE **)(a2 + 20);
      if ( (unsigned int)v9 >= *(_DWORD *)(a2 + 24) )
      {
        if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 52))(a2, (unsigned __int8)v5) == -1 )
          goto LABEL_17;
      }
      else
      {
        *v9 = v5;
        ++*(_DWORD *)(a2 + 20);
      }
      v10 = *(_DWORD *)(a1 + 8);
      v4 = *(_DWORD *)(a1 + 12);
      ++v6;
      if ( v10 >= v4 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 40))(a1) == -1 )
          return v6;
        v3 = *(_BYTE **)(a1 + 8);
        v4 = *(_DWORD *)(a1 + 12);
      }
      else
      {
        v3 = (_BYTE *)(v10 + 1);
        *(_DWORD *)(a1 + 8) = v3;
      }
      if ( v4 > (unsigned int)v3 )
        break;
LABEL_6:
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
      if ( v5 == -1 )
        return v6;
      v3 = *(_BYTE **)(a1 + 8);
      v7 = *(_DWORD *)(a1 + 12) - (_DWORD)v3;
      if ( v7 > 1 )
        goto LABEL_5;
    }
    LOBYTE(v5) = *v3;
  }
LABEL_5:
  v8 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a2 + 48))(a2, v3, v7);
  *(_DWORD *)(a1 + 8) += v8;
  v6 += v8;
  if ( v7 <= v8 )
    goto LABEL_6;
LABEL_17:
  *a3 = 0;
  return v6;
}
