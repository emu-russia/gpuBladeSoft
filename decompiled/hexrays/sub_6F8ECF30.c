__int64 __stdcall sub_6F8ECF30(__int64 a1, int a2, __int16 a3, int a4, int *a5, _BYTE *a6)
{
  __int64 v6; // rax@2
  _BYTE *v7; // edi@3
  signed int v9; // edi@5
  int v10; // eax@5
  int v11; // ebp@5
  unsigned int v12; // ebx@5
  signed int v13; // edx@6
  int v14; // esi@7
  bool v15; // al@8
  bool v16; // si@8
  unsigned __int16 v17; // ax@10
  __int16 v18; // cx@13
  char v19; // dl@16
  unsigned int v20; // eax@17
  char v21; // al@22
  __int16 v22; // dx@31
  int v23; // eax@35
  __int16 *v24; // eax@41
  __int16 v25; // cx@42
  _WORD *v26; // eax@46
  unsigned __int16 v27; // ax@47
  _WORD *v28; // eax@50
  unsigned __int8 v29; // ST27_1@63
  __int16 v30; // ax@63
  bool v31; // [sp+24h] [bp-38h]@5
  bool v32; // [sp+25h] [bp-37h]@5
  bool v33; // [sp+26h] [bp-36h]@5
  unsigned int v34; // [sp+3Ch] [bp-20h]@2

  if ( !(*(_BYTE *)(a4 + 12) & 1) )
  {
    v34 = -1;
    v6 = sub_6F8E9130(a1, a2, a3, a4, a5, (int *)&v34);
    LODWORD(a1) = v6;
    WORD2(a1) = WORD2(v6);
    if ( v34 > 1 )
    {
      *a6 = 1;
      *a5 = 4;
      if ( sub_6F8C2450(&a1, (int)&a2) )
        *a5 |= 2u;
    }
    else
    {
      v7 = a6;
      *a6 = v34;
      *v7 &= 1u;
    }
    return a1;
  }
  v9 = 1;
  v10 = sub_6F8BF000(a4 + 108);
  v11 = v10;
  v33 = 1;
  v31 = *(_DWORD *)(v10 + 32) == 0;
  v32 = *(_DWORD *)(v10 + 24) == 0;
  v12 = 0;
LABEL_6:
  v13 = v32;
  if ( v32 && v31 )
  {
LABEL_22:
    v21 = 0;
LABEL_23:
    if ( (_BYTE)v9 && *(_DWORD *)(v11 + 32) == v12 && v12 )
    {
      *a6 = 0;
      if ( v33 && *(_DWORD *)(v11 + 24) == v12 )
        goto LABEL_60;
    }
    else
    {
      if ( !v33 || *(_DWORD *)(v11 + 24) != v12 || !v12 )
      {
        *a6 = 0;
        if ( v21 )
        {
          *a5 = 6;
          return a1;
        }
LABEL_60:
        *a5 = 4;
        return a1;
      }
      *a6 = 1;
    }
    v23 = 2 * (v21 & 1);
    goto LABEL_36;
  }
  while ( 1 )
  {
    LOBYTE(v13) = WORD2(a1) == -1;
    LOBYTE(v10) = v13 & ((_DWORD)a1 != 0);
    v14 = v10;
    if ( (unsigned __int8)v13 & ((_DWORD)a1 != 0) )
    {
      v26 = *(_WORD **)(a1 + 8);
      v27 = (unsigned int)v26 >= *(_DWORD *)(a1 + 12) ? (unsigned __int16)(*(int (**)(void))(*(_DWORD *)a1 + 36))() : *v26;
      v13 = 0;
      if ( v27 == -1 )
      {
        LODWORD(a1) = 0;
        v13 = v14;
      }
    }
    v15 = a3 == -1;
    v16 = v15 && a2 != 0;
    if ( v15
      && a2 != 0
      && ((v24 = *(__int16 **)(a2 + 8), (unsigned int)v24 >= *(_DWORD *)(a2 + 12)) ? (v29 = v13,
                                                                                      v30 = (*(int (**)(void))(*(_DWORD *)a2 + 36))(),
                                                                                      v13 = v29,
                                                                                      v25 = v30) : (v25 = *v24),
          v15 = 0,
          v25 == -1) )
    {
      a2 = 0;
      if ( v16 == (_BYTE)v13 )
      {
LABEL_45:
        v21 = 1;
        goto LABEL_23;
      }
    }
    else if ( v15 == (_BYTE)v13 )
    {
      goto LABEL_45;
    }
    v17 = WORD2(a1);
    if ( WORD2(a1) == -1 && (_DWORD)a1 )
    {
      v28 = *(_WORD **)(a1 + 8);
      v17 = (unsigned int)v28 >= *(_DWORD *)(a1 + 12) ? (unsigned __int16)(*(int (**)(void))(*(_DWORD *)a1 + 36))() : *v28;
      if ( v17 == -1 )
        LODWORD(a1) = 0;
    }
    if ( v31 )
    {
      v22 = *(_WORD *)(*(_DWORD *)(v11 + 20) + 2 * v12);
      v33 = v22 == v17;
      if ( v22 != v17 )
      {
        if ( (_BYTE)v9 )
        {
          if ( *(_DWORD *)(v11 + 32) == v12 && v12 )
          {
            *a6 = 0;
            v23 = 0;
            goto LABEL_36;
          }
          goto LABEL_59;
        }
        goto LABEL_61;
      }
      goto LABEL_16;
    }
    v18 = *(_WORD *)(*(_DWORD *)(v11 + 28) + 2 * v12);
    LOBYTE(v13) = v18 == v17;
    v9 = v13;
    if ( v18 != v17 )
      break;
    if ( !v32 )
      goto LABEL_15;
LABEL_16:
    v19 = v33 | v9;
    if ( !(v33 | (unsigned __int8)v9) )
      goto LABEL_61;
    ++v12;
    v20 = *(_DWORD *)(a1 + 8);
    if ( v20 >= *(_DWORD *)(a1 + 12) )
    {
      (*(void (**)(void))(*(_DWORD *)a1 + 40))();
      v19 = v33 | v9;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v20 + 2;
    }
    WORD2(a1) = -1;
    v10 = v9;
    if ( !(_BYTE)v9 )
    {
      v31 = v19;
LABEL_38:
      v33 = v19;
      v32 = *(_DWORD *)(v11 + 24) <= v12;
      goto LABEL_6;
    }
    v31 = *(_DWORD *)(v11 + 32) <= v12;
    if ( v33 )
      goto LABEL_38;
    v10 = v9;
    v32 = v9;
    v13 = (unsigned __int8)v9;
    if ( (unsigned __int8)v9 & v31 )
      goto LABEL_22;
  }
  if ( !v32 )
  {
LABEL_15:
    v33 = *(_WORD *)(*(_DWORD *)(v11 + 20) + 2 * v12) == v17;
    goto LABEL_16;
  }
  if ( !v33 )
  {
LABEL_61:
    *a6 = 0;
    *a5 = 4;
    return a1;
  }
  if ( *(_DWORD *)(v11 + 24) != v12 || !v12 )
  {
LABEL_59:
    *a6 = 0;
    goto LABEL_60;
  }
  *a6 = 1;
  v23 = 0;
LABEL_36:
  *a5 = v23;
  return a1;
}
