signed int __cdecl sub_6F8AF6A0(int a1, int a2, int *a3, int *a4, int a5)
{
  int v5; // ebx@3
  unsigned __int8 v6; // si@3
  int v7; // eax@4
  int v8; // edx@4
  int v9; // ebp@5
  unsigned int v10; // ebx@5
  char v11; // dl@7
  int v12; // ecx@10
  char v13; // al@12
  unsigned __int8 v14; // dl@12
  int v15; // eax@13
  char v16; // si@13
  unsigned __int8 v17; // dl@19
  int v18; // ecx@19
  bool v19; // zf@19
  int v20; // eax@19
  signed int v21; // edx@25
  signed int i; // eax@25
  int v23; // eax@28
  signed int v24; // edx@32
  unsigned int *v25; // edi@32
  int v26; // ecx@32
  char v27; // cl@33
  int v28; // eax@34
  unsigned int v29; // ebp@35
  int v30; // ebx@35
  unsigned int v31; // eax@37
  int v32; // edx@37
  signed int v33; // esi@41
  int v34; // eax@46
  unsigned int v35; // esi@50
  int v36; // ebx@50
  int v37; // edi@50
  signed int v38; // edx@50
  int j; // eax@50
  int *v40; // eax@52
  int *v41; // edx@53
  signed int v42; // ebx@58
  int v43; // eax@64
  int v44; // edx@67
  int v45; // edx@68
  int v46; // ecx@68
  int v47; // edx@69
  int v48; // edi@72
  unsigned int v49; // esi@77
  int v50; // eax@77
  int v51; // ebx@78
  int v52; // ebx@78
  signed int v53; // edi@78
  signed int v54; // esi@79
  int v55; // eax@82
  int v56; // ebx@83
  int v57; // eax@85
  int *v59; // eax@97
  int v60; // ebx@99
  int v61; // edx@100
  signed int v62; // ebx@80
  char v63; // al@105
  char *v64; // eax@107
  char *v65; // ecx@107
  char *v66; // esi@107
  char v67; // dl@109
  int v68; // edi@109
  unsigned __int8 v69; // bl@109
  signed int v70; // ebx@120
  signed int v71; // ecx@125
  signed int v72; // eax@127
  int v73; // esi@133
  int v74; // eax@133
  int v75; // edi@135
  signed int v76; // [sp+4h] [bp-48h]@128
  unsigned int v77; // [sp+14h] [bp-38h]@17
  int v78; // [sp+18h] [bp-34h]@1
  unsigned int v79; // [sp+18h] [bp-34h]@32
  signed int v80; // [sp+1Ch] [bp-30h]@17
  _BYTE *v81; // [sp+1Ch] [bp-30h]@32
  char v82; // [sp+20h] [bp-2Ch]@7
  int v83; // [sp+20h] [bp-2Ch]@21
  int *v84; // [sp+24h] [bp-28h]@27
  signed int v85; // [sp+24h] [bp-28h]@41
  _DWORD *v86; // [sp+28h] [bp-24h]@27
  int v87; // [sp+28h] [bp-24h]@66
  int v88; // [sp+2Ch] [bp-20h]@30

  v78 = *(_DWORD *)localeconv();
  if ( !byte_703735D0 )
    sub_6F8B01B0();
  *a4 = 0;
  v5 = *(_DWORD *)a1;
  v6 = *(_BYTE *)(*(_DWORD *)a1 + 2);
  if ( *(_BYTE *)(*(_DWORD *)a1 + 2) == 48 )
  {
    v7 = v5 + 3;
    v8 = -2 - v5;
    do
    {
      v9 = v8 + v7;
      v10 = v7++;
    }
    while ( *(_BYTE *)(v7 - 1) == 48 );
    v6 = *(_BYTE *)(v7 - 1);
  }
  else
  {
    v10 = v5 + 2;
    v9 = 0;
  }
  v11 = *(_BYTE *)v78;
  v82 = *(_BYTE *)v78;
  if ( byte_703735A0[v6] )
  {
    v77 = v10;
    ++v9;
    v15 = 0;
    v80 = 0;
    goto LABEL_60;
  }
  if ( !v11 || v6 != v11 )
  {
LABEL_38:
    v15 = v10;
LABEL_39:
    v77 = v10;
    v10 = v15;
    if ( v6 != 80 && v6 != 112 )
    {
      v80 = 1;
      v33 = 0;
      v83 = 0;
      v85 = 0;
      goto LABEL_42;
    }
    v43 = *(_BYTE *)(v15 + 1);
    v83 = 0;
    v80 = 1;
    if ( (_BYTE)v43 != 43 )
      goto LABEL_65;
LABEL_116:
    v85 = 0;
    goto LABEL_93;
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = *(_BYTE *)(v78 + ++v12);
    v14 = *(_BYTE *)(v10 + v12);
    if ( !v13 )
      break;
    if ( v13 != v14 )
      goto LABEL_38;
  }
  v15 = v10 + v12;
  v16 = byte_703735A0[v14];
  if ( !byte_703735A0[v14] )
  {
    v6 = *(_BYTE *)(v10 + v12);
    goto LABEL_39;
  }
  v10 += v12;
  if ( v14 == 48 )
  {
    do
      v14 = *(_BYTE *)++v10;
    while ( *(_BYTE *)v10 == 48 );
    v16 = byte_703735A0[v14];
  }
  v77 = v10;
  v9 = 1;
  v80 = v16 == 0;
  if ( v16 )
  {
    do
LABEL_60:
      ++v10;
    while ( byte_703735A0[*(_BYTE *)v10] );
    if ( *(_BYTE *)v10 != v82 )
      goto LABEL_19;
    goto LABEL_62;
  }
  if ( v14 != v82 )
  {
LABEL_19:
    v17 = *(_BYTE *)v10;
    v18 = 4 * (v15 - v10);
    v19 = v15 == 0;
    v20 = 0;
    if ( !v19 )
      v20 = v18;
    v83 = v20;
    goto LABEL_22;
  }
LABEL_62:
  if ( v15 )
  {
    v17 = *(_BYTE *)v10;
    v83 = 4 * (v15 - v10);
    if ( *(_BYTE *)v10 == 80 )
      goto LABEL_64;
    goto LABEL_23;
  }
  v63 = *(_BYTE *)(v78 + 1);
  if ( !v63 )
  {
    v68 = v10 + 1;
    v17 = *(_BYTE *)(v10 + 1);
LABEL_111:
    v10 = v68;
    if ( byte_703735A0[v17] )
    {
      do
        v17 = *(_BYTE *)++v10;
      while ( byte_703735A0[*(_BYTE *)v10] );
      v83 = 4 * (v68 - v10);
      goto LABEL_22;
    }
LABEL_166:
    v83 = 0;
    goto LABEL_22;
  }
  if ( *(_BYTE *)(v10 + 1) != v63 )
  {
    v17 = *(_BYTE *)v10;
    goto LABEL_166;
  }
  v64 = (char *)(v10 + 2);
  v65 = (char *)(v78 + 2);
  v66 = (char *)v10;
  do
  {
    v67 = *v65;
    v68 = (int)v64;
    v69 = *v64;
    if ( !*v65 )
    {
      v17 = *v64;
      goto LABEL_111;
    }
    ++v64;
    ++v65;
  }
  while ( v67 == v69 );
  v10 = (unsigned int)v66;
  v17 = *v66;
  v83 = 0;
LABEL_22:
  if ( v17 == 80 )
    goto LABEL_64;
LABEL_23:
  if ( v17 != 112 )
  {
    *(_DWORD *)a1 = v10;
    if ( !v80 )
    {
LABEL_25:
      v21 = 0;
      for ( i = v10 - v77 - 1; i > 7; ++v21 )
        i >>= 1;
      v84 = sub_6F8B0700(v21);
      v86 = v84 + 5;
      if ( *(_BYTE *)(v78 + 1) )
      {
        v23 = 0;
        do
          ++v23;
        while ( *(_BYTE *)(v78 + v23 + 1) );
        v88 = v23;
      }
      else
      {
        v88 = 0;
      }
      if ( v10 <= v77 )
      {
        v25 = (unsigned int *)(v84 + 5);
        v49 = 0;
        v30 = (int)(v84 + 6);
        v50 = 32;
      }
      else
      {
        v24 = 0;
        v81 = (_BYTE *)(v88 + v78);
        v25 = (unsigned int *)(v84 + 5);
        v26 = v10;
        v79 = 0;
        do
        {
          while ( 1 )
          {
            v29 = v26 - 1;
            v28 = *(_BYTE *)(v26 - 1);
            v30 = (int)(v25 + 1);
            if ( (_BYTE)v28 != *v81 )
              break;
            v26 = v29 - v88;
            if ( v29 - v88 <= v77 )
              goto LABEL_77;
          }
          if ( v24 == 32 )
          {
            v31 = v79;
            v32 = (int)(v25 + 2);
            v79 = 0;
            *v25 = v31;
            ++v25;
            v28 = *(_BYTE *)(v26 - 1);
            v30 = v32;
            v27 = 0;
            v24 = 4;
          }
          else
          {
            v27 = v24;
            v24 += 4;
          }
          v28 = (byte_703735A0[v28] & 0xF) << v27;
          v26 = v29;
          v79 |= v28;
        }
        while ( v29 > v77 );
LABEL_77:
        v49 = v79;
        _BitScanReverse((unsigned int *)&v28, v79);
        v50 = v28 ^ 0x1F;
      }
      *v25 = v49;
      v51 = (v30 - (signed int)v86) >> 2;
      v84[4] = v51;
      v52 = 32 * v51 - v50;
      v53 = *(_DWORD *)a2;
      if ( v52 > *(_DWORD *)a2 )
      {
        v70 = v52 - v53;
        v54 = sub_6F8B1430((int)v84, v70);
        if ( v54 )
        {
          v54 = 1;
          if ( (1 << (v70 - 1)) & v86[(v70 - 1) >> 5] )
          {
            if ( v70 == 1 || (v54 = 3, !sub_6F8B1430((int)v84, v70 - 1)) )
              v54 = 2;
          }
        }
        sub_6F8B0060((int)v84, v70);
        v83 += v70;
      }
      else
      {
        v54 = 0;
        if ( v52 < *(_DWORD *)a2 )
        {
          v62 = v53 - v52;
          v83 -= v62;
          v84 = sub_6F8B0C60((int)v84, v62);
          v86 = v84 + 5;
        }
      }
      if ( *(_DWORD *)(a2 + 8) < v83 )
      {
LABEL_117:
        sub_6F8B07F0(v84);
        goto LABEL_118;
      }
      v55 = *(_DWORD *)(a2 + 4);
      if ( v55 <= v83 )
      {
        v56 = 1;
        goto LABEL_84;
      }
      v60 = v55 - v83;
      if ( v53 > v55 - v83 )
      {
        v71 = v60 - 1;
        if ( v54 )
        {
          v54 = 1;
        }
        else if ( v60 != 1 )
        {
          v72 = sub_6F8B1430((int)v84, v60 - 1);
          v71 = v60 - 1;
          v54 = v72;
        }
        v76 = v60;
        if ( (1 << v71) & v86[v71 >> 5] )
          v54 |= 2u;
        v53 -= v60;
        v56 = 2;
        sub_6F8B0060((int)v84, v76);
        v83 = *(_DWORD *)(a2 + 4);
LABEL_84:
        if ( !v54 )
        {
LABEL_89:
          *a4 = (int)v84;
          *a3 = v83;
          return v56;
        }
        v57 = *(_DWORD *)(a2 + 12);
        if ( v57 == 2 )
        {
          a5 = 1 - a5;
        }
        else if ( v57 != 3 )
        {
          if ( v57 != 1 || !(v54 & 2) || !((*v86 | v54) & 1) )
            goto LABEL_88;
LABEL_133:
          v73 = v84[4];
          v84 = (int *)sub_6F8A79D0((int)v84);
          v74 = (int)(v84 + 5);
          if ( v56 == 2 )
          {
            v56 = 34;
            if ( *(_DWORD *)a2 - 1 == v53 )
              v56 = (((1 << v53) & *(_DWORD *)(v74 + 4 * (v53 >> 5))) == 0) + 33;
            goto LABEL_89;
          }
          if ( v84[4] <= v73
            && ((v75 = v53 & 0x1F) == 0
             || (_BitScanReverse((unsigned int *)&v74, *(_DWORD *)(v74 + 4 * v73 - 4)), 32 - v75 <= (v74 ^ 0x1F)))
            || (sub_6F8B0060((int)v84, 1), ++v83, *(_DWORD *)(a2 + 8) >= v83) )
          {
            v56 = 33;
            goto LABEL_89;
          }
          goto LABEL_117;
        }
        if ( !a5 )
        {
LABEL_88:
          v56 |= 0x10u;
          goto LABEL_89;
        }
        goto LABEL_133;
      }
      v61 = *(_DWORD *)(a2 + 12);
      if ( v61 == 2 )
      {
        if ( !a5 )
          goto LABEL_146;
      }
      else if ( v61 == 3 )
      {
        if ( a5 )
          goto LABEL_146;
      }
      else if ( v61 == 1 && v53 == v60 )
      {
        if ( v53 == 1 )
        {
LABEL_146:
          v84[4] = 1;
          *v86 = 1;
          goto LABEL_98;
        }
        if ( sub_6F8B1430((int)v84, v53 - 1) )
        {
          v55 = *(_DWORD *)(a2 + 4);
          goto LABEL_146;
        }
      }
      sub_6F8B07F0(v84);
LABEL_104:
      *errno() = 34;
      return 80;
    }
    return 0;
  }
LABEL_64:
  v43 = *(_BYTE *)(v10 + 1);
  if ( (_BYTE)v43 == 43 )
    goto LABEL_116;
LABEL_65:
  if ( (_BYTE)v43 != 45 )
  {
    v85 = 0;
    v87 = v10 + 1;
    goto LABEL_67;
  }
  v85 = 1;
LABEL_93:
  v87 = v10 + 2;
  v43 = *(_BYTE *)(v10 + 2);
LABEL_67:
  v44 = (unsigned __int8)byte_703735A0[v43];
  v33 = 0;
  v15 = v10;
  if ( (unsigned __int8)(v44 - 1) <= 0x18u )
  {
    v45 = v44 - 16;
    v15 = v87 + 1;
    v46 = *(_BYTE *)(v87 + 1);
    while ( 1 )
    {
      v48 = (unsigned __int8)byte_703735A0[v46];
      if ( (unsigned __int8)(byte_703735A0[v46] - 1) > 0x18u )
        break;
      v19 = (v45 & 0xF8000000) == 0;
      v47 = 5 * v45;
      if ( !v19 )
        v33 = 1;
      v46 = *(_BYTE *)++v15;
      v45 = v48 + 2 * v47 - 16;
    }
    if ( v85 )
      v45 = -v45;
    v83 += v45;
  }
LABEL_42:
  if ( !v9 )
    v15 = v77 - 1;
  *(_DWORD *)a1 = v15;
  if ( v80 )
    return 0;
  if ( !v33 )
    goto LABEL_25;
  v34 = *(_DWORD *)(a2 + 12);
  if ( v85 )
  {
    if ( v34 == 2 )
    {
      if ( a5 )
        goto LABEL_104;
    }
    else if ( v34 != 3 || !a5 )
    {
      goto LABEL_104;
    }
    v59 = sub_6F8B0700(0);
    v84 = v59;
    v59[4] = 1;
    v59[5] = 1;
    v55 = *(_DWORD *)(a2 + 4);
LABEL_98:
    v42 = 98;
    *a4 = (int)v84;
    *a3 = v55;
    *errno() = 34;
    return v42;
  }
  if ( v34 == 2 )
  {
    if ( !a5 )
      goto LABEL_118;
    goto LABEL_50;
  }
  if ( v34 == 3 )
  {
    if ( a5 )
      goto LABEL_118;
    goto LABEL_50;
  }
  if ( v34 != 1 )
  {
LABEL_50:
    v35 = *(_DWORD *)a2 & 0x1F;
    v36 = *(_DWORD *)a2 >> 5;
    v37 = v36 - ((v35 < 1) - 1);
    v38 = 0;
    for ( j = (v36 - ((v35 < 1) - 1)) >> 1; j; j >>= 1 )
      ++v38;
    v40 = sub_6F8B0700(v38);
    *a4 = (int)v40;
    v40[4] = v37;
    if ( v36 > 0 )
    {
      v41 = v40 + 5;
      do
      {
        *v41 = -1;
        ++v41;
      }
      while ( &v40[v36 + 5] != v41 );
      v85 = v36;
    }
    if ( v37 > v36 )
      v40[v85 + 5] = 32 >> (32 - v35);
    v42 = 17;
    *a3 = *(_DWORD *)(a2 + 4);
    return v42;
  }
LABEL_118:
  *errno() = 34;
  return 163;
}
