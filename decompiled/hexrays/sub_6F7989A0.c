int __usercall sub_6F7989A0@<eax>(int a1@<eax>, unsigned int a2@<edx>, int **a3@<ecx>, int a4, int a5)
{
  unsigned int v5; // edi@1
  int **v6; // ebp@1
  int v8; // eax@5
  int v9; // edx@5
  int *v10; // eax@5
  unsigned int v11; // ecx@6
  int v12; // ebx@7
  int v13; // eax@9
  _BYTE *v14; // edi@11
  unsigned int v15; // ebp@12
  signed int v16; // esi@12
  signed int v17; // eax@13
  int v18; // eax@16
  int v19; // eax@18
  int v20; // edx@18
  int v21; // eax@18
  _DWORD **v22; // eax@19
  unsigned int v23; // ecx@19
  int v24; // ebx@20
  int **v25; // edx@20
  int v26; // edi@20
  int *v27; // ebx@22
  int v28; // eax@22
  unsigned int v29; // ebp@30
  int v30; // edi@32
  int v31; // eax@32
  int **v32; // esi@33
  unsigned int v33; // eax@33
  int **v34; // edx@33
  unsigned int v35; // ecx@34
  int v36; // esi@34
  int v37; // edi@34
  int *v38; // ebx@36
  int v39; // eax@36
  int v40; // eax@46
  int v41; // [sp+28h] [bp-64h]@12
  int v42; // [sp+28h] [bp-64h]@30
  unsigned int v43; // [sp+2Ch] [bp-60h]@10
  unsigned int v44; // [sp+2Ch] [bp-60h]@33
  unsigned int v45; // [sp+30h] [bp-5Ch]@12
  int v46; // [sp+30h] [bp-5Ch]@34
  int v47; // [sp+34h] [bp-58h]@11
  int **v48; // [sp+34h] [bp-58h]@33
  unsigned int v49; // [sp+38h] [bp-54h]@1
  int v50; // [sp+3Ch] [bp-50h]@1
  int v51; // [sp+40h] [bp-4Ch]@1
  int v52; // [sp+44h] [bp-48h]@18
  _DWORD **v53; // [sp+48h] [bp-44h]@19
  int v54; // [sp+4Ch] [bp-40h]@9
  int v55; // [sp+50h] [bp-3Ch]@20
  _BYTE *v56; // [sp+54h] [bp-38h]@20
  int v57; // [sp+5Ch] [bp-30h]@9
  int v58; // [sp+6Ch] [bp-20h]@1

  v5 = 2 * a2;
  v6 = a3;
  v49 = a2;
  v50 = a1;
  *(_DWORD *)(a1 + 12) = sub_6F773B30(a5, 4, 0, 2 * a2, 0, &v58);
  v51 = v58;
  if ( v58 )
    return v51;
  *(_DWORD *)(v50 + 8) = sub_6F773B30(a5, 28, 0, v49, 0, &v58);
  v51 = v58;
  if ( v58 )
    return v51;
  *(_DWORD *)(v50 + 24) = sub_6F773B30(a5, 16, 0, v5 + 1, 0, &v58);
  v51 = v58;
  if ( v58 )
    return v51;
  v8 = *(_DWORD *)(v50 + 12);
  *(_DWORD *)(v50 + 28) = 0;
  *(_DWORD *)(v50 + 4) = 0;
  *(_DWORD *)(v50 + 20) = 0;
  v9 = *(_DWORD *)(v50 + 8);
  *(_DWORD *)v50 = v49;
  *(_DWORD *)(v50 + 16) = v8 + 4 * v49;
  v10 = *v6;
  if ( v49 )
  {
    v11 = v49;
    do
    {
      v12 = *v10;
      v9 += 28;
      v10 += 3;
      *(_DWORD *)(v9 - 28) = v12;
      *(_DWORD *)(v9 - 24) = *(v10 - 2);
      *(_DWORD *)(v9 - 12) = *(v10 - 1);
      --v11;
    }
    while ( v11 );
    if ( !a4 )
      goto LABEL_30;
    v54 = *(_DWORD *)(a4 + 8);
    v13 = *(_DWORD *)a4;
    *(_DWORD *)(v50 + 32) = a4;
    v57 = v13;
    if ( !v13 )
      goto LABEL_30;
  }
  else
  {
    if ( !a4 )
      return v51;
    v54 = *(_DWORD *)(a4 + 8);
    v40 = *(_DWORD *)a4;
    *(_DWORD *)(v50 + 32) = a4;
    v57 = v40;
    if ( !v40 )
      return v51;
  }
  v43 = 0;
  do
  {
    v47 = *(_DWORD *)v54;
    v14 = *(_BYTE **)(v54 + 8);
    if ( *(_DWORD *)v54 )
    {
      v41 = 0;
      v15 = 0;
      v16 = 0;
      v45 = v43;
      do
      {
        if ( v16 )
        {
          v17 = v16;
          v16 >>= 1;
          if ( v17 & v41 )
            goto LABEL_17;
        }
        else
        {
          v18 = *v14++;
          v16 = 64;
          v41 = v18;
          if ( v18 & 0x80 )
          {
LABEL_17:
            if ( v49 > v15 )
            {
              v19 = *(_DWORD *)(v50 + 8) + 28 * v15;
              v20 = v19;
              v52 = *(_DWORD *)(v50 + 8) + 28 * v15;
              v21 = *(_DWORD *)(v19 + 16);
              if ( !(v21 & 4) )
              {
                *(_DWORD *)(v20 + 16) = v21 | 4;
                v22 = *(_DWORD ***)(v50 + 16);
                v23 = v43;
                *(_DWORD *)(v20 + 20) = 0;
                v53 = v22;
                if ( v43 )
                {
                  v56 = v14;
                  v55 = *(_DWORD *)v20;
                  v24 = *(_DWORD *)(v20 + 4) + *(_DWORD *)v20;
                  v25 = v22;
                  v26 = v24;
                  do
                  {
                    v27 = *v25;
                    v28 = **v25;
                    if ( v28 <= v26 && v27[1] + v28 >= v55 )
                    {
                      v14 = v56;
                      *(_DWORD *)(v52 + 20) = v27;
                      goto LABEL_25;
                    }
                    ++v25;
                    --v23;
                  }
                  while ( v23 );
                  v14 = v56;
                }
LABEL_25:
                if ( v49 > v43 )
                {
                  *(_DWORD *)(v50 + 4) = ++v43;
                  v53[v45] = (_DWORD *)v52;
                }
              }
            }
            goto LABEL_14;
          }
        }
LABEL_14:
        ++v15;
        v45 = v43;
      }
      while ( v47 != v15 );
    }
    v54 += 16;
    --v57;
  }
  while ( v57 );
  if ( v49 != v43 && v49 )
  {
LABEL_30:
    v42 = 0;
    v29 = 0;
    do
    {
      if ( v49 > v29 )
      {
        v30 = *(_DWORD *)(v50 + 8) + v42;
        v31 = *(_DWORD *)(v30 + 16);
        if ( !(v31 & 4) )
        {
          *(_DWORD *)(v30 + 16) = v31 | 4;
          v32 = *(int ***)(v50 + 16);
          v33 = *(_DWORD *)(v50 + 4);
          *(_DWORD *)(v30 + 20) = 0;
          v34 = v32;
          v48 = v32;
          v44 = v33;
          if ( v33 )
          {
            v46 = v30;
            v35 = v33;
            v36 = *(_DWORD *)(v30 + 4) + *(_DWORD *)v30;
            v37 = *(_DWORD *)v30;
            do
            {
              v38 = *v34;
              v39 = **v34;
              if ( v39 <= v36 && v37 <= v38[1] + v39 )
              {
                v30 = v46;
                v33 = v44;
                *(_DWORD *)(v46 + 20) = v38;
                goto LABEL_39;
              }
              ++v34;
              --v35;
            }
            while ( v35 );
            v30 = v46;
            v33 = v44;
          }
LABEL_39:
          if ( v49 > v33 )
          {
            *(_DWORD *)(v50 + 4) = v33 + 1;
            v48[v33] = (int *)v30;
          }
        }
      }
      ++v29;
      v42 += 28;
    }
    while ( v29 != v49 );
  }
  return v51;
}
