char __cdecl sub_6F8636A4(int a1)
{
  int v1; // edi@1
  _BYTE *v2; // eax@1
  int v3; // esi@1
  unsigned __int8 v4; // dl@2
  int v5; // esi@2
  _BYTE *v6; // eax@3
  int v7; // esi@4
  int v8; // ebx@4
  int v9; // ecx@5
  int v10; // eax@6
  unsigned int v11; // esi@6
  int v12; // ecx@6
  char *v13; // edx@6
  unsigned int v14; // ebx@6
  _BYTE *v15; // edx@10
  unsigned int v16; // ecx@11
  int v17; // eax@12
  int v18; // edx@14
  char result; // al@16
  unsigned __int8 v20; // ST18_1@21
  char v21; // al@21
  int v22; // [sp+1Ch] [bp-2Ch]@4
  int v23; // [sp+1Ch] [bp-2Ch]@12
  char v24[38]; // [sp+22h] [bp-26h]@7

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
  v5 = v3 - 1;
  if ( v5 )
  {
    v6 = v2 + 1;
    goto LABEL_4;
  }
  v20 = *v2;
  v21 = (*(int (__cdecl **)(int))(v1 + 12))(a1);
  v4 = v20;
  if ( !v21 )
    return 0;
  v6 = *(_BYTE **)v1;
  v5 = *(_DWORD *)(v1 + 4);
LABEL_4:
  v7 = v5 - 1;
  v8 = (int)(v6 + 1);
  v22 = (v4 << 8) + *v6 - 2;
  if ( v22 > 13 )
  {
    v9 = 14;
    goto LABEL_6;
  }
  if ( v22 > 0 )
  {
    v9 = (v4 << 8) + *v6 - 2;
LABEL_6:
    v10 = v7;
    v11 = v9;
    v12 = 0;
    v13 = (char *)v8;
    v14 = 0;
    do
    {
      while ( v10 )
      {
        --v10;
        LOBYTE(v12) = *v13;
        v24[v14] = *v13++;
        if ( ++v14 >= v11 )
          goto LABEL_11;
      }
      if ( !(unsigned __int8)(*(int (__fastcall **)(int, char *))(v1 + 12))(v12, v13) )
        return 0;
      v15 = *(_BYTE **)v1;
      v10 = *(_DWORD *)(v1 + 4) - 1;
      LOBYTE(v12) = **(_BYTE **)v1;
      v24[v14] = v12;
      v13 = v15 + 1;
      ++v14;
    }
    while ( v14 < v11 );
LABEL_11:
    v16 = v11;
    v7 = v10;
    v8 = (int)v13;
    goto LABEL_12;
  }
  v16 = 0;
LABEL_12:
  v23 = v22 - v16;
  v17 = *(_DWORD *)(a1 + 396);
  if ( v17 == 224 )
  {
    sub_6F863390(a1, (int)v24, v16, v23);
  }
  else if ( v17 == 238 )
  {
    sub_6F8635DC(a1, (int)v24, v16, v23);
  }
  else
  {
    v18 = *(_DWORD *)a1;
    *(_DWORD *)(v18 + 20) = 70;
    *(_DWORD *)(v18 + 24) = v17;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  *(_DWORD *)v1 = v8;
  *(_DWORD *)(v1 + 4) = v7;
  if ( v23 <= 0 )
  {
    result = 1;
  }
  else
  {
    (*(void (__cdecl **)(int, int))(*(_DWORD *)(a1 + 24) + 16))(a1, v23);
    result = 1;
  }
  return result;
}
