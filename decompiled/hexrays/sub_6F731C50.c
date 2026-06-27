int sub_6F731C50()
{
  int v0; // ebx@8
  int v1; // ebx@18
  int v2; // edi@27
  char *v3; // edi@37
  char *v4; // ebx@37
  int v5; // ecx@39
  int v6; // edi@43
  void *v7; // eax@43
  int v9; // ecx@44
  int v10; // edi@46
  int v11; // eax@48
  void *v12; // [sp+24h] [bp-68h]@39
  int v13; // [sp+28h] [bp-64h]@39
  int v14; // [sp+2Ch] [bp-60h]@39
  int v15; // [sp+30h] [bp-5Ch]@39
  int v16; // [sp+34h] [bp-58h]@39
  void **v17; // [sp+38h] [bp-54h]@4
  void *v18; // [sp+3Ch] [bp-50h]@4
  void *v19; // [sp+40h] [bp-4Ch]@4
  void *v20; // [sp+44h] [bp-48h]@4
  void *v21; // [sp+48h] [bp-44h]@4
  void *v22; // [sp+4Ch] [bp-40h]@8
  void *v23; // [sp+50h] [bp-3Ch]@8
  void *v24; // [sp+54h] [bp-38h]@8
  void *v25; // [sp+58h] [bp-34h]@8
  void *v26; // [sp+5Ch] [bp-30h]@37
  void *v27; // [sp+60h] [bp-2Ch]@37
  void *v28; // [sp+64h] [bp-28h]@37
  void *v29; // [sp+68h] [bp-24h]@37
  void *v30; // [sp+6Ch] [bp-20h]@37
  char v31; // [sp+70h] [bp-1Ch]@38

  sub_6F761890(dword_70057F18);
  if ( sub_6F768750(&dword_70055EF4) )
  {
    nullsub_10();
  }
  else if ( sub_6F76B920(dword_70055EF4, (int)&unk_6FADDA20, 406760, 0, &dword_70055EF8) )
  {
    nullsub_10();
  }
  else
  {
    dword_70055EF0 = 1;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  sub_6F759390(&v17, (int)&unk_6FB45180);
  sub_6F69AA00((char *)&dword_6FBBFD90, (int)&v17, 0);
  if ( v21 )
    free(v17);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  sub_6F759390(&v17, (int)&unk_6FB44B20);
  sub_6F69AA00((char *)&dword_6FBBFD80, (int)&v17, 0);
  if ( v21 )
    free(v17);
  v17 = (void **)&unk_6FB445C0;
  v0 = 0;
  v18 = &unk_6FB44420;
  v19 = &unk_6FB43820;
  v20 = &unk_6FB43380;
  v21 = &unk_6FB43000;
  v22 = &unk_6FB42E60;
  v23 = &unk_6FB42960;
  v24 = &unk_6FB42560;
  v25 = &unk_6FB41A60;
  do
  {
    if ( dword_6FBB84DC[0] == v0
      || dword_6FBB84E0 == v0
      || dword_6FBB84E4 == v0
      || dword_6FBB84E8 == v0
      || dword_6FBB84EC == v0
      || dword_6FBB84F0 == v0
      || dword_6FBB84F4 == v0
      || dword_6FBB84F8 == v0
      || dword_6FBB84FC == v0 )
    {
      v11 = (int)(&v17)[v0];
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      sub_6F759390(&v12, v11);
      sub_6F69AA00((char *)&dword_6FBBFCE0[4 * v0], (int)&v12, 1);
      if ( v16 )
        free(v12);
    }
    v1 = v0 + 1;
    if ( dword_6FBB84DC[0] == v1
      || dword_6FBB84E0 == v1
      || dword_6FBB84E4 == v1
      || dword_6FBB84E8 == v1
      || dword_6FBB84EC == v1
      || dword_6FBB84F0 == v1
      || dword_6FBB84F4 == v1
      || dword_6FBB84F8 == v1
      || dword_6FBB84FC == v1 )
    {
      v10 = (int)(&v17)[v1];
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      sub_6F759390(&v12, v10);
      sub_6F69AA00((char *)&dword_6FBBFCE0[4 * v1], (int)&v12, 1);
      if ( v16 )
        free(v12);
    }
    v2 = v1 + 1;
    if ( dword_6FBB84DC[0] == v1 + 1
      || dword_6FBB84E0 == v2
      || dword_6FBB84E4 == v2
      || dword_6FBB84E8 == v2
      || dword_6FBB84EC == v2
      || dword_6FBB84F0 == v2
      || dword_6FBB84F4 == v2
      || dword_6FBB84F8 == v2
      || dword_6FBB84FC == v2 )
    {
      v9 = (int)(&v17)[v2];
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      sub_6F759390(&v12, v9);
      sub_6F69AA00((char *)&dword_6FBBFCE0[4 * v2], (int)&v12, 1);
      if ( v16 )
        free(v12);
    }
    v0 = v1 + 2;
  }
  while ( v0 != 9 );
  v17 = (void **)&unk_6FB419C0;
  v3 = (char *)&v17;
  v4 = (char *)&dword_6FBBFC00;
  v18 = &unk_6FB41900;
  v19 = &unk_6FB41840;
  v20 = &unk_6FB41780;
  v21 = &unk_6FB416A0;
  v22 = &unk_6FB415E0;
  v23 = &unk_6FB41500;
  v24 = &unk_6FB41400;
  v25 = &unk_6FB41340;
  v26 = &unk_6FB41260;
  v27 = &unk_6FB411A0;
  v28 = &unk_6FB410C0;
  v29 = &unk_6FB40FE0;
  v30 = &unk_6FB40F20;
  do
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)v3;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      sub_6F759390(&v12, v5);
      sub_6F69AA00(v4, (int)&v12, 0);
      if ( v16 )
        break;
      v3 += 4;
      v4 += 16;
      if ( &v31 == v3 )
        goto LABEL_41;
    }
    v3 += 4;
    v4 += 16;
    free(v12);
  }
  while ( &v31 != v3 );
LABEL_41:
  sub_6F695280(&v17, "RA2x");
  dword_70057FB4 = sub_6F72E3B0((int)&v17);
  if ( v17 != &v19 )
    j_free_1(v17);
  v6 = getpid();
  v7 = sub_6F7602D0();
  sub_6F751530((int)&unk_70055F00, 4096, "%s/%s/%i", v7, "edgbla", v6);
  return 0;
}
