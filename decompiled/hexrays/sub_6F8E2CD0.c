__int64 __stdcall sub_6F8E2CD0(__int64 a1, int a2, int a3, int a4, int *a5, _BYTE *a6)
{
  _BYTE *v6; // esi@3
  bool v8; // bp@5
  int v9; // esi@5
  unsigned int v10; // edi@5
  bool v11; // bl@7
  bool v12; // dl@7
  bool v13; // dl@8
  _BYTE *v14; // eax@10
  char v15; // dl@13
  unsigned int v16; // eax@17
  char v17; // al@22
  char v18; // dl@31
  int v19; // eax@35
  int v20; // eax@42
  unsigned __int8 v21; // [sp+2Bh] [bp-31h]@5
  bool v22; // [sp+2Ch] [bp-30h]@5
  char v23; // [sp+2Dh] [bp-2Fh]@5
  bool v24; // [sp+2Eh] [bp-2Eh]@8
  bool v25; // [sp+2Eh] [bp-2Eh]@45
  unsigned int v26; // [sp+3Ch] [bp-20h]@2

  if ( !(*(_BYTE *)(a4 + 12) & 1) )
  {
    v26 = -1;
    a1 = sub_6F8DF090(a1, a2, a3, a4, a5, (int *)&v26);
    if ( v26 > 1 )
    {
      *a6 = 1;
      *a5 = 4;
      if ( sub_6F8C2310(&a1, (int)&a2) )
        *a5 |= 2u;
    }
    else
    {
      v6 = a6;
      *a6 = v26;
      *v6 &= 1u;
    }
    return a1;
  }
  v8 = 1;
  v9 = sub_6F8BEE80(a4 + 108);
  v23 = 1;
  v21 = *(_DWORD *)(v9 + 32) == 0;
  v22 = *(_DWORD *)(v9 + 24) == 0;
  v10 = 0;
LABEL_6:
  if ( v22 & v21 )
  {
LABEL_22:
    v17 = 0;
LABEL_23:
    if ( v8 && *(_DWORD *)(v9 + 32) == v10 && v10 )
    {
      *a6 = 0;
      if ( v23 && *(_DWORD *)(v9 + 24) == v10 )
        goto LABEL_55;
    }
    else
    {
      if ( !v23 || *(_DWORD *)(v9 + 24) != v10 || !v10 )
      {
        *a6 = 0;
        if ( v17 )
        {
          *a5 = 6;
          return a1;
        }
LABEL_55:
        *a5 = 4;
        return a1;
      }
      *a6 = 1;
    }
    v19 = 2 * (v17 & 1);
    goto LABEL_36;
  }
  while ( 1 )
  {
    v11 = HIDWORD(a1) == -1;
    v12 = v11 && (_DWORD)a1 != 0;
    if ( v11 && (_DWORD)a1 != 0 )
    {
      v11 = 0;
      if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
      {
        v25 = v12;
        if ( (*(int (**)(void))(*(_DWORD *)a1 + 36))() == -1 )
        {
          LODWORD(a1) = 0;
          v11 = v25;
        }
      }
    }
    v13 = a3 == -1;
    v24 = v13 && a2 != 0;
    if ( v13 && a2 != 0 )
    {
      v13 = 0;
      if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
      {
        v20 = (*(int (**)(void))(*(_DWORD *)a2 + 36))();
        v13 = 0;
        if ( v20 == -1 )
        {
          a2 = 0;
          v13 = v24;
        }
      }
    }
    if ( v13 == v11 )
    {
      v17 = 1;
      goto LABEL_23;
    }
    LOBYTE(v14) = BYTE4(a1);
    if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
    {
      v14 = *(_BYTE **)(a1 + 8);
      if ( (unsigned int)v14 >= *(_DWORD *)(a1 + 12) )
      {
        v14 = (_BYTE *)(*(int (**)(void))(*(_DWORD *)a1 + 36))();
        if ( v14 == (_BYTE *)-1 )
        {
          LODWORD(a1) = 0;
          LOBYTE(v14) = -1;
        }
      }
      else
      {
        LOBYTE(v14) = *v14;
      }
    }
    if ( v21 )
    {
      v18 = *(_BYTE *)(*(_DWORD *)(v9 + 20) + v10);
      v23 = v18 == (_BYTE)v14;
      if ( v18 != (_BYTE)v14 )
      {
        if ( v8 )
        {
          if ( *(_DWORD *)(v9 + 32) == v10 && v10 )
          {
            *a6 = 0;
            v19 = 0;
            goto LABEL_36;
          }
          goto LABEL_54;
        }
        goto LABEL_56;
      }
      goto LABEL_16;
    }
    v15 = *(_BYTE *)(*(_DWORD *)(v9 + 28) + v10);
    v8 = v15 == (_BYTE)v14;
    if ( v15 != (_BYTE)v14 )
      break;
    if ( !v22 )
      goto LABEL_15;
LABEL_16:
    if ( !((unsigned __int8)v23 | v8) )
      goto LABEL_56;
    ++v10;
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 >= *(_DWORD *)(a1 + 12) )
      (*(void (**)(void))(*(_DWORD *)a1 + 40))();
    else
      *(_DWORD *)(a1 + 8) = v16 + 1;
    HIDWORD(a1) = -1;
    if ( !v8 )
    {
      v21 = v23 | v8;
LABEL_38:
      v23 |= v8;
      v22 = *(_DWORD *)(v9 + 24) <= v10;
      goto LABEL_6;
    }
    v21 = *(_DWORD *)(v9 + 32) <= v10;
    if ( v23 )
      goto LABEL_38;
    v22 = v8;
    if ( v8 & v21 )
      goto LABEL_22;
  }
  if ( !v22 )
  {
LABEL_15:
    v23 = *(_BYTE *)(*(_DWORD *)(v9 + 20) + v10) == (_BYTE)v14;
    goto LABEL_16;
  }
  if ( !v23 )
  {
LABEL_56:
    *a6 = 0;
    *a5 = 4;
    return a1;
  }
  if ( *(_DWORD *)(v9 + 24) != v10 || !v10 )
  {
LABEL_54:
    *a6 = 0;
    goto LABEL_55;
  }
  *a6 = 1;
  v19 = 0;
LABEL_36:
  *a5 = v19;
  return a1;
}
