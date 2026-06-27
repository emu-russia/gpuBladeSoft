int __cdecl sub_6F962A50(int a1, int a2, __int64 a3, void (**a4)(void), int *a5)
{
  int v6; // eax@11
  void (*v7)(void); // edi@11
  int v8; // eax@13
  void (*v9)(void); // ebp@13
  int v10; // edi@14
  int v11; // ecx@14
  int v12; // edx@15
  int v13; // esi@16
  int v14; // ecx@16
  int v15; // edx@17
  void (*v16)(void); // edx@24
  unsigned int v17; // ecx@24
  int v18; // esi@24
  char v19; // bl@25
  int v20; // eax@25
  char *v21; // ebx@29
  int v22; // esi@29
  unsigned int v23; // ecx@29
  int v24; // edi@29
  char v25; // dl@30
  int v26; // eax@30
  int v27; // esi@38
  int v28; // edx@38
  int v29; // ecx@38
  int v30; // eax@39
  char v31; // al@40
  signed int v32; // eax@49
  int v33; // eax@64
  void (**v34)(void); // eax@69
  int v35; // [sp+0h] [bp-BCh]@1
  __int64 v36; // [sp+18h] [bp-A4h]@1
  char *v37; // [sp+20h] [bp-9Ch]@11
  void (*v38)(void); // [sp+24h] [bp-98h]@4
  int v39; // [sp+28h] [bp-94h]@31
  void (*v40)(void); // [sp+2Ch] [bp-90h]@21
  void (*v41)(void); // [sp+30h] [bp-8Ch]@3
  char v42; // [sp+37h] [bp-85h]@2
  __int64 v43; // [sp+38h] [bp-84h]@2
  void (*v44)(void); // [sp+40h] [bp-7Ch]@4
  int (*(**v45)[4])(); // [sp+44h] [bp-78h]@22
  int v46; // [sp+48h] [bp-74h]@22
  char v47; // [sp+4Ch] [bp-70h]@1
  int v48; // [sp+50h] [bp-6Ch]@6
  int (__cdecl *v49)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-58h]@1
  int *v50; // [sp+68h] [bp-54h]@1
  char *v51; // [sp+6Ch] [bp-50h]@1
  void *v52; // [sp+70h] [bp-4Ch]@1
  int *v53; // [sp+74h] [bp-48h]@1
  void (*v54)(void); // [sp+80h] [bp-3Ch]@1
  unsigned int v55; // [sp+84h] [bp-38h]@1
  char v56; // [sp+88h] [bp-34h]@6
  int v57; // [sp+90h] [bp-2Ch]@6
  int v58; // [sp+94h] [bp-28h]@38
  int v59; // [sp+98h] [bp-24h]@21
  char v60; // [sp+9Ch] [bp-20h]@6
  char v61; // [sp+A0h] [bp-1Ch]@1

  v49 = sub_6F962A50;
  v51 = &v61;
  v36 = a3;
  v50 = dword_6F96A9FC;
  v52 = &loc_6F963096;
  v53 = &v35;
  sub_6F8A1A60((int *)&v47);
  v54 = 0;
  v55 = 0;
  if ( a1 != 1 )
  {
    LODWORD(v36) = 3;
    goto LABEL_9;
  }
  v43 = v36 - 5138137972254386944i64;
  LOBYTE(v36) = (unsigned __int64)(v36 - 5138137972254386944i64) <= 1;
  v42 = v36 & (a2 == 6);
  if ( (unsigned __int8)v36 & (a2 == 6) )
  {
    v41 = *(a4 - 3);
    if ( v41 )
    {
      v38 = *(a4 - 6);
      v44 = *(a4 - 4);
      goto LABEL_5;
    }
    goto LABEL_45;
  }
  v48 = -1;
  v44 = (void (*)(void))sub_6F8A1BB0((int)a5);
  if ( !v44 )
    goto LABEL_48;
  v48 = -1;
  v37 = sub_6F8B8700((int)a5, v44, (int)&v56);
  v57 = sub_6F8B8850(v60);
  v6 = sub_6F8A1B70((int)a5, &v55);
  v7 = (void (*)(void))(v6 - (v55 < 1));
  v41 = v7;
  if ( (signed int)v7 < 0 )
    goto LABEL_48;
  if ( v6 == v55 < 1 )
  {
    v38 = 0;
    v32 = 1;
    v40 = 0;
    goto LABEL_50;
  }
  v8 = (int)v37;
  v9 = v7;
  do
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = (*(_BYTE *)(++v8 - 1) & 0x7F) << v11;
      v11 += 7;
      v10 |= v12;
    }
    while ( *(_BYTE *)(v8 - 1) < 0 );
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = (*(_BYTE *)(++v8 - 1) & 0x7F) << v14;
      v14 += 7;
      v13 |= v15;
    }
    while ( *(_BYTE *)(v8 - 1) < 0 );
    v9 = (void (*)(void))((char *)v9 - 1);
  }
  while ( v9 );
  v41 = (void (*)(void))(v10 + 1);
  if ( !v13 )
  {
    if ( v10 == -1 || a2 & 1 )
      goto LABEL_48;
    v38 = (void (*)(void))(a2 & 8);
    if ( !(a2 & 8) && (unsigned __int64)v43 <= 1 )
      goto LABEL_7;
    goto LABEL_60;
  }
  if ( !v41 )
    goto LABEL_48;
  v40 = (void (*)(void))(v59 + v13 - 1);
  if ( v59 + v13 == 1 )
  {
LABEL_47:
    if ( a2 & 1 )
      goto LABEL_48;
    v38 = (void (*)(void))(a2 & 8);
    if ( !(a2 & 8) && (unsigned int)v38 >= (unsigned int)((unsigned int)v43 > 1) + HIDWORD(v43) )
      goto LABEL_7;
LABEL_60:
    v38 = 0;
    goto LABEL_7;
  }
  v45 = &off_6FBABEAC;
  v46 = a2 & 8;
  if ( !(a2 & 8) )
  {
    v45 = &off_6FBABEC0;
    if ( (a2 & 8u) >= (unsigned int)((unsigned int)v43 > 1) + HIDWORD(v43) )
    {
      v34 = a4 + 8;
      if ( *(_BYTE *)a4 & 1 )
        v34 = (void (**)(void))*(a4 - 12);
      v54 = (void (*)(void))v34;
      v45 = (int (*(**)[4])())*(v34 - 20);
    }
  }
  while ( 1 )
  {
    v16 = 0;
    v17 = 0;
    v18 = (int)v40;
    do
    {
      v19 = *(_BYTE *)(++v18 - 1);
      v20 = (*(_BYTE *)(v18 - 1) & 0x7F) << v17;
      v17 += 7;
      v16 = (void (*)(void))(v20 | (unsigned int)v16);
    }
    while ( v19 < 0 );
    v37 = (char *)v18;
    if ( v17 <= 0x1F && v19 & 0x40 )
      v16 = (void (*)(void))(-(1 << v17) | (unsigned int)v16);
    v38 = v16;
    v21 = v37;
    v22 = 0;
    v23 = 0;
    v24 = (int)v16;
    do
    {
      v25 = *v21++;
      v26 = (v25 & 0x7F) << v23;
      v23 += 7;
      v22 |= v26;
    }
    while ( v25 < 0 );
    v39 = v22;
    if ( v23 <= 0x1F && v25 & 0x40 )
      v39 = -(1 << v23) | v22;
    if ( !v24 )
    {
      v42 = 1;
      goto LABEL_42;
    }
    if ( v24 <= 0 )
      break;
    v48 = -1;
    v33 = sub_6F8B8620((int)&v56, v24);
    if ( !v33 || v45 && (unsigned __int8)sub_6F8B86A0(v33, (int)v45, (int **)&v54) )
      goto LABEL_67;
LABEL_42:
    if ( !v39 )
    {
      if ( v42 )
        goto LABEL_47;
LABEL_48:
      LODWORD(v36) = 8;
      goto LABEL_9;
    }
    v40 = (void (*)(void))&v37[v39];
  }
  if ( (v46 == 0) & (unsigned __int8)v36 && v45 )
  {
    v48 = -1;
    v31 = sub_6F8B87E0((int)&v56, (int)v45, (int)v54, v24) ^ 1;
  }
  else
  {
    v27 = 0;
    v28 = v58 + ~v24;
    v29 = 0;
    do
    {
      v30 = (*(_BYTE *)(++v28 - 1) & 0x7F) << v29;
      v29 += 7;
      v27 |= v30;
    }
    while ( *(_BYTE *)(v28 - 1) < 0 );
    v31 = v27 == 0;
  }
  if ( !v31 )
    goto LABEL_42;
LABEL_67:
  v32 = 3;
LABEL_50:
  if ( a2 & 1 )
  {
    LODWORD(v36) = 6;
    if ( (unsigned __int64)v43 <= 1 )
    {
      *(a4 - 6) = v38;
      *(a4 - 5) = v40;
      *(a4 - 4) = v44;
      *(a4 - 2) = v54;
      *(a4 - 3) = v41;
    }
    goto LABEL_9;
  }
  if ( !(a2 & 8) && (a2 & 8u) >= (unsigned int)((unsigned int)v43 > 1) + HIDWORD(v43) )
  {
    if ( v32 != 1 )
    {
LABEL_5:
      if ( (signed int)v38 < 0 )
      {
        v48 = -1;
        sub_6F8B8700((int)a5, v44, (int)&v56);
        v57 = sub_6F8B8850(v60);
        *(a4 - 3) = (void (*)(void))sub_6F8B8850(v60);
      }
      goto LABEL_7;
    }
LABEL_45:
    sub_6F961E80(a4);
  }
  if ( v32 == 1 )
    sub_6F95D3C0();
  if ( (signed int)v38 < 0 )
  {
    v48 = 1;
    sub_6F9593D0();
  }
LABEL_7:
  v48 = -1;
  sub_6F8A1B40(a5, 0, (int)a4);
  sub_6F8A1B40(a5, 1, (int)v38);
  sub_6F8A1B90((int)a5, (int)v41);
  LODWORD(v36) = 7;
LABEL_9:
  sub_6F8A1AD0((int *)&v47);
  return v36;
}
