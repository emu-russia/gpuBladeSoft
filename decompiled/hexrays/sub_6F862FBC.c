char __usercall sub_6F862FBC@<al>(int a1@<eax>, char a2@<dl>, char a3@<cl>, char a4)
{
  int v4; // ebx@1
  int *v5; // eax@1
  int *v6; // esi@1
  _BYTE *v7; // eax@1
  _BYTE *v8; // edi@1
  unsigned __int8 v9; // si@2
  int v10; // edi@2
  _BYTE *v11; // eax@3
  int v12; // edi@4
  _BYTE *v13; // eax@5
  int v14; // edi@6
  _BYTE *v15; // eax@7
  int v16; // edx@7
  int v17; // edi@7
  _BYTE *v18; // eax@8
  int v19; // edi@8
  _BYTE *v20; // eax@9
  int v21; // edx@10
  int v22; // edi@10
  _BYTE *v23; // eax@11
  int v24; // edi@12
  _BYTE *v25; // eax@13
  int v26; // edi@14
  int v27; // esi@14
  int v28; // eax@14
  int v29; // eax@14
  int v30; // eax@18
  int v31; // eax@18
  int v32; // eax@20
  int v33; // esi@21
  int v34; // edx@24
  _BYTE *v35; // ecx@25
  int v36; // eax@26
  int v37; // eax@26
  _BYTE *v38; // ecx@29
  _BYTE *v39; // ecx@30
  char v40; // al@31
  int v41; // edx@31
  _BYTE *v42; // edi@35
  _BYTE *v43; // edi@37
  _BYTE *v45; // edx@43
  int v46; // eax@15
  int v47; // eax@22
  _BYTE *v48; // [sp+1Ch] [bp-3Ch]@24
  int v49; // [sp+30h] [bp-28h]@26
  int *v50; // [sp+34h] [bp-24h]@1
  unsigned __int8 v51; // [sp+38h] [bp-20h]@4
  int v52; // [sp+38h] [bp-20h]@24
  int v53; // [sp+3Ch] [bp-1Ch]@14
  int v54; // [sp+3Ch] [bp-1Ch]@29

  v4 = a1;
  v5 = *(int **)(a1 + 24);
  v50 = v5;
  v6 = v5;
  v7 = (_BYTE *)*v5;
  v8 = (_BYTE *)v6[1];
  *(_BYTE *)(v4 + 200) = a2;
  *(_BYTE *)(v4 + 201) = a3;
  *(_BYTE *)(v4 + 202) = a4;
  if ( !v8 )
  {
    if ( !(unsigned __int8)((int (__cdecl *)(int))v6[3])(v4) )
      return 0;
    v7 = (_BYTE *)*v6;
    v8 = (_BYTE *)v6[1];
  }
  v9 = *v7;
  v10 = (int)(v8 - 1);
  if ( v10 )
  {
    v11 = v7 + 1;
  }
  else
  {
    if ( !(unsigned __int8)((int (__cdecl *)(int))v50[3])(v4) )
      return 0;
    v11 = (_BYTE *)*v50;
    v10 = v50[1];
  }
  v51 = *v11;
  v12 = v10 - 1;
  if ( v12 )
  {
    v13 = v11 + 1;
  }
  else
  {
    if ( !(unsigned __int8)((int (__cdecl *)(int))v50[3])(v4) )
      return 0;
    v13 = (_BYTE *)*v50;
    v12 = v50[1];
  }
  *(_DWORD *)(v4 + 192) = *v13;
  v14 = v12 - 1;
  if ( v14 )
  {
    v15 = v13 + 1;
    v16 = *v15 << 8;
    *(_DWORD *)(v4 + 32) = v16;
    v17 = v14 - 1;
    if ( v17 )
      goto LABEL_8;
LABEL_36:
    if ( !(unsigned __int8)((int (__cdecl *)(int))v50[3])(v4) )
      return 0;
    v18 = (_BYTE *)*v50;
    v43 = (_BYTE *)v50[1];
    *(_DWORD *)(v4 + 32) += *(_BYTE *)*v50;
    v19 = (int)(v43 - 1);
    if ( v19 )
      goto LABEL_9;
    goto LABEL_38;
  }
  if ( !(unsigned __int8)((int (__cdecl *)(int))v50[3])(v4) )
    return 0;
  v15 = (_BYTE *)*v50;
  v42 = (_BYTE *)v50[1];
  v16 = *(_BYTE *)*v50 << 8;
  *(_DWORD *)(v4 + 32) = v16;
  v17 = (int)(v42 - 1);
  if ( !v17 )
    goto LABEL_36;
LABEL_8:
  v18 = v15 + 1;
  *(_DWORD *)(v4 + 32) = *v18 + v16;
  v19 = v17 - 1;
  if ( v19 )
  {
LABEL_9:
    v20 = v18 + 1;
    goto LABEL_10;
  }
LABEL_38:
  if ( !(unsigned __int8)((int (__cdecl *)(_DWORD))v50[3])(v4) )
    return 0;
  v20 = (_BYTE *)*v50;
  v19 = v50[1];
LABEL_10:
  v21 = *v20 << 8;
  *(_DWORD *)(v4 + 28) = v21;
  v22 = v19 - 1;
  if ( v22 )
  {
    v23 = v20 + 1;
  }
  else
  {
    if ( !(unsigned __int8)((int (__cdecl *)(_DWORD))v50[3])(v4) )
      return 0;
    v23 = (_BYTE *)*v50;
    v22 = v50[1];
    v21 = *(_DWORD *)(v4 + 28);
  }
  *(_DWORD *)(v4 + 28) = *v23 + v21;
  v24 = v22 - 1;
  if ( !v24 )
  {
    if ( (unsigned __int8)((int (__cdecl *)(_DWORD))v50[3])(v4) )
    {
      v25 = (_BYTE *)*v50;
      v24 = v50[1];
      goto LABEL_14;
    }
    return 0;
  }
  v25 = v23 + 1;
LABEL_14:
  v26 = v24 - 1;
  *(_DWORD *)(v4 + 36) = *v25;
  v53 = (int)(v25 + 1);
  v27 = (v9 << 8) + v51 - 8;
  v28 = *(_DWORD *)v4;
  *(_DWORD *)(v28 + 24) = *(_DWORD *)(v4 + 396);
  *(_DWORD *)(v28 + 28) = *(_DWORD *)(v4 + 28);
  *(_DWORD *)(v28 + 32) = *(_DWORD *)(v4 + 32);
  *(_DWORD *)(v28 + 36) = *(_DWORD *)(v4 + 36);
  v29 = *(_DWORD *)v4;
  *(_DWORD *)(v29 + 20) = 102;
  (*(void (__cdecl **)(int, signed int))(v29 + 4))(v4, 1);
  if ( *(_BYTE *)(*(_DWORD *)(v4 + 420) + 13) )
  {
    v46 = *(_DWORD *)v4;
    *(_DWORD *)(v46 + 20) = 60;
    (*(void (__cdecl **)(int))v46)(v4);
  }
  if ( !*(_DWORD *)(v4 + 32) || !*(_DWORD *)(v4 + 28) || (v31 = *(_DWORD *)(v4 + 36), v31 <= 0) )
  {
    v30 = *(_DWORD *)v4;
    *(_DWORD *)(v30 + 20) = 33;
    (*(void (__cdecl **)(int))v30)(v4);
    v31 = *(_DWORD *)(v4 + 36);
  }
  if ( 3 * v31 != v27 )
  {
    v32 = *(_DWORD *)v4;
    *(_DWORD *)(v32 + 20) = 12;
    (*(void (__cdecl **)(int))v32)(v4);
    v31 = *(_DWORD *)(v4 + 36);
  }
  v33 = *(_DWORD *)(v4 + 196);
  if ( !v33 )
  {
    v47 = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(v4 + 4))(v4, 1, 88 * v31);
    v33 = v47;
    *(_DWORD *)(v4 + 196) = v47;
    v31 = *(_DWORD *)(v4 + 36);
  }
  if ( v31 > 0 )
  {
    v52 = 0;
    v48 = (_BYTE *)v53;
    v34 = v26;
    while ( 1 )
    {
      *(_DWORD *)(v33 + 4) = v52;
      if ( v34 )
      {
        v38 = v48;
        *(_DWORD *)v33 = *v48;
        v54 = v34 - 1;
        if ( v34 != 1 )
          goto LABEL_30;
      }
      else
      {
        if ( !(unsigned __int8)((int (__cdecl *)(_DWORD))v50[3])(v4) )
          return 0;
        v45 = (_BYTE *)v50[1];
        v38 = (_BYTE *)*v50;
        *(_DWORD *)v33 = *(_BYTE *)*v50;
        v54 = (int)(v45 - 1);
        if ( v45 != (_BYTE *)1 )
        {
LABEL_30:
          v39 = v38 + 1;
          goto LABEL_31;
        }
      }
      if ( !(unsigned __int8)((int (__cdecl *)(_DWORD))v50[3])(v4) )
        return 0;
      v39 = (_BYTE *)*v50;
      v54 = v50[1];
LABEL_31:
      v40 = *v39;
      *(_DWORD *)(v33 + 8) = (unsigned int)*v39 >> 4;
      *(_DWORD *)(v33 + 12) = v40 & 0xF;
      v41 = v54 - 1;
      if ( v54 == 1 )
      {
        if ( !(unsigned __int8)((int (__fastcall *)(_BYTE *, int))v50[3])(v39, v41) )
          return 0;
        v35 = (_BYTE *)*v50;
        v41 = v50[1];
      }
      else
      {
        v35 = v39 + 1;
      }
      *(_DWORD *)(v33 + 16) = *v35;
      v48 = v35 + 1;
      v36 = *(_DWORD *)v4;
      *(_DWORD *)(v36 + 24) = *(_DWORD *)v33;
      *(_DWORD *)(v36 + 28) = *(_DWORD *)(v33 + 8);
      *(_DWORD *)(v36 + 32) = *(_DWORD *)(v33 + 12);
      *(_DWORD *)(v36 + 36) = *(_DWORD *)(v33 + 16);
      v37 = *(_DWORD *)v4;
      *(_DWORD *)(v37 + 20) = 103;
      v49 = v41 - 1;
      (*(void (__cdecl **)(int, signed int))(v37 + 4))(v4, 1);
      ++v52;
      v34 = v49;
      if ( *(_DWORD *)(v4 + 36) <= v52 )
      {
        v53 = (int)v48;
        v26 = v49;
        break;
      }
      v33 += 88;
    }
  }
  *(_BYTE *)(*(_DWORD *)(v4 + 420) + 13) = 1;
  *v50 = v53;
  v50[1] = v26;
  return 1;
}
