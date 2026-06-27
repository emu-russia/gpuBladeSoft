_BYTE *__usercall sub_6F77FB50@<eax>(int *a1@<eax>, int a2@<edx>, int a3@<ecx>, _DWORD *a4, _BYTE *a5)
{
  int v5; // edi@1
  int v6; // ecx@1
  int v7; // eax@3
  int v8; // esi@5
  unsigned int v9; // ebp@5
  unsigned int v10; // ebx@6
  int v11; // edi@6
  int v12; // ebp@6
  _DWORD *v13; // eax@7
  int v14; // eax@10
  int v15; // eax@11
  int v16; // edx@11
  unsigned int v17; // edx@14
  bool v18; // zf@14
  char *v19; // eax@15
  int v20; // eax@17
  unsigned int v21; // ecx@19
  int v22; // eax@20
  int v23; // eax@21
  int *v24; // edx@24
  unsigned int v25; // edx@27
  unsigned int v26; // ecx@27
  _DWORD *v27; // eax@28
  _BYTE *result; // eax@32
  int v29; // edx@33
  int v30; // edx@35
  int v31; // edx@37
  _DWORD *v32; // eax@39
  int *v33; // ebx@44
  int v34; // esi@45
  int v35; // ebx@48
  int v36; // ebx@53
  int v37; // [sp+2Ch] [bp-50h]@5
  unsigned int v38; // [sp+30h] [bp-4Ch]@1
  int v39; // [sp+34h] [bp-48h]@1
  unsigned int v40; // [sp+38h] [bp-44h]@27
  int v41; // [sp+3Ch] [bp-40h]@37
  int v42; // [sp+48h] [bp-34h]@27
  char v43; // [sp+4Ch] [bp-30h]@14
  int v44; // [sp+50h] [bp-2Ch]@10
  int v45; // [sp+54h] [bp-28h]@14
  int v46; // [sp+58h] [bp-24h]@14
  int v47; // [sp+5Ch] [bp-20h]@14

  v5 = a3;
  v6 = *(_DWORD *)(a2 + 392);
  v39 = a2 + 8;
  v38 = (v6 - (a2 + 8)) >> 3;
  if ( v38 & 1 && !*a5 )
  {
    if ( v38 )
    {
      v35 = *(_DWORD *)(a2 + 12);
      if ( v35 == 1 )
      {
        v36 = *(_DWORD *)(a2 + 8);
        v34 = (v36 + 0x2000) >> 14;
        if ( v36 < 0 )
          v34 = -((0x2000 - v36) >> 14);
      }
      else
      {
        v34 = *(_DWORD *)(a2 + 8);
        if ( v35 == 2 )
          v34 = *(_DWORD *)(a2 + 8) << 16;
      }
    }
    else
    {
      v33 = *(int **)(a2 + 4);
      if ( !v33 || (v34 = *v33) != 0 )
        v34 = 0;
      else
        *v33 = 130;
    }
    v7 = *a1;
    *a4 = v34 + (*(_DWORD *)(*(_DWORD *)(v7 + 736) + 532) << 16);
  }
  else
  {
    v7 = *a1;
  }
  if ( !*(_BYTE *)(v7 + 561) )
  {
    v8 = v5;
    v37 = a2;
    v9 = ((v6 - (a2 + 8)) >> 3) & 1;
    if ( v38 > v9 )
    {
      v10 = v9 + 1;
      v11 = a2 + 8 * v9;
      v12 = 0;
      while ( 1 )
      {
        v21 = (v6 - v39) >> 3;
        if ( v21 > v10 - 1 )
          break;
        v13 = *(_DWORD **)(v37 + 4);
        if ( v13 && !*v13 )
          *v13 = 130;
        v14 = 0;
        v44 = v12;
        if ( v21 > v10 )
          goto LABEL_11;
LABEL_14:
        v12 += v14;
        v17 = *(_DWORD *)(v8 + 20);
        v18 = v17 == *(_DWORD *)(v8 + 12);
        v45 = v12;
        v43 = 0;
        v46 = 0;
        v47 = 0;
        if ( !v18 )
        {
          v19 = *(char **)(v8 + 28);
          goto LABEL_16;
        }
        v25 = *(_DWORD *)(v8 + 16) + v17;
        v26 = *(_DWORD *)(v8 + 8);
        v42 = 0;
        v40 = v25;
        if ( v25 <= 0x7FFFFFFF / v26 )
        {
          v41 = v25 * v26;
          v19 = sub_6F773B30(*(_DWORD *)v8, 1, *(_DWORD *)(v8 + 24), v25 * v26, *(char **)(v8 + 28), &v42);
          v31 = v42;
          *(_DWORD *)(v8 + 28) = v19;
          if ( !v31 )
          {
            *(_DWORD *)(v8 + 12) = v40;
            v17 = *(_DWORD *)(v8 + 20);
            *(_DWORD *)(v8 + 24) = v41;
            if ( v40 < v17 )
            {
              v32 = *(_DWORD **)(v8 + 4);
              if ( v32 && !*v32 )
                *v32 = 130;
              *(_DWORD *)(v8 + 20) = v40;
LABEL_17:
              v20 = v10 + 2;
              v11 += 16;
              if ( v38 <= v10 + 1 )
                goto LABEL_31;
              goto LABEL_18;
            }
LABEL_16:
            memcpy(&v19[*(_DWORD *)(v8 + 8) * v17], &v43, *(_DWORD *)(v8 + 8));
            ++*(_DWORD *)(v8 + 20);
            goto LABEL_17;
          }
        }
        v27 = *(_DWORD **)(v8 + 4);
        if ( !v27 || *v27 )
          goto LABEL_17;
        *v27 = 64;
        v11 += 16;
        v20 = v10 + 2;
        if ( v38 <= v10 + 1 )
          goto LABEL_31;
LABEL_18:
        v6 = *(_DWORD *)(v37 + 392);
        v10 = v20;
      }
      v22 = *(_DWORD *)(v11 + 12);
      if ( v22 == 1 )
      {
        v29 = *(_DWORD *)(v11 + 8);
        v23 = (v29 + 0x2000) >> 14;
        if ( v29 < 0 )
          v23 = -((0x2000 - v29) >> 14);
      }
      else
      {
        v18 = v22 == 2;
        v23 = *(_DWORD *)(v11 + 8);
        if ( v18 )
          v23 = *(_DWORD *)(v11 + 8) << 16;
      }
      v12 += v23;
      v44 = v12;
      if ( v21 <= v10 )
      {
        v24 = *(int **)(v37 + 4);
        if ( !v24 || (v14 = *v24) != 0 )
          v14 = 0;
        else
          *v24 = 130;
        goto LABEL_14;
      }
LABEL_11:
      v15 = v37 + 8 * v10;
      v16 = *(_DWORD *)(v15 + 12);
      if ( v16 == 1 )
      {
        v30 = *(_DWORD *)(v15 + 8);
        v14 = (v30 + 0x2000) >> 14;
        if ( v30 < 0 )
          v14 = -((0x2000 - v30) >> 14);
      }
      else
      {
        v14 = *(_DWORD *)(v15 + 8);
        if ( v16 == 2 )
          v14 <<= 16;
      }
      goto LABEL_14;
    }
LABEL_31:
    *(_DWORD *)(v37 + 392) = v39;
  }
  result = a5;
  *a5 = 1;
  return result;
}
