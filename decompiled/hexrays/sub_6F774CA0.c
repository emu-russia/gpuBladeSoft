signed int __usercall sub_6F774CA0@<eax>(int a1@<eax>, int a2@<edx>, _BYTE *a3@<ecx>, int a4)
{
  int v4; // esi@1
  _BYTE *v5; // ebx@1
  unsigned int v6; // edi@1
  signed int v7; // ebp@3
  unsigned __int8 v8; // al@4
  unsigned __int8 v9; // cl@6
  unsigned int v11; // ebp@8
  unsigned int v12; // edx@18
  _BYTE *v13; // ebp@20
  int v14; // ecx@20
  int v15; // ecx@22
  unsigned __int8 v16; // al@23
  char *v17; // eax@25
  int v18; // ecx@25
  char *v19; // edx@26
  unsigned __int8 v20; // al@29
  int v21; // edx@30
  int v22; // edx@32
  unsigned __int8 v23; // al@33
  signed int v24; // ebx@36
  unsigned int v25; // eax@36
  char *v26; // eax@38
  int v27; // ecx@40
  unsigned int v28; // edx@43
  signed int v29; // eax@45
  unsigned int v30; // edi@58
  signed int v31; // eax@60
  int v32; // edx@61
  char *v33; // eax@67
  signed int v34; // [sp+28h] [bp-54h]@10
  unsigned int v35; // [sp+28h] [bp-54h]@46
  unsigned int v36; // [sp+2Ch] [bp-50h]@17
  int v37; // [sp+3Ch] [bp-40h]@42
  int v38[15]; // [sp+40h] [bp-3Ch]@9

  v4 = a1;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( v6 )
  {
    **(_DWORD **)a1 = &unk_6FB55C20;
    *(_DWORD *)(*(_DWORD *)a1 + 4) = &unk_6FB55C20;
    *(_DWORD *)(*(_DWORD *)a1 + 8) = &unk_6FB55C20;
    *(_DWORD *)(*(_DWORD *)a1 + 12) = &unk_6FB55C20;
    *(_DWORD *)(*(_DWORD *)a1 + 16) = &unk_6FB55C20;
  }
  v7 = 0;
  if ( !a4 )
    return v7;
  v8 = *a3;
  if ( !*a3 )
    return v7;
  v7 = 6;
  if ( !a2 )
    return v7;
  v9 = *(_BYTE *)a2;
  if ( !*(_BYTE *)a2 )
    return v7;
  v11 = 0;
  do
  {
    v38[v11] = 0;
    ++v11;
  }
  while ( v11 < 8 );
  v34 = 0;
  do
  {
    if ( v9 != 43 || *(_BYTE *)(a2 + 1) )
      *((_BYTE *)v38 + (v9 >> 3)) |= 1 << (v9 & 7);
    else
      v34 = 1;
    if ( !++a2 )
    {
      v36 = (unsigned int)&v5[a4];
      if ( v5 >= &v5[a4] )
      {
        if ( !v6 )
        {
          v37 = 0;
          v24 = 0;
          v28 = 5;
          goto LABEL_44;
        }
        v26 = *(char **)v4;
        v27 = 0;
LABEL_41:
        *(_DWORD *)&v26[v27] = 0;
        return 0;
      }
      goto LABEL_18;
    }
    v9 = *(_BYTE *)a2;
  }
  while ( *(_BYTE *)a2 );
  v36 = (unsigned int)&v5[a4];
  if ( v5 < &v5[a4] )
  {
LABEL_18:
    v12 = 0;
    while ( v8 )
    {
      v13 = v5;
      v14 = *((_BYTE *)v38 + (v8 >> 3));
      if ( _bittest(&v14, v8 & 7) )
        break;
      do
      {
        v16 = *++v13;
        if ( !*v13 )
          break;
        v15 = *((_BYTE *)v38 + (v16 >> 3));
      }
      while ( !_bittest(&v15, v16 & 7) );
      if ( v6 == v12 )
        goto LABEL_57;
      v17 = *(char **)v4;
      v18 = v12 + 1;
LABEL_26:
      v19 = &v17[4 * v12];
      *(_DWORD *)(v4 + 8) = v18;
      if ( v5 >= v13 )
        v5 = &unk_6FB55C20;
LABEL_28:
      *(_DWORD *)v19 = v5;
      if ( v34 )
      {
        v20 = *v13;
        if ( !*v13 )
          goto LABEL_51;
        v21 = *((_BYTE *)v38 + (v20 >> 3));
        if ( !_bittest(&v21, v20 & 7) )
        {
          v12 = v18;
          v5 = v13;
LABEL_64:
          if ( v36 <= (unsigned int)v5 )
            goto LABEL_78;
          v8 = *v5;
          goto LABEL_54;
        }
        v5 = v13;
        while ( 1 )
        {
          *v5++ = 0;
          v23 = *v5;
          if ( !*v5 )
            break;
          v22 = *((_BYTE *)v38 + (v23 >> 3));
          if ( !_bittest(&v22, v23 & 7) )
            goto LABEL_52;
        }
      }
      else
      {
        if ( !*v13 )
          goto LABEL_51;
        v5 = v13 + 1;
        *v13 = 0;
      }
      if ( v5 > v13 )
      {
        if ( !*v5 )
        {
          v18 = *(_DWORD *)(v4 + 8);
          v6 = *(_DWORD *)(v4 + 4);
          v24 = 1;
          v25 = v18 + 1;
          goto LABEL_37;
        }
        v12 = *(_DWORD *)(v4 + 8);
        goto LABEL_64;
      }
LABEL_52:
      v12 = *(_DWORD *)(v4 + 8);
      if ( (unsigned int)v5 >= v36 || (v8 = *v5) == 0 )
      {
LABEL_78:
        v18 = v12;
LABEL_51:
        v6 = *(_DWORD *)(v4 + 4);
        v25 = v18;
        v24 = 0;
        goto LABEL_37;
      }
LABEL_54:
      v6 = *(_DWORD *)(v4 + 4);
    }
    if ( v6 != v12 )
    {
      v33 = *(char **)v4;
      v18 = v12 + 1;
      v13 = v5;
      v5 = &unk_6FB55C20;
      *(_DWORD *)(v4 + 8) = v12 + 1;
      v19 = &v33[4 * v12];
      goto LABEL_28;
    }
    v13 = v5;
LABEL_57:
    v18 = v12 + 1;
    v37 = 0;
    if ( v12 + 1 <= v12 )
    {
      v17 = *(char **)v4;
    }
    else
    {
      v30 = v12 + (v12 >> 1) + 5;
      if ( v12 == 0x1FFFFFFF )
        return 64;
      if ( v30 < v12 || (v31 = v12 + (v12 >> 1) + 5, v30 > 0x1FFFFFFF) )
      {
        v31 = 0x1FFFFFFF;
        v30 = 0x1FFFFFFF;
      }
      v17 = sub_6F773B30(*(_DWORD *)(v4 + 12), 4, v12, v31, *(char **)v4, &v37);
      v32 = v37;
      *(_DWORD *)v4 = v17;
      if ( v32 )
        return v32;
      v12 = *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 4) = v30;
      v18 = v12 + 1;
    }
    goto LABEL_26;
  }
  v25 = 0;
  v18 = 0;
  v24 = 0;
LABEL_37:
  if ( v25 < v6 || (v37 = 0, v25 + 1 <= v6) )
  {
    v26 = *(char **)v4;
LABEL_39:
    if ( v24 )
    {
      *(_DWORD *)(v4 + 8) = v18 + 1;
      *(_DWORD *)&v26[4 * v18] = &unk_6FB55C20;
      v27 = 4 * v18 + 4;
      v26 = *(char **)v4;
    }
    else
    {
      v27 = 4 * v18;
    }
    goto LABEL_41;
  }
  v7 = 64;
  v28 = v6 + (v6 >> 1) + 5;
  if ( v6 != 0x1FFFFFFF )
  {
LABEL_44:
    if ( v6 > v28 || (v29 = v28, v28 > 0x1FFFFFFF) )
    {
      v29 = 0x1FFFFFFF;
      v28 = 0x1FFFFFFF;
    }
    v35 = v28;
    v26 = sub_6F773B30(*(_DWORD *)(v4 + 12), 4, v6, v29, *(char **)v4, &v37);
    v7 = v37;
    *(_DWORD *)v4 = v26;
    if ( !v7 )
    {
      v18 = *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v4 + 4) = v35;
      goto LABEL_39;
    }
  }
  return v7;
}
