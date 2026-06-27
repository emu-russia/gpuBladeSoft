char __usercall sub_6F863D9C@<al>(int a1@<eax>)
{
  char **v1; // eax@1
  char **v2; // edx@1
  char *v3; // eax@1
  char **v4; // ecx@1
  char *v5; // edx@1
  char v6; // cl@2
  int v7; // edx@2
  char *v8; // eax@3
  int v9; // edx@4
  char *v10; // ebx@4
  int v11; // eax@8
  int v12; // ST24_4@8
  signed int v13; // edi@8
  signed int v14; // esi@8
  int v15; // edx@8
  char *v16; // eax@8
  char v17; // cl@9
  int v18; // ecx@13
  int v19; // eax@13
  int v20; // ecx@13
  int v21; // eax@13
  int v22; // eax@15
  signed int v23; // esi@17
  char *v24; // eax@25
  char v26; // ST24_1@31
  char v27; // al@31
  int v28; // eax@35
  int v29; // ST24_4@35
  int v30; // ST24_4@26
  int v31; // eax@29
  int v32; // ST24_4@29
  int v33; // [sp+24h] [bp-154h]@13
  char *v34; // [sp+28h] [bp-150h]@22
  int v35; // [sp+2Ch] [bp-14Ch]@24
  unsigned int v36; // [sp+30h] [bp-148h]@8
  int v37; // [sp+34h] [bp-144h]@4
  int v38; // [sp+34h] [bp-144h]@13
  char **v39; // [sp+38h] [bp-140h]@1
  int v40; // [sp+3Ch] [bp-13Ch]@1
  char v41[256]; // [sp+4Fh] [bp-129h]@18
  char v42; // [sp+14Fh] [bp-29h]@8
  unsigned __int8 v43; // [sp+150h] [bp-28h]@13
  unsigned __int8 v44; // [sp+151h] [bp-27h]@13
  unsigned __int8 v45; // [sp+152h] [bp-26h]@13
  unsigned __int8 v46; // [sp+153h] [bp-25h]@13
  unsigned __int8 v47; // [sp+154h] [bp-24h]@13
  unsigned __int8 v48; // [sp+155h] [bp-23h]@13
  unsigned __int8 v49; // [sp+156h] [bp-22h]@13
  unsigned __int8 v50; // [sp+157h] [bp-21h]@13
  unsigned __int8 v51; // [sp+158h] [bp-20h]@13
  unsigned __int8 v52; // [sp+159h] [bp-1Fh]@13
  unsigned __int8 v53; // [sp+15Ah] [bp-1Eh]@13
  unsigned __int8 v54; // [sp+15Bh] [bp-1Dh]@13
  unsigned __int8 v55; // [sp+15Ch] [bp-1Ch]@13
  unsigned __int8 v56; // [sp+15Dh] [bp-1Bh]@13
  unsigned __int8 v57; // [sp+15Eh] [bp-1Ah]@13
  unsigned __int8 v58; // [sp+15Fh] [bp-19h]@13

  v40 = a1;
  v1 = *(char ***)(a1 + 24);
  v39 = v1;
  v2 = v1;
  v3 = *v1;
  v4 = v2;
  v5 = v2[1];
  if ( !v5 )
  {
    if ( !(unsigned __int8)((int (__cdecl *)(int))v4[3])(v40) )
      return 0;
    v3 = *v39;
    v5 = v39[1];
  }
  v6 = *v3;
  v7 = (int)(v5 - 1);
  if ( !v7 )
  {
    v26 = *v3;
    v27 = ((int (__cdecl *)(int))v39[3])(v40);
    v6 = v26;
    if ( v27 )
    {
      v8 = *v39;
      v7 = (int)v39[1];
      goto LABEL_4;
    }
    return 0;
  }
  v8 = v3 + 1;
LABEL_4:
  v9 = v7 - 1;
  v10 = v8 + 1;
  v37 = ((unsigned __int8)v6 << 8) + (unsigned __int8)*v8 - 2;
  while ( v37 > 16 )
  {
    if ( !v9 )
    {
      if ( !(unsigned __int8)((int (__cdecl *)(int))v39[3])(v40) )
        return 0;
      v10 = *v39;
      v9 = (int)v39[1];
    }
    v36 = (unsigned __int8)*v10;
    v11 = *(_DWORD *)v40;
    *(_DWORD *)(v11 + 20) = 82;
    *(_DWORD *)(v11 + 24) = v36;
    v12 = v9 - 1;
    (*(void (__cdecl **)(int, signed int))(*(_DWORD *)v40 + 4))(v40, 1);
    v42 = 0;
    v13 = 0;
    v14 = 1;
    v15 = v12;
    v16 = v10 + 1;
    do
    {
      if ( !v15 )
      {
        if ( !(unsigned __int8)((int (__cdecl *)(int))v39[3])(v40) )
          return 0;
        v16 = *v39;
        v15 = (int)v39[1];
      }
      --v15;
      v17 = *v16;
      *(&v42 + v14) = *v16++;
      v13 += (unsigned __int8)v17;
      ++v14;
    }
    while ( v14 != 17 );
    v10 = v16;
    v38 = v37 - 17;
    v18 = *(_DWORD *)v40;
    *(_DWORD *)(v18 + 24) = v43;
    *(_DWORD *)(v18 + 28) = v44;
    *(_DWORD *)(v18 + 32) = v45;
    *(_DWORD *)(v18 + 36) = v46;
    *(_DWORD *)(v18 + 40) = v47;
    *(_DWORD *)(v18 + 44) = v48;
    *(_DWORD *)(v18 + 48) = v49;
    *(_DWORD *)(v18 + 52) = v50;
    v19 = *(_DWORD *)v40;
    *(_DWORD *)(v19 + 20) = 88;
    v33 = v15;
    (*(void (__cdecl **)(int, signed int))(v19 + 4))(v40, 2);
    v20 = *(_DWORD *)v40;
    *(_DWORD *)(v20 + 24) = v51;
    *(_DWORD *)(v20 + 28) = v52;
    *(_DWORD *)(v20 + 32) = v53;
    *(_DWORD *)(v20 + 36) = v54;
    *(_DWORD *)(v20 + 40) = v55;
    *(_DWORD *)(v20 + 44) = v56;
    *(_DWORD *)(v20 + 48) = v57;
    *(_DWORD *)(v20 + 52) = v58;
    v21 = *(_DWORD *)v40;
    *(_DWORD *)(v21 + 20) = 88;
    (*(void (__cdecl **)(int, signed int))(v21 + 4))(v40, 2);
    v9 = v33;
    if ( v13 > 256 || v38 < v13 )
    {
      v22 = *(_DWORD *)v40;
      *(_DWORD *)(v22 + 20) = 9;
      (*(void (__cdecl **)(int))v22)(v40);
      v9 = v33;
    }
    if ( v13 )
    {
      v23 = 0;
      do
      {
        if ( !v9 )
        {
          if ( !(unsigned __int8)((int (__cdecl *)(int))v39[3])(v40) )
            return 0;
          v10 = *v39;
          v9 = (int)v39[1];
        }
        --v9;
        v41[v23++] = *v10++;
      }
      while ( v23 < v13 );
      v34 = v41;
    }
    else
    {
      v34 = v41;
    }
    v37 = v38 - v13;
    if ( v36 & 0x10 )
    {
      v36 -= 16;
      v35 = v40 + 4 * v36 + 176;
      if ( v36 > 3 )
        goto LABEL_35;
    }
    else
    {
      v35 = v40 + 4 * v36 + 160;
      if ( v36 > 3 )
      {
LABEL_35:
        v28 = *(_DWORD *)v40;
        *(_DWORD *)(v28 + 20) = 31;
        *(_DWORD *)(v28 + 24) = v36;
        v29 = v9;
        (**(void (__cdecl ***)(_DWORD))v40)(v40);
        v9 = v29;
        goto LABEL_25;
      }
    }
LABEL_25:
    v24 = *(char **)v35;
    if ( !*(_DWORD *)v35 )
    {
      v30 = v9;
      v24 = (char *)sub_6F85F484(v40);
      *(_DWORD *)v35 = v24;
      v9 = v30;
    }
    qmemcpy(v24, &v42, 0x11u);
    qmemcpy((void *)(*(_DWORD *)v35 + 17), v34, 0x100u);
  }
  if ( v37 )
  {
    v31 = *(_DWORD *)v40;
    *(_DWORD *)(v31 + 20) = 12;
    v32 = v9;
    (*(void (__cdecl **)(int))v31)(v40);
    v9 = v32;
  }
  *v39 = v10;
  v39[1] = (char *)v9;
  return 1;
}
