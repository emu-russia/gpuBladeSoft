int __usercall sub_6F79A730@<eax>(unsigned int *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned int *v4; // esi@1
  unsigned int v5; // eax@2
  char *v6; // ebp@2
  unsigned int v7; // edi@3
  unsigned int v8; // ebx@3
  unsigned int v9; // eax@8
  char *v10; // edi@10
  int v11; // eax@12
  int v12; // esi@12
  unsigned int v13; // edx@12
  unsigned int v14; // eax@12
  char *v15; // eax@13
  unsigned int v16; // edi@15
  int v17; // eax@16
  int v18; // eax@17
  int result; // eax@19
  signed int v20; // edi@24
  char *v21; // eax@24
  signed int v22; // ebp@27
  char *v23; // eax@27
  char *v24; // edx@27
  char *v25; // eax@30
  signed int v26; // [sp+2Ch] [bp-40h]@1
  int v27; // [sp+30h] [bp-3Ch]@15
  unsigned int v28; // [sp+34h] [bp-38h]@15
  int v29; // [sp+38h] [bp-34h]@24
  int v30; // [sp+3Ch] [bp-30h]@24
  int v31; // [sp+4Ch] [bp-20h]@12

  v4 = a1;
  v26 = 0;
  if ( a3 < 0 )
  {
    if ( a3 == -21 )
    {
      a2 -= 21;
      v26 = 3;
      a3 = 0;
    }
    else
    {
      v26 = 1;
      a3 = 0;
    }
  }
  v5 = *a1;
  v6 = (char *)v4[2];
  if ( !*v4 )
  {
    v8 = 0;
LABEL_15:
    v27 = v5 + 1;
    v16 = v4[1];
    v28 = v4[1];
    if ( v5 + 1 >= v16 )
    {
      v31 = 0;
      if ( v5 + 1 > v16 )
      {
        v30 = a3;
        v29 = a2;
        v20 = (v5 + 8) & 0xFFFFFFF8;
        v21 = sub_6F773B30(a4, 12, v28, v20, v6, &v31);
        v6 = v21;
        v4[2] = (unsigned int)v21;
        result = v31;
        if ( v31 )
          return result;
        v4[1] = v20;
        a3 = v30;
        a2 = v29;
      }
    }
    *v4 = v27;
    v17 = (int)&v6[12 * v27 - 12];
    *(_DWORD *)(v17 + 4) = a3;
    *(_DWORD *)v17 = a2;
    *(_DWORD *)(v17 + 8) = v26;
    v9 = v4[3];
    if ( !v9 )
      goto LABEL_9;
LABEL_17:
    v18 = v4[5] + 16 * (v9 + 0xFFFFFFF);
    v10 = (char *)v18;
    if ( v8 < *(_DWORD *)v18 )
    {
      v15 = *(char **)(v18 + 8);
      goto LABEL_19;
    }
    goto LABEL_12;
  }
  v7 = v4[2];
  v8 = 0;
  while ( *(_DWORD *)v7 != a2 || *(_DWORD *)(v7 + 4) != a3 )
  {
    ++v8;
    v7 += 12;
    if ( v5 == v8 )
    {
      v8 = *v4;
      goto LABEL_15;
    }
  }
  if ( v5 <= v8 )
    goto LABEL_15;
  v9 = v4[3];
  if ( v9 )
    goto LABEL_17;
LABEL_9:
  if ( v4[4] )
  {
    v10 = (char *)v4[5];
  }
  else
  {
    v31 = 0;
    v25 = sub_6F773B30(a4, 16, 0, 8, (char *)v4[5], &v31);
    v10 = v25;
    v4[5] = (unsigned int)v25;
    result = v31;
    if ( v31 )
      return result;
    v4[4] = 8;
  }
  *(_DWORD *)v10 = 0;
  *((_DWORD *)v10 + 3) = 0;
  v4[3] = 1;
LABEL_12:
  v11 = *((_DWORD *)v10 + 1);
  v12 = v8 + 1;
  v31 = 0;
  v13 = (unsigned int)(v11 + 7) >> 3;
  v14 = (v8 + 8) >> 3;
  if ( v13 >= v14 )
  {
    v15 = (char *)*((_DWORD *)v10 + 2);
    *(_DWORD *)v10 = v12;
LABEL_19:
    v15[v8 >> 3] |= 128 >> (v8 & 7);
    return 0;
  }
  v22 = (v14 + 7) & 0xFFFFFFF8;
  v23 = sub_6F773B30(a4, 1, v13, v22, *((char **)v10 + 2), &v31);
  v24 = v23;
  *((_DWORD *)v10 + 2) = v23;
  result = v31;
  if ( !v31 )
  {
    v15 = v24;
    *(_DWORD *)v10 = v12;
    *((_DWORD *)v10 + 1) = 8 * v22;
    goto LABEL_19;
  }
  return result;
}
