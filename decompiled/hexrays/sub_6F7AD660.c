int __cdecl sub_6F7AD660(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx@1
  _DWORD *v4; // esi@1
  int v5; // edi@1
  int v6; // eax@1
  unsigned int v7; // ecx@2
  int v8; // eax@6
  _DWORD *v9; // edx@10
  unsigned int v10; // eax@12
  int v11; // eax@21
  int v12; // edx@22
  int result; // eax@22
  char *v14; // eax@30
  char *v15; // edx@30
  int v16; // eax@31
  bool v17; // zf@37
  int v18; // eax@40
  int v19; // edx@42
  unsigned int v20; // esi@42
  int v21; // ST3C_4@43
  _DWORD *v22; // ebx@43
  unsigned __int32 v23; // eax@43
  bool v24; // cf@43
  int v25; // edx@44
  int v26; // edx@49
  int v27; // ST3C_4@50
  _DWORD *v28; // ebx@50
  unsigned __int16 v29; // ax@50
  unsigned int v30; // edx@55
  int v31; // eax@56
  unsigned int v32; // ecx@56
  unsigned int v33; // ebx@57
  unsigned int v34; // ST38_4@58
  int v35; // eax@58
  _DWORD *v36; // ST34_4@58
  __int16 v37; // ax@58
  int v38; // [sp+24h] [bp-58h]@1
  unsigned int *v39; // [sp+28h] [bp-54h]@2
  signed int v40; // [sp+28h] [bp-54h]@16
  int v41; // [sp+2Ch] [bp-50h]@35
  int v42; // [sp+30h] [bp-4Ch]@35
  unsigned int v43; // [sp+30h] [bp-4Ch]@56
  int v44; // [sp+34h] [bp-48h]@36
  int v45; // [sp+38h] [bp-44h]@37
  int v46; // [sp+38h] [bp-44h]@40
  int v47; // [sp+3Ch] [bp-40h]@39
  int v48; // [sp+40h] [bp-3Ch]@1
  int v49; // [sp+44h] [bp-38h]@35
  char v50; // [sp+48h] [bp-34h]@35
  int v51; // [sp+4Ch] [bp-30h]@36
  unsigned __int16 v52; // [sp+50h] [bp-2Ch]@38
  unsigned __int16 v53; // [sp+52h] [bp-2Ah]@37
  int v54; // [sp+54h] [bp-28h]@53
  unsigned __int16 v55; // [sp+58h] [bp-24h]@37
  char v56; // [sp+5Ah] [bp-22h]@40
  int v57; // [sp+5Ch] [bp-20h]@39

  v3 = a2;
  v4 = a3;
  v48 = 0;
  v5 = *(_DWORD *)(a1 + 676);
  v6 = *(_DWORD *)(a1 + 100);
  *(_BYTE *)(a1 + 672) = 0;
  v38 = v6;
  if ( !v5 )
  {
    result = sub_6F7AD180(a1, 0);
    v48 = result;
    if ( result )
      return result;
    v5 = *(_DWORD *)(a1 + 676);
  }
  v7 = **(_DWORD **)(v5 + 8);
  v39 = *(unsigned int **)(v5 + 8);
  if ( v7 <= a2 )
    v3 = **(_DWORD **)(v5 + 8);
  if ( v3 )
  {
    if ( (unsigned int)(*a3 + 0x10000) > 0x20000 )
      return 6;
    v8 = 0;
    while ( ++v8 != v3 )
    {
      if ( (unsigned int)(a3[v8] + 0x10000) > 0x20000 )
        return 6;
    }
  }
  if ( !*(_DWORD *)(v5 + 36) )
  {
    v41 = *(_DWORD *)(a1 + 104);
    v42 = *(_DWORD *)(*(_DWORD *)(a1 + 104) + 28);
    result = (*(int (__cdecl **)(int, signed int, _DWORD, char *))(a1 + 508))(
               a1,
               1735811442,
               *(_DWORD *)(a1 + 104),
               &v50);
    v49 = result;
    if ( result )
      return result;
    v44 = sub_6F7720A0(v41);
    result = sub_6F7728E0(v41, (int)&unk_6FB69420, (int)&v51);
    v49 = result;
    if ( result )
      return result;
    v17 = v51 == 0x10000;
    *(_DWORD *)(v5 + 24) = v53;
    v45 = v55;
    *(_DWORD *)(v5 + 32) = v55;
    result = 8;
    if ( !v17 )
      return result;
    if ( **(_WORD **)(v5 + 8) != v52 )
      return result;
    v47 = v57;
    *(_DWORD *)(v5 + 36) = sub_6F773B30(v42, 4, 0, v45 + 1, 0, &v49);
    result = v49;
    if ( v49 )
      return result;
    v46 = v44 + v47;
    v18 = *(_DWORD *)(v5 + 32);
    if ( v56 & 1 )
    {
      result = sub_6F772380(v41, 4 * v18 + 4);
      v49 = result;
      if ( result )
        return result;
      v19 = 0;
      v20 = v3;
      do
      {
        v21 = v19;
        v22 = (_DWORD *)(*(_DWORD *)(v5 + 36) + 4 * v19);
        v23 = sub_6F772560(v41);
        v19 = v21 + 1;
        v24 = (unsigned int)(v21 + 1) < *(_DWORD *)(v5 + 32);
        v17 = v21 + 1 == *(_DWORD *)(v5 + 32);
        *v22 = v46 + v23;
      }
      while ( v24 || v17 );
    }
    else
    {
      result = sub_6F772380(v41, 2 * v18 + 2);
      v49 = result;
      if ( result )
        return result;
      v26 = 0;
      v20 = v3;
      do
      {
        v27 = v26;
        v28 = (_DWORD *)(*(_DWORD *)(v5 + 36) + 4 * v26);
        v29 = sub_6F7724C0(v41);
        v26 = v27 + 1;
        v24 = (unsigned int)(v27 + 1) < *(_DWORD *)(v5 + 32);
        v17 = v27 + 1 == *(_DWORD *)(v5 + 32);
        *v28 = v46 + 2 * v29;
      }
      while ( v24 || v17 );
    }
    v3 = v20;
    v4 = a3;
    sub_6F772460(v41);
    v25 = *(_DWORD *)(v5 + 24);
    if ( v25 )
    {
      *(_DWORD *)(v5 + 28) = sub_6F773B30(v42, 4, 0, v25 * v52, 0, &v49);
      result = v49;
      if ( v49 )
        return result;
      result = sub_6F771FF0(v41, v54 + v44);
      v49 = result;
      if ( result )
        return result;
      result = sub_6F772380(v41, 2 * *(_DWORD *)(v5 + 24) * v52);
      v49 = result;
      if ( result )
        return result;
      v30 = *(_DWORD *)(v5 + 24);
      if ( v30 )
      {
        v31 = v52;
        v32 = 0;
        v43 = v3;
        do
        {
          v33 = 0;
          if ( v31 )
          {
            do
            {
              v34 = v32;
              v35 = v33++ + v32 * v31;
              v36 = (_DWORD *)(*(_DWORD *)(v5 + 28) + 4 * v35);
              v37 = sub_6F7724C0(v41);
              v32 = v34;
              *v36 = 4 * v37;
              v31 = v52;
            }
            while ( v52 > v33 );
            v30 = *(_DWORD *)(v5 + 24);
          }
          ++v32;
        }
        while ( v32 < v30 );
        v3 = v43;
      }
      sub_6F772460(v41);
    }
    result = v49;
    v48 = v49;
    if ( v49 )
      return result;
    v7 = *v39;
  }
  v9 = *(_DWORD **)(v5 + 4);
  if ( v9 )
  {
    if ( v3 )
    {
      v10 = 0;
      if ( *v9 == *v4 )
      {
        while ( ++v10 != v3 )
        {
          if ( v9[v10] != v4[v10] )
            goto LABEL_29;
        }
        v40 = 0;
      }
      else
      {
LABEL_29:
        v40 = 2;
      }
    }
    else
    {
      v10 = 0;
      v40 = 0;
    }
    if ( v10 < v7 )
    {
      while ( !v9[v10] )
      {
        if ( ++v10 == v7 )
          goto LABEL_23;
      }
      *(_DWORD *)v5 = v7;
      memcpy(v9, v4, 4 * v3);
      v11 = *(_DWORD *)(a1 + 648);
      *(_BYTE *)(a1 + 672) = 1;
      if ( !v11 )
        return v48;
      goto LABEL_22;
    }
LABEL_23:
    *(_DWORD *)v5 = v7;
    memcpy(v9, v4, 4 * v3);
    v11 = *(_DWORD *)(a1 + 648);
    *(_BYTE *)(a1 + 672) = 1;
    if ( !v11 )
      return v48;
    if ( v40 != 1 )
    {
      if ( v40 != 2 )
        return v48;
LABEL_22:
      sub_6F773D90(v38, v11);
      v12 = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(a1 + 648) = 0;
      return sub_6F7ABF60(a1, v12);
    }
    return sub_6F7ABAD0(a1, *(_DWORD *)(a1 + 104));
  }
  v14 = sub_6F773B30(v38, 4, 0, v7, 0, &v48);
  v15 = v14;
  *(_DWORD *)(v5 + 4) = v14;
  result = v48;
  if ( !v48 )
  {
    *(_DWORD *)v5 = *v39;
    memcpy(v15, v4, 4 * v3);
    v16 = *(_DWORD *)(a1 + 648);
    *(_BYTE *)(a1 + 672) = 1;
    if ( !v16 )
      return v48;
    return sub_6F7ABAD0(a1, *(_DWORD *)(a1 + 104));
  }
  return result;
}
