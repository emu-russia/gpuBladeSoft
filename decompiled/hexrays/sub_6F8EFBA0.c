int __thiscall sub_6F8EFBA0(void *this, int a2, int a3, int a4, int a5, int a6, double a7)
{
  int v7; // ebx@1
  int v8; // edx@3
  char v9; // ST0C_1@3
  void *v10; // esp@3
  int v11; // eax@4
  int v12; // edx@6
  unsigned int v13; // eax@6
  char v14; // ST0C_1@6
  void *v15; // esp@6
  int v16; // ecx@6
  __int16 *v17; // edi@6
  int v18; // esi@6
  int v19; // ebx@6
  void *v20; // eax@7
  char v21; // cl@7
  __int16 *v22; // edx@8
  int v23; // edi@9
  char v24; // di@10
  unsigned int v26; // eax@5
  void *v27; // esp@5
  unsigned int v28; // eax@16
  void *v29; // esp@16
  _WORD *v30; // eax@16
  __int16 v31; // cx@17
  int v32; // edi@17
  signed int v33; // ebx@17
  unsigned int v34; // eax@19
  void *v35; // esp@19
  signed int v36; // ST20_4@19
  double v37; // ST1C_8@20
  int v38; // eax@20
  unsigned int v39; // eax@21
  void *v40; // esp@21
  double v41; // ST1C_8@21
  char v42; // al@24
  char v43; // [sp+Ch] [bp-88h]@4
  char v44; // [sp+Ch] [bp-88h]@6
  char v45; // [sp+Ch] [bp-88h]@20
  char v46; // [sp+37h] [bp-5Dh]@3
  int v47; // [sp+38h] [bp-5Ch]@5
  int v48; // [sp+3Ch] [bp-58h]@1
  void *v49; // [sp+40h] [bp-54h]@1
  double v50; // [sp+44h] [bp-50h]@1
  int v51; // [sp+4Ch] [bp-48h]@1
  int v52; // [sp+50h] [bp-44h]@1
  int v53; // [sp+54h] [bp-40h]@1
  int v54; // [sp+58h] [bp-3Ch]@3
  int v55; // [sp+64h] [bp-30h]@4
  int v56; // [sp+68h] [bp-2Ch]@4
  char v57; // [sp+6Ch] [bp-28h]@3

  v49 = this;
  v52 = a2;
  v50 = a7;
  v51 = a3;
  v48 = a5;
  v53 = sub_6F8BF000(a4 + 108);
  v7 = *(_DWORD *)(a4 + 4);
  if ( v7 < 0 )
    LOBYTE(v7) = 6;
  sub_6F90A680(a4, (int)&v57, a6);
  v8 = *(_DWORD *)(a4 + 12) & 0x104;
  sub_6F8A13B0(0x40u, v9);
  v10 = alloca(64);
  v54 = (unsigned int)&v46 & 0xFFFFFFF0;
  if ( v8 == 260 )
  {
    v56 = sub_6F937FA0();
    v37 = v50;
    v38 = sub_6F959F20((int)&v56, v54, 45, (int)&v57, SLOBYTE(v37));
    v55 = v38;
    if ( v38 > 44 )
    {
      v47 = v38 + 1;
      v39 = 16 * ((unsigned int)(v38 + 28) >> 4);
      sub_6F8A13B0(v39, v45);
      v40 = alloca(v39);
      v54 = (unsigned int)&v46 & 0xFFFFFFF0;
      v56 = sub_6F937FA0();
      v41 = v50;
      v55 = sub_6F959F20((int)&v56, v54, v47, (int)&v57, SLOBYTE(v41));
    }
  }
  else
  {
    v56 = sub_6F937FA0();
    v11 = sub_6F959F20((int)&v56, v54, 45, (int)&v57, v7);
    v55 = v11;
    if ( v11 > 44 )
    {
      v47 = v11 + 1;
      v26 = 16 * ((unsigned int)(v11 + 28) >> 4);
      sub_6F8A13B0(v26, v43);
      v27 = alloca(v26);
      v54 = (unsigned int)&v46 & 0xFFFFFFF0;
      v56 = sub_6F937FA0();
      v55 = sub_6F959F20((int)&v56, v54, v47, (int)&v57, v7);
    }
  }
  sub_6F95DC70(a4 + 108);
  v12 = v55;
  v13 = 16 * ((unsigned int)(2 * v55 + 27) >> 4);
  sub_6F8A13B0(v13, v14);
  v15 = alloca(v13);
  v17 = (__int16 *)((unsigned int)&v46 & 0xFFFFFFF0);
  v18 = (unsigned int)&v46 & 0xFFFFFFF0;
  (*(void (__stdcall **)(int, int, unsigned int))(*(_DWORD *)v16 + 44))(v54, v54 + v12, (unsigned int)&v46 & 0xFFFFFFF0);
  v19 = v55;
  if ( !v55 )
  {
    if ( !*(_BYTE *)(v53 + 16) )
      goto LABEL_9;
    goto LABEL_15;
  }
  v20 = memchr((const void *)v54, 46, v55);
  v21 = *(_BYTE *)(v53 + 16);
  if ( v20 )
  {
    v22 = &v17[(unsigned int)v20 - v54];
    *v22 = *(_WORD *)(v53 + 36);
    if ( !v21 )
      goto LABEL_9;
LABEL_16:
    v28 = 16 * ((unsigned int)(4 * v19 + 27) >> 4);
    sub_6F8A13B0(v28, v44);
    v29 = alloca(v28);
    v30 = (_WORD *)((unsigned int)&v46 & 0xFFFFFFF0);
    if ( (*(_BYTE *)v54 - 43) & 0xFD )
    {
      v32 = (unsigned int)&v46 & 0xFFFFFFF0;
      v33 = 0;
    }
    else
    {
      v31 = *v17;
      v18 = (int)(v17 + 1);
      v32 = (int)(v30 + 1);
      v55 = v19 - 1;
      v33 = 1;
      *v30 = v31;
    }
    v54 = (unsigned int)&v46 & 0xFFFFFFF0;
    sub_6F8EFAD0(*(_DWORD *)(v53 + 8), *(_DWORD *)(v53 + 12), *(_WORD *)(v53 + 38), v22, v32, v18, &v55);
    v19 = v55 + v33;
    v55 = v19;
    v18 = v54;
    v23 = *(_DWORD *)(a4 + 8);
    if ( v23 <= v19 )
      goto LABEL_10;
    goto LABEL_19;
  }
  if ( v21 )
  {
    if ( v19 > 2 )
    {
      v42 = *(_BYTE *)(v54 + 1);
      if ( v42 <= 57 )
      {
        LOBYTE(v50) = *(_BYTE *)(v54 + 2);
        if ( (unsigned __int8)(LOBYTE(v50) - 48) <= 9u && v42 > 47 )
        {
          v22 = 0;
          goto LABEL_16;
        }
      }
      goto LABEL_9;
    }
LABEL_15:
    v22 = 0;
    goto LABEL_16;
  }
LABEL_9:
  v23 = *(_DWORD *)(a4 + 8);
  if ( v23 > v19 )
  {
LABEL_19:
    v34 = 16 * ((unsigned int)(2 * v23 + 27) >> 4);
    sub_6F8A13B0(v34, v44);
    v35 = alloca(v34);
    v36 = v19;
    v19 = v23;
    v54 = (unsigned int)&v46 & 0xFFFFFFF0;
    sub_6F934DA0(a4, v48, (void *)((unsigned int)&v46 & 0xFFFFFFF0), v18, v23, v36);
    v55 = v23;
    v18 = v54;
  }
LABEL_10:
  *(_DWORD *)(a4 + 8) = 0;
  v24 = v51;
  if ( !(_BYTE)v51 && v19 != (*(int (__stdcall **)(int, int))(*(_DWORD *)v52 + 48))(v18, v19) )
    v24 = 1;
  LOBYTE(v54) = v24;
  return v52;
}
