int __cdecl sub_6F7C2C60(int a1, int a2, signed int a3)
{
  int v3; // edi@1
  int v4; // ebp@1
  int v5; // eax@2
  unsigned int *v6; // ebx@5
  unsigned int v7; // esi@5
  signed int v8; // eax@11
  unsigned int v10; // eax@17
  int v11; // edx@17
  _BYTE *v12; // ebx@17
  unsigned int i; // esi@17
  int v14; // eax@26
  unsigned int v15; // esi@27
  int v16; // ebp@28
  unsigned int v17; // eax@30
  char v18; // al@34
  int v19; // edx@35
  unsigned int v20; // ebx@35
  int v21; // eax@37
  unsigned int v22; // ecx@38
  int v23; // eax@39
  unsigned int v24; // edi@48
  int v25; // ebx@49
  int v26; // ecx@50
  int v27; // ebp@50
  int v28; // eax@51
  int v29; // edx@51
  int v30; // edx@62
  int v31; // ebp@62
  int v32; // eax@63
  int v33; // ecx@63
  int v34; // eax@73
  unsigned int v35; // eax@76
  int v36; // ecx@78
  unsigned int v37; // ebp@82
  unsigned int v38; // eax@84
  int v39; // ecx@91
  int v40; // ecx@91
  int v41; // ecx@95
  int v42; // eax@95
  int v43; // ebp@99
  char v44; // al@99
  unsigned int v45; // ebx@99
  unsigned int v46; // ebp@105
  unsigned int v47; // eax@112
  unsigned int v48; // edx@121
  int v49; // eax@130
  int v50; // ecx@134
  int v51; // ebx@136
  unsigned int v52; // [sp+10h] [bp-9Ch]@26
  int v53; // [sp+14h] [bp-98h]@27
  unsigned int v54; // [sp+14h] [bp-98h]@44
  int v55; // [sp+14h] [bp-98h]@72
  int v56; // [sp+14h] [bp-98h]@82
  unsigned int v57; // [sp+18h] [bp-94h]@26
  int v58; // [sp+18h] [bp-94h]@45
  unsigned int v59; // [sp+1Ch] [bp-90h]@27
  int v60; // [sp+1Ch] [bp-90h]@48
  char v61; // [sp+1Ch] [bp-90h]@77
  int v62; // [sp+1Ch] [bp-90h]@90
  unsigned int *v63; // [sp+20h] [bp-8Ch]@48
  unsigned int *v64; // [sp+20h] [bp-8Ch]@82
  int v65; // [sp+20h] [bp-8Ch]@90
  int v66; // [sp+20h] [bp-8Ch]@95
  char v67; // [sp+20h] [bp-8Ch]@99
  int v68; // [sp+24h] [bp-88h]@27
  int v69; // [sp+24h] [bp-88h]@93
  int v70; // [sp+24h] [bp-88h]@99
  signed int v71; // [sp+28h] [bp-84h]@26
  int v72; // [sp+28h] [bp-84h]@90
  unsigned int *v73; // [sp+2Ch] [bp-80h]@27
  int v74; // [sp+2Ch] [bp-80h]@73
  char v75; // [sp+2Ch] [bp-80h]@104
  int v76; // [sp+30h] [bp-7Ch]@99
  char v77; // [sp+37h] [bp-75h]@99
  int v78; // [sp+38h] [bp-74h]@99
  unsigned int *v79; // [sp+3Ch] [bp-70h]@99
  int v80; // [sp+4Ch] [bp-60h]@41
  int v81; // [sp+50h] [bp-5Ch]@41
  char v82; // [sp+54h] [bp-58h]@41
  int v83; // [sp+B0h] [bp+4h]@48

  v3 = a1;
  v4 = sub_6F7C0F60(a1, a2);
  if ( v4 )
    return v4;
  v5 = *(_DWORD *)(a1 + 2980);
  if ( *(_DWORD *)(a3 + 24) == 1 && !(v5 & 8) || !(v5 & 1) )
  {
    v8 = sub_6F7C2490(a1, 0);
    if ( v8 )
      return v8;
    sub_6F7C0D20(a1, a3, 0);
    v5 = *(_DWORD *)(a1 + 2980);
  }
  if ( v5 & 2 )
    goto LABEL_5;
  v8 = sub_6F7C2490(a1, 1);
  if ( v8 )
    return v8;
  sub_6F7C0D20(a1, a3, 1);
  v5 = *(_DWORD *)(a1 + 2980);
LABEL_5:
  v6 = (unsigned int *)(a1 + 64);
  v7 = 0;
  while ( !v7 )
  {
    if ( !(v5 & 1) )
    {
      if ( *(_DWORD *)(a3 + 24) != 1 || v5 & 8 )
        goto LABEL_26;
      sub_6F96983A((int)&v82, v3, 0, &v80, &v81);
      sub_6F969D18(*(_DWORD *)(v3 + 24), *(_DWORD *)(v3 + 28), 0, v80, v81);
      v5 = *(_DWORD *)(v3 + 2980);
    }
LABEL_10:
    ++v7;
    v6 += 367;
  }
  if ( v5 & 2 )
    goto LABEL_8;
LABEL_26:
  v52 = *v6;
  v14 = *(v6 - 2);
  v71 = 48 * v14;
  v57 = 48 * v14 + *v6;
  if ( *v6 >= v57 )
  {
    if ( v7 )
      goto LABEL_44;
    v55 = 0;
LABEL_73:
    v34 = -1431655765 * (v71 >> 4);
    v74 = -1431655765 * (v71 >> 4);
    if ( v34 == 6 || v34 == 12 )
    {
      if ( v74 == 6 )
      {
        v72 = v52;
        v65 = v52 + 96;
        v62 = v52 + 192;
      }
      else
      {
        v72 = v52 + 48;
        v62 = v52 + 432;
        v65 = v52 + 240;
      }
      v39 = (*(_DWORD *)(v65 + 4) + *(_DWORD *)(v65 + 4) - *(_DWORD *)(v72 + 4) - *(_DWORD *)(v62 + 4)) >> 31;
      v40 = (v39 ^ (*(_DWORD *)(v65 + 4) + *(_DWORD *)(v65 + 4) - *(_DWORD *)(v72 + 4) - *(_DWORD *)(v62 + 4))) - v39;
      if ( *(_DWORD *)(v72 + 24) == v72 + 48 && *(_DWORD *)(v65 + 24) == v65 + 48 )
      {
        v69 = *(_DWORD *)(v62 + 24);
        if ( v69 == v62 + 48 && v40 <= 7 )
        {
          v41 = *(_DWORD *)(v72 + 8) + -2 * *(_DWORD *)(v65 + 8);
          v42 = v41 + *(_DWORD *)(v62 + 8);
          v66 = v41 + *(_DWORD *)(v62 + 8);
          *(_DWORD *)(v62 + 8) = -v41;
          if ( v69 )
          {
            *(_DWORD *)(v69 + 8) -= v42;
            if ( v74 != 12 )
            {
              *(_BYTE *)(v62 + 12) |= 4u;
LABEL_98:
              *(_BYTE *)(v69 + 12) |= 4u;
              goto LABEL_75;
            }
          }
          else if ( v74 != 12 )
          {
            *(_BYTE *)(v62 + 12) |= 4u;
            goto LABEL_75;
          }
          v47 = v52;
          *(_DWORD *)(v47 + 392) -= v66;
          *(_DWORD *)(v47 + 536) -= v66;
          *(_BYTE *)(v62 + 12) |= 4u;
          if ( v69 )
            goto LABEL_98;
        }
      }
    }
LABEL_75:
    if ( !v55 )
    {
      v52 = *v6;
      v54 = *v6 + 48 * *(v6 - 2);
LABEL_88:
      v58 = *(_DWORD *)(v3 + 2984) & 1;
      goto LABEL_47;
    }
LABEL_76:
    v35 = v52;
    if ( v52 < v57 )
    {
      do
      {
        v61 = *(_BYTE *)(v35 + 12);
        if ( !(v61 & 4) )
        {
          v36 = *(_DWORD *)(v35 + 28);
          if ( v36 )
          {
            --v55;
            *(_DWORD *)(v35 + 8) = *(_DWORD *)(v36 + 8) + *(_DWORD *)(v35 + 4) - *(_DWORD *)(v36 + 4);
            *(_BYTE *)(v35 + 12) = v61 | 4;
          }
        }
        v35 += 48;
      }
      while ( v57 > v35 );
      if ( v55 )
      {
        v56 = v4;
        v64 = v6;
        v37 = v52;
        do
        {
          v38 = v37;
          if ( !(*(_BYTE *)(v37 + 12) & 4) )
          {
            do
              v38 -= 48;
            while ( v52 <= v38 && !(*(_BYTE *)(v38 + 12) & 4) );
            v48 = v37;
            while ( 1 )
            {
              v48 += 48;
              if ( v57 <= v48 )
                break;
              if ( *(_BYTE *)(v48 + 12) & 4 )
              {
                if ( v52 <= v38 )
                {
                  v50 = *(_WORD *)v38;
                  if ( *(_WORD *)v48 == (_WORD)v50 )
                  {
                    *(_DWORD *)(v37 + 8) = *(_DWORD *)(v38 + 8);
                  }
                  else
                  {
                    v51 = *(_DWORD *)(v38 + 8);
                    *(_DWORD *)(v37 + 8) = v51
                                         + sub_6F7C9420(
                                             *(_WORD *)v37 - v50,
                                             *(_DWORD *)(v48 + 8) - v51,
                                             *(_WORD *)v48 - v50);
                  }
                }
                else
                {
                  *(_DWORD *)(v37 + 8) = *(_DWORD *)(v48 + 8) + *(_DWORD *)(v37 + 4) - *(_DWORD *)(v48 + 4);
                }
                goto LABEL_83;
              }
            }
            if ( v52 <= v38 )
              *(_DWORD *)(v37 + 8) = *(_DWORD *)(v38 + 8) + *(_DWORD *)(v37 + 4) - *(_DWORD *)(v38 + 4);
          }
LABEL_83:
          v37 += 48;
        }
        while ( v57 > v37 );
        v4 = v56;
        v6 = v64;
      }
    }
    v52 = *v6;
    v54 = *v6 + 48 * *(v6 - 2);
    if ( v7 )
      goto LABEL_45;
    goto LABEL_88;
  }
  v53 = v7;
  v59 = 0;
  v15 = *v6;
  v68 = v4;
  v73 = v6;
  do
  {
    v18 = *(_BYTE *)(v15 + 12);
    if ( v18 & 4 )
      goto LABEL_33;
    v19 = *(_DWORD *)(v15 + 20);
    v20 = *(_DWORD *)(v15 + 24);
    if ( v19 )
    {
      v16 = *(_DWORD *)(v19 + 8);
      *(_BYTE *)(v15 + 12) = v18 | 4;
      *(_DWORD *)(v15 + 8) = v16;
      if ( !v20 || *(_DWORD *)(v20 + 20) )
        goto LABEL_30;
      v22 = v15;
    }
    else
    {
      if ( !v20 )
        goto LABEL_33;
      v21 = *(_DWORD *)(v20 + 20);
      if ( !v21 )
        goto LABEL_33;
      v16 = *(_DWORD *)(v21 + 8);
      v22 = *(_DWORD *)(v15 + 24);
      *(_BYTE *)(v20 + 12) |= 4u;
      *(_DWORD *)(v20 + 8) = v16;
      v20 = v15;
    }
    v23 = sub_6F969F5E(*(_DWORD *)(v3 + 2984), *(_DWORD *)(v3 + 2988), v53, *(_DWORD *)(v20 + 4) - *(_DWORD *)(v22 + 4));
    *(_BYTE *)(v20 + 12) |= 4u;
    *(_DWORD *)(v20 + 8) = v23 + v16;
LABEL_30:
    v17 = v59;
    if ( !v59 )
      v17 = v15;
    v59 = v17;
LABEL_33:
    v15 += 48;
  }
  while ( v57 > v15 );
  v7 = v53;
  v43 = v68;
  v76 = 0;
  v70 = 0;
  v67 = 0;
  v44 = v53 ^ 1;
  v79 = v73;
  v55 = 0;
  v78 = v43;
  v45 = v52;
  v77 = v44 & 1;
  do
  {
    v75 = *(_BYTE *)(v45 + 12);
    if ( !(*(_BYTE *)(v45 + 12) & 4) )
    {
      v46 = *(_DWORD *)(v45 + 24);
      if ( v46 && (!v67 || v70 + 63 < *(_DWORD *)(v45 + 8) && v70 + 63 < *(_DWORD *)(v46 + 8)) )
      {
        if ( *(_DWORD *)(v46 + 20) )
        {
          *(_DWORD *)(v45 + 8) = *(_DWORD *)(v46 + 8)
                               + sub_6F969F5E(
                                   *(_DWORD *)(v3 + 2984),
                                   *(_DWORD *)(v3 + 2988),
                                   v7,
                                   *(_DWORD *)(v45 + 4) - *(_DWORD *)(v46 + 4));
          *(_BYTE *)(v45 + 12) = v75 | 4;
        }
        else if ( v46 >= v45 )
        {
          if ( !v77 || v59 )
            sub_6F96A06D(v3, v45, v46, v76, v7);
          else
            v76 = sub_6F96A06D(v3, v45, v46, 0, 0);
          *(_BYTE *)(v45 + 12) |= 4u;
          v59 = v45;
          v49 = *(_DWORD *)(v46 + 8);
          *(_BYTE *)(v46 + 12) |= 4u;
          v67 = 1;
          v70 = v49;
        }
        else
        {
          v67 = 1;
          v70 = *(_DWORD *)(v46 + 8)
              + sub_6F969F5E(
                  *(_DWORD *)(v3 + 2984),
                  *(_DWORD *)(v3 + 2988),
                  v7,
                  *(_DWORD *)(v45 + 4) - *(_DWORD *)(v46 + 4));
          *(_DWORD *)(v45 + 8) = v70;
          *(_BYTE *)(v45 + 12) = v75 | 4;
        }
      }
      else
      {
        ++v55;
      }
    }
    v45 += 48;
  }
  while ( v57 > v45 );
  v4 = v78;
  v6 = v79;
  if ( !v7 )
    goto LABEL_73;
  if ( v55 )
    goto LABEL_76;
  v52 = *v79;
  v14 = *(v79 - 2);
LABEL_44:
  v54 = v52 + 48 * v14;
LABEL_45:
  v58 = 0;
  if ( v7 == 1 )
    v58 = (*(_DWORD *)(v3 + 2984) >> 1) & 1;
LABEL_47:
  if ( v52 < v54 )
  {
    v83 = v3;
    v24 = v52;
    v60 = v4;
    v63 = v6;
    do
    {
      v25 = *(_DWORD *)(v24 + 40);
      if ( v58 )
      {
        v26 = *(_DWORD *)(v24 + 8);
        v27 = *(_DWORD *)(v24 + 40);
        do
        {
          v28 = *(_DWORD *)(v27 + 40);
          v29 = *(_DWORD *)(v27 + 44);
          if ( v7 )
          {
            while ( 1 )
            {
              *(_WORD *)v28 |= 8u;
              *(_DWORD *)(v28 + 20) = v26;
              if ( v28 == v29 )
                break;
              v28 = *(_DWORD *)(v28 + 32);
            }
          }
          else
          {
            while ( 1 )
            {
              *(_WORD *)v28 |= 4u;
              *(_DWORD *)(v28 + 16) = v26;
              if ( v28 == v29 )
                break;
              v28 = *(_DWORD *)(v28 + 32);
            }
          }
          v27 = *(_DWORD *)(v27 + 16);
        }
        while ( v25 != v27 );
      }
      else
      {
        v30 = *(_DWORD *)(v24 + 8) - *(_DWORD *)(v24 + 4);
        v31 = *(_DWORD *)(v24 + 40);
        do
        {
          v32 = *(_DWORD *)(v31 + 40);
          v33 = *(_DWORD *)(v31 + 44);
          if ( v7 )
          {
            while ( 1 )
            {
              *(_DWORD *)(v32 + 20) += v30;
              *(_WORD *)v32 |= 8u;
              if ( v33 == v32 )
                break;
              v32 = *(_DWORD *)(v32 + 32);
            }
          }
          else
          {
            while ( 1 )
            {
              *(_DWORD *)(v32 + 16) += v30;
              *(_WORD *)v32 |= 4u;
              if ( v32 == v33 )
                break;
              v32 = *(_DWORD *)(v32 + 32);
            }
          }
          v31 = *(_DWORD *)(v31 + 16);
        }
        while ( v25 != v31 );
      }
      v24 += 48;
    }
    while ( v24 < v54 );
    v4 = v60;
    v6 = v63;
    v3 = v83;
  }
  sub_6F969B7B(v3, v7);
  sub_6F96A2EF(v3, v7);
LABEL_8:
  if ( v7 != 1 )
  {
    v5 = *(_DWORD *)(v3 + 2980);
    goto LABEL_10;
  }
  v10 = *(_DWORD *)(v3 + 28);
  v11 = *(_DWORD *)(a2 + 4);
  v12 = *(_BYTE **)(a2 + 8);
  for ( i = v10 + 40 * *(_DWORD *)(v3 + 24); i > v10; ++v12 )
  {
    *(_DWORD *)v11 = *(_DWORD *)(v10 + 16);
    *(_DWORD *)(v11 + 4) = *(_DWORD *)(v10 + 20);
    if ( *(_WORD *)v10 & 1 )
      *v12 = 0;
    else
      *v12 = 2 - ((*(_WORD *)v10 & 2u) < 1);
    v10 += 40;
    v11 += 8;
  }
  return v4;
}
