int __stdcall sub_6F8CFA40(int a1, int a2, int a3, __int16 a4, int *a5, int a6, unsigned int a7, int a8, _DWORD *a9)
{
  unsigned int v9; // eax@1
  char v10; // ST04_1@1
  void *v11; // esp@1
  unsigned __int8 v12; // dl@1
  unsigned __int8 v13; // di@1
  bool v14; // bl@2
  int *v15; // esi@5
  unsigned int v16; // edi@5
  char v17; // dl@6
  bool v18; // bl@8
  unsigned int v19; // edx@14
  int v20; // eax@17
  unsigned int *v21; // ecx@17
  int v22; // ebx@18
  unsigned int v23; // eax@21
  __int16 *v24; // eax@25
  __int16 v25; // ax@26
  int v26; // ecx@27
  __int16 *v28; // eax@35
  __int16 v29; // ax@36
  int v30; // ecx@37
  __int16 *v31; // eax@42
  int v32; // eax@44
  int v33; // eax@51
  __int16 v34; // si@54
  int v35; // ebx@56
  int v36; // edx@56
  __int16 v37; // ax@57
  int v38; // ecx@59
  unsigned int v39; // eax@62
  unsigned int v40; // eax@64
  void *v41; // esp@64
  int v42; // edi@64
  int *v43; // ebx@64
  __int16 *v44; // eax@67
  __int16 v45; // ax@68
  int v46; // ecx@69
  _WORD *v47; // eax@73
  unsigned __int16 v48; // ax@74
  __int16 *v49; // eax@80
  int v50; // eax@82
  int v51; // eax@87
  char v52; // [sp+4h] [bp-58h]@1
  char v53; // [sp+17h] [bp-45h]@1
  int v54; // [sp+18h] [bp-44h]@1
  int v55; // [sp+1Ch] [bp-40h]@1
  bool v56; // [sp+23h] [bp-39h]@2
  unsigned int v57; // [sp+24h] [bp-38h]@14
  int v58; // [sp+28h] [bp-34h]@1
  __int16 v59; // [sp+2Ch] [bp-30h]@1
  __int16 v60; // [sp+2Eh] [bp-2Eh]@12
  int v61; // [sp+30h] [bp-2Ch]@14
  int *v62; // [sp+34h] [bp-28h]@18
  int *v63; // [sp+38h] [bp-24h]@1
  unsigned int v64; // [sp+3Ch] [bp-20h]@5
  unsigned int v65; // [sp+40h] [bp-1Ch]@1

  v58 = a1;
  v54 = a2;
  v59 = a2;
  v55 = a3;
  v65 = sub_6F95DC70(a8 + 108);
  v9 = 16 * ((8 * a7 + 27) >> 4);
  sub_6F8A13B0(v9, v10);
  v11 = alloca(v9);
  v63 = (int *)((unsigned int)&v53 & 0xFFFFFFF0);
  v12 = (_WORD)a2 == -1;
  v13 = v12 & (a1 != 0);
  if ( v12 & (a1 != 0) )
  {
    v47 = *(_WORD **)(v58 + 8);
    v48 = (unsigned int)v47 >= *(_DWORD *)(v58 + 12) ? (unsigned __int16)(*(int (**)(void))(*(_DWORD *)v58 + 36))() : *v47;
    v12 = 0;
    if ( v48 == -1 )
    {
      v12 = v13;
      v58 = 0;
      v13 = 0;
    }
  }
  v56 = a4 == -1;
  v14 = v56 && a3 != 0;
  if ( v14 )
  {
    v44 = *(__int16 **)(a3 + 8);
    if ( (unsigned int)v44 >= *(_DWORD *)(a3 + 12) )
    {
      v51 = *(_DWORD *)a3;
      LOBYTE(v64) = v12;
      v45 = (*(int (__thiscall **)(int))(v51 + 36))(a3);
      v12 = v64;
    }
    else
    {
      v45 = *v44;
    }
    v46 = 0;
    if ( v45 != -1 )
    {
      v46 = a3;
      if ( v45 != -1 )
        v14 = 0;
    }
    v55 = v46;
  }
  else
  {
    v14 = v56;
  }
  if ( v14 == v12 )
  {
    v64 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_6;
  }
  v34 = v59;
  if ( v13 )
  {
    v49 = *(__int16 **)(v58 + 8);
    if ( (unsigned int)v49 >= *(_DWORD *)(v58 + 12) )
      v34 = (*(int (**)(void))(*(_DWORD *)v58 + 36))();
    else
      v34 = *v49;
    v50 = 0;
    if ( v34 != -1 )
      v50 = v58;
    v58 = v50;
  }
  v64 = 2 * a7;
  if ( !(2 * a7) )
  {
    v16 = 0;
    v15 = 0;
    goto LABEL_6;
  }
  v35 = 0;
  v16 = 0;
  v36 = a6;
  do
  {
    while ( 1 )
    {
      v38 = **(_WORD **)(v36 + 4 * v35);
      if ( (_WORD)v38 == v34 )
        break;
      a6 = v36;
      v37 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v65 + 24))(v65, v38);
      v36 = a6;
      if ( v37 == v34 )
        break;
      if ( ++v35 == v64 )
        goto LABEL_61;
    }
    v63[v16++] = v35++;
  }
  while ( v35 != v64 );
LABEL_61:
  v64 = 0;
  v15 = 0;
  if ( v16 )
  {
    v39 = *(_DWORD *)(v58 + 8);
    if ( v39 >= *(_DWORD *)(v58 + 12) )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v58 + 40))(v58, v36);
    else
      *(_DWORD *)(v58 + 8) = v39 + 2;
    v40 = 16 * ((4 * v16 + 27) >> 4);
    sub_6F8A13B0(v40, v52);
    v41 = alloca(v40);
    v65 = v16;
    v64 = (unsigned int)&v53 & 0xFFFFFFF0;
    v62 = (int *)((unsigned int)&v53 & 0xFFFFFFF0);
    v42 = 0;
    v43 = v63;
    do
    {
      *(_DWORD *)(v64 + 4 * v42) = wcslen(*(const wchar_t **)(a6 + 4 * v43[v42]));
      ++v42;
    }
    while ( v65 != v42 );
    v16 = v65;
    v15 = v62;
    v64 = 1;
    v59 = -1;
  }
LABEL_6:
  while ( 2 )
  {
    LOBYTE(v65) = v59 == -1;
    v17 = v65 & (v58 != 0);
    if ( v17 )
    {
      v28 = *(__int16 **)(v58 + 8);
      if ( (unsigned int)v28 >= *(_DWORD *)(v58 + 12) )
      {
        LOBYTE(v62) = v59 == -1 && v58 != 0;
        v29 = (*(int (**)(void))(*(_DWORD *)v58 + 36))();
        v17 = (char)v62;
      }
      else
      {
        v29 = *v28;
      }
      v30 = 0;
      if ( v29 != -1 )
        v30 = v58;
      if ( v29 != -1 )
        v17 = 0;
      v58 = v30;
    }
    else
    {
      v17 = v65;
    }
    v18 = v56 && v55 != 0;
    if ( v56 && v55 != 0 )
    {
      v24 = *(__int16 **)(v55 + 8);
      if ( (unsigned int)v24 >= *(_DWORD *)(v55 + 12) )
      {
        LOBYTE(v62) = v17;
        v25 = (*(int (**)(void))(*(_DWORD *)v55 + 36))();
        v17 = (char)v62;
      }
      else
      {
        v25 = *v24;
      }
      v26 = 0;
      if ( v25 != -1 )
      {
        v26 = v55;
        if ( v25 != -1 )
          v18 = 0;
      }
      v55 = v26;
      if ( v17 == v18 )
        break;
    }
    else if ( v17 == v56 )
    {
      break;
    }
    if ( v58 && (_BYTE)v65 )
    {
      v31 = *(__int16 **)(v58 + 8);
      if ( (unsigned int)v31 >= *(_DWORD *)(v58 + 12) )
        v60 = (*(int (**)(void))(*(_DWORD *)v58 + 36))();
      else
        v60 = *v31;
      v32 = 0;
      if ( v60 != -1 )
        v32 = v58;
      v58 = v32;
    }
    else
    {
      v60 = v59;
    }
    if ( !v16 )
    {
LABEL_33:
      *a9 |= 4u;
      goto LABEL_34;
    }
    v19 = 0;
    v65 = (unsigned int)v15;
    v61 = 0;
    v57 = 2 * v64;
    do
    {
      while ( 1 )
      {
        v20 = v19;
        v21 = (unsigned int *)(v65 + 4 * v19);
        if ( *v21 > v64 )
          break;
        ++v61;
        ++v19;
LABEL_16:
        if ( v19 >= v16 )
          goto LABEL_20;
      }
      v22 = v63[v20];
      v62 = &v63[v20];
      if ( *(_WORD *)(*(_DWORD *)(a6 + 4 * v22) + v57) == v60 )
      {
        ++v19;
        goto LABEL_16;
      }
      *v62 = v63[--v16];
      *v21 = *(_DWORD *)(v65 + 4 * v16);
    }
    while ( v19 < v16 );
LABEL_20:
    v15 = (int *)v65;
    if ( v61 != v16 )
    {
      v23 = *(_DWORD *)(v58 + 8);
      if ( v23 >= *(_DWORD *)(v58 + 12) )
        (*(void (**)(void))(*(_DWORD *)v58 + 40))();
      else
        *(_DWORD *)(v58 + 8) = v23 + 2;
      ++v64;
      v59 = -1;
      continue;
    }
    break;
  }
  if ( v16 != 1 )
  {
    if ( v16 == 2 && (*v15 == v64 || v15[1] == v64) )
      goto LABEL_51;
    goto LABEL_33;
  }
  if ( *v15 != v64 )
    goto LABEL_33;
LABEL_51:
  v33 = *v63;
  if ( *v63 >= a7 )
    v33 = *v63 - a7;
  *a5 = v33;
LABEL_34:
  LOWORD(v54) = v59;
  return v58;
}
