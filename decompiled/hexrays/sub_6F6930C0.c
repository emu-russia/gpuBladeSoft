signed int sub_6F6930C0()
{
  int v0; // eax@2
  signed int v1; // edi@14
  int *v2; // edi@17
  int v3; // eax@18
  int v4; // esi@34
  int v5; // eax@39
  int *v6; // eax@41
  int v7; // ecx@43
  int v8; // esi@61
  signed int v9; // esi@71
  int v11; // ST28_4@81
  int v12; // ST2C_4@81
  int v13; // ecx@81
  int v14; // ST28_4@82
  int v15; // ST2C_4@82
  int v16; // ecx@82
  int v17; // esi@84
  int v18; // ST28_4@84
  int v19; // ecx@84
  int v20; // [sp+8h] [bp-154h]@18
  int v21; // [sp+8h] [bp-154h]@39
  void *v22; // [sp+3Ch] [bp-120h]@18
  int v23; // [sp+40h] [bp-11Ch]@18
  int v24; // [sp+44h] [bp-118h]@18
  int v25; // [sp+48h] [bp-114h]@18
  int v26; // [sp+4Ch] [bp-110h]@18
  char *v27; // [sp+50h] [bp-10Ch]@4
  size_t v28; // [sp+54h] [bp-108h]@14
  char v29; // [sp+58h] [bp-104h]@72
  int *v30; // [sp+68h] [bp-F4h]@20
  int v31; // [sp+6Ch] [bp-F0h]@34
  int v32; // [sp+70h] [bp-ECh]@42
  char *v33; // [sp+80h] [bp-DCh]@39
  char v34; // [sp+88h] [bp-D4h]@53
  int *v35; // [sp+98h] [bp-C4h]@18
  int v36; // [sp+9Ch] [bp-C0h]@41
  int v37; // [sp+A0h] [bp-BCh]@26
  int v38; // [sp+A4h] [bp-B8h]@82
  int v39; // [sp+A8h] [bp-B4h]@82
  int v40; // [sp+ACh] [bp-B0h]@82
  int *v41; // [sp+B0h] [bp-ACh]@18
  int v42; // [sp+B4h] [bp-A8h]@20
  int v43; // [sp+B8h] [bp-A4h]@18
  int v44; // [sp+BCh] [bp-A0h]@81
  int v45; // [sp+C0h] [bp-9Ch]@81
  int v46; // [sp+C4h] [bp-98h]@81
  char *v47; // [sp+C8h] [bp-94h]@2
  char v48; // [sp+D0h] [bp-8Ch]@8
  int *v49; // [sp+E0h] [bp-7Ch]@2
  int v50; // [sp+E4h] [bp-78h]@4
  int v51; // [sp+E8h] [bp-74h]@2
  int v52; // [sp+ECh] [bp-70h]@84
  int v53; // [sp+F0h] [bp-6Ch]@84
  int v54; // [sp+F4h] [bp-68h]@84
  char *v55; // [sp+F8h] [bp-64h]@2
  char v56; // [sp+100h] [bp-5Ch]@10
  char *v57; // [sp+110h] [bp-4Ch]@4
  char v58; // [sp+118h] [bp-44h]@4
  int *v59; // [sp+128h] [bp-34h]@2
  int v60; // [sp+12Ch] [bp-30h]@43
  int v61; // [sp+130h] [bp-2Ch]@12

  if ( !dword_6FBB5410 )
    return -1;
  sub_6F695280(&v59, "/");
  sub_6F695280(&v55, &byte_6FBB5414);
  sub_6F695280(&v47, "/");
  v0 = sub_6F93A0E0((int)&v47, 0, 0, dword_6FCFFF44, dword_6FCFFF48);
  v49 = &v51;
  if ( *(_DWORD *)v0 == v0 + 8 )
  {
    v17 = *(_DWORD *)(v0 + 16);
    v18 = *(_DWORD *)(v0 + 20);
    v19 = *(_DWORD *)(v0 + 8);
    v52 = *(_DWORD *)(v0 + 12);
    v51 = v19;
    v53 = v17;
    v54 = v18;
  }
  else
  {
    v49 = *(int **)v0;
    v51 = *(_DWORD *)(v0 + 8);
  }
  v50 = *(_DWORD *)(v0 + 4);
  *(_DWORD *)v0 = v0 + 8;
  *(_DWORD *)(v0 + 4) = 0;
  *(_BYTE *)(v0 + 8) = 0;
  sub_6F7544E0((int)&v57, (int)&v49, (int)&v55);
  sub_6F7544E0((int)&v27, (int)&v57, (int)&v59);
  if ( v57 != &v58 )
    j_free_1(v57);
  if ( v49 != &v51 )
    j_free_1(v49);
  if ( v47 != &v48 )
    j_free_1(v47);
  if ( v55 != &v56 )
    j_free_1(v55);
  if ( v59 != &v61 )
    j_free_1(v59);
  nullsub_10();
  v59 = &v61;
  sub_6F93A6C0((int)&v59, v27, &v27[v28], (int)&unk_6FBB5400);
  v1 = sub_6F692620((int)&v59);
  if ( v59 != &v61 )
    j_free_1(v59);
  if ( v1 < 0 )
  {
    if ( v27 != &v29 )
      j_free_1(v27);
    return -1;
  }
  v2 = &v61;
  while ( 1 )
  {
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    sub_6F695280(&v59, ".png");
    sub_6F695280(&v55, "n");
    sub_6F72E430((int)&v47, (int)j_j__vsnprintf, 16, "%d", dword_6FBBDB50 + 1);
    sub_6F695280(&v35, "gpuPeteOGL2_t");
    v3 = sub_6F93A0E0((int)&v35, 0, 0, v27, v28);
    v41 = &v43;
    if ( *(_DWORD *)v3 == v3 + 8 )
    {
      v11 = *(_DWORD *)(v3 + 16);
      v12 = *(_DWORD *)(v3 + 20);
      v13 = *(_DWORD *)(v3 + 8);
      v44 = *(_DWORD *)(v3 + 12);
      v43 = v13;
      v45 = v11;
      v46 = v12;
    }
    else
    {
      v41 = *(int **)v3;
      v43 = *(_DWORD *)(v3 + 8);
    }
    v42 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)v3 = v3 + 8;
    *(_DWORD *)(v3 + 4) = 0;
    *(_BYTE *)(v3 + 8) = 0;
    sub_6F7544E0((int)&v49, (int)&v41, (int)&v47);
    sub_6F7544E0((int)&v57, (int)&v49, (int)&v55);
    sub_6F7544E0((int)&v30, (int)&v57, (int)&v59);
    if ( v57 != &v58 )
      j_free_1(v57);
    if ( v49 != &v51 )
      j_free_1(v49);
    if ( v41 != &v43 )
      j_free_1(v41);
    if ( v35 != &v37 )
      j_free_1(v35);
    if ( v47 != &v48 )
      j_free_1(v47);
    if ( v55 != &v56 )
      j_free_1(v55);
    if ( v59 != v2 )
      j_free_1(v59);
    LOBYTE(v20) = 0;
    v59 = v2;
    sub_6F93A6C0((int)&v59, v30, (_BYTE *)v30 + v31, v20);
    v4 = sub_6F759D90(&v22, (int)&v59);
    if ( v59 != v2 )
      j_free_1(v59);
    if ( v4 < 0 || sub_6F69AA00((char *)&dword_6FBBDAD0[4 * dword_6FBBDB50], (int)&v22, 0) )
      break;
LABEL_76:
    nullsub_10();
    ++dword_6FBBDB50;
    if ( v30 != &v32 )
      j_free_1(v30);
  }
  if ( v26 )
  {
    free(v22);
    v22 = 0;
    v26 = 0;
  }
  sub_6F695280(&v57, ".png");
  sub_6F695280(&v49, "l");
  sub_6F72E430((int)&v41, (int)j_j__vsnprintf, 16, "%d", dword_6FBBDB50 + 1);
  sub_6F695280(&v33, "gpuPeteOGL2_t");
  v5 = sub_6F93A0E0((int)&v33, 0, 0, v27, v28);
  v35 = &v37;
  if ( *(_DWORD *)v5 == v5 + 8 )
  {
    v14 = *(_DWORD *)(v5 + 16);
    v15 = *(_DWORD *)(v5 + 20);
    v16 = *(_DWORD *)(v5 + 8);
    v38 = *(_DWORD *)(v5 + 12);
    v37 = v16;
    v39 = v14;
    v40 = v15;
  }
  else
  {
    v35 = *(int **)v5;
    v37 = *(_DWORD *)(v5 + 8);
  }
  v36 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)v5 = v5 + 8;
  *(_DWORD *)(v5 + 4) = 0;
  *(_BYTE *)(v5 + 8) = 0;
  sub_6F7544E0((int)&v47, (int)&v35, (int)&v41);
  sub_6F7544E0((int)&v55, (int)&v47, (int)&v49);
  sub_6F7544E0((int)&v59, (int)&v55, (int)&v57);
  v6 = v30;
  if ( v59 == v2 )
  {
    sub_6F93C180((int)&v30, (int)&v59);
    v6 = v59;
  }
  else
  {
    if ( v30 == &v32 )
    {
      v30 = v59;
      v31 = v60;
      v32 = v61;
    }
    else
    {
      v31 = v60;
      v7 = v32;
      v30 = v59;
      v32 = v61;
      if ( v6 )
      {
        v59 = v6;
        v61 = v7;
        goto LABEL_45;
      }
    }
    v59 = v2;
    v2 = &v61;
    v6 = &v61;
  }
LABEL_45:
  v60 = 0;
  *(_BYTE *)v6 = 0;
  if ( v59 != v2 )
    j_free_1(v59);
  if ( v55 != &v56 )
    j_free_1(v55);
  if ( v47 != &v48 )
    j_free_1(v47);
  if ( v35 != &v37 )
    j_free_1(v35);
  if ( v33 != &v34 )
    j_free_1(v33);
  if ( v41 != &v43 )
    j_free_1(v41);
  if ( v49 != &v51 )
    j_free_1(v49);
  if ( v57 != &v58 )
    j_free_1(v57);
  LOBYTE(v21) = 0;
  v59 = v2;
  sub_6F93A6C0((int)&v59, v30, (_BYTE *)v30 + v31, v21);
  v8 = sub_6F759D90(&v22, (int)&v59);
  if ( v59 != v2 )
    j_free_1(v59);
  if ( v8 >= 0 && !sub_6F69AA00((char *)&dword_6FBBDAD0[4 * dword_6FBBDB50], (int)&v22, 1) )
    goto LABEL_76;
  if ( v26 )
  {
    free(v22);
    v22 = 0;
    v26 = 0;
  }
  if ( v30 != &v32 )
    j_free_1(v30);
  if ( dword_6FBBDB50 && !byte_7036F8A9 )
  {
    v9 = -1;
    nullsub_10();
  }
  else
  {
    dword_6FBBDB54 = 1;
    v9 = 0;
  }
  if ( v27 != &v29 )
    j_free_1(v27);
  return v9;
}
