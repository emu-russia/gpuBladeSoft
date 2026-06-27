int __stdcall sub_6F8CC520(int a1, int a2, int a3, int a4, int *a5, int a6, unsigned int a7, int a8, _DWORD *a9)
{
  unsigned int v9; // eax@1
  char v10; // ST04_1@1
  void *v11; // esp@1
  char v12; // dl@1
  bool v13; // bl@2
  unsigned int v14; // edi@5
  unsigned int v15; // esi@5
  unsigned __int8 v16; // dl@6
  bool v17; // bl@8
  unsigned int v18; // edx@15
  unsigned int *v19; // ecx@18
  int v20; // edi@19
  unsigned int v21; // eax@22
  char *v23; // eax@33
  int v24; // eax@39
  int v25; // ebx@45
  char v26; // al@46
  int v27; // ecx@48
  unsigned int v28; // eax@51
  unsigned int v29; // eax@53
  int v30; // edi@53
  void *v31; // esp@53
  int *v32; // ebx@53
  int v33; // eax@59
  int v34; // eax@59
  int v35; // eax@61
  char v36; // cl@61
  bool v37; // zf@61
  int v38; // eax@61
  int v39; // eax@65
  bool v40; // zf@65
  int v41; // eax@65
  int v42; // eax@69
  bool v43; // zf@69
  char v44; // bl@69
  int v45; // eax@71
  _BYTE *v46; // eax@74
  int v47; // eax@77
  int v48; // eax@77
  bool v49; // zf@77
  int v50; // eax@77
  int v51; // edi@81
  char v52; // si@81
  int v53; // eax@81
  bool v54; // zf@81
  int v55; // eax@83
  char v56; // [sp+4h] [bp-58h]@1
  char v57; // [sp+17h] [bp-45h]@1
  unsigned int v58; // [sp+1Ch] [bp-40h]@5
  int v59; // [sp+20h] [bp-3Ch]@1
  int v60; // [sp+24h] [bp-38h]@1
  int v61; // [sp+28h] [bp-34h]@1
  bool v62; // [sp+2Eh] [bp-2Eh]@2
  char v63; // [sp+2Fh] [bp-2Dh]@13
  int v64; // [sp+30h] [bp-2Ch]@15
  int *v65; // [sp+34h] [bp-28h]@1
  int *v66; // [sp+38h] [bp-24h]@1
  unsigned int v67; // [sp+3Ch] [bp-20h]@15
  unsigned int v68; // [sp+40h] [bp-1Ch]@1

  v61 = a1;
  v60 = a2;
  v59 = a3;
  v66 = (int *)sub_6F95DC10(a8 + 108);
  v9 = 16 * ((8 * a7 + 27) >> 4);
  sub_6F8A13B0(v9, v10);
  v11 = alloca(v9);
  v65 = (int *)((unsigned int)&v57 & 0xFFFFFFF0);
  v12 = a2 == -1;
  LOBYTE(v68) = v12 & (a1 != 0);
  if ( (_BYTE)v68 )
  {
    v12 = 0;
    if ( *(_DWORD *)(v61 + 8) >= *(_DWORD *)(v61 + 12) )
    {
      v33 = *(_DWORD *)v61;
      LOBYTE(v67) = 0;
      v34 = (*(int (__thiscall **)(int))(v33 + 36))(v61);
      v12 = v67;
      if ( v34 == -1 )
      {
        v12 = v68;
        v61 = 0;
        LOBYTE(v68) = 0;
      }
    }
  }
  v62 = a4 == -1;
  v13 = v62 && a3 != 0;
  if ( v13 )
  {
    if ( *(_DWORD *)(a3 + 8) >= *(_DWORD *)(a3 + 12) )
    {
      v47 = *(_DWORD *)a3;
      LOBYTE(v67) = v12;
      v48 = (*(int (__thiscall **)(int))(v47 + 36))(a3);
      v12 = v67;
      v49 = v48 == -1;
      v50 = 0;
      if ( !v49 )
      {
        v50 = a3;
        if ( !v49 )
          v13 = 0;
      }
      v59 = v50;
    }
    else
    {
      v13 = 0;
    }
  }
  else
  {
    v13 = v62;
  }
  if ( v12 == v13 )
  {
    v58 = 0;
    v14 = 0;
    v15 = 0;
    goto LABEL_6;
  }
  if ( (_BYTE)v68 )
  {
    v46 = *(_BYTE **)(v61 + 8);
    if ( (unsigned int)v46 >= *(_DWORD *)(v61 + 12) )
    {
      v51 = v61;
      v52 = -1;
      v53 = (*(int (__thiscall **)(int))(*(_DWORD *)v61 + 36))(v61);
      v54 = v53 == -1;
      if ( v53 != -1 )
        v52 = v53;
      v55 = 0;
      if ( !v54 )
        v55 = v51;
      LOBYTE(v68) = v52;
      v61 = v55;
    }
    else
    {
      LOBYTE(v68) = *v46;
    }
  }
  else
  {
    LOBYTE(v68) = a2;
  }
  v14 = 2 * a7;
  if ( !(2 * a7) )
  {
    v15 = 0;
    v58 = 0;
    goto LABEL_6;
  }
  v67 = 2 * a7;
  v25 = 0;
  v15 = 0;
  do
  {
    while ( 1 )
    {
      v27 = **(_BYTE **)(a6 + 4 * v25);
      if ( (_BYTE)v27 == (_BYTE)v68 )
        break;
      v26 = (*(int (__thiscall **)(int, int))(*v66 + 8))((int)v66, v27);
      if ( v26 == (_BYTE)v68 )
        break;
      if ( ++v25 == v67 )
        goto LABEL_50;
    }
    v65[v15++] = v25++;
  }
  while ( v25 != v67 );
LABEL_50:
  v14 = 0;
  v58 = 0;
  if ( v15 )
  {
    v28 = *(_DWORD *)(v61 + 8);
    if ( v28 >= *(_DWORD *)(v61 + 12) )
      (*(void (**)(void))(*(_DWORD *)v61 + 40))();
    else
      *(_DWORD *)(v61 + 8) = v28 + 1;
    v29 = 16 * ((4 * v15 + 27) >> 4);
    sub_6F8A13B0(v29, v56);
    v30 = 0;
    v31 = alloca(v29);
    v68 = v15;
    v58 = (unsigned int)&v57 & 0xFFFFFFF0;
    v67 = (unsigned int)&v57 & 0xFFFFFFF0;
    v32 = v65;
    do
    {
      *(_DWORD *)(v67 + 4 * v30) = strlen(*(const char **)(a6 + 4 * v32[v30]));
      ++v30;
    }
    while ( v68 != v30 );
    v15 = v68;
    v60 = -1;
    v14 = 1;
  }
LABEL_6:
  while ( 2 )
  {
    v16 = v60 == -1;
    LOBYTE(v68) = v16 & (v61 != 0);
    if ( v16 & (v61 != 0) )
    {
      if ( *(_DWORD *)(v61 + 8) >= *(_DWORD *)(v61 + 12) )
      {
        LOBYTE(v67) = v60 == -1;
        v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v61 + 36))(v61);
        v36 = v68;
        v16 = v67;
        v37 = v35 == -1;
        v38 = 0;
        if ( !v37 )
        {
          v38 = v61;
          if ( !v37 )
            v36 = 0;
        }
        v61 = v38;
        LOBYTE(v68) = v36;
      }
      else
      {
        LOBYTE(v68) = 0;
      }
    }
    else
    {
      LOBYTE(v68) = v60 == -1;
    }
    v17 = v62 && v59 != 0;
    if ( v62 && v59 != 0 )
    {
      if ( *(_DWORD *)(v59 + 8) < *(_DWORD *)(v59 + 12) )
      {
        if ( !(_BYTE)v68 )
          break;
        goto LABEL_11;
      }
      LOBYTE(v67) = v16;
      v39 = (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 36))(v59);
      v16 = v67;
      v40 = v39 == -1;
      v41 = 0;
      if ( !v40 )
      {
        v41 = v59;
        if ( !v40 )
          v17 = 0;
      }
      v59 = v41;
    }
    else
    {
      v17 = v62;
    }
    if ( v17 == (_BYTE)v68 )
      break;
LABEL_11:
    if ( v61 && v16 )
    {
      v23 = *(char **)(v61 + 8);
      if ( (unsigned int)v23 >= *(_DWORD *)(v61 + 12) )
      {
        v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v61 + 36))(v61);
        v43 = v42 == -1;
        v44 = -1;
        if ( v42 != -1 )
          v44 = v42;
        v45 = 0;
        if ( !v43 )
          v45 = v61;
        v63 = v44;
        v61 = v45;
      }
      else
      {
        v63 = *v23;
      }
    }
    else
    {
      v63 = v60;
    }
    if ( !v15 )
    {
LABEL_30:
      *a9 |= 4u;
      return v61;
    }
    v18 = 0;
    v68 = v14;
    v64 = 0;
    v67 = v58;
    do
    {
      while ( 1 )
      {
        v19 = (unsigned int *)(4 * v18 + v67);
        if ( *v19 > v68 )
          break;
        ++v64;
        ++v18;
LABEL_17:
        if ( v18 >= v15 )
          goto LABEL_21;
      }
      v20 = v65[v18];
      v66 = &v65[v18];
      if ( *(_BYTE *)(*(_DWORD *)(a6 + 4 * v20) + v68) == v63 )
      {
        ++v18;
        goto LABEL_17;
      }
      *v66 = v65[--v15];
      *v19 = *(_DWORD *)(v67 + 4 * v15);
    }
    while ( v18 < v15 );
LABEL_21:
    v14 = v68;
    if ( v64 != v15 )
    {
      v21 = *(_DWORD *)(v61 + 8);
      if ( v21 >= *(_DWORD *)(v61 + 12) )
        (*(void (**)(void))(*(_DWORD *)v61 + 40))();
      else
        *(_DWORD *)(v61 + 8) = v21 + 1;
      ++v14;
      v60 = -1;
      continue;
    }
    break;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 2 && (*(_DWORD *)v58 == v14 || *(_DWORD *)(v58 + 4) == v14) )
      goto LABEL_39;
    goto LABEL_30;
  }
  if ( *(_DWORD *)v58 != v14 )
    goto LABEL_30;
LABEL_39:
  v24 = *v65;
  if ( *v65 >= a7 )
    v24 = *v65 - a7;
  *a5 = v24;
  return v61;
}
