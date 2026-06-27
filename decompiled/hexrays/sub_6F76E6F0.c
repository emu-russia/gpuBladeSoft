int __cdecl sub_6F76E6F0(int a1, int a2, signed int a3)
{
  signed int v3; // edi@1
  int v4; // ebx@3
  int v5; // eax@4
  unsigned int v6; // ecx@7
  unsigned int v7; // edx@7
  int v8; // edx@9
  int v9; // eax@9
  int v10; // ecx@9
  int result; // eax@16
  __int16 v12; // ax@18
  int v13; // eax@20
  int v14; // edx@22
  int v15; // eax@22
  int v16; // esi@27
  int v17; // ebp@27
  void *v18; // ecx@28
  int v19; // eax@28
  int v20; // edx@28
  int v21; // eax@30
  int v22; // eax@37
  int v23; // eax@40
  int v24; // edx@42
  int v25; // eax@46
  int v26; // ebp@25
  int v27; // eax@50
  int v28; // eax@52
  int v29; // eax@55
  int v30; // edx@65
  int v31; // eax@65
  int v32; // ST34_4@65
  int v33; // ST30_4@65
  int v34; // eax@66
  signed int v35; // edx@66
  int v36; // ST30_4@66
  int v37; // ecx@78
  int v38; // edx@78
  int v39; // edx@78
  unsigned int v40; // ebp@78
  int v41; // edx@78
  unsigned int v42; // ST30_4@78
  int v43; // edx@78
  int v44; // ecx@78
  unsigned int v45; // ecx@78
  int v46; // ecx@79
  int v47; // ecx@82
  int v48; // edx@82
  int v49; // ecx@82
  int v50; // edx@82
  unsigned int v51; // ebp@82
  int v52; // edx@82
  int v53; // ecx@82
  int v54; // ebp@82
  unsigned int v55; // edx@82
  int v56; // [sp+2Ch] [bp-30h]@16
  int v57; // [sp+2Ch] [bp-30h]@50
  int v58; // [sp+38h] [bp-24h]@19
  int v59; // [sp+3Ch] [bp-20h]@9

  v3 = a3;
  if ( !a1 )
    return 35;
  if ( !*(_DWORD *)(a1 + 88) )
    return 35;
  v4 = *(_DWORD *)(a1 + 84);
  if ( !v4 )
    return 35;
  v5 = *(_DWORD *)(v4 + 156);
  if ( v5 && *(_BYTE *)(v5 + 4) & 1 )
  {
    sub_6F773D90(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 100), *(_DWORD *)(v4 + 88));
    v25 = *(_DWORD *)(v4 + 156);
    *(_DWORD *)(v4 + 88) = 0;
    *(_DWORD *)(v25 + 4) &= 0xFFFFFFFE;
  }
  else
  {
    *(_DWORD *)(v4 + 88) = 0;
  }
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 52) = 0;
  v6 = 0;
  v7 = (v4 + 28) & 0xFFFFFFFC;
  do
  {
    *(_DWORD *)(v7 + v6) = 0;
    v6 += 4;
  }
  while ( v6 < ((v4 + 24 - v7 + 32) & 0xFFFFFFFC) );
  *(_DWORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 116) = 0;
  *(_DWORD *)(v4 + 120) = 0;
  *(_DWORD *)(v4 + 124) = 0;
  *(_BYTE *)(v4 + 94) = 0;
  v8 = *(_DWORD *)(a1 + 96);
  v59 = v4 + 108;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 76) = 0;
  *(_DWORD *)(v4 + 84) = 0;
  *(_DWORD *)(v4 + 100) = 0;
  v9 = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v4 + 104) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 132) = 0;
  *(_DWORD *)(v4 + 136) = 0;
  *(_DWORD *)(v4 + 140) = 0;
  v10 = *(_DWORD *)(v9 + 160);
  *(_DWORD *)(v4 + 152) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  if ( a3 & 0x400 )
    v3 = a3 | 0x801;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 144) = 0;
  *(_DWORD *)(v4 + 148) = 0;
  if ( v3 & 1 )
    v3 = v3 & 0xFFFFFFFB | 0xA;
  if ( !v10 )
    goto LABEL_16;
  if ( v3 & 0x8002 )
    goto LABEL_16;
  if ( (**(_DWORD **)v8 & 0x300) != 256 )
    goto LABEL_16;
  v27 = *(_DWORD *)(a1 + 8);
  v57 = *(_DWORD *)(a1 + 8);
  if ( BYTE1(v27) & 0x20 )
    goto LABEL_16;
  v58 = v3 & 0x800;
  if ( !(v3 & 0x800) )
  {
    v28 = *(_DWORD *)(a1 + 128);
    if ( *(_DWORD *)(v28 + 8) )
    {
      if ( *(_DWORD *)v28 )
        goto LABEL_16;
    }
    else if ( !*(_DWORD *)v28 )
    {
      goto LABEL_16;
    }
  }
  if ( !(v3 & 0x20) )
  {
    v29 = **(_DWORD **)v8;
    if ( BYTE1(v29) & 4 )
    {
      if ( ((v3 >> 16) & 0xF) != 1
        && !*(_BYTE *)(*(_DWORD *)(a1 + 128) + 52)
        && (!(v57 & 8)
         || !*(_DWORD *)(a1 + 696)
         || *(_WORD *)(a1 + 286)
         || *(_DWORD *)(a1 + 628)
         || *(_DWORD *)(a1 + 636)) )
      {
LABEL_16:
        result = (*(int (__cdecl **)(int, _DWORD, int, signed int))(*(_DWORD *)(v8 + 12) + 72))(
                   v4,
                   *(_DWORD *)(a1 + 88),
                   a2,
                   v3);
        v56 = result;
        if ( result )
          return result;
        if ( *(_UNKNOWN **)(v4 + 72) == &loc_6F75746C )
        {
          result = sub_6F770120(v59);
          v56 = result;
          if ( result )
            return result;
          v12 = v3;
          if ( !(v3 & 2) )
          {
            v13 = v3 & 0x10;
            if ( v3 & 0x10 )
            {
              v47 = *(_DWORD *)(v4 + 36);
              *(_DWORD *)(v4 + 32) &= 0xFFFFFFC0;
              v48 = v47 + 63;
              v49 = *(_DWORD *)(v4 + 44);
              *(_DWORD *)(v4 + 36) = v48 & 0xFFFFFFC0;
              v50 = v49 + *(_DWORD *)(v4 + 24);
              v49 &= 0xFFFFFFC0;
              *(_DWORD *)(v4 + 44) = v49;
              v51 = (v50 + 63) & 0xFFFFFFC0;
              v52 = v49;
              v53 = *(_DWORD *)(v4 + 48);
              v54 = v51 - v52;
              v55 = (*(_DWORD *)(v4 + 28) + *(_DWORD *)(v4 + 48) + 63) & 0xFFFFFFC0;
              *(_DWORD *)(v4 + 24) = v54;
              v53 &= 0xFFFFFFC0;
              *(_DWORD *)(v4 + 48) = v53;
              *(_DWORD *)(v4 + 28) = v55 - v53;
            }
            else
            {
              v37 = *(_DWORD *)(v4 + 32);
              v38 = *(_DWORD *)(v4 + 24);
              *(_DWORD *)(v4 + 44) &= 0xFFFFFFC0;
              *(_DWORD *)(v4 + 48) &= 0xFFFFFFC0;
              v39 = v37 + v38;
              v37 &= 0xFFFFFFC0;
              v40 = (v39 + 63) & 0xFFFFFFC0;
              v41 = *(_DWORD *)(v4 + 36) - *(_DWORD *)(v4 + 28);
              *(_DWORD *)(v4 + 32) = v37;
              v42 = v41 & 0xFFFFFFC0;
              v43 = v37;
              v44 = *(_DWORD *)(v4 + 36);
              *(_DWORD *)(v4 + 24) = v40 - v43;
              v45 = (v44 + 63) & 0xFFFFFFC0;
              *(_DWORD *)(v4 + 36) = v45;
              *(_DWORD *)(v4 + 28) = v45 - v42;
            }
            v46 = *(_DWORD *)(v4 + 52);
            *(_DWORD *)(v4 + 40) = (*(_DWORD *)(v4 + 40) + 32) & 0xFFFFFFC0;
            v58 = v3 & 0x800;
            *(_DWORD *)(v4 + 52) = (v46 + 32) & 0xFFFFFFC0;
            goto LABEL_21;
          }
        }
        else
        {
          v12 = v3;
        }
        v58 = v12 & 0x800;
LABEL_20:
        v13 = v3 & 0x10;
        goto LABEL_21;
      }
    }
  }
  if ( v57 & 2 )
  {
    if ( !(v3 & 8) )
    {
      v34 = *(_DWORD *)(v8 + 12);
      v35 = v3;
      BYTE1(v35) |= 0x40u;
      v36 = v10;
      v56 = (*(int (__cdecl **)(int, _DWORD, int, signed int))(v34 + 72))(v4, *(_DWORD *)(a1 + 88), a2, v35);
      v10 = v36;
      if ( !v56 && *(_DWORD *)(v4 + 72) == 1651078259 )
        goto LABEL_20;
    }
  }
  v30 = *(_DWORD *)(a1 + 128);
  v31 = *(_DWORD *)(v30 + 24);
  *(_DWORD *)(v30 + 24) = 0;
  v32 = v30;
  v33 = v31;
  v56 = (*(int (__cdecl **)(int, int, _DWORD, int, signed int))(*(_DWORD *)(*(_DWORD *)v10 + 20) + 12))(
          v10,
          v4,
          *(_DWORD *)(a1 + 88),
          a2,
          v3);
  *(_DWORD *)(v32 + 24) = v33;
  v13 = v3 & 0x10;
LABEL_21:
  if ( v13 )
  {
    v14 = *(_DWORD *)(v4 + 52);
    v15 = 0;
  }
  else
  {
    v15 = *(_DWORD *)(v4 + 40);
    v14 = 0;
  }
  *(_DWORD *)(v4 + 68) = v14;
  *(_DWORD *)(v4 + 64) = v15;
  if ( !(v3 & 0x2000) && *(_BYTE *)(a1 + 8) & 1 )
  {
    v26 = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(v4 + 56) = sub_6F7C9420(*(_DWORD *)(v4 + 56), *(_DWORD *)(v26 + 16), 64);
    *(_DWORD *)(v4 + 60) = sub_6F7C9420(*(_DWORD *)(v4 + 60), *(_DWORD *)(v26 + 20), 64);
  }
  if ( v58 )
    goto LABEL_36;
  v16 = *(_DWORD *)(a1 + 128);
  v17 = *(_DWORD *)(v16 + 24);
  if ( !v17 )
    goto LABEL_36;
  v18 = *(void **)(v4 + 72);
  v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 4) + 96) + 4);
  v20 = *(_DWORD *)(v19 + 156);
  if ( !v20 || v18 != *(void **)(v20 + 16) )
  {
    v21 = *(_DWORD *)(v19 + 148);
    if ( !v21 )
    {
LABEL_70:
      if ( v18 == &loc_6F75746C )
      {
        if ( v17 & 1 )
        {
          sub_6F770750(v59, v16);
          v17 = *(_DWORD *)(v16 + 24);
        }
        if ( v17 & 2 )
          sub_6F770420(v59, *(_DWORD *)(v16 + 16), *(_DWORD *)(v16 + 20));
      }
      goto LABEL_35;
    }
    while ( 1 )
    {
      v20 = *(_DWORD *)(v21 + 8);
      if ( v18 == *(void **)(v20 + 16) )
        break;
      v21 = *(_DWORD *)(v21 + 4);
      if ( !v21 )
        goto LABEL_70;
    }
  }
  v56 = (*(int (__cdecl **)(int, int, int, int))(*(_DWORD *)(v20 + 12) + 44))(v20, v4, v16, v16 + 16);
LABEL_35:
  sub_6F770690(v4 + 64, v16);
LABEL_36:
  if ( v56 )
  {
    result = v56;
  }
  else
  {
    v22 = *(_DWORD *)(v4 + 72);
    if ( v22 != 1651078259 && v22 != 1668246896 && v3 & 4 )
    {
      v23 = (v3 >> 16) & 0xF;
      if ( !v23 )
        v23 = ((unsigned int)v3 >> 11) & 2;
      v24 = *(_DWORD *)(v4 + 4);
      if ( v24 )
        result = sub_6F76DFA0(*(_DWORD *)(*(_DWORD *)(v24 + 96) + 4), v4, v23);
      else
        result = 6;
    }
    else
    {
      result = 0;
    }
  }
  return result;
}
