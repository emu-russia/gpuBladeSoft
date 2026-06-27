signed int __thiscall sub_6F759860(_DWORD *this, const char **a2)
{
  FILE *v2; // eax@1
  char *v3; // eax@3
  int v4; // eax@6
  int v5; // eax@11
  int v6; // ebx@15
  unsigned __int8 v7; // al@15
  int v8; // edi@15
  char *v9; // esi@15
  int *v10; // ebp@16
  int v11; // eax@17
  int *v12; // ecx@17
  int v13; // edx@17
  int v14; // edx@18
  int v15; // eax@32
  int v16; // eax@32
  int v17; // eax@32
  int v18; // eax@32
  int v19; // eax@32
  int v20; // eax@32
  int v21; // eax@32
  int v22; // ebx@33
  int v23; // edx@33
  size_t v24; // ebx@33
  void *v25; // eax@33
  const char *v27; // ST08_4@40
  FILE *v28; // [sp+3Ch] [bp-60h]@1
  _DWORD *v29; // [sp+40h] [bp-5Ch]@1
  int v30; // [sp+44h] [bp-58h]@16
  int v31; // [sp+44h] [bp-58h]@17
  int v32; // [sp+48h] [bp-54h]@2
  int v33; // [sp+4Ch] [bp-50h]@15
  int v34; // [sp+58h] [bp-44h]@5
  int v35; // [sp+5Ch] [bp-40h]@5
  int v36; // [sp+60h] [bp-3Ch]@5
  int v37; // [sp+64h] [bp-38h]@5
  void *v38; // [sp+68h] [bp-34h]@4
  char *v39; // [sp+6Ch] [bp-30h]@3
  double v40; // [sp+70h] [bp-2Ch]@13
  char v41; // [sp+78h] [bp-24h]@2

  v29 = this;
  v2 = fopen(*a2, "rb");
  v28 = v2;
  if ( !v2 )
  {
    v27 = *a2;
    nullsub_10();
    return -1;
  }
  fread(&v41, 8u, 1u, v2);
  v32 = sub_6F833AB2((int)&v41, 0, 8u);
  if ( v32 )
    goto LABEL_39;
  v3 = sub_6F83B664((int)"1.6.6", 0, 0, 0);
  v39 = v3;
  if ( !v3 )
    goto LABEL_39;
  v38 = sub_6F83400D((int)v3);
  if ( !v38 )
  {
    sub_6F83CA1A((const void **)&v39, 0, 0);
LABEL_39:
    fclose(v28);
    return -1;
  }
  sub_6F8348B4((int)v39, (int)v28);
  sub_6F833A70((int)v39, 8);
  sub_6F83B745((int)v39, (int)v38);
  sub_6F83AB19((int)v39, (int)v38, &v37, &v36, &v35, &v34, 0, 0, 0);
  if ( v35 == 16 )
  {
    sub_6F84191B((int)v39);
    v4 = (int)v39;
    if ( v34 != 3 )
      goto LABEL_7;
LABEL_37:
    sub_6F842BA7(v4);
    v4 = (int)v39;
    goto LABEL_7;
  }
  v4 = (int)v39;
  if ( v34 == 3 )
    goto LABEL_37;
LABEL_7:
  if ( v35 <= 7 )
  {
    sub_6F842BA7(v4);
    v4 = (int)v39;
  }
  if ( sub_6F839DC8(v4, (int)v38, 16) )
    sub_6F842BA7((int)v39);
  v5 = (int)v39;
  if ( !(v34 & 0xFFFFFFFB) )
  {
    sub_6F842CA9((int)v39);
    v5 = (int)v39;
  }
  if ( sub_6F83A94F(v5, (int)v38, &v40) )
    sub_6F842B49((int)v39, 2.2, v40);
  sub_6F83BBF7((int)v39, (int)v38);
  sub_6F83AB19((int)v39, (int)v38, &v37, &v36, &v35, &v34, 0, 0, 0);
  v6 = sub_6F839DE9((int)v39, (int)v38);
  v7 = sub_6F83A477((int)v39, (int)v38);
  v8 = v36;
  v33 = v7;
  v9 = (char *)malloc(v6 * v36);
  if ( !v9 )
    goto LABEL_45;
  v30 = v8;
  v10 = (int *)malloc(4 * v8);
  if ( !v10 )
    goto LABEL_45;
  v11 = (int)v9;
  v12 = v10;
  v13 = (int)&v10[v30];
  v31 = (int)&v10[v30];
  if ( v8 )
  {
    v14 = ((unsigned __int8)((unsigned int)(v13 - (_DWORD)v10 - 4) >> 2) + 1) & 7;
    if ( !v14 )
      goto LABEL_46;
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
                v11 = (int)&v9[v6];
                v12 = v10 + 1;
              }
              *v12 = v11;
              v11 += v6;
              ++v12;
            }
            *v12 = v11;
            v11 += v6;
            ++v12;
          }
          *v12 = v11;
          v11 += v6;
          ++v12;
        }
        *v12 = v11;
        v11 += v6;
        ++v12;
      }
      *v12 = v11;
      v11 += v6;
      ++v12;
    }
    *v12 = v11;
    v11 += v6;
    ++v12;
    if ( v12 != (int *)v31 )
    {
LABEL_46:
      do
      {
        *v12 = v11;
        v15 = v6 + v11;
        v12 += 8;
        *(v12 - 7) = v15;
        v16 = v6 + v15;
        *(v12 - 6) = v16;
        v17 = v6 + v16;
        *(v12 - 5) = v17;
        v18 = v6 + v17;
        *(v12 - 4) = v18;
        v19 = v6 + v18;
        *(v12 - 3) = v19;
        v20 = v6 + v19;
        *(v12 - 2) = v20;
        v21 = v6 + v20;
        *(v12 - 1) = v21;
        v11 = v6 + v21;
      }
      while ( v12 != (int *)v31 );
    }
  }
  sub_6F83C33A((int)v39, v10);
  sub_6F83C41F((int)v39, 0);
  sub_6F83CA1A((const void **)&v39, &v38, 0);
  v22 = v37;
  v23 = v36;
  v29[1] = v37;
  v29[2] = v23;
  v29[3] = v33;
  v24 = v33 * v23 * v22;
  v25 = malloc(v24);
  *v29 = v25;
  if ( !v25 )
  {
LABEL_45:
    nullsub_10();
    exit(1);
  }
  memcpy(v25, v9, v24);
  free(v10);
  free(v9);
  fclose(v28);
  v29[4] = 1;
  return v32;
}
