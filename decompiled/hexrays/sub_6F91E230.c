char *__thiscall sub_6F91E230(char *this, _WORD *a2, int a3, __int16 a4)
{
  char *v4; // eax@1
  int v5; // ecx@2
  __int16 *v7; // eax@7
  int (*v8)(void); // eax@8
  __int16 i; // ax@8
  __int16 v10; // ax@9
  char *v11; // esi@12
  int v12; // ebx@15
  __int16 *v13; // edx@15
  int (*v14)(void); // eax@16
  int v15; // edx@17
  signed int v16; // eax@18
  int v17; // ecx@21
  int v18; // eax@21
  int v19; // [sp+0h] [bp-8Ch]@1
  char *v20; // [sp+1Ch] [bp-70h]@1
  int v21; // [sp+20h] [bp-6Ch]@7
  __int16 v22; // [sp+26h] [bp-66h]@1
  int *v23; // [sp+28h] [bp-64h]@1
  char v24; // [sp+2Ch] [bp-60h]@1
  int v25; // [sp+30h] [bp-5Ch]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-48h]@1
  int *v27; // [sp+48h] [bp-44h]@1
  char *v28; // [sp+4Ch] [bp-40h]@1
  void *v29; // [sp+50h] [bp-3Ch]@1
  int *v30; // [sp+54h] [bp-38h]@1
  char v31; // [sp+6Fh] [bp-1Dh]@1
  char v32; // [sp+70h] [bp-1Ch]@1

  v20 = this;
  v28 = &v32;
  v22 = a4;
  v26 = sub_6F962A50;
  v27 = dword_6F96C82C;
  v29 = &loc_6F91E3E7;
  v30 = &v19;
  v23 = (int *)&v24;
  sub_6F8A1A60((int *)&v24);
  v4 = v20;
  *((_DWORD *)v20 + 1) = 0;
  v25 = -1;
  sub_6F920460(&v31, v4, 1);
  if ( v31 )
  {
    v21 = *(_DWORD *)&v20[*(_DWORD *)(*(_DWORD *)v20 - 12) + 120];
    v7 = *(__int16 **)(v21 + 8);
    if ( *(_DWORD *)(v21 + 12) > (unsigned int)v7 )
      goto LABEL_11;
LABEL_8:
    v8 = *(int (**)(void))(*(_DWORD *)v21 + 36);
    v25 = 1;
    for ( i = v8(); ; i = *v7 )
    {
      v11 = v20;
      v5 = *((_DWORD *)v20 + 1);
      if ( v5 + 1 >= a3 )
      {
        if ( i != -1 )
          goto LABEL_3;
        if ( a3 > 0 )
          *a2 = 0;
        v16 = 6;
        if ( v5 )
          goto LABEL_26;
        goto LABEL_21;
      }
      if ( i == -1 )
        break;
      if ( i == v22 )
      {
        v16 = 0;
        goto LABEL_28;
      }
      ++a2;
      v12 = v21;
      *(a2 - 1) = i;
      *((_DWORD *)v11 + 1) = v5 + 1;
      v13 = *(__int16 **)(v12 + 8);
      if ( (unsigned int)v13 < *(_DWORD *)(v12 + 12) )
      {
        v10 = *v13;
        *(_DWORD *)(v12 + 8) = v13 + 1;
        if ( v10 == -1 )
          goto LABEL_17;
      }
      else
      {
        v14 = *(int (**)(void))(*(_DWORD *)v21 + 40);
        v25 = 1;
        if ( (unsigned __int16)v14() == -1 )
        {
LABEL_17:
          v15 = *((_DWORD *)v20 + 1);
          if ( a3 > 0 )
          {
            *a2 = 0;
            v16 = 2;
            if ( v15 )
              goto LABEL_21;
            goto LABEL_19;
          }
          if ( !v15 )
          {
            v16 = 6;
            goto LABEL_21;
          }
LABEL_26:
          v16 = 2;
          goto LABEL_21;
        }
      }
      v7 = *(__int16 **)(v21 + 8);
      if ( (unsigned int)v7 >= *(_DWORD *)(v21 + 12) )
        goto LABEL_8;
LABEL_11:
      ;
    }
    v16 = 2;
LABEL_28:
    if ( a3 > 0 )
      *a2 = 0;
    if ( !v5 )
    {
LABEL_19:
      v16 |= 4u;
      goto LABEL_21;
    }
    if ( v16 )
    {
LABEL_21:
      v17 = (int)&v20[*(_DWORD *)(*(_DWORD *)v20 - 12)];
      v18 = *(_DWORD *)(v17 + 20) | v16;
      v25 = -1;
      sub_6F958B40(v17, v18);
      goto LABEL_6;
    }
  }
  else
  {
    v5 = *((_DWORD *)v20 + 1);
LABEL_3:
    if ( a3 > 0 )
      *a2 = 0;
    if ( !v5 )
    {
      v16 = 4;
      goto LABEL_21;
    }
  }
LABEL_6:
  sub_6F8A1AD0(v23);
  return v20;
}
