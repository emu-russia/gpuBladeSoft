int __fastcall sub_6F8EFF80(int a1, int a2, int a3, int a4, int a5, int a6, int a7, _TBYTE a8)
{
  int v8; // ebx@1
  int v9; // edx@3
  char v10; // ST0C_1@3
  void *v11; // esp@3
  int v12; // eax@4
  int v13; // edx@6
  unsigned int v14; // eax@6
  char v15; // ST0C_1@6
  void *v16; // esp@6
  int v17; // ecx@6
  __int16 *v18; // edi@6
  int v19; // esi@6
  int v20; // ebx@6
  void *v21; // eax@7
  char v22; // cl@7
  __int16 *v23; // edx@8
  int v24; // edi@9
  char v25; // di@10
  int v27; // ST30_4@5
  unsigned int v28; // eax@5
  void *v29; // esp@5
  unsigned int v30; // eax@16
  void *v31; // esp@16
  _WORD *v32; // eax@16
  __int16 v33; // cx@17
  int v34; // edi@17
  signed int v35; // ebx@17
  unsigned int v36; // eax@19
  void *v37; // esp@19
  signed int v38; // ST20_4@19
  double v39; // ST1C_8@20
  int v40; // eax@20
  int v41; // ST30_4@21
  unsigned int v42; // eax@21
  void *v43; // esp@21
  double v44; // ST1C_8@21
  char v45; // al@24
  char v46; // [sp+Ch] [bp-78h]@4
  char v47; // [sp+Ch] [bp-78h]@6
  char v48; // [sp+Ch] [bp-78h]@20
  int v49; // [sp+38h] [bp-4Ch]@1
  int v50; // [sp+3Ch] [bp-48h]@1
  int v51; // [sp+40h] [bp-44h]@1
  int v52; // [sp+44h] [bp-40h]@1
  int v53; // [sp+48h] [bp-3Ch]@3
  int v54; // [sp+54h] [bp-30h]@4
  int v55; // [sp+58h] [bp-2Ch]@4
  char v56; // [sp+5Ch] [bp-28h]@3

  v49 = a1;
  v51 = a3;
  v50 = a4;
  v52 = sub_6F8BF000(a5 + 108);
  v8 = *(_DWORD *)(a5 + 4);
  if ( v8 < 0 )
    LOBYTE(v8) = 6;
  sub_6F90A680(a5, (int)&v56, a7);
  v9 = *(_DWORD *)(a5 + 12) & 0x104;
  sub_6F8A13B0(0x50u, v10);
  v11 = alloca(80);
  v53 = ((unsigned int)&v49 + 3) & 0xFFFFFFF0;
  if ( v9 == 260 )
  {
    v55 = sub_6F937FA0();
    v39 = *(double *)&a8;
    v40 = sub_6F959F20((int)&v55, v53, 54, (int)&v56, SLOBYTE(v39));
    v54 = v40;
    if ( v40 > 53 )
    {
      v41 = v40 + 1;
      v42 = 16 * ((unsigned int)(v40 + 28) >> 4);
      sub_6F8A13B0(v42, v48);
      v43 = alloca(v42);
      v53 = ((unsigned int)&v49 + 3) & 0xFFFFFFF0;
      v55 = sub_6F937FA0();
      v44 = *(double *)&a8;
      v54 = sub_6F959F20((int)&v55, v53, v41, (int)&v56, SLOBYTE(v44));
    }
  }
  else
  {
    v55 = sub_6F937FA0();
    v12 = sub_6F959F20((int)&v55, v53, 54, (int)&v56, v8);
    v54 = v12;
    if ( v12 > 53 )
    {
      v27 = v12 + 1;
      v28 = 16 * ((unsigned int)(v12 + 28) >> 4);
      sub_6F8A13B0(v28, v46);
      v29 = alloca(v28);
      v53 = ((unsigned int)&v49 + 3) & 0xFFFFFFF0;
      v55 = sub_6F937FA0();
      v54 = sub_6F959F20((int)&v55, v53, v27, (int)&v56, v8);
    }
  }
  sub_6F95DC70(a5 + 108);
  v13 = v54;
  v14 = 16 * ((unsigned int)(2 * v54 + 27) >> 4);
  sub_6F8A13B0(v14, v15);
  v16 = alloca(v14);
  v18 = (__int16 *)(((unsigned int)&v49 + 3) & 0xFFFFFFF0);
  v19 = ((unsigned int)&v49 + 3) & 0xFFFFFFF0;
  (*(void (__stdcall **)(int, int, unsigned int))(*(_DWORD *)v17 + 44))(
    v53,
    v53 + v13,
    ((unsigned int)&v49 + 3) & 0xFFFFFFF0);
  v20 = v54;
  if ( !v54 )
  {
    if ( !*(_BYTE *)(v52 + 16) )
      goto LABEL_9;
    goto LABEL_15;
  }
  v21 = memchr((const void *)v53, 46, v54);
  v22 = *(_BYTE *)(v52 + 16);
  if ( v21 )
  {
    v23 = &v18[(unsigned int)v21 - v53];
    *v23 = *(_WORD *)(v52 + 36);
    if ( !v22 )
      goto LABEL_9;
LABEL_16:
    v30 = 16 * ((unsigned int)(4 * v20 + 27) >> 4);
    sub_6F8A13B0(v30, v47);
    v31 = alloca(v30);
    v32 = (_WORD *)(((unsigned int)&v49 + 3) & 0xFFFFFFF0);
    if ( (*(_BYTE *)v53 - 43) & 0xFD )
    {
      v34 = ((unsigned int)&v49 + 3) & 0xFFFFFFF0;
      v35 = 0;
    }
    else
    {
      v33 = *v18;
      v19 = (int)(v18 + 1);
      v34 = (int)(v32 + 1);
      v54 = v20 - 1;
      v35 = 1;
      *v32 = v33;
    }
    v53 = ((unsigned int)&v49 + 3) & 0xFFFFFFF0;
    sub_6F8EFAD0(*(_DWORD *)(v52 + 8), *(_DWORD *)(v52 + 12), *(_WORD *)(v52 + 38), v23, v34, v19, &v54);
    v20 = v54 + v35;
    v54 = v20;
    v19 = v53;
    v24 = *(_DWORD *)(a5 + 8);
    if ( v24 <= v20 )
      goto LABEL_10;
    goto LABEL_19;
  }
  if ( v22 )
  {
    if ( v20 > 2 )
    {
      v45 = *(_BYTE *)(v53 + 1);
      if ( v45 <= 57 && (unsigned __int8)(*(_BYTE *)(v53 + 2) - 48) <= 9u && v45 > 47 )
      {
        v23 = 0;
        goto LABEL_16;
      }
      goto LABEL_9;
    }
LABEL_15:
    v23 = 0;
    goto LABEL_16;
  }
LABEL_9:
  v24 = *(_DWORD *)(a5 + 8);
  if ( v24 > v20 )
  {
LABEL_19:
    v36 = 16 * ((unsigned int)(2 * v24 + 27) >> 4);
    sub_6F8A13B0(v36, v47);
    v37 = alloca(v36);
    v38 = v20;
    v20 = v24;
    v53 = ((unsigned int)&v49 + 3) & 0xFFFFFFF0;
    sub_6F934DA0(a5, a6, (void *)(((unsigned int)&v49 + 3) & 0xFFFFFFF0), v19, v24, v38);
    v54 = v24;
    v19 = v53;
  }
LABEL_10:
  *(_DWORD *)(a5 + 8) = 0;
  v25 = v50;
  if ( !(_BYTE)v50 && v20 != (*(int (__stdcall **)(int, int))(*(_DWORD *)v51 + 48))(v19, v20) )
    v25 = 1;
  LOBYTE(v53) = v25;
  return v51;
}
