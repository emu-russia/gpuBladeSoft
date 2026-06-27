char *__cdecl sub_6F868FC4(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx@1
  int v4; // eax@6
  char *v5; // edx@7
  unsigned int v6; // esi@14
  _DWORD *v7; // ebx@16
  void (__cdecl **v8)(_DWORD); // eax@19
  char *v9; // eax@9
  int v10; // edx@20
  int v11; // esi@20
  int v13; // eax@2
  unsigned int v14; // [sp+1Ch] [bp-2Ch]@16
  char **v15; // [sp+20h] [bp-28h]@13
  int v16; // [sp+28h] [bp-20h]@1
  int v17; // [sp+2Ch] [bp-1Ch]@13

  v3 = a3;
  v16 = *(_DWORD *)(a1 + 4);
  if ( a3 > 0x3B9AC9F0 )
  {
    v13 = *(_DWORD *)a1;
    *(_DWORD *)(v13 + 20) = 56;
    *(_DWORD *)(v13 + 24) = 1;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  if ( a3 & 7 )
    v3 = a3 + 8 - (a3 & 7);
  if ( a2 > 1 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 15;
    *(_DWORD *)(v4 + 24) = a2;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  v5 = *(char **)(v16 + 4 * (a2 + 12) + 4);
  if ( !v5 )
  {
    v17 = v3 + 16;
    v15 = 0;
    goto LABEL_26;
  }
  if ( v3 > *((_DWORD *)v5 + 2) )
  {
    while ( 1 )
    {
      v9 = *(char **)v5;
      if ( !*(_DWORD *)v5 )
        break;
      if ( v3 <= *((_DWORD *)v9 + 2) )
        goto LABEL_20;
      v5 = *(char **)v5;
    }
    v15 = (char **)v5;
    v17 = v3 + 16;
    if ( v5 )
    {
      v6 = dword_6FB9E5F8[a2];
LABEL_15:
      if ( v6 <= 1000000000 - v17 )
      {
        v14 = v3;
        v7 = (_DWORD *)a1;
      }
      else
      {
        v6 = 1000000000 - v17;
        v14 = v3;
        v7 = (_DWORD *)a1;
      }
      while ( 1 )
      {
        v9 = (char *)sub_6F869CF4((int)v7, v6 + v17);
        if ( v9 )
          break;
        v6 >>= 1;
        if ( v6 <= 0x31 )
        {
          v8 = (void (__cdecl **)(_DWORD))*v7;
          v8[5] = (void (__cdecl *)(_DWORD))56;
          v8[6] = (void (__cdecl *)(_DWORD))2;
          (*(void (__cdecl **)(_DWORD *))*v7)(v7);
        }
      }
      v3 = v14;
      *(_DWORD *)(v16 + 76) += v6 + v17;
      *(_DWORD *)v9 = 0;
      *((_DWORD *)v9 + 1) = 0;
      v11 = v14 + v6;
      *((_DWORD *)v9 + 2) = v11;
      if ( v15 )
      {
        *v15 = v9;
        v10 = 0;
      }
      else
      {
        *(_DWORD *)(v16 + 4 * (a2 + 12) + 4) = v9;
        v10 = 0;
      }
      goto LABEL_21;
    }
LABEL_26:
    v6 = dword_6FB9E5F0[a2];
    goto LABEL_15;
  }
  v9 = *(char **)(v16 + 4 * (a2 + 12) + 4);
LABEL_20:
  v10 = *((_DWORD *)v9 + 1);
  v11 = *((_DWORD *)v9 + 2);
LABEL_21:
  *((_DWORD *)v9 + 1) = v10 + v3;
  *((_DWORD *)v9 + 2) = v11 - v3;
  return &v9[v10 + 16];
}
