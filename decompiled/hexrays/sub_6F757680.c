signed int __thiscall sub_6F757680(_DWORD *this, const char **a2)
{
  char *v2; // eax@2
  int v3; // eax@4
  int v4; // esi@5
  int v5; // ebx@5
  unsigned int v6; // eax@6
  _DWORD *v7; // edi@7
  int v8; // eax@8
  int v9; // edx@9
  int v10; // ecx@10
  char v11; // dl@13
  char v12; // cl@14
  int v13; // edi@15
  char v14; // cl@15
  char v15; // cl@16
  int v16; // eax@16
  int v17; // edx@16
  char v18; // cl@16
  int v19; // eax@16
  int v20; // edx@16
  char v21; // cl@16
  int v22; // eax@16
  int v23; // edx@16
  char v24; // cl@16
  const char *v26; // ST08_4@21
  signed int v27; // edi@23
  int v28; // ebx@23
  char v29; // dl@26
  char v30; // cl@27
  char v31; // cl@28
  char v32; // cl@30
  FILE *v33; // [sp+30h] [bp-78h]@1
  int v34; // [sp+34h] [bp-74h]@4
  signed int v35; // [sp+38h] [bp-70h]@29
  _BYTE *v36; // [sp+3Ch] [bp-6Ch]@5
  signed int v37; // [sp+40h] [bp-68h]@10
  _DWORD *v38; // [sp+44h] [bp-64h]@1
  unsigned int v39; // [sp+48h] [bp-60h]@7
  void *v40; // [sp+50h] [bp-58h]@3
  char *v41; // [sp+54h] [bp-54h]@2
  int v42; // [sp+5Bh] [bp-4Dh]@5
  int v43; // [sp+5Fh] [bp-49h]@5
  int v44; // [sp+63h] [bp-45h]@5
  int v45; // [sp+67h] [bp-41h]@5
  int v46; // [sp+6Bh] [bp-3Dh]@5
  int v47; // [sp+6Fh] [bp-39h]@5
  char v48; // [sp+73h] [bp-35h]@5
  int v49; // [sp+74h] [bp-34h]@5
  int *v50; // [sp+78h] [bp-30h]@5
  int *v51; // [sp+7Ch] [bp-2Ch]@5

  v38 = this;
  v33 = fopen(*a2, "wb");
  if ( !v33 )
  {
    v26 = *a2;
    nullsub_10();
    return -1;
  }
  v2 = sub_6F85475E((int)"1.6.6", 0, 0, 0);
  v41 = v2;
  if ( !v2 )
  {
    fclose(v33);
    return -1;
  }
  v40 = sub_6F83400D((int)v2);
  if ( !v40 )
  {
    fclose(v33);
    sub_6F854EC7((const void **)&v41, 0);
    return -1;
  }
  v3 = sub_6F83998C((int)v41, (const char *)longjmp, 64);
  v34 = setjmp3(v3, 0);
  if ( v34 )
  {
    fclose(v33);
    sub_6F854EC7((const void **)&v41, &v40);
    return -1;
  }
  sub_6F8348B4((int)v41, (int)v33);
  sub_6F850CC3((int)v41, (int)v40, v38[1], v38[2], 8, 4 * (v38[3] != 3) + 2, 0, 0, 0);
  v51 = &v45;
  v50 = &v42;
  v42 = 1668506948;
  v43 = 1953524082;
  v44 = 7237481;
  v45 = 1114992743;
  v46 = 1701077356;
  v47 = 1952870227;
  v48 = 0;
  v49 = -1;
  sub_6F8519CD((int)v41, (int)v40, (int)&v49, 1);
  sub_6F852C7C((int)v41);
  sub_6F855868((int)v41, (signed int)((double)dword_6FBB9538 * 0.9090909090909091));
  sub_6F853D4F((int)v41, (int)v40);
  v4 = v38[1];
  v5 = v38[3];
  v36 = malloc(v5 * v38[1]);
  if ( !v36 )
  {
    nullsub_10();
    exit(1);
  }
  v6 = v38[2];
  if ( v6 )
  {
    v39 = 0;
    v7 = v38;
    while ( 1 )
    {
      v8 = *v7 + v5 * v4 * (v6 - 1 - v39);
      if ( !v4 )
        goto LABEL_17;
      v9 = (int)v36;
      if ( v5 == 4 )
      {
        v27 = 0;
        v28 = v4 & 3;
        if ( !(v4 & 3) )
          goto LABEL_39;
        if ( v28 != 1 )
        {
          if ( v28 != 2 )
          {
            v29 = *(_BYTE *)(v8 + 2);
            v8 += 4;
            *v36 = v29;
            v36[1] = *(_BYTE *)(v8 - 3);
            v36[2] = *(_BYTE *)(v8 - 4);
            v36[3] = *(_BYTE *)(v8 - 1);
            v9 = (int)(v36 + 4);
            v27 = 1;
          }
          v30 = *(_BYTE *)(v8 + 2);
          v9 += 4;
          v8 += 4;
          ++v27;
          *(_BYTE *)(v9 - 4) = v30;
          *(_BYTE *)(v9 - 3) = *(_BYTE *)(v8 - 3);
          *(_BYTE *)(v9 - 2) = *(_BYTE *)(v8 - 4);
          *(_BYTE *)(v9 - 1) = *(_BYTE *)(v8 - 1);
        }
        v31 = *(_BYTE *)(v8 + 2);
        ++v27;
        v9 += 4;
        v8 += 4;
        *(_BYTE *)(v9 - 4) = v31;
        *(_BYTE *)(v9 - 3) = *(_BYTE *)(v8 - 3);
        *(_BYTE *)(v9 - 2) = *(_BYTE *)(v8 - 4);
        *(_BYTE *)(v9 - 1) = *(_BYTE *)(v8 - 1);
        if ( v27 != v4 )
        {
LABEL_39:
          v35 = v27;
          do
          {
            v32 = *(_BYTE *)(v8 + 2);
            v9 += 16;
            v8 += 16;
            *(_BYTE *)(v9 - 16) = v32;
            *(_BYTE *)(v9 - 15) = *(_BYTE *)(v8 - 15);
            *(_BYTE *)(v9 - 14) = *(_BYTE *)(v8 - 16);
            *(_BYTE *)(v9 - 13) = *(_BYTE *)(v8 - 13);
            *(_BYTE *)(v9 - 12) = *(_BYTE *)(v8 - 10);
            *(_BYTE *)(v9 - 11) = *(_BYTE *)(v8 - 11);
            *(_BYTE *)(v9 - 10) = *(_BYTE *)(v8 - 12);
            *(_BYTE *)(v9 - 9) = *(_BYTE *)(v8 - 9);
            *(_BYTE *)(v9 - 8) = *(_BYTE *)(v8 - 6);
            *(_BYTE *)(v9 - 7) = *(_BYTE *)(v8 - 7);
            *(_BYTE *)(v9 - 6) = *(_BYTE *)(v8 - 8);
            *(_BYTE *)(v9 - 5) = *(_BYTE *)(v8 - 5);
            *(_BYTE *)(v9 - 4) = *(_BYTE *)(v8 - 2);
            *(_BYTE *)(v9 - 3) = *(_BYTE *)(v8 - 3);
            *(_BYTE *)(v9 - 2) = *(_BYTE *)(v8 - 4);
            *(_BYTE *)(v9 - 1) = *(_BYTE *)(v8 - 1);
            v35 += 4;
          }
          while ( v35 != v4 );
        }
      }
      else
      {
        v37 = 0;
        v10 = v4 & 3;
        if ( !(v4 & 3) )
        {
          v13 = 0;
          do
          {
LABEL_16:
            v13 += 4;
            *(_BYTE *)v9 = *(_BYTE *)(v8 + 2);
            *(_BYTE *)(v9 + 1) = *(_BYTE *)(v8 + 1);
            v15 = *(_BYTE *)v8;
            v16 = v5 + v8;
            *(_BYTE *)(v9 + 2) = v15;
            v17 = v5 + v9;
            *(_BYTE *)v17 = *(_BYTE *)(v16 + 2);
            *(_BYTE *)(v17 + 1) = *(_BYTE *)(v16 + 1);
            v18 = *(_BYTE *)v16;
            v19 = v5 + v16;
            *(_BYTE *)(v17 + 2) = v18;
            v20 = v5 + v17;
            *(_BYTE *)v20 = *(_BYTE *)(v19 + 2);
            *(_BYTE *)(v20 + 1) = *(_BYTE *)(v19 + 1);
            v21 = *(_BYTE *)v19;
            v22 = v5 + v19;
            *(_BYTE *)(v20 + 2) = v21;
            v23 = v5 + v20;
            *(_BYTE *)v23 = *(_BYTE *)(v22 + 2);
            *(_BYTE *)(v23 + 1) = *(_BYTE *)(v22 + 1);
            v24 = *(_BYTE *)v22;
            v8 = v5 + v22;
            *(_BYTE *)(v23 + 2) = v24;
            v9 = v5 + v23;
          }
          while ( v4 != v13 );
          goto LABEL_17;
        }
        if ( v10 != 1 )
        {
          if ( v10 != 2 )
          {
            v37 = 1;
            *v36 = *(_BYTE *)(v8 + 2);
            v36[1] = *(_BYTE *)(v8 + 1);
            v11 = *(_BYTE *)v8;
            v8 += v5;
            v36[2] = v11;
            v9 = (int)&v36[v5];
          }
          ++v37;
          *(_BYTE *)v9 = *(_BYTE *)(v8 + 2);
          *(_BYTE *)(v9 + 1) = *(_BYTE *)(v8 + 1);
          v12 = *(_BYTE *)v8;
          v8 += v5;
          *(_BYTE *)(v9 + 2) = v12;
          v9 += v5;
        }
        v13 = v37 + 1;
        *(_BYTE *)v9 = *(_BYTE *)(v8 + 2);
        *(_BYTE *)(v9 + 1) = *(_BYTE *)(v8 + 1);
        v14 = *(_BYTE *)v8;
        v8 += v5;
        *(_BYTE *)(v9 + 2) = v14;
        v9 += v5;
        if ( v4 != v37 + 1 )
          goto LABEL_16;
      }
LABEL_17:
      sub_6F85495F((int)v41, v36);
      ++v39;
      v6 = v38[2];
      if ( v6 <= v39 )
        break;
      v7 = v38;
      v4 = v38[1];
      v5 = v38[3];
    }
  }
  free(v36);
  sub_6F854367((int)v41, (int)v40);
  sub_6F854EC7((const void **)&v41, &v40);
  fflush(v33);
  fclose(v33);
  return v34;
}
