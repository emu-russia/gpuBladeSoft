signed int __cdecl sub_6F8953F0(int a1, _WORD *a2, int a3, int *a4, unsigned int *a5, _WORD *a6)
{
  __int16 *v6; // edx@1
  _WORD *v7; // edx@3
  int v8; // ecx@4
  unsigned int v9; // ecx@5
  unsigned int v10; // edx@5
  int v11; // eax@8
  int v12; // eax@8
  int v14; // esi@13
  unsigned int v15; // ebp@13
  __int16 *v16; // edx@18
  int v17; // ecx@18
  int v18; // ebx@18
  int v19; // ecx@25
  signed int i; // edx@25
  int v21; // eax@28
  int v22; // ecx@29
  int v23; // edx@30
  signed int v24; // eax@33
  _WORD *v25; // eax@35
  _WORD *v26; // eax@37
  unsigned int v27; // eax@40
  unsigned int v28; // eax@42
  char v29; // dl@45
  __int16 v30; // si@45
  signed int v31; // eax@45
  signed int v32; // edi@48
  signed int v33; // ecx@48
  int v34; // eax@48
  unsigned int j; // ecx@50
  __int16 v36; // ST0C_2@54
  int v37; // ebx@58
  unsigned int v38; // eax@59
  int k; // edx@62
  int v40; // edx@65
  int v41; // edx@68
  int v42; // eax@79
  unsigned int v43; // [sp+0h] [bp-94h]@12
  unsigned int v44; // [sp+0h] [bp-94h]@44
  unsigned int v45; // [sp+4h] [bp-90h]@44
  unsigned int v46; // [sp+8h] [bp-8Ch]@44
  char v47; // [sp+10h] [bp-84h]@45
  __int16 *v48; // [sp+14h] [bp-80h]@44
  int v49; // [sp+18h] [bp-7Ch]@42
  unsigned int v50; // [sp+1Ch] [bp-78h]@42
  unsigned int v51; // [sp+20h] [bp-74h]@12
  unsigned int v52; // [sp+28h] [bp-6Ch]@44
  signed int v53; // [sp+2Ch] [bp-68h]@35
  int v54; // [sp+30h] [bp-64h]@44
  int v55; // [sp+34h] [bp-60h]@44
  _WORD *v56; // [sp+38h] [bp-5Ch]@39
  _WORD *v57; // [sp+3Ch] [bp-58h]@37
  bool v58; // [sp+42h] [bp-52h]@42
  bool v59; // [sp+43h] [bp-51h]@43
  __int16 v60; // [sp+44h] [bp-50h]@1
  unsigned __int16 v61; // [sp+46h] [bp-4Eh]@13
  char v62; // [sp+48h] [bp-4Ch]@18
  __int16 v63; // [sp+64h] [bp-30h]@2
  __int16 v64; // [sp+66h] [bp-2Eh]@25

  v6 = &v60;
  do
  {
    ++v6;
    *(v6 - 1) = 0;
  }
  while ( v6 != &v63 );
  v7 = a2;
  if ( a3 )
  {
    do
    {
      v8 = *v7;
      ++v7;
      ++*(&v60 + v8);
    }
    while ( v7 != &a2[a3] );
  }
  v9 = 15;
  v10 = *a5;
  while ( !*(&v60 + v9) )
  {
    if ( !--v9 )
      goto LABEL_8;
  }
  if ( v9 <= v10 )
    v10 = v9;
  v51 = v9;
  v43 = v10;
  if ( !v9 )
  {
LABEL_8:
    v11 = *a4;
    *a4 += 4;
    *(_BYTE *)v11 = 64;
    *(_BYTE *)(v11 + 1) = 1;
    *(_WORD *)(v11 + 2) = 0;
    v12 = *a4;
    *a4 += 4;
    *(_BYTE *)v12 = 64;
    *(_BYTE *)(v12 + 1) = 1;
    *(_WORD *)(v12 + 2) = 0;
    *a5 = 1;
    return 0;
  }
  v14 = v61;
  v15 = 1;
  if ( v9 > 1 && !v61 )
  {
    do
      ++v15;
    while ( v15 != v9 && !*(&v60 + v15) );
  }
  v16 = (__int16 *)&v62;
  v17 = v61;
  v18 = 1;
  while ( 1 )
  {
    v18 = 2 * v18 - v17;
    if ( v18 < 0 )
      return -1;
    if ( &v63 == v16 )
      break;
    v17 = (unsigned __int16)*v16;
    ++v16;
  }
  if ( v18 && (v51 != 1 || !a1) )
    return -1;
  v19 = 0;
  v64 = 0;
  for ( i = 1; ; v14 = (unsigned __int16)*(&v60 + i) )
  {
    ++i;
    v19 += v14;
    *(&v63 + i) = v19;
    if ( i == 15 )
      break;
  }
  v21 = 0;
  if ( a3 )
  {
    do
    {
      v22 = a2[v21];
      if ( (_WORD)v22 )
      {
        v23 = (unsigned __int16)*(&v63 + v22);
        *(&v63 + v22) = v23 + 1;
        a6[v23] = v21;
      }
      ++v21;
    }
    while ( v21 != a3 );
  }
  if ( a1 )
  {
    v24 = 256;
    if ( a1 != 1 )
      v24 = -1;
    v53 = v24;
    v25 = &unk_6FBA275E;
    if ( a1 != 1 )
      v25 = &unk_6FBA28E0;
    v57 = v25;
    v26 = &unk_6FBA279E;
    if ( a1 != 1 )
      v26 = &unk_6FBA2920;
    v56 = v26;
  }
  else
  {
    v53 = 19;
    v57 = a6;
    v56 = a6;
  }
  v27 = v43;
  if ( v15 >= v43 )
    v27 = v15;
  v50 = v27;
  v49 = *a4;
  v28 = 1 << v27;
  v58 = a1 == 1;
  if ( v28 > 0x354 && v58 )
    return 1;
  v59 = a1 == 2;
  if ( v28 > 0x250 && v59 )
    return 1;
  v52 = v28;
  v44 = v15;
  v48 = a6;
  v54 = -1;
  LOBYTE(v15) = v50;
  v45 = 0;
  v46 = 0;
  v55 = v28 - 1;
  while ( 1 )
  {
    v29 = v44 - v46;
    v47 = 0;
    v30 = *v48;
    v31 = (unsigned __int16)*v48;
    if ( v53 <= v31 )
    {
      if ( v53 >= v31 )
      {
        v30 = 0;
        v47 = 96;
      }
      else
      {
        v47 = v57[v31];
        v30 = v56[v31];
      }
    }
    v32 = 1 << (v44 - v46);
    v33 = 1 << v15;
    v34 = v49 + 4 * ((1 << v15) + (v45 >> v46) - v32) + 1;
    do
    {
      *(_BYTE *)(v34 - 1) = v47;
      *(_BYTE *)v34 = v29;
      *(_WORD *)(v34 + 1) = v30;
      v34 += -4 * v32;
      v33 -= v32;
    }
    while ( v33 );
    for ( j = 1 << (v44 - 1); j & v45; j >>= 1 )
      ;
    v45 = j ? j + (v45 & (j - 1)) : 0;
    v36 = *(&v60 + v44);
    *(&v60 + v44) = v36 - 1;
    if ( v36 == 1 )
      break;
LABEL_57:
    if ( v50 < v44 )
    {
      v37 = v55 & v45;
      if ( (v55 & v45) != v54 )
      {
        v38 = v46;
        v49 += 4 * (1 << v15);
        if ( !v46 )
          v38 = v50;
        v15 = v44 - v38;
        v46 = v38;
        if ( v44 < v51 )
        {
          for ( k = (1 << (v44 - v38)) - (unsigned __int16)*(&v60 + v44);
                k > 0;
                k = v40 - (unsigned __int16)*(&v60 + v38 + v15) )
          {
            ++v15;
            v40 = 2 * k;
            if ( v38 + v15 >= v51 )
              break;
          }
        }
        v52 += 1 << v15;
        if ( v52 > 0x354 && v58 || v52 > 0x250 && v59 )
          return 1;
        v41 = 4 * v37;
        v54 = v55 & v45;
        *(_BYTE *)(*a4 + 4 * v37) = v15;
        *(_BYTE *)(*a4 + v41 + 1) = v50;
        *(_WORD *)(*a4 + v41 + 2) = (v49 - *a4) >> 2;
      }
    }
    ++v48;
  }
  if ( v44 != v51 )
  {
    v44 = a2[(unsigned __int16)v48[1]];
    goto LABEL_57;
  }
  if ( v45 )
  {
    v42 = v49 + 4 * v45;
    *(_BYTE *)(v42 + 1) = v29;
    *(_BYTE *)v42 = 64;
    *(_WORD *)(v42 + 2) = 0;
  }
  *a4 += 4 * v52;
  *a5 = v50;
  return 0;
}
