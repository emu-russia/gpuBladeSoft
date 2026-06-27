char __cdecl sub_6F863834(int a1)
{
  int v1; // ecx@1
  _BYTE *v2; // ebx@1
  int v3; // edi@1
  unsigned int v4; // edx@2
  unsigned int v5; // ecx@2
  _BYTE *v6; // esi@2
  char v7; // al@10
  int *v8; // edx@13
  int v9; // edx@19
  int v10; // eax@21
  char result; // al@23
  unsigned __int8 v12; // dl@30
  int v13; // edi@30
  _BYTE *v14; // eax@31
  int v15; // eax@33
  unsigned int v16; // ecx@34
  unsigned int v17; // ST18_4@37
  char v18; // dl@38
  unsigned __int8 v19; // ST1C_1@41
  char v20; // cl@41
  unsigned int v21; // [sp+18h] [bp-30h]@10
  unsigned int v22; // [sp+1Ch] [bp-2Ch]@10
  int v23; // [sp+20h] [bp-28h]@2
  int v24; // [sp+24h] [bp-24h]@1
  int v25; // [sp+28h] [bp-20h]@1
  int v26; // [sp+2Ch] [bp-1Ch]@1

  v25 = *(_DWORD *)(a1 + 420);
  v24 = *(_DWORD *)(v25 + 160);
  v1 = *(_DWORD *)(a1 + 24);
  v26 = v1;
  v2 = *(_BYTE **)v1;
  v3 = *(_DWORD *)(v1 + 4);
  if ( v24 )
  {
    v4 = *(_DWORD *)(v25 + 164);
    v5 = *(_DWORD *)(v24 + 12);
    v6 = (_BYTE *)(*(_DWORD *)(v24 + 16) + *(_DWORD *)(v25 + 164));
    v23 = 0;
    goto LABEL_3;
  }
  if ( !v3 )
  {
    v18 = (*(int (__cdecl **)(int))(v1 + 12))(a1);
    result = 0;
    if ( !v18 )
      return result;
    v2 = *(_BYTE **)v26;
    v3 = *(_DWORD *)(v26 + 4);
  }
  v12 = *v2;
  v13 = v3 - 1;
  if ( v13 )
  {
    v14 = v2 + 1;
LABEL_32:
    v3 = v13 - 1;
    v2 = v14 + 1;
    v23 = (v12 << 8) + *v14 - 2;
    if ( v23 < 0 )
    {
      v5 = 0;
      v6 = 0;
      goto LABEL_19;
    }
    v15 = *(_DWORD *)(a1 + 396);
    if ( v15 == 254 )
      v16 = *(_DWORD *)(v25 + 92);
    else
      v16 = *(_DWORD *)(v25 + 4 * v15 - 800);
    if ( v16 > v23 )
      v16 = v23;
    v17 = v16;
    v24 = (*(int (__cdecl **)(int, signed int, int))(*(_DWORD *)(a1 + 4) + 4))(a1, 1, v16 + 20);
    *(_DWORD *)v24 = 0;
    *(_BYTE *)(v24 + 4) = *(_DWORD *)(a1 + 396);
    *(_DWORD *)(v24 + 8) = v23;
    v5 = v17;
    *(_DWORD *)(v24 + 12) = v17;
    v6 = (_BYTE *)(v24 + 20);
    *(_DWORD *)(v24 + 16) = v24 + 20;
    *(_DWORD *)(v25 + 160) = v24;
    *(_DWORD *)(v25 + 164) = 0;
    v4 = 0;
LABEL_3:
    if ( v4 < v5 )
    {
      while ( 1 )
      {
        *(_DWORD *)v26 = v2;
        *(_DWORD *)(v26 + 4) = v3;
        *(_DWORD *)(v25 + 164) = v4;
        if ( v3 )
          break;
        v22 = v4;
        v21 = v5;
        v7 = (*(int (__cdecl **)(int))(v26 + 12))(a1);
        v4 = v22;
        v5 = v21;
        if ( !v7 )
          return 0;
        v2 = *(_BYTE **)v26;
        v3 = *(_DWORD *)(v26 + 4);
        if ( v22 >= v21 )
          goto LABEL_12;
LABEL_8:
        while ( v3 )
        {
          *v6++ = *v2++;
          --v3;
          if ( ++v4 >= v5 )
            goto LABEL_12;
        }
        v3 = 0;
      }
      if ( v4 < v5 )
        goto LABEL_8;
    }
LABEL_12:
    if ( v24 )
    {
      v8 = *(int **)(a1 + 268);
      if ( v8 )
      {
        while ( *v8 )
          v8 = (int *)*v8;
        *v8 = v24;
      }
      else
      {
        *(_DWORD *)(a1 + 268) = v24;
      }
      v6 = *(_BYTE **)(v24 + 16);
      v23 = *(_DWORD *)(v24 + 8) - v5;
    }
LABEL_19:
    *(_DWORD *)(v25 + 160) = 0;
    v9 = *(_DWORD *)(a1 + 396);
    if ( v9 == 224 )
    {
      sub_6F863390(a1, (int)v6, v5, v23);
    }
    else
    {
      if ( v9 == 238 )
      {
        sub_6F8635DC(a1, (int)v6, v5, v23);
        *(_DWORD *)v26 = v2;
        *(_DWORD *)(v26 + 4) = v3;
        if ( v23 > 0 )
          goto LABEL_23;
        return 1;
      }
      v10 = *(_DWORD *)a1;
      *(_DWORD *)(v10 + 20) = 93;
      *(_DWORD *)(v10 + 24) = v9;
      *(_DWORD *)(*(_DWORD *)a1 + 28) = v23 + v5;
      (*(void (__cdecl **)(int, signed int))(*(_DWORD *)a1 + 4))(a1, 1);
    }
    *(_DWORD *)v26 = v2;
    *(_DWORD *)(v26 + 4) = v3;
    if ( v23 > 0 )
    {
LABEL_23:
      (*(void (__cdecl **)(int, int))(*(_DWORD *)(a1 + 24) + 16))(a1, v23);
      return 1;
    }
    return 1;
  }
  v19 = *v2;
  v20 = (*(int (__cdecl **)(int))(v26 + 12))(a1);
  result = 0;
  v12 = v19;
  if ( v20 )
  {
    v14 = *(_BYTE **)v26;
    v13 = *(_DWORD *)(v26 + 4);
    goto LABEL_32;
  }
  return result;
}
