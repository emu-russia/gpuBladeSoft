int __usercall sub_6F867AB4@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // ecx@1
  int v4; // edi@2
  int v5; // esi@2
  _WORD *v6; // edx@5
  _WORD *v7; // edx@6
  int v8; // eax@6
  int v9; // ecx@11
  int v10; // edi@13
  int v11; // ecx@13
  int v12; // esi@14
  _WORD *v13; // edx@17
  _WORD *v14; // edx@18
  int v15; // eax@18
  int v16; // ecx@23
  int v17; // edi@23
  int v18; // edi@25
  int v19; // ecx@25
  int v20; // esi@26
  int v21; // edx@28
  _WORD *v22; // eax@29
  int v23; // ecx@34
  int v24; // edi@34
  int v25; // ecx@35
  int result; // eax@35
  int v27; // edi@37
  int v28; // esi@37
  _WORD *v29; // edx@39
  int j; // esi@47
  int v31; // edx@49
  _WORD *v32; // eax@50
  int v33; // edi@58
  int v34; // esi@58
  _WORD *v35; // edx@61
  _WORD *v36; // edx@62
  int v37; // eax@62
  int i; // esi@69
  _WORD *v39; // edx@72
  _WORD *v40; // edx@73
  int v41; // eax@73
  int v42; // [sp+4h] [bp-28h]@1
  int v43; // [sp+8h] [bp-24h]@1
  int v44; // [sp+Ch] [bp-20h]@1
  int v45; // [sp+10h] [bp-1Ch]@1
  int v46; // [sp+14h] [bp-18h]@1
  int v47; // [sp+18h] [bp-14h]@1
  int v48; // [sp+1Ch] [bp-10h]@1

  v42 = a2;
  v43 = *(_DWORD *)(a1 + 24);
  v46 = *(_DWORD *)a2;
  v44 = *(_DWORD *)(a2 + 4);
  v45 = *(_DWORD *)(a2 + 8);
  v47 = *(_DWORD *)(a2 + 12);
  v48 = *(_DWORD *)(a2 + 16);
  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 >= v44 )
    goto LABEL_12;
LABEL_2:
  v4 = 2 * (v48 + 32 * v45);
  v5 = v45;
  while ( 1 )
  {
    if ( v47 < v5 )
    {
      if ( v44 < ++v3 )
        goto LABEL_57;
      goto LABEL_2;
    }
    if ( v48 <= v2 )
      break;
LABEL_10:
    ++v5;
    v4 += 64;
  }
  v6 = (_WORD *)(v4 + *(_DWORD *)(v43 + 4 * v3));
  if ( !*v6 )
  {
    v7 = v6 + 1;
    v8 = v48;
    while ( v2 >= ++v8 )
    {
      if ( *v7 )
        goto LABEL_56;
      ++v7;
    }
    goto LABEL_10;
  }
LABEL_56:
  *(_DWORD *)v42 = v3;
  v46 = v3;
  if ( v44 <= v3 )
    goto LABEL_12;
LABEL_57:
  v9 = v44;
  while ( 2 )
  {
    v33 = 2 * (v48 + 32 * v45);
    v34 = v45;
    while ( v47 >= v34 )
    {
      if ( v48 <= v2 )
      {
        v35 = (_WORD *)(v33 + *(_DWORD *)(v43 + 4 * v9));
        if ( *v35 )
        {
LABEL_78:
          *(_DWORD *)(v42 + 4) = v9;
          v44 = v9;
          goto LABEL_12;
        }
        v36 = v35 + 1;
        v37 = v48;
        while ( v2 >= ++v37 )
        {
          if ( *v36 )
            goto LABEL_78;
          ++v36;
        }
      }
      ++v34;
      v33 += 64;
    }
    if ( --v9 >= v46 )
      continue;
    break;
  }
LABEL_12:
  if ( v45 >= v47 )
    goto LABEL_24;
  v10 = 2 * (v48 + 32 * v45);
  v11 = v45;
  while ( 2 )
  {
    v12 = v46;
LABEL_15:
    if ( v12 > v44 )
    {
      ++v11;
      v10 += 64;
      if ( v47 < v11 )
        goto LABEL_68;
      continue;
    }
    break;
  }
  if ( v48 > v2 )
  {
LABEL_22:
    ++v12;
    goto LABEL_15;
  }
  v13 = (_WORD *)(v10 + *(_DWORD *)(v43 + 4 * v12));
  if ( !*v13 )
  {
    v14 = v13 + 1;
    v15 = v48;
    while ( v2 >= ++v15 )
    {
      if ( *v14 )
        goto LABEL_67;
      ++v14;
    }
    goto LABEL_22;
  }
LABEL_67:
  *(_DWORD *)(v42 + 8) = v11;
  v45 = v11;
  if ( v47 <= v11 )
    goto LABEL_24;
LABEL_68:
  v17 = 2 * (v48 + 32 * v47);
  v16 = v47;
  while ( 2 )
  {
    for ( i = v46; v44 >= i; ++i )
    {
      if ( v48 <= v2 )
      {
        v39 = (_WORD *)(v17 + *(_DWORD *)(v43 + 4 * i));
        if ( *v39 )
        {
LABEL_79:
          *(_DWORD *)(v42 + 12) = v16;
          v47 = v16;
          goto LABEL_24;
        }
        v40 = v39 + 1;
        v41 = v48;
        while ( v2 >= ++v41 )
        {
          if ( *v40 )
            goto LABEL_79;
          ++v40;
        }
      }
    }
    --v16;
    v17 -= 64;
    if ( v16 >= v45 )
      continue;
    break;
  }
LABEL_24:
  if ( v48 >= v2 )
    goto LABEL_35;
  v18 = 2 * (32 * v45 + v48);
  v19 = v48;
  while ( 2 )
  {
    v20 = v46;
LABEL_27:
    if ( v44 < v20 )
    {
      ++v19;
      v18 += 2;
      if ( v2 < v19 )
        goto LABEL_46;
      continue;
    }
    break;
  }
  v21 = v45;
  if ( v47 < v45 )
  {
LABEL_33:
    ++v20;
    goto LABEL_27;
  }
  v22 = (_WORD *)(v18 + *(_DWORD *)(v43 + 4 * v20));
  if ( !*v22 )
  {
    while ( ++v21 <= v47 )
    {
      v22 += 32;
      if ( *v22 )
        goto LABEL_45;
    }
    goto LABEL_33;
  }
LABEL_45:
  *(_DWORD *)(v42 + 16) = v19;
  v48 = v19;
  if ( v2 <= v19 )
    goto LABEL_35;
LABEL_46:
  v24 = 2 * (v2 + 32 * v45);
  v23 = v2;
  while ( 2 )
  {
    for ( j = v46; v44 >= j; ++j )
    {
      v31 = v45;
      if ( v47 >= v45 )
      {
        v32 = (_WORD *)(v24 + *(_DWORD *)(v43 + 4 * j));
        if ( *v32 )
        {
LABEL_55:
          *(_DWORD *)(v42 + 20) = v23;
          v2 = v23;
          goto LABEL_35;
        }
        while ( v47 >= ++v31 )
        {
          v32 += 32;
          if ( *v32 )
            goto LABEL_55;
        }
      }
    }
    --v23;
    v24 -= 2;
    if ( v23 >= v48 )
      continue;
    break;
  }
LABEL_35:
  *(_DWORD *)(v42 + 24) = 12 * (v47 - v45) * 12 * (v47 - v45)
                        + 16 * (v44 - v46) * 16 * (v44 - v46)
                        + 8 * (v2 - v48) * 8 * (v2 - v48);
  v25 = 0;
  for ( result = v46; v44 >= v46; ++v46 )
  {
    result = v45;
    if ( v47 >= v45 )
    {
      result = v43;
      v27 = *(_DWORD *)(v43 + 4 * v46) + 2 * (v48 + 32 * v45);
      v28 = v45;
      do
      {
        if ( v2 >= v48 )
        {
          v29 = (_WORD *)v27;
          result = v48;
          while ( 1 )
          {
            v25 -= (*v29 < 1u) - 1;
            if ( v2 < ++result )
              break;
            ++v29;
          }
        }
        ++v28;
        v27 += 64;
      }
      while ( v47 >= v28 );
    }
  }
  *(_DWORD *)(v42 + 28) = v25;
  return result;
}
