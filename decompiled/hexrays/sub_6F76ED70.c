int __cdecl sub_6F76ED70(int a1, int a2)
{
  int result; // eax@1
  int v3; // ebx@6
  int **v4; // ebp@8
  int *v5; // edi@8
  int *v6; // eax@9
  int **v7; // edi@9
  int *v8; // ebp@9
  int v9; // ebx@11
  _DWORD *v10; // ecx@12
  int **v11; // edi@12
  int *v12; // edx@13
  int v13; // eax@13
  int (__fastcall *v14)(_DWORD *, int *); // eax@18
  int *v15; // eax@21
  int v16; // edx@25
  int *v17; // ebp@28
  int *v18; // eax@28
  int (__cdecl *v19)(int, int **); // eax@29
  _DWORD *v20; // ST1C_4@30
  _DWORD *v21; // ST1C_4@32
  int v22; // eax@32
  int v23; // edx@35
  int v24; // eax@36
  unsigned int v25; // [sp+18h] [bp-34h]@5
  int v26; // [sp+18h] [bp-34h]@27
  const char *v27; // [sp+1Ch] [bp-30h]@6
  int v28; // [sp+28h] [bp-24h]@11
  int v29; // [sp+2Ch] [bp-20h]@27

  result = 33;
  if ( !a1 )
    return result;
  result = 6;
  if ( !a2 )
    return result;
  result = 4;
  if ( *(_DWORD *)(a2 + 16) > 131078 )
    return result;
  v25 = *(_DWORD *)(a1 + 16);
  if ( !*(_DWORD *)(a1 + 16) )
  {
    v9 = *(_DWORD *)a1;
    v28 = 0;
    goto LABEL_12;
  }
  v3 = 0;
  v27 = *(const char **)(a2 + 8);
  while ( 1 )
  {
    v4 = *(int ***)(a1 + 4 * v3 + 20);
    v5 = *v4;
    if ( !strcmp((const char *)(*v4)[2], v27) )
      break;
    if ( ++v3 == v25 )
      goto LABEL_11;
  }
  v6 = v5;
  v7 = v4;
  v8 = v6;
  result = 5;
  if ( *(_DWORD *)(a2 + 12) <= v8[3] )
    return result;
  sub_6F768A20(a1, v7);
  v25 = *(_DWORD *)(a1 + 16);
LABEL_11:
  v9 = *(_DWORD *)a1;
  result = 48;
  v28 = 0;
  if ( v25 <= 0x1F )
  {
LABEL_12:
    v11 = (int **)sub_6F773A50(v9, *(_DWORD *)(a2 + 4), &v28);
    result = v28;
    if ( v28 )
      return result;
    v11[1] = (int *)a1;
    v11[2] = (int *)v9;
    v12 = (int *)a2;
    *v11 = (int *)a2;
    v13 = *(_DWORD *)a2;
    if ( !(*(_DWORD *)a2 & 2) )
    {
LABEL_14:
      if ( v13 & 4 )
        *(_DWORD *)(a1 + 160) = v11;
      if ( v13 & 1 )
        v11[3] = v12;
      v14 = *(int (__fastcall **)(_DWORD, _DWORD))(a2 + 24);
      if ( v14 )
      {
        result = v14(v10, v12);
        v28 = result;
        if ( result )
          goto LABEL_20;
      }
      else
      {
        result = v28;
      }
      v16 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = v16 + 1;
      *(_DWORD *)(a1 + 4 * v16 + 20) = v11;
      return result;
    }
    v26 = *(_DWORD *)a1;
    v10 = sub_6F773A50(*(_DWORD *)a1, 12, &v29);
    if ( v29 )
    {
      v28 = v29;
      goto LABEL_20;
    }
    v17 = *v11;
    v18 = (int *)(*v11)[9];
    v11[3] = *v11;
    v11[4] = v18;
    if ( (_UNKNOWN *)v18 == &loc_6F75746C )
    {
      v19 = *(int (__cdecl **)(int, _DWORD *))(v17[14] + 4);
      if ( v19 )
      {
        v20 = v10;
        v29 = v19(v26, v11 + 13);
        v10 = v20;
        if ( v29 )
          goto LABEL_39;
        v11[14] = *(int **)(v17[14] + 16);
        v11[15] = (int *)v17[10];
      }
    }
    v10[2] = v11;
    v21 = v10;
    sub_6F773F80(a1 + 148, (int)v10);
    v22 = *(_DWORD *)(a1 + 148);
    v10 = v21;
    if ( v22 )
    {
      while ( 1 )
      {
        v23 = *(_DWORD *)(v22 + 8);
        if ( *(_UNKNOWN **)(v23 + 16) == &loc_6F75746C )
          break;
        v22 = *(_DWORD *)(v22 + 4);
        if ( !v22 )
          goto LABEL_41;
      }
    }
    else
    {
LABEL_41:
      v23 = 0;
    }
    v24 = v29;
    *(_DWORD *)(a1 + 156) = v23;
    if ( !v24 )
    {
      v12 = *v11;
      v28 = 0;
      v13 = *v12;
      goto LABEL_14;
    }
LABEL_39:
    sub_6F773D90(v26, (int)v10);
    v28 = v29;
    if ( !v29 )
    {
      v12 = *v11;
      v13 = **v11;
      goto LABEL_14;
    }
LABEL_20:
    if ( *(_BYTE *)*v11 & 2 )
    {
      v15 = v11[3];
      if ( v15 )
      {
        if ( (_UNKNOWN *)v15[9] == &loc_6F75746C )
        {
          if ( v11[13] )
            (*(void (__cdecl **)(int *))(v15[14] + 20))(v11[13]);
        }
      }
    }
    sub_6F773D90(v9, (int)v11);
    result = v28;
  }
  return result;
}
