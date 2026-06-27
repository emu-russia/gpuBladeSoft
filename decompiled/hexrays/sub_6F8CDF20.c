__int64 __stdcall sub_6F8CDF20(__int64 a1, int a2, __int16 a3, unsigned int *a4, int a5, int a6, int a7, _DWORD *a8)
{
  unsigned int v8; // eax@1
  char v9; // ST04_1@1
  void *v10; // esp@1
  __int16 v12; // ax@4
  int v13; // esi@5
  unsigned int v14; // edi@5
  __int16 v15; // bx@5
  int v16; // edx@5
  __int16 v17; // ax@6
  int v18; // ecx@8
  int *v19; // ebx@10
  int *v20; // esi@11
  size_t v21; // eax@11
  unsigned int v22; // ebx@11
  unsigned int v23; // edi@11
  size_t v24; // eax@12
  unsigned int v25; // esi@15
  unsigned int v26; // eax@15
  char v27; // si@18
  _WORD *v28; // eax@19
  unsigned __int16 v29; // ax@20
  unsigned __int8 v30; // dl@23
  unsigned int v31; // esi@25
  int i; // eax@25
  int v33; // edx@28
  __int16 v34; // ax@28
  int v35; // eax@34
  const wchar_t *v36; // edi@34
  unsigned int v37; // esi@34
  size_t v38; // ebx@34
  unsigned int v39; // eax@37
  wchar_t v40; // dx@41
  __int16 v41; // ax@41
  __int16 *v42; // eax@43
  __int16 *v43; // eax@47
  _WORD *v44; // eax@51
  unsigned __int16 v45; // ax@52
  int v46; // eax@55
  int v47; // eax@62
  char v48; // [sp+17h] [bp-25h]@5
  int v49; // [sp+18h] [bp-24h]@11
  unsigned int v50; // [sp+1Ch] [bp-20h]@5
  unsigned int v51; // [sp+20h] [bp-1Ch]@1

  v51 = sub_6F95DC70(a7 + 108);
  v8 = 16 * ((unsigned int)(4 * a6 + 27) >> 4);
  sub_6F8A13B0(v8, v9);
  v10 = alloca(v8);
  if ( sub_6F8C2450(&a1, (int)&a2) )
    goto LABEL_2;
  v12 = sub_6F8C2540((int *)&a1, WORD2(a1));
  if ( !a6 )
    goto LABEL_2;
  v50 = (unsigned int)&v48 & 0xFFFFFFF0;
  v13 = 0;
  v14 = 0;
  v15 = v12;
  v16 = a5;
  do
  {
    while ( 1 )
    {
      v18 = **(_WORD **)(v16 + 4 * v13);
      if ( (_WORD)v18 == v15 )
        break;
      a5 = v16;
      v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v51 + 24))(v51, v18);
      v16 = a5;
      if ( v15 == v17 )
        break;
      if ( a6 == ++v13 )
        goto LABEL_10;
    }
    *(_DWORD *)(v50 + 4 * v14++) = v13++;
  }
  while ( a6 != v13 );
LABEL_10:
  v19 = (int *)v50;
  v50 = 0;
  if ( v14 <= 1 )
    goto LABEL_33;
  do
  {
    v49 = *v19;
    v20 = v19;
    v21 = wcslen(*(const wchar_t **)(a5 + 4 * v49));
    v51 = v14;
    v22 = 1;
    v23 = v21;
    do
    {
      v24 = wcslen(*(const wchar_t **)(a5 + 4 * v20[v22]));
      if ( v23 > v24 )
        v23 = v24;
      ++v22;
    }
    while ( v22 < v51 );
    v19 = v20;
    v25 = v23;
    v14 = v51;
    v26 = *(_DWORD *)(a1 + 8);
    if ( v26 >= *(_DWORD *)(a1 + 12) )
      (*(void (**)(void))(*(_DWORD *)a1 + 40))();
    else
      *(_DWORD *)(a1 + 8) = v26 + 2;
    ++v50;
    WORD2(a1) = -1;
    if ( v50 >= v25 )
      goto LABEL_2;
    v27 = 1;
    if ( (_DWORD)a1 )
    {
      v28 = *(_WORD **)(a1 + 8);
      v29 = (unsigned int)v28 >= *(_DWORD *)(a1 + 12) ? (unsigned __int16)(*(int (**)(void))(*(_DWORD *)a1 + 36))() : *v28;
      v27 = 0;
      if ( v29 == -1 )
      {
        LODWORD(a1) = 0;
        v27 = 1;
      }
    }
    v30 = a3 == -1;
    LOBYTE(v51) = v30 & (a2 != 0);
    if ( v30 & (a2 != 0) )
    {
      v44 = *(_WORD **)(a2 + 8);
      v45 = (unsigned int)v44 >= *(_DWORD *)(a2 + 12) ? (unsigned __int16)(*(int (**)(void))(*(_DWORD *)a2 + 36))() : *v44;
      v30 = 0;
      if ( v45 == -1 )
      {
        a2 = 0;
        v30 = v51;
      }
    }
    if ( v30 == v27 )
      goto LABEL_2;
    v31 = 0;
    v51 = 2 * v50;
    for ( i = v49; ; i = v19[v31] )
    {
      v33 = *(_WORD *)(*(_DWORD *)(a5 + 4 * i) + v51);
      v34 = WORD2(a1);
      if ( (_DWORD)a1 && WORD2(a1) == -1 )
      {
        v43 = *(__int16 **)(a1 + 8);
        if ( (unsigned int)v43 >= *(_DWORD *)(a1 + 12) )
        {
          v46 = *(_DWORD *)a1;
          v49 = v33;
          v34 = (*(int (**)(void))(v46 + 36))();
          LOWORD(v33) = v49;
        }
        else
        {
          v34 = *v43;
        }
        if ( v34 == -1 )
          LODWORD(a1) = 0;
      }
      if ( (_WORD)v33 == v34 )
        break;
      v19[v31] = v19[--v14];
      if ( v14 <= v31 )
        goto LABEL_32;
LABEL_27:
      ;
    }
    if ( v14 > ++v31 )
      goto LABEL_27;
LABEL_32:
    ;
  }
  while ( v14 > 1 );
LABEL_33:
  if ( v14 == 1 )
  {
    sub_6F92DAB0((_DWORD *)a1);
    v35 = *v19;
    WORD2(a1) = -1;
    v36 = *(const wchar_t **)(a5 + 4 * v35);
    v51 = v35;
    v37 = v50 + 1;
    v38 = wcslen(v36);
    if ( v37 < v38 )
    {
      while ( !sub_6F8C2450(&a1, (int)&a2) )
      {
        v40 = v36[v37];
        v41 = WORD2(a1);
        if ( (_DWORD)a1 && WORD2(a1) == -1 )
        {
          v42 = *(__int16 **)(a1 + 8);
          if ( (unsigned int)v42 >= *(_DWORD *)(a1 + 12) )
          {
            v47 = *(_DWORD *)a1;
            v50 = v36[v37];
            v41 = (*(int (**)(void))(v47 + 36))();
            v40 = v50;
          }
          else
          {
            v41 = *v42;
          }
          if ( v41 == -1 )
            LODWORD(a1) = 0;
        }
        if ( v40 != v41 )
          break;
        v39 = *(_DWORD *)(a1 + 8);
        if ( v39 >= *(_DWORD *)(a1 + 12) )
          (*(void (**)(void))(*(_DWORD *)a1 + 40))();
        else
          *(_DWORD *)(a1 + 8) = v39 + 2;
        ++v37;
        WORD2(a1) = -1;
        if ( v37 >= v38 )
          goto LABEL_60;
      }
    }
    else
    {
LABEL_60:
      if ( v37 == v38 )
      {
        *a4 = v51;
        return a1;
      }
    }
  }
LABEL_2:
  *a8 |= 4u;
  return a1;
}
