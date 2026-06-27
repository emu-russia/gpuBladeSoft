int __stdcall sub_6F8EE8B0(int a1, int a2, int a3, int a4, int a5, _TBYTE a6)
{
  int v6; // ebx@1
  int v7; // edx@3
  char v8; // ST00_1@3
  void *v9; // esp@3
  int v10; // eax@4
  int v11; // eax@6
  signed int v12; // ebx@6
  unsigned int v13; // edx@6
  int v14; // esi@6
  unsigned int v15; // eax@6
  char v16; // ST00_1@6
  void *v17; // esp@6
  char v18; // al@6
  _BYTE *v19; // edi@6
  int (__stdcall *v20)(const void *, int, void *); // eax@8
  char *v21; // eax@11
  int v22; // ecx@12
  char *v23; // edx@12
  int v24; // ebx@13
  unsigned int v26; // eax@5
  void *v27; // esp@5
  unsigned int v28; // eax@19
  void *v29; // esp@19
  _BYTE *v30; // eax@19
  char v31; // cl@20
  signed int v32; // esi@20
  int v33; // ebx@20
  unsigned int v34; // eax@22
  void *v35; // esp@22
  signed int v36; // ST14_4@22
  double v37; // ST10_8@23
  int v38; // eax@23
  unsigned int v39; // eax@24
  void *v40; // esp@24
  double v41; // ST10_8@24
  unsigned int v42; // ST20_4@25
  char v43; // al@29
  char v44; // [sp+0h] [bp-78h]@4
  char v45; // [sp+0h] [bp-78h]@9
  char v46; // [sp+0h] [bp-78h]@23
  int v47; // [sp+2Ch] [bp-4Ch]@1
  int v48; // [sp+30h] [bp-48h]@1
  int v49; // [sp+34h] [bp-44h]@1
  _BYTE *v50; // [sp+38h] [bp-40h]@5
  int v51; // [sp+3Ch] [bp-3Ch]@3
  int v52; // [sp+48h] [bp-30h]@4
  int v53; // [sp+4Ch] [bp-2Ch]@4
  char v54; // [sp+50h] [bp-28h]@3

  v49 = a1;
  v47 = a2;
  v48 = sub_6F8BEE80(a3 + 108);
  v6 = *(_DWORD *)(a3 + 4);
  if ( v6 < 0 )
    LOBYTE(v6) = 6;
  sub_6F90A680(a3, (int)&v54, a5);
  v7 = *(_DWORD *)(a3 + 12) & 0x104;
  sub_6F8A13B0(0x50u, v8);
  v9 = alloca(80);
  v51 = ((unsigned int)&v47 + 3) & 0xFFFFFFF0;
  if ( v7 == 260 )
  {
    v53 = sub_6F937FA0();
    v37 = *(double *)&a6;
    v38 = sub_6F959F20((int)&v53, v51, 54, (int)&v54, SLOBYTE(v37));
    v52 = v38;
    if ( v38 > 53 )
    {
      v50 = (_BYTE *)(v38 + 1);
      v39 = 16 * ((unsigned int)(v38 + 28) >> 4);
      sub_6F8A13B0(v39, v46);
      v40 = alloca(v39);
      v51 = ((unsigned int)&v47 + 3) & 0xFFFFFFF0;
      v53 = sub_6F937FA0();
      v41 = *(double *)&a6;
      v52 = sub_6F959F20((int)&v53, v51, (int)v50, (int)&v54, SLOBYTE(v41));
    }
  }
  else
  {
    v53 = sub_6F937FA0();
    v10 = sub_6F959F20((int)&v53, v51, 54, (int)&v54, v6);
    v52 = v10;
    if ( v10 > 53 )
    {
      v50 = (_BYTE *)(v10 + 1);
      v26 = 16 * ((unsigned int)(v10 + 28) >> 4);
      sub_6F8A13B0(v26, v44);
      v27 = alloca(v26);
      v51 = ((unsigned int)&v47 + 3) & 0xFFFFFFF0;
      v53 = sub_6F937FA0();
      v52 = sub_6F959F20((int)&v53, v51, (int)v50, (int)&v54, v6);
    }
  }
  v11 = sub_6F95DC10(a3 + 108);
  v12 = v52;
  v13 = v11;
  v14 = v52;
  v15 = 16 * ((unsigned int)(v52 + 27) >> 4);
  sub_6F8A13B0(v15, v16);
  v17 = alloca(v15);
  v18 = *(_BYTE *)(v13 + 28);
  v19 = (_BYTE *)(((unsigned int)&v47 + 3) & 0xFFFFFFF0);
  v50 = (_BYTE *)(((unsigned int)&v47 + 3) & 0xFFFFFFF0);
  if ( v18 == 1 )
  {
    memcpy((void *)(((unsigned int)&v47 + 3) & 0xFFFFFFF0), (const void *)v51, v12);
  }
  else
  {
    if ( v18 )
    {
      v20 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v13 + 28);
      if ( v20 == sub_6F8C3630 )
      {
LABEL_9:
        memcpy((void *)(((unsigned int)&v47 + 3) & 0xFFFFFFF0), (const void *)v51, v12);
        v12 = v52;
        v14 = v52;
        goto LABEL_10;
      }
    }
    else
    {
      v42 = v13;
      sub_6F8C33B0(v13);
      v13 = v42;
      v20 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v42 + 28);
      if ( v20 == sub_6F8C3630 )
        goto LABEL_9;
    }
    ((void (__thiscall *)(unsigned int, int, int, unsigned int))v20)(
      v13,
      v51,
      v51 + v12,
      ((unsigned int)&v47 + 3) & 0xFFFFFFF0);
    v12 = v52;
    v14 = v52;
  }
LABEL_10:
  if ( !v12 )
  {
    if ( !*(_BYTE *)(v48 + 16) )
      goto LABEL_13;
    goto LABEL_18;
  }
  v21 = (char *)memchr((const void *)v51, 46, v12);
  if ( !v21 )
  {
    if ( !*(_BYTE *)(v48 + 16) )
      goto LABEL_13;
    if ( v12 > 2 )
    {
      v43 = *(_BYTE *)(v51 + 1);
      if ( v43 <= 57 && (unsigned __int8)(*(_BYTE *)(v51 + 2) - 48) <= 9u && v43 > 47 )
      {
        v23 = 0;
        goto LABEL_19;
      }
LABEL_13:
      v24 = *(_DWORD *)(a3 + 8);
      if ( v24 <= v14 )
        goto LABEL_14;
      goto LABEL_22;
    }
LABEL_18:
    v23 = 0;
    goto LABEL_19;
  }
  v22 = v48;
  v23 = &v19[(_DWORD)&v21[-v51]];
  *v23 = *(_BYTE *)(v48 + 36);
  if ( !*(_BYTE *)(v22 + 16) )
    goto LABEL_13;
LABEL_19:
  v28 = 16 * ((unsigned int)(2 * v12 + 27) >> 4);
  sub_6F8A13B0(v28, v45);
  v29 = alloca(v28);
  v30 = (_BYTE *)(((unsigned int)&v47 + 3) & 0xFFFFFFF0);
  if ( (*(_BYTE *)v51 - 43) & 0xFD )
  {
    v33 = ((unsigned int)&v47 + 3) & 0xFFFFFFF0;
    v32 = 0;
  }
  else
  {
    v31 = *v19;
    v32 = 1;
    v50 = v19 + 1;
    *v30 = v31;
    v52 = v12 - 1;
    v33 = (int)(v30 + 1);
  }
  v51 = ((unsigned int)&v47 + 3) & 0xFFFFFFF0;
  sub_6F8EE380(*(_DWORD *)(v48 + 8), *(_DWORD *)(v48 + 12), *(_BYTE *)(v48 + 37), v23, v33, (int)v50, (char **)&v52);
  v14 = v52 + v32;
  v52 = v14;
  v50 = (_BYTE *)v51;
  v24 = *(_DWORD *)(a3 + 8);
  if ( v24 <= v14 )
    goto LABEL_14;
LABEL_22:
  v34 = 16 * ((unsigned int)(v24 + 27) >> 4);
  sub_6F8A13B0(v34, v45);
  v35 = alloca(v34);
  v36 = v14;
  v14 = v24;
  sub_6F934AA0(a3, a4, (void *)(((unsigned int)&v47 + 3) & 0xFFFFFFF0), (int)v50, v24, v36);
  v52 = v24;
  v50 = (_BYTE *)(((unsigned int)&v47 + 3) & 0xFFFFFFF0);
LABEL_14:
  *(_DWORD *)(a3 + 8) = 0;
  if ( !(_BYTE)v47 )
    (*(int (__stdcall **)(int, int))(*(_DWORD *)v49 + 48))((int)v50, v14);
  return v49;
}
