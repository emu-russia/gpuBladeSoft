char *__thiscall sub_6F901580(char *this, _BYTE *a2, int a3, int a4)
{
  char *v4; // eax@1
  char *v5; // eax@3
  signed int v6; // eax@4
  int v7; // ecx@5
  int v8; // eax@5
  _BYTE *v10; // eax@7
  int (*v11)(void); // eax@8
  int i; // eax@8
  char *v13; // esi@12
  int v14; // edx@12
  int v15; // ebx@15
  unsigned int v16; // eax@15
  unsigned int v17; // edx@15
  int (*v18)(void); // eax@16
  int v19; // [sp+0h] [bp-8Ch]@1
  char *v20; // [sp+1Ch] [bp-70h]@1
  int v21; // [sp+20h] [bp-6Ch]@1
  int v22; // [sp+24h] [bp-68h]@7
  int *v23; // [sp+28h] [bp-64h]@1
  char v24; // [sp+2Ch] [bp-60h]@1
  int v25; // [sp+30h] [bp-5Ch]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-48h]@1
  int *v27; // [sp+48h] [bp-44h]@1
  char *v28; // [sp+4Ch] [bp-40h]@1
  int (__cdecl *v29)(int, int, int, int, int, int, int, int, int, int, char, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); // [sp+50h] [bp-3Ch]@1
  int *v30; // [sp+54h] [bp-38h]@1
  char v31; // [sp+6Fh] [bp-1Dh]@1
  char v32; // [sp+70h] [bp-1Ch]@1

  v20 = this;
  v21 = a4;
  v26 = sub_6F962A50;
  v27 = dword_6F96C520;
  v28 = &v32;
  v29 = sub_6F9017D9;
  v30 = &v19;
  v23 = (int *)&v24;
  sub_6F8A1A60((int *)&v24);
  v4 = v20;
  *((_DWORD *)v20 + 1) = 0;
  v25 = -1;
  sub_6F903800(&v31, v4, 1);
  if ( !v31 )
  {
    if ( a3 <= 0 )
    {
      v14 = *((_DWORD *)v20 + 1);
LABEL_23:
      if ( v14 )
        goto LABEL_6;
    }
    else
    {
      v5 = v20;
      *a2 = 0;
      if ( *((_DWORD *)v5 + 1) )
        goto LABEL_6;
    }
    goto LABEL_4;
  }
  v22 = (unsigned __int8)v21;
  v21 = *(_DWORD *)&v20[*(_DWORD *)(*(_DWORD *)v20 - 12) + 120];
  v10 = *(_BYTE **)(v21 + 8);
  if ( *(_DWORD *)(v21 + 12) > (unsigned int)v10 )
    goto LABEL_11;
LABEL_8:
  v11 = *(int (**)(void))(*(_DWORD *)v21 + 36);
  v25 = 1;
  for ( i = v11(); ; i = *v10 )
  {
    v13 = v20;
    v14 = *((_DWORD *)v20 + 1);
    if ( v14 + 1 >= a3 )
    {
      if ( i != -1 )
      {
        if ( a3 <= 0 )
          goto LABEL_23;
        *a2 = 0;
        if ( *((_DWORD *)v20 + 1) )
          goto LABEL_6;
LABEL_4:
        v6 = 4;
        goto LABEL_5;
      }
      if ( a3 <= 0 )
      {
        if ( v14 )
          goto LABEL_34;
      }
      else
      {
        *a2 = 0;
        if ( *((_DWORD *)v20 + 1) )
        {
LABEL_34:
          v6 = 2;
          goto LABEL_5;
        }
      }
      v6 = 6;
      goto LABEL_5;
    }
    if ( i == -1 )
      goto LABEL_17;
    if ( v22 == i )
      break;
    v15 = v21;
    *(++a2 - 1) = i;
    v16 = *(_DWORD *)(v15 + 8);
    v17 = *(_DWORD *)(v15 + 12);
    ++*((_DWORD *)v13 + 1);
    if ( v16 < v17 )
    {
      v10 = (_BYTE *)(v16 + 1);
      *(_DWORD *)(v15 + 8) = v10;
    }
    else
    {
      v18 = *(int (**)(void))(*(_DWORD *)v21 + 40);
      v25 = 1;
      if ( v18() == -1 )
      {
LABEL_17:
        v6 = 2;
        goto LABEL_18;
      }
      v10 = *(_BYTE **)(v21 + 8);
      v17 = *(_DWORD *)(v21 + 12);
    }
    if ( (unsigned int)v10 >= v17 )
      goto LABEL_8;
LABEL_11:
    ;
  }
  v6 = 0;
LABEL_18:
  if ( a3 > 0 )
    *a2 = 0;
  if ( !*((_DWORD *)v20 + 1) )
  {
    v6 |= 4u;
    goto LABEL_5;
  }
  if ( v6 )
  {
LABEL_5:
    v7 = (int)&v20[*(_DWORD *)(*(_DWORD *)v20 - 12)];
    v8 = *(_DWORD *)(v7 + 20) | v6;
    v25 = -1;
    sub_6F9581E0(v7, v8);
  }
LABEL_6:
  sub_6F8A1AD0(v23);
  return v20;
}
