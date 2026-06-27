signed int __thiscall sub_6F759390(_DWORD *this, int a2)
{
  int v2; // edx@1
  int v3; // ecx@1
  char *v4; // eax@2
  int v5; // ecx@5
  int v6; // ecx@10
  int v7; // ebx@14
  unsigned __int8 v8; // al@14
  char *v9; // esi@14
  int *v10; // edi@15
  int v11; // eax@16
  int *v12; // edx@16
  int v13; // ebp@16
  int v14; // ecx@17
  int v15; // eax@31
  int v16; // eax@31
  int v17; // eax@31
  int v18; // eax@31
  int v19; // eax@31
  int v20; // eax@31
  int v21; // eax@31
  int v22; // ebx@32
  int v23; // edx@32
  size_t v24; // ebx@32
  void *v25; // eax@32
  _DWORD *v27; // [sp+30h] [bp-5Ch]@1
  int v28; // [sp+34h] [bp-58h]@14
  int v29; // [sp+38h] [bp-54h]@1
  int v30; // [sp+3Ch] [bp-50h]@14
  int v31; // [sp+48h] [bp-44h]@4
  int v32; // [sp+4Ch] [bp-40h]@4
  int v33; // [sp+50h] [bp-3Ch]@4
  int v34; // [sp+54h] [bp-38h]@4
  void *v35; // [sp+58h] [bp-34h]@3
  char *v36; // [sp+5Ch] [bp-30h]@2
  double v37; // [sp+60h] [bp-2Ch]@12
  int v38; // [sp+68h] [bp-24h]@1
  int v39; // [sp+6Ch] [bp-20h]@1

  v27 = this;
  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)a2;
  Src = (void *)a2;
  v38 = v3;
  v39 = v2;
  v29 = sub_6F833AB2((int)&v38, 0, 8u);
  if ( v29 )
    return -1;
  Src = (char *)Src + 8;
  v4 = sub_6F83B664((int)"1.6.6", 0, 0, 0);
  v36 = v4;
  if ( !v4 )
    return -1;
  v35 = sub_6F83400D((int)v4);
  if ( !v35 )
  {
    sub_6F83CA1A((const void **)&v36, 0, 0);
    return -1;
  }
  sub_6F841589((int)v36, 0, (int)sub_6F752AB0);
  sub_6F833A70((int)v36, 8);
  sub_6F83B745((int)v36, (int)v35);
  sub_6F83AB19((int)v36, (int)v35, &v34, &v33, &v32, &v31, 0, 0, 0);
  if ( v32 == 16 )
  {
    sub_6F84191B((int)v36);
    v5 = (int)v36;
    if ( v31 != 3 )
      goto LABEL_6;
LABEL_36:
    sub_6F842BA7(v5);
    v5 = (int)v36;
    goto LABEL_6;
  }
  v5 = (int)v36;
  if ( v31 == 3 )
    goto LABEL_36;
LABEL_6:
  if ( v32 <= 7 )
  {
    sub_6F842BA7(v5);
    v5 = (int)v36;
  }
  if ( sub_6F839DC8(v5, (int)v35, 16) )
    sub_6F842BA7((int)v36);
  v6 = (int)v36;
  if ( !(v31 & 0xFFFFFFFB) )
  {
    sub_6F842CA9((int)v36);
    v6 = (int)v36;
  }
  if ( sub_6F83A94F(v6, (int)v35, &v37) )
    sub_6F842B49((int)v36, 2.2, v37);
  sub_6F83BBF7((int)v36, (int)v35);
  sub_6F83AB19((int)v36, (int)v35, &v34, &v33, &v32, &v31, 0, 0, 0);
  v7 = sub_6F839DE9((int)v36, (int)v35);
  v8 = sub_6F83A477((int)v36, (int)v35);
  v28 = v33;
  v30 = v8;
  v9 = (char *)malloc(v7 * v33);
  if ( !v9 )
    goto LABEL_43;
  v10 = (int *)malloc(4 * v28);
  if ( !v10 )
    goto LABEL_43;
  v11 = (int)v9;
  v12 = v10;
  v13 = (int)&v10[v28];
  if ( v28 )
  {
    v14 = ((unsigned __int8)((unsigned int)(4 * v28 - 4) >> 2) + 1) & 7;
    if ( !(((unsigned __int8)((unsigned int)(4 * v28 - 4) >> 2) + 1) & 7) )
      goto LABEL_44;
    if ( v14 != 1 )
    {
      if ( v14 != 2 )
      {
        if ( v14 != 3 )
        {
          if ( v14 != 4 )
          {
            if ( v14 != 5 )
            {
              if ( v14 != 6 )
              {
                *v10 = (int)v9;
                v11 = (int)&v9[v7];
                v12 = v10 + 1;
              }
              *v12 = v11;
              v11 += v7;
              ++v12;
            }
            *v12 = v11;
            v11 += v7;
            ++v12;
          }
          *v12 = v11;
          v11 += v7;
          ++v12;
        }
        *v12 = v11;
        v11 += v7;
        ++v12;
      }
      *v12 = v11;
      v11 += v7;
      ++v12;
    }
    *v12 = v11;
    ++v12;
    v11 += v7;
    if ( v12 != (int *)v13 )
    {
LABEL_44:
      do
      {
        *v12 = v11;
        v15 = v7 + v11;
        v12 += 8;
        *(v12 - 7) = v15;
        v16 = v7 + v15;
        *(v12 - 6) = v16;
        v17 = v7 + v16;
        *(v12 - 5) = v17;
        v18 = v7 + v17;
        *(v12 - 4) = v18;
        v19 = v7 + v18;
        *(v12 - 3) = v19;
        v20 = v7 + v19;
        *(v12 - 2) = v20;
        v21 = v7 + v20;
        *(v12 - 1) = v21;
        v11 = v7 + v21;
      }
      while ( v12 != (int *)v13 );
    }
  }
  sub_6F83C33A((int)v36, v10);
  sub_6F83C41F((int)v36, 0);
  sub_6F83CA1A((const void **)&v36, &v35, 0);
  v22 = v34;
  v23 = v33;
  v27[1] = v34;
  v27[2] = v23;
  v27[3] = v30;
  v24 = v30 * v23 * v22;
  v25 = malloc(v24);
  *v27 = v25;
  if ( !v25 )
  {
LABEL_43:
    nullsub_10();
    exit(1);
  }
  memcpy(v25, v9, v24);
  free(v10);
  free(v9);
  v27[4] = 1;
  return v29;
}
