int __thiscall sub_6F936510(void *this, void *a2, int a3)
{
  unsigned int v3; // esi@2
  unsigned int v4; // eax@3
  void *v5; // esi@3
  int v6; // edx@3
  bool v7; // cf@3
  int v8; // eax@3
  unsigned int v9; // ecx@5
  _DWORD *v10; // esi@6
  int v11; // ebx@6
  int v12; // eax@6
  char *v13; // eax@9
  int v14; // edx@9
  void *v15; // ebx@11
  _DWORD *v16; // eax@11
  unsigned int v17; // ebx@11
  int v18; // edx@12
  int v19; // esi@12
  char *v20; // edx@15
  int v21; // ecx@15
  _DWORD *v22; // edx@17
  void *v23; // ebx@17
  void *v24; // edi@17
  int *v25; // eax@21
  int v26; // eax@21
  void *v27; // ecx@22
  bool v28; // zf@22
  int v29; // eax@24
  int v30; // eax@26
  void *v31; // ecx@27
  int v32; // eax@27
  _DWORD *v33; // eax@27
  int v34; // ecx@27
  void *v35; // eax@28
  _DWORD *v36; // eax@28
  int v37; // ecx@28
  int v38; // eax@35
  int v39; // ecx@38
  void (*v40)(void); // eax@40
  void (__thiscall *v42)(int); // edx@32
  void *v43; // ecx@45
  int v44; // eax@45
  _DWORD *v45; // eax@45
  int v46; // edx@45
  void *v47; // eax@46
  _DWORD *v48; // eax@46
  int v49; // ecx@46
  void (*v50)(void); // eax@29
  void (*v51)(void); // eax@47
  int v52; // [sp+0h] [bp-9Ch]@1
  int v53; // [sp+4h] [bp-98h]@28
  unsigned int v54; // [sp+14h] [bp-88h]@35
  char *v55; // [sp+18h] [bp-84h]@1
  void *v56; // [sp+1Ch] [bp-80h]@1
  unsigned int v57; // [sp+20h] [bp-7Ch]@2
  unsigned int v58; // [sp+24h] [bp-78h]@36
  int *v59; // [sp+28h] [bp-74h]@21
  _DWORD *v60; // [sp+2Ch] [bp-70h]@5
  void *v61; // [sp+30h] [bp-6Ch]@5
  int v62; // [sp+34h] [bp-68h]@5
  void *v63; // [sp+38h] [bp-64h]@11
  _DWORD *v64; // [sp+3Ch] [bp-60h]@27
  _DWORD *v65; // [sp+40h] [bp-5Ch]@45
  _DWORD *v66; // [sp+44h] [bp-58h]@28
  _DWORD *v67; // [sp+48h] [bp-54h]@46
  char v68; // [sp+4Ch] [bp-50h]@1
  int v69; // [sp+50h] [bp-4Ch]@3
  int (__cdecl *v70)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-38h]@1
  int *v71; // [sp+68h] [bp-34h]@1
  char *v72; // [sp+6Ch] [bp-30h]@1
  int (__cdecl *v73)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); // [sp+70h] [bp-2Ch]@1
  int *v74; // [sp+74h] [bp-28h]@1
  char v75; // [sp+80h] [bp-1Ch]@1

  v56 = this;
  v72 = &v75;
  v70 = sub_6F962A50;
  v71 = dword_6F96AACC;
  v73 = sub_6F936927;
  v74 = &v52;
  v55 = &v68;
  sub_6F8A1A60((int *)&v68);
  if ( !a3 )
    return sub_6F8A1AD0((int *)v55);
  v3 = sub_6F8C3BF0(a2);
  v57 = v3;
  v55 = (char *)*((_DWORD *)v56 + 2);
  if ( (unsigned int)(v55 - 1) < v3 )
  {
    v4 = v3 + 4;
    v5 = (void *)*((_DWORD *)v56 + 1);
    v69 = -1;
    v6 = 4 * v4;
    v7 = v4 < 0x20000000;
    v55 = (char *)v4;
    v8 = -1;
    if ( v7 )
      v8 = v6;
    v61 = v5;
    v62 = v8;
    v60 = sub_6F961B40(v8);
    v9 = *((_DWORD *)v56 + 2);
    if ( v9 )
    {
      v10 = v60;
      v11 = *((_DWORD *)v56 + 1);
      v12 = 0;
      do
      {
        v10[v12] = *(_DWORD *)(v11 + 4 * v12);
        ++v12;
      }
      while ( v12 != v9 );
    }
    if ( (unsigned int)v55 > v9 )
    {
      v13 = (char *)&v60[v9];
      v14 = (int)&v60[v57 + 4];
      do
      {
        *(_DWORD *)v13 = 0;
        v13 += 4;
      }
      while ( (char *)v14 != v13 );
    }
    v15 = (void *)*((_DWORD *)v56 + 3);
    v69 = 1;
    v63 = v15;
    v16 = sub_6F961B40(v62);
    v17 = *((_DWORD *)v56 + 2);
    if ( v17 )
    {
      v18 = 0;
      v19 = *((_DWORD *)v56 + 3);
      do
      {
        v16[v18] = *(_DWORD *)(v19 + 4 * v18);
        ++v18;
      }
      while ( v18 != v17 );
    }
    if ( (unsigned int)v55 > v17 )
    {
      v20 = (char *)&v16[v17];
      v21 = (int)&v16[v57 + 4];
      do
      {
        *(_DWORD *)v20 = 0;
        v20 += 4;
      }
      while ( (char *)v21 != v20 );
    }
    v22 = v56;
    v23 = v61;
    *((_DWORD *)v56 + 2) = v55;
    v24 = v60;
    v22[3] = v16;
    v22[1] = v24;
    if ( v23 )
      j_j_free_1(v61);
    if ( v63 )
      j_j_free_1(v63);
  }
  _InterlockedAdd((volatile signed __int32 *)(a3 + 4), 1u);
  v25 = (int *)(*((_DWORD *)v56 + 1) + 4 * v57);
  v59 = v25;
  v26 = *v25;
  if ( !v26 )
  {
    *v59 = a3;
    goto LABEL_34;
  }
  v27 = &unk_6FB49FD8;
  v28 = &unk_6FB49FD8 == 0;
  if ( !&unk_6FB49FD8 )
    goto LABEL_31;
  v55 = (char *)&off_6FBAB860;
  while ( 1 )
  {
    v30 = sub_6F8C3BF0(v27);
    if ( v30 == v57 )
    {
      v31 = (void *)*((_DWORD *)v55 + 1);
      v57 = *((_DWORD *)v56 + 1);
      v32 = sub_6F8C3BF0(v31);
      v33 = (_DWORD *)(v57 + 4 * v32);
      v34 = *v33;
      v64 = v33;
      v28 = v34 == 0;
      if ( v34 )
      {
        v35 = (void *)*((_DWORD *)v55 + 1);
        v69 = -1;
        v36 = sub_6F8C4EF0((void *)a3, v35);
        v28 = &v53 == 0;
        v66 = v36;
        _InterlockedAdd(v36 + 1, 1u);
        v37 = *v64;
        _InterlockedSub((volatile signed __int32 *)(*v64 + 4), 1u);
        if ( !&v53 )
        {
          v50 = *(void (**)(void))(*(_DWORD *)v37 + 4);
          v69 = 4;
          v50();
        }
        *v64 = v66;
        v26 = *v59;
        goto LABEL_31;
      }
LABEL_43:
      v26 = *v59;
      goto LABEL_31;
    }
    v29 = sub_6F8C3BF0(*((void **)v55 + 1));
    if ( v29 == v57 )
      break;
    v55 += 8;
    v27 = *(void **)v55;
    v28 = *(_DWORD *)v55 == 0;
    if ( !*(_DWORD *)v55 )
      goto LABEL_43;
  }
  v43 = *(void **)v55;
  v57 = *((_DWORD *)v56 + 1);
  v44 = sub_6F8C3BF0(v43);
  v45 = (_DWORD *)(v57 + 4 * v44);
  v46 = *v45;
  v65 = v45;
  v28 = v46 == 0;
  if ( !v46 )
    goto LABEL_43;
  v47 = *(void **)v55;
  v69 = -1;
  v48 = sub_6F8C4440((void *)a3, v47);
  v28 = &v53 == 0;
  v67 = v48;
  _InterlockedAdd(v48 + 1, 1u);
  v49 = *v65;
  _InterlockedSub((volatile signed __int32 *)(*v65 + 4), 1u);
  if ( !&v53 )
  {
    v51 = *(void (**)(void))(*(_DWORD *)v49 + 4);
    v69 = 6;
    v51();
  }
  *v65 = v67;
  v26 = *v59;
LABEL_31:
  _InterlockedSub((volatile signed __int32 *)(v26 + 4), 1u);
  if ( v28 )
  {
    v42 = *(void (__thiscall **)(int))(*(_DWORD *)v26 + 4);
    v69 = 8;
    v42(v26);
  }
  *v59 = a3;
LABEL_34:
  if ( *((_DWORD *)v56 + 2) )
  {
    v54 = 0;
    v38 = *((_DWORD *)v56 + 3);
    do
    {
      v39 = *(_DWORD *)(v38 + 4 * v54);
      v58 = 4 * v54;
      if ( v39 )
      {
        _InterlockedSub((volatile signed __int32 *)(v39 + 4), 1u);
        if ( !v39 )
        {
          v40 = *(void (**)(void))(v0 + 4);
          v69 = 10;
          v40();
        }
        v38 = *((_DWORD *)v56 + 3);
        *(_DWORD *)(v38 + v58) = 0;
      }
      ++v54;
    }
    while ( *((_DWORD *)v56 + 2) > v54 );
  }
  v55 = &v68;
  return sub_6F8A1AD0((int *)v55);
}
