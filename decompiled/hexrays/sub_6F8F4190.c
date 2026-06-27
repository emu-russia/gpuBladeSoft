__int64 __stdcall sub_6F8F4190(__int64 a1, char a2, int a3, unsigned int *a4, int *a5, int a6, int a7, _DWORD *a8)
{
  unsigned int v8; // eax@1
  char v9; // ST04_1@1
  void *v10; // esp@1
  __int16 v12; // ax@4
  int v13; // esi@5
  unsigned int v14; // edi@5
  __int16 v15; // bx@5
  int *v16; // edx@5
  __int16 v17; // ax@6
  int v18; // ecx@8
  int *v19; // ebx@10
  int *v20; // edx@11
  int v21; // ebx@12
  size_t v22; // eax@12
  unsigned int v23; // edi@12
  unsigned int v24; // ebx@12
  int v25; // esi@12
  size_t v26; // eax@13
  int v27; // edx@16
  int v28; // ebx@16
  unsigned int v29; // esi@16
  unsigned int v30; // eax@16
  unsigned int v31; // esi@20
  __int16 v32; // bx@23
  __int16 v33; // ax@23
  unsigned int v34; // eax@30
  unsigned int v35; // esi@30
  unsigned int v36; // esi@30
  int v37; // edi@30
  __int16 v38; // bx@32
  __int16 *v39; // eax@36
  int v40; // eax@40
  int v41; // eax@41
  int *v42; // [sp+14h] [bp-28h]@12
  int *v43; // [sp+18h] [bp-24h]@12
  unsigned int v44; // [sp+1Ch] [bp-20h]@5
  unsigned int v45; // [sp+20h] [bp-1Ch]@1

  v45 = sub_6F95DC70(a7 + 108);
  v8 = 16 * ((unsigned int)(4 * a6 + 27) >> 4);
  sub_6F8A13B0(v8, v9);
  v10 = alloca(v8);
  if ( sub_6F8C2450(&a1, (int)&a2) )
    goto LABEL_2;
  v12 = sub_6F8C24F0((int *)&a1, WORD2(a1));
  if ( !a6 )
    goto LABEL_2;
  v44 = ((unsigned int)&v42 + 3) & 0xFFFFFFF0;
  v13 = 0;
  v14 = 0;
  v15 = v12;
  v16 = a5;
  do
  {
    while ( 1 )
    {
      v18 = *(_WORD *)v16[v13];
      if ( (_WORD)v18 == v15 )
        break;
      a5 = v16;
      v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v45 + 24))(v45, v18);
      v16 = a5;
      if ( v15 == v17 )
        break;
      if ( a6 == ++v13 )
        goto LABEL_10;
    }
    *(_DWORD *)(v44 + 4 * v14++) = v13++;
  }
  while ( a6 != v13 );
LABEL_10:
  v19 = (int *)v44;
  v44 = 0;
  if ( v14 <= 1 )
    goto LABEL_29;
  v20 = v19;
  do
  {
    v21 = *v20;
    v42 = v20;
    v22 = wcslen((const wchar_t *)a5[v21]);
    v45 = v14;
    v43 = (int *)v21;
    v23 = v22;
    v24 = 1;
    v25 = (int)v42;
    do
    {
      v26 = wcslen((const wchar_t *)a5[*(_DWORD *)(v25 + 4 * v24)]);
      if ( v23 > v26 )
        v23 = v26;
      ++v24;
    }
    while ( v24 < v45 );
    v27 = v25;
    v28 = (int)v43;
    v29 = v23;
    v14 = v45;
    v30 = *(_DWORD *)(a1 + 8);
    if ( v30 >= *(_DWORD *)(a1 + 12) )
    {
      v41 = *(_DWORD *)a1;
      v45 = v27;
      (*(void (**)(void))(v41 + 40))();
      v27 = v45;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = v30 + 2;
    }
    ++v44;
    v43 = (int *)v27;
    WORD2(a1) = -1;
    if ( v44 >= v29 || sub_6F8C2450(&a1, (int)&a2) )
      goto LABEL_2;
    v31 = 0;
    v20 = v43;
    v45 = 2 * v44;
    while ( 1 )
    {
      v32 = *(_WORD *)(a5[v28] + v45);
      v33 = WORD2(a1);
      if ( (_DWORD)a1 && WORD2(a1) == -1 )
      {
        v39 = *(__int16 **)(a1 + 8);
        if ( (unsigned int)v39 >= *(_DWORD *)(a1 + 12) )
        {
          v40 = *(_DWORD *)a1;
          v43 = v20;
          v33 = (*(int (**)(void))(v40 + 36))();
          v20 = v43;
        }
        else
        {
          v33 = *v39;
        }
        if ( v33 == -1 )
          LODWORD(a1) = 0;
      }
      if ( v32 == v33 )
        break;
      v20[v31] = v20[--v14];
      if ( v14 <= v31 )
        goto LABEL_27;
LABEL_22:
      v28 = v20[v31];
    }
    if ( v14 > ++v31 )
      goto LABEL_22;
LABEL_27:
    ;
  }
  while ( v14 > 1 );
  v19 = v20;
LABEL_29:
  if ( v14 == 1 )
  {
    sub_6F92DAB0((_DWORD *)a1);
    v34 = *v19;
    v35 = v44;
    WORD2(a1) = -1;
    v44 = v34;
    v36 = v35 + 1;
    v37 = a5[v34];
    v45 = wcslen((const wchar_t *)a5[v34]);
    if ( v36 < v45 )
    {
      while ( !sub_6F8C2450(&a1, (int)&a2) )
      {
        v38 = *(_WORD *)(v37 + 2 * v36);
        if ( v38 != (unsigned __int16)sub_6F8C24F0((int *)&a1, WORD2(a1)) )
          break;
        ++v36;
        sub_6F92DAB0((_DWORD *)a1);
        WORD2(a1) = -1;
        if ( v36 >= v45 )
          goto LABEL_34;
      }
      goto LABEL_2;
    }
LABEL_34:
    if ( v45 != v36 )
      goto LABEL_2;
    *a4 = v44;
  }
  else
  {
LABEL_2:
    *a8 |= 4u;
  }
  return a1;
}
