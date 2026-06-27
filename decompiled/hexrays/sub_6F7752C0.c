int __usercall sub_6F7752C0@<eax>(_BYTE *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  _BYTE *v4; // ebx@1
  unsigned int v5; // ebp@1
  unsigned int v6; // edi@1
  char v7; // al@1
  char v8; // si@1
  int v9; // ecx@2
  unsigned int v10; // edx@2
  int v11; // eax@4
  int *v12; // ebx@5
  char v13; // cl@5
  int v14; // ebp@5
  int v15; // esi@8
  char v16; // ST24_1@10
  int v17; // eax@10
  int v18; // ebp@11
  _DWORD *v20; // eax@13
  int v21; // edi@14
  unsigned int v22; // eax@14
  int v23; // edi@17
  unsigned int v24; // ecx@17
  int v25; // esi@17
  int v26; // eax@17
  const char **v27; // eax@20
  unsigned int v28; // esi@21
  unsigned int v29; // ebx@21
  const char *v30; // ecx@21
  char v31; // di@21
  unsigned int v32; // eax@22
  char v33; // dl@22
  int v34; // eax@24
  const char ***v35; // ebp@25
  int v36; // esi@25
  const char *v37; // [sp+24h] [bp-48h]@21
  const char *v38; // [sp+28h] [bp-44h]@1
  int v39; // [sp+28h] [bp-44h]@18
  int v40; // [sp+2Ch] [bp-40h]@1
  int v41; // [sp+2Ch] [bp-40h]@17
  int v42; // [sp+30h] [bp-3Ch]@1
  const char **v43; // [sp+34h] [bp-38h]@20
  int v44; // [sp+38h] [bp-34h]@17
  int v45; // [sp+3Ch] [bp-30h]@19
  int v46; // [sp+48h] [bp-24h]@13
  int v47; // [sp+4Ch] [bp-20h]@17

  v4 = a1;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = *(_DWORD *)(a3 + 12);
  v38 = a1;
  v7 = *a1;
  v40 = a2;
  v42 = a3;
  v8 = v7;
  if ( v7 )
  {
    v9 = v7;
    v10 = 0;
    do
    {
      ++v4;
      v10 = v9 + 31 * v10;
      v9 = *v4;
    }
    while ( (_BYTE)v9 );
    v11 = 4 * (v10 % v5);
  }
  else
  {
    v11 = 0;
  }
  v12 = (int *)(v6 + v11);
  v13 = v8;
  v14 = v6 + 4 * v5 - 4;
  while ( 1 )
  {
    v15 = *v12;
    if ( !*v12 )
      break;
    if ( v13 == **(_BYTE **)v15 )
    {
      v16 = v13;
      v17 = strcmp(*(const char **)v15, v38);
      v13 = v16;
      if ( !v17 )
      {
        v18 = 0;
        *(_DWORD *)(v15 + 4) = v40;
        return v18;
      }
    }
    --v12;
    if ( v6 > (unsigned int)v12 )
      v12 = (int *)v14;
  }
  v46 = 0;
  v20 = sub_6F773A50(a4, 8, &v46);
  v18 = v46;
  if ( !v46 )
  {
    *v12 = (int)v20;
    *v20 = v38;
    v20[1] = v40;
    v21 = v42;
    v22 = *(_DWORD *)(v42 + 8);
    if ( v22 >= *(_DWORD *)v42 )
    {
      v23 = *(_DWORD *)(v42 + 12);
      v47 = 0;
      v41 = v23;
      v24 = 2 * *(_DWORD *)(v42 + 4);
      v44 = *(_DWORD *)(v42 + 4);
      v25 = *(_DWORD *)(v42 + 4);
      *(_DWORD *)(v42 + 4) = v24;
      *(_DWORD *)v42 = v24 / 3;
      *(_DWORD *)(v42 + 12) = sub_6F773B30(a4, 4, 0, v24, 0, &v47);
      v26 = v47;
      if ( v47 )
        return v26;
      v39 = 0;
      if ( v25 )
      {
        v45 = v18;
        do
        {
          v27 = *(const char ***)(v41 + 4 * v39);
          v43 = *(const char ***)(v41 + 4 * v39);
          if ( v27 )
          {
            v28 = *(_DWORD *)(v42 + 4);
            v29 = *(_DWORD *)(v42 + 12);
            v30 = *v27;
            v31 = **v27;
            v37 = *v27;
            if ( v31 )
            {
              v32 = 0;
              v33 = v31;
              do
              {
                ++v30;
                v32 = v33 + 31 * v32;
                v33 = *v30;
              }
              while ( *v30 );
              v34 = 4 * (v32 % v28);
            }
            else
            {
              v34 = 0;
            }
            v35 = (const char ***)(v29 + v34);
            v36 = v29 + 4 * v28 - 4;
            while ( *v35 && (v31 != ***v35 || strcmp(**v35, v37)) )
            {
              --v35;
              if ( v29 > (unsigned int)v35 )
                v35 = (const char ***)v36;
            }
            *v35 = v43;
          }
          ++v39;
        }
        while ( v44 != v39 );
        v18 = v45;
      }
      sub_6F773D90(a4, v41);
      v26 = v47;
      if ( v47 )
        return v26;
      v21 = v42;
      v22 = *(_DWORD *)(v42 + 8);
    }
    *(_DWORD *)(v21 + 8) = v22 + 1;
  }
  return v18;
}
