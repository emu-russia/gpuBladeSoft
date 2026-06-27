char __cdecl sub_6F86A90C(int a1, int *a2)
{
  int v2; // eax@2
  int v3; // edi@5
  int v4; // ecx@6
  int v5; // edx@6
  signed int v6; // eax@9
  int v7; // ecx@12
  int v8; // ebx@19
  int v9; // edi@21
  unsigned int v10; // eax@23
  signed int v11; // eax@25
  int v13; // [sp+0h] [bp-38h]@5
  _BYTE *v14; // [sp+4h] [bp-34h]@20
  int v15; // [sp+8h] [bp-30h]@20
  int v16; // [sp+Ch] [bp-2Ch]@18
  int v17; // [sp+10h] [bp-28h]@1
  int v18; // [sp+14h] [bp-24h]@5
  int v19; // [sp+18h] [bp-20h]@20
  int v20; // [sp+1Ch] [bp-1Ch]@5

  v17 = *(_DWORD *)(a1 + 404);
  if ( *(_DWORD *)(a1 + 224) )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 404) + 68);
    if ( !v2 )
    {
      sub_6F86A39C(a1, *(_DWORD *)(*(_DWORD *)(a1 + 404) + 72));
      v2 = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(v17 + 72) = ((unsigned __int8)*(_DWORD *)(v17 + 72) + 1) & 7;
    }
    *(_DWORD *)(v17 + 68) = v2 - 1;
  }
  v3 = *(_DWORD *)(a1 + 364);
  v20 = *a2;
  v13 = *(_DWORD *)(*(_DWORD *)(a1 + 276) + 24);
  v18 = *(_DWORD *)(a1 + 348);
  if ( v18 <= 0 )
  {
    v16 = *(_DWORD *)(a1 + 348);
    goto LABEL_19;
  }
  v4 = *(_DWORD *)(a1 + 356);
  v5 = *(_DWORD *)(a1 + 348);
  while ( 1 )
  {
    v6 = *(_WORD *)(v20 + 2 * *(_DWORD *)(v3 + 4 * v5));
    if ( v6 < 0 )
      break;
    if ( v6 >> v4 )
      goto LABEL_11;
LABEL_8:
    if ( --v5 <= 0 )
    {
      v18 = v5;
      v16 = v5;
      goto LABEL_19;
    }
  }
  if ( !(-v6 >> v4) )
    goto LABEL_8;
LABEL_11:
  v18 = v5;
  if ( v5 > 0 )
  {
    v7 = *(_DWORD *)(a1 + 352);
    while ( 1 )
    {
      if ( v6 >= 0 )
      {
        if ( v6 >> v7 )
          goto LABEL_18;
      }
      else if ( -v6 >> v7 )
      {
LABEL_18:
        v16 = v5;
        goto LABEL_19;
      }
      if ( --v5 <= 0 )
        goto LABEL_18;
      v6 = *(_WORD *)(v20 + 2 * *(_DWORD *)(v3 + 4 * v5));
    }
  }
  v16 = v5;
LABEL_19:
  v8 = *(_DWORD *)(a1 + 344);
  if ( v8 > v18 )
    goto LABEL_30;
  v15 = v13 + 32;
  v14 = (_BYTE *)(v17 + 204);
  v19 = *(_DWORD *)(a1 + 364);
  while ( 2 )
  {
    v9 = *(_DWORD *)(v17 + 4 * v15 + 12) + 3 * v8 - 3;
    if ( v16 < v8 )
      sub_6F869F7C(a1, (_BYTE *)(*(_DWORD *)(v17 + 4 * v15 + 12) + 3 * v8 - 3), 0);
    while ( 2 )
    {
      v11 = *(_WORD *)(v20 + 2 * *(_DWORD *)(v19 + 4 * v8));
      if ( v11 < 0 )
      {
        v10 = -v11 >> *(_DWORD *)(a1 + 356);
        if ( v10 )
        {
          if ( !(v10 >> 1) )
          {
            sub_6F869F7C(a1, (_BYTE *)(v9 + 1), 1);
            sub_6F869F7C(a1, v14, 1);
            goto LABEL_29;
          }
          goto LABEL_35;
        }
        goto LABEL_24;
      }
      v10 = v11 >> *(_DWORD *)(a1 + 356);
      if ( !v10 )
      {
LABEL_24:
        sub_6F869F7C(a1, (_BYTE *)(v9 + 1), 0);
        v9 += 3;
        ++v8;
        continue;
      }
      break;
    }
    if ( !(v10 >> 1) )
    {
      sub_6F869F7C(a1, (_BYTE *)(v9 + 1), 1);
      sub_6F869F7C(a1, v14, 0);
      goto LABEL_29;
    }
LABEL_35:
    sub_6F869F7C(a1, (_BYTE *)(v9 + 2), v10 & 1);
LABEL_29:
    if ( ++v8 <= v18 )
      continue;
    break;
  }
LABEL_30:
  if ( *(_DWORD *)(a1 + 348) >= v8 )
    sub_6F869F7C(a1, (_BYTE *)(*(_DWORD *)(v17 + 4 * v13 + 140) + 3 * v8 - 3), 1);
  return 1;
}
