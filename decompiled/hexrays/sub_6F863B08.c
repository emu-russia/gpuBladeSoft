char __cdecl sub_6F863B08(int a1)
{
  int v1; // esi@1
  _BYTE *v2; // eax@1
  int v3; // ecx@1
  unsigned __int8 v4; // dl@2
  _BYTE *v5; // eax@3
  int v6; // edi@4
  int v7; // edx@4
  _BYTE *v8; // ST18_4@4
  char result; // al@5
  unsigned __int8 v10; // ST18_1@6
  char v11; // al@6
  int v12; // [sp+1Ch] [bp-1Ch]@2

  v1 = *(_DWORD *)(a1 + 24);
  v2 = *(_BYTE **)v1;
  v3 = *(_DWORD *)(v1 + 4);
  if ( !v3 )
  {
    if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v1 + 12))(a1) )
      return 0;
    v2 = *(_BYTE **)v1;
    v3 = *(_DWORD *)(v1 + 4);
  }
  v4 = *v2;
  v12 = v3 - 1;
  if ( v3 != 1 )
  {
    v5 = v2 + 1;
    goto LABEL_4;
  }
  v10 = *v2;
  v11 = (*(int (__cdecl **)(int))(v1 + 12))(a1);
  v4 = v10;
  if ( !v11 )
    return 0;
  v5 = *(_BYTE **)v1;
  v12 = *(_DWORD *)(v1 + 4);
LABEL_4:
  v6 = (v4 << 8) + *v5 - 2;
  v7 = *(_DWORD *)a1;
  *(_DWORD *)(v7 + 20) = 93;
  *(_DWORD *)(v7 + 24) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(*(_DWORD *)a1 + 28) = v6;
  v8 = v5;
  (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 1);
  *(_DWORD *)v1 = v8 + 1;
  *(_DWORD *)(v1 + 4) = v12 - 1;
  if ( v6 <= 0 )
  {
    result = 1;
  }
  else
  {
    (*(void (__cdecl **)(int, int))(*(_DWORD *)(a1 + 24) + 16))(a1, v6);
    result = 1;
  }
  return result;
}
