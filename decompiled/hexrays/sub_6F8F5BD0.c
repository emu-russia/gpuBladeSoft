int __stdcall sub_6F8F5BD0(__int64 a1, int a2, __int16 a3, int *a4, int a5, unsigned int a6, int a7, _DWORD *a8)
{
  int *v8; // edi@1
  unsigned int v9; // eax@1
  char v10; // ST04_1@1
  void *v11; // esp@1
  int v12; // ecx@2
  int *v13; // edi@2
  unsigned int v14; // esi@2
  bool v15; // bl@3
  bool v16; // dl@3
  bool v17; // dl@4
  unsigned int v18; // edx@9
  int v19; // eax@12
  unsigned int *v20; // ecx@12
  int v21; // ebx@13
  unsigned int v22; // eax@16
  __int16 *v23; // eax@19
  __int16 v24; // ax@20
  __int16 *v25; // eax@24
  __int16 v26; // ax@25
  _WORD *v28; // eax@31
  int v29; // eax@39
  int v30; // ebx@42
  __int16 v31; // ax@42
  int v32; // edx@42
  int v33; // eax@44
  __int16 v34; // ax@44
  int v35; // ecx@46
  int v36; // edx@49
  unsigned int v37; // eax@49
  int v38; // ebx@49
  void *v39; // esp@49
  unsigned int v40; // edi@49
  int *v41; // esi@49
  int v42; // eax@50
  int v43; // eax@53
  char v44; // [sp+4h] [bp-48h]@1
  char v45; // [sp+17h] [bp-35h]@1
  unsigned int v46; // [sp+18h] [bp-34h]@9
  unsigned __int16 v47; // [sp+1Eh] [bp-2Eh]@6
  int v48; // [sp+20h] [bp-2Ch]@9
  int *v49; // [sp+24h] [bp-28h]@13
  int *v50; // [sp+28h] [bp-24h]@1
  unsigned int v51; // [sp+2Ch] [bp-20h]@2
  int *v52; // [sp+30h] [bp-1Ch]@4

  v8 = (int *)sub_6F95DC70(a7 + 108);
  v9 = 16 * ((8 * a6 + 27) >> 4);
  sub_6F8A13B0(v9, v10);
  v11 = alloca(v9);
  v50 = (int *)((unsigned int)&v45 & 0xFFFFFFF0);
  if ( sub_6F8C2450(&a1, (int)&a2) )
  {
    v51 = 0;
    v12 = a1;
    v13 = 0;
    v14 = 0;
  }
  else
  {
    v30 = 0;
    v14 = 0;
    v31 = sub_6F8C24F0((int *)&a1, WORD2(a1));
    v32 = a5;
    LOWORD(v52) = v31;
    v51 = 2 * a6;
    if ( 2 * a6 )
    {
      do
      {
        while ( 1 )
        {
          v35 = **(_WORD **)(v32 + 4 * v30);
          if ( (_WORD)v35 == (_WORD)v52 )
            break;
          v33 = *v8;
          a5 = v32;
          v34 = (*(int (__thiscall **)(int *, int))(v33 + 24))(v8, v35);
          v32 = a5;
          if ( (_WORD)v52 == v34 )
            break;
          if ( ++v30 == v51 )
            goto LABEL_48;
        }
        v50[v14++] = v30++;
      }
      while ( v30 != v51 );
LABEL_48:
      v12 = a1;
      v51 = 0;
      v13 = 0;
      if ( v14 )
      {
        sub_6F92DAB0((_DWORD *)a1);
        WORD2(a1) = -1;
        v36 = v14;
        v37 = 16 * ((4 * v14 + 27) >> 4);
        sub_6F8A13B0(v37, v44);
        v38 = a5;
        v39 = alloca(v37);
        v51 = v14;
        v40 = (unsigned int)&v45 & 0xFFFFFFF0;
        v49 = (int *)((unsigned int)&v45 & 0xFFFFFFF0);
        v41 = v50;
        v52 = &v50[v36];
        do
        {
          v42 = *v41;
          v40 += 4;
          ++v41;
          *(_DWORD *)(v40 - 4) = wcslen(*(const wchar_t **)(v38 + 4 * v42));
        }
        while ( v52 != v41 );
        v14 = v51;
        v13 = v49;
        v51 = 1;
        v12 = a1;
      }
    }
    else
    {
      v12 = a1;
      v14 = 2 * a6;
      v13 = 0;
    }
  }
  v15 = WORD2(a1) == -1;
  v16 = v15 && v12 != 0;
  if ( v15 && v12 != 0 )
    goto LABEL_19;
LABEL_4:
  v17 = a3 == -1;
  LOBYTE(v52) = v17 && a2 != 0;
  if ( !v17
    || a2 == 0
    || ((v25 = *(__int16 **)(a2 + 8), (unsigned int)v25 >= *(_DWORD *)(a2 + 12)) ? (v26 = (*(int (**)(void))(*(_DWORD *)a2 + 36))()) : (v26 = *v25),
        v17 = 0,
        v26 != -1) )
  {
    if ( v15 == v17 )
      goto LABEL_28;
    goto LABEL_6;
  }
  a2 = 0;
  if ( v15 != (_BYTE)v52 )
  {
LABEL_6:
    v47 = WORD2(a1);
    if ( WORD2(a1) == -1 && (_DWORD)a1 )
    {
      v28 = *(_WORD **)(a1 + 8);
      v47 = (unsigned int)v28 >= *(_DWORD *)(a1 + 12) ? (unsigned __int16)(*(int (**)(void))(*(_DWORD *)a1 + 36))() : *v28;
      if ( v47 == -1 )
        LODWORD(a1) = 0;
    }
    if ( !v14 )
      goto LABEL_30;
    v18 = 0;
    v52 = v13;
    v48 = 0;
    v46 = 2 * v51;
    while ( 1 )
    {
      while ( 1 )
      {
        v19 = v18;
        v20 = (unsigned int *)&v52[v18];
        if ( *v20 > v51 )
          break;
        ++v48;
        ++v18;
LABEL_11:
        if ( v18 >= v14 )
          goto LABEL_15;
      }
      v21 = v50[v19];
      v49 = &v50[v19];
      if ( *(_WORD *)(*(_DWORD *)(a5 + 4 * v21) + v46) == v47 )
      {
        ++v18;
        goto LABEL_11;
      }
      *v49 = v50[--v14];
      *v20 = v52[v14];
      if ( v18 >= v14 )
      {
LABEL_15:
        v13 = v52;
        if ( v48 == v14 )
          break;
        v12 = a1;
        v22 = *(_DWORD *)(a1 + 8);
        if ( v22 >= *(_DWORD *)(a1 + 12) )
        {
          (*(void (**)(void))(*(_DWORD *)a1 + 40))();
          v12 = a1;
        }
        else
        {
          *(_DWORD *)(a1 + 8) = v22 + 2;
        }
        ++v51;
        WORD2(a1) = -1;
        v15 = 1;
        v16 = v12 != 0;
        if ( v12 )
        {
LABEL_19:
          v23 = *(__int16 **)(v12 + 8);
          if ( (unsigned int)v23 >= *(_DWORD *)(v12 + 12) )
          {
            v43 = *(_DWORD *)v12;
            LOBYTE(v52) = v16;
            v24 = (*(int (**)(void))(v43 + 36))();
            v16 = (char)v52;
          }
          else
          {
            v24 = *v23;
          }
          v15 = 0;
          if ( v24 == -1 )
          {
            LODWORD(a1) = 0;
            v15 = v16;
          }
        }
        goto LABEL_4;
      }
    }
  }
LABEL_28:
  if ( v14 == 1 )
  {
    if ( *v13 != v51 )
    {
LABEL_30:
      *a8 |= 4u;
      return a1;
    }
  }
  else if ( v14 != 2 || *v13 != v51 && v13[1] != v51 )
  {
    goto LABEL_30;
  }
  v29 = *v50;
  if ( *v50 >= a6 )
    v29 = *v50 - a6;
  *a4 = v29;
  return a1;
}
