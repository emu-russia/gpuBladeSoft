int __thiscall sub_6F8EE440(void *this, int a2, int a3, int a4, int a5, int a6, double a7)
{
  int v7; // ebx@1
  int v8; // edx@3
  char v9; // ST00_1@3
  void *v10; // esp@3
  int v11; // eax@4
  int v12; // eax@6
  signed int v13; // ebx@6
  unsigned int v14; // edx@6
  int v15; // esi@6
  unsigned int v16; // eax@6
  char v17; // ST00_1@6
  void *v18; // esp@6
  char v19; // al@6
  char *v20; // edi@6
  int (__stdcall *v21)(const void *, int, void *); // eax@8
  char *v22; // eax@11
  int v23; // ecx@12
  char *v24; // edx@12
  int v25; // ebx@13
  unsigned int v27; // eax@5
  void *v28; // esp@5
  unsigned int v29; // eax@19
  void *v30; // esp@19
  _BYTE *v31; // eax@19
  char v32; // cl@20
  signed int v33; // esi@20
  int v34; // ebx@20
  unsigned int v35; // eax@22
  void *v36; // esp@22
  signed int v37; // ST14_4@22
  double v38; // ST10_8@23
  int v39; // eax@23
  unsigned int v40; // eax@24
  void *v41; // esp@24
  double v42; // ST10_8@24
  char v43; // al@29
  char v44; // [sp+0h] [bp-88h]@4
  char v45; // [sp+0h] [bp-88h]@9
  char v46; // [sp+0h] [bp-88h]@23
  char v47; // [sp+2Bh] [bp-5Dh]@3
  int v48; // [sp+2Ch] [bp-5Ch]@5
  int v49; // [sp+30h] [bp-58h]@1
  void *v50; // [sp+34h] [bp-54h]@1
  int v51; // [sp+38h] [bp-50h]@1
  int v52; // [sp+3Ch] [bp-4Ch]@1
  double v53; // [sp+40h] [bp-48h]@1
  int v54; // [sp+48h] [bp-40h]@1
  int v55; // [sp+4Ch] [bp-3Ch]@3
  int v56; // [sp+58h] [bp-30h]@4
  int v57; // [sp+5Ch] [bp-2Ch]@4
  char v58; // [sp+60h] [bp-28h]@3

  v50 = this;
  v54 = a2;
  v53 = a7;
  v51 = a3;
  v49 = a5;
  v52 = sub_6F8BEE80(a4 + 108);
  v7 = *(_DWORD *)(a4 + 4);
  if ( v7 < 0 )
    LOBYTE(v7) = 6;
  sub_6F90A680(a4, (int)&v58, a6);
  v8 = *(_DWORD *)(a4 + 12) & 0x104;
  sub_6F8A13B0(0x40u, v9);
  v10 = alloca(64);
  v55 = (unsigned int)&v47 & 0xFFFFFFF0;
  if ( v8 == 260 )
  {
    v57 = sub_6F937FA0();
    v38 = v53;
    v39 = sub_6F959F20((int)&v57, v55, 45, (int)&v58, SLOBYTE(v38));
    v56 = v39;
    if ( v39 > 44 )
    {
      v48 = v39 + 1;
      v40 = 16 * ((unsigned int)(v39 + 28) >> 4);
      sub_6F8A13B0(v40, v46);
      v41 = alloca(v40);
      v55 = (unsigned int)&v47 & 0xFFFFFFF0;
      v57 = sub_6F937FA0();
      v42 = v53;
      v56 = sub_6F959F20((int)&v57, v55, v48, (int)&v58, SLOBYTE(v42));
    }
  }
  else
  {
    v57 = sub_6F937FA0();
    v11 = sub_6F959F20((int)&v57, v55, 45, (int)&v58, v7);
    v56 = v11;
    if ( v11 > 44 )
    {
      v48 = v11 + 1;
      v27 = 16 * ((unsigned int)(v11 + 28) >> 4);
      sub_6F8A13B0(v27, v44);
      v28 = alloca(v27);
      v55 = (unsigned int)&v47 & 0xFFFFFFF0;
      v57 = sub_6F937FA0();
      v56 = sub_6F959F20((int)&v57, v55, v48, (int)&v58, v7);
    }
  }
  v12 = sub_6F95DC10(a4 + 108);
  v13 = v56;
  v14 = v12;
  v15 = v56;
  v16 = 16 * ((unsigned int)(v56 + 27) >> 4);
  sub_6F8A13B0(v16, v17);
  v18 = alloca(v16);
  v19 = *(_BYTE *)(v14 + 28);
  v20 = (char *)((unsigned int)&v47 & 0xFFFFFFF0);
  LODWORD(v53) = (unsigned int)&v47 & 0xFFFFFFF0;
  if ( v19 == 1 )
  {
    memcpy((void *)((unsigned int)&v47 & 0xFFFFFFF0), (const void *)v55, v13);
  }
  else
  {
    if ( v19 )
    {
      v21 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v14 + 28);
      if ( v21 == sub_6F8C3630 )
      {
LABEL_9:
        memcpy((void *)((unsigned int)&v47 & 0xFFFFFFF0), (const void *)v55, v13);
        v13 = v56;
        v15 = v56;
        goto LABEL_10;
      }
    }
    else
    {
      v48 = v14;
      sub_6F8C33B0(v14);
      v14 = v48;
      v21 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v48 + 28);
      if ( v21 == sub_6F8C3630 )
        goto LABEL_9;
    }
    ((void (__thiscall *)(unsigned int, int, int, unsigned int))v21)(
      v14,
      v55,
      v55 + v13,
      (unsigned int)&v47 & 0xFFFFFFF0);
    v13 = v56;
    v15 = v56;
  }
LABEL_10:
  if ( !v13 )
  {
    if ( !*(_BYTE *)(v52 + 16) )
      goto LABEL_13;
    goto LABEL_18;
  }
  v22 = (char *)memchr((const void *)v55, 46, v13);
  if ( !v22 )
  {
    if ( !*(_BYTE *)(v52 + 16) )
      goto LABEL_13;
    if ( v13 > 2 )
    {
      v43 = *(_BYTE *)(v55 + 1);
      if ( v43 <= 57 )
      {
        LOBYTE(v48) = *(_BYTE *)(v55 + 2);
        if ( (unsigned __int8)(v48 - 48) <= 9u && v43 > 47 )
        {
          v24 = 0;
          goto LABEL_19;
        }
      }
LABEL_13:
      v25 = *(_DWORD *)(a4 + 8);
      if ( v25 <= v15 )
        goto LABEL_14;
      goto LABEL_22;
    }
LABEL_18:
    v24 = 0;
    goto LABEL_19;
  }
  v23 = v52;
  v24 = &v20[(_DWORD)&v22[-v55]];
  *v24 = *(_BYTE *)(v52 + 36);
  if ( !*(_BYTE *)(v23 + 16) )
    goto LABEL_13;
LABEL_19:
  v29 = 16 * ((unsigned int)(2 * v13 + 27) >> 4);
  sub_6F8A13B0(v29, v45);
  v30 = alloca(v29);
  v31 = (_BYTE *)((unsigned int)&v47 & 0xFFFFFFF0);
  if ( (*(_BYTE *)v55 - 43) & 0xFD )
  {
    v34 = (unsigned int)&v47 & 0xFFFFFFF0;
    v33 = 0;
  }
  else
  {
    v32 = *v20;
    v33 = 1;
    LODWORD(v53) = v20 + 1;
    *v31 = v32;
    v56 = v13 - 1;
    v34 = (int)(v31 + 1);
  }
  v55 = (unsigned int)&v47 & 0xFFFFFFF0;
  sub_6F8EE380(
    *(_DWORD *)(v52 + 8),
    *(_DWORD *)(v52 + 12),
    *(_BYTE *)(v52 + 37),
    v24,
    v34,
    SLODWORD(v53),
    (char **)&v56);
  v15 = v56 + v33;
  v56 = v15;
  LODWORD(v53) = v55;
  v25 = *(_DWORD *)(a4 + 8);
  if ( v25 <= v15 )
    goto LABEL_14;
LABEL_22:
  v35 = 16 * ((unsigned int)(v25 + 27) >> 4);
  sub_6F8A13B0(v35, v45);
  v36 = alloca(v35);
  v37 = v15;
  v15 = v25;
  sub_6F934AA0(a4, v49, (void *)((unsigned int)&v47 & 0xFFFFFFF0), SLODWORD(v53), v25, v37);
  v56 = v25;
  LODWORD(v53) = (unsigned int)&v47 & 0xFFFFFFF0;
LABEL_14:
  *(_DWORD *)(a4 + 8) = 0;
  if ( !(_BYTE)v51 )
    (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)v54 + 48))(LODWORD(v53), v15);
  return v54;
}
