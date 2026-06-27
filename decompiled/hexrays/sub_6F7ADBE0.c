int __cdecl sub_6F7ADBE0(int a1, unsigned int a2, int *a3)
{
  int v3; // eax@1
  signed int *v4; // eax@2
  unsigned int v5; // esi@2
  signed int *v6; // edi@2
  signed int v7; // ebx@3
  int v8; // ecx@6
  int v9; // eax@6
  int v10; // ebp@7
  int v11; // edi@8
  int v12; // edx@13
  int v13; // eax@18
  unsigned int v14; // ebp@21
  int v15; // eax@22
  signed int v16; // ebx@22
  int v17; // ecx@22
  int v18; // eax@22
  int v19; // edi@22
  int v21; // ebp@32
  int v22; // edi@32
  int v23; // ebx@23
  int v24; // esi@23
  int v25; // edx@23
  unsigned __int32 v26; // ebx@39
  signed int v27; // eax@39
  signed int v28; // ebx@42
  char *v29; // eax@42
  int v30; // ecx@42
  char *v31; // esi@42
  unsigned __int16 v32; // ax@45
  char *v33; // eax@45
  int v34; // edx@45
  char *v35; // ebx@47
  int v36; // edx@47
  int v37; // ST4C_4@49
  int v38; // ST48_4@49
  int v39; // ebx@49
  int v40; // esi@52
  int v41; // eax@53
  int v42; // ebx@53
  char *v43; // [sp+2Ch] [bp-50h]@2
  unsigned int v44; // [sp+30h] [bp-4Ch]@20
  int v45; // [sp+30h] [bp-4Ch]@32
  int v46; // [sp+34h] [bp-48h]@1
  int v47; // [sp+34h] [bp-48h]@19
  unsigned int v48; // [sp+38h] [bp-44h]@16
  int v49; // [sp+38h] [bp-44h]@44
  int v50; // [sp+3Ch] [bp-40h]@1
  signed int v51; // [sp+40h] [bp-3Ch]@39
  unsigned int *v52; // [sp+44h] [bp-38h]@2
  int v53; // [sp+54h] [bp-28h]@1
  int v54; // [sp+58h] [bp-24h]@32
  unsigned int v55; // [sp+5Ch] [bp-20h]@32

  v53 = 0;
  v50 = *(_DWORD *)(a1 + 100);
  v3 = *(_DWORD *)(a1 + 676);
  v46 = *(_DWORD *)(a1 + 676);
  if ( !v3 )
  {
    v53 = sub_6F7AD180(a1, 0);
    v43 = 0;
    if ( v53 )
      goto LABEL_29;
    v3 = *(_DWORD *)(a1 + 676);
    v46 = *(_DWORD *)(a1 + 676);
  }
  v4 = *(signed int **)(v3 + 8);
  v5 = *v4;
  v52 = (unsigned int *)v4;
  v6 = v4;
  v43 = sub_6F773B30(v50, 4, 0, *v4, 0, &v53);
  if ( !v53 )
  {
    v7 = v6[3];
    if ( v5 > a2 )
      v5 = a2;
    if ( v5 )
    {
      v8 = *(_DWORD *)(v7 + 12);
      v9 = *a3;
      if ( v8 >= *a3 )
      {
        v10 = *(_DWORD *)(v7 + 4);
        if ( v10 <= v9 )
        {
          v11 = 0;
          while ( 1 )
          {
            v12 = *(_DWORD *)(v7 + 8);
            if ( v12 > v9 )
            {
              *(_DWORD *)&v43[4 * v11] = -sub_6F7C9760(v9 - v12, v10 - v12);
            }
            else
            {
              if ( v12 != v8 )
              {
                v7 += 24;
                *(_DWORD *)&v43[4 * v11++] = sub_6F7C9760(v9 - v12, v8 - v12);
                if ( v11 == v5 )
                  goto LABEL_16;
                goto LABEL_11;
              }
              *(_DWORD *)&v43[4 * v11] = 0;
            }
            ++v11;
            v7 += 24;
            if ( v11 == v5 )
              goto LABEL_16;
LABEL_11:
            v9 = a3[v11];
            v8 = *(_DWORD *)(v7 + 12);
            if ( v9 <= v8 )
            {
              v10 = *(_DWORD *)(v7 + 4);
              if ( v9 >= v10 )
                continue;
            }
            break;
          }
        }
      }
      v53 = 6;
    }
    else
    {
LABEL_16:
      v48 = *v52;
      if ( v5 < *v52 )
        memset(&v43[4 * v5], 0, 4 * (*v52 - v5));
      v13 = v46;
      if ( !*(_BYTE *)(v46 + 16) )
      {
        v54 = 0;
        v21 = *(_DWORD *)(a1 + 104);
        v45 = *(_DWORD *)(v21 + 28);
        v22 = *(_DWORD *)(a1 + 676);
        *(_BYTE *)(v22 + 16) = 1;
        v54 = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1635148146, v21, (int *)&v55);
        if ( v54 || (v54 = sub_6F772380(v21, v55)) != 0 )
        {
          v48 = *v52;
          v13 = v46;
        }
        else
        {
          v26 = sub_6F772560(v21);
          v27 = sub_6F772560(v21);
          v51 = v27;
          if ( v26 == 0x10000 && v27 == **(_DWORD **)(v22 + 8) )
          {
            v28 = v27;
            v29 = sub_6F773B30(v45, 8, 0, v27, 0, &v54);
            v30 = v54;
            v31 = v29;
            *(_DWORD *)(v22 + 20) = v29;
            if ( !v30 && v28 > 0 )
            {
              v49 = 0;
              while ( 1 )
              {
                v32 = sub_6F7724C0(v21);
                *(_WORD *)v31 = v32;
                v33 = sub_6F773B30(v45, 8, 0, v32, 0, &v54);
                v34 = v54;
                *((_DWORD *)v31 + 1) = v33;
                if ( v34 )
                  break;
                if ( *(_WORD *)v31 )
                {
                  v35 = v33;
                  v36 = 0;
                  while ( 1 )
                  {
                    v37 = v36;
                    v38 = 8 * v36;
                    *(_DWORD *)&v35[8 * v36] = 4 * (signed __int16)sub_6F7724C0(v21);
                    v39 = v38 + *((_DWORD *)v31 + 1);
                    *(_DWORD *)(v39 + 4) = 4 * (signed __int16)sub_6F7724C0(v21);
                    v36 = v37 + 1;
                    if ( v37 + 1 >= *(_WORD *)v31 )
                      break;
                    v35 = (char *)*((_DWORD *)v31 + 1);
                  }
                }
                ++v49;
                v31 += 8;
                if ( v51 == v49 )
                  goto LABEL_40;
              }
              v40 = v49 - 1;
              if ( v49 - 1 < 0 )
              {
                v41 = *(_DWORD *)(v22 + 20);
              }
              else
              {
                v41 = *(_DWORD *)(v22 + 20);
                v42 = 8 * v40;
                do
                {
                  --v40;
                  sub_6F773D90(v45, *(_DWORD *)(v41 + v42 + 4));
                  v41 = *(_DWORD *)(v22 + 20);
                  *(_DWORD *)(v41 + v42 + 4) = 0;
                  v42 -= 8;
                }
                while ( v40 != -1 );
              }
              sub_6F773D90(v45, v41);
              *(_DWORD *)(v22 + 20) = 0;
            }
          }
LABEL_40:
          sub_6F772460(v21);
          v48 = *v52;
          v13 = v46;
        }
      }
      v47 = *(_DWORD *)(v13 + 20);
      if ( v47 )
      {
        v44 = 0;
        if ( v48 )
        {
          do
          {
            v14 = *(_WORD *)v47;
            if ( v14 > 1 )
            {
              v15 = *(_DWORD *)(v47 + 4);
              v16 = 1;
              v17 = *(_DWORD *)(v15 + 8);
              v18 = v15 + 16;
              v19 = *(_DWORD *)&v43[4 * v44];
              if ( v19 >= v17 )
              {
                while ( v16 + 1 != v14 )
                {
                  v24 = v18;
                  v18 += 8;
                  v17 = *(_DWORD *)(v18 - 8);
                  if ( v17 > v19 )
                  {
                    v25 = *(_DWORD *)(v47 + 4);
                    v23 = 8 * v16;
                    goto LABEL_35;
                  }
                  ++v16;
                }
              }
              else
              {
                v23 = 0;
                v24 = *(_DWORD *)(v47 + 4) + 8;
                v25 = *(_DWORD *)(v47 + 4);
LABEL_35:
                *(_DWORD *)&v43[4 * v44] = *(_DWORD *)(*(_DWORD *)(v47 + 4) + v23 + 4)
                                         + sub_6F7C9420(
                                             v19 - *(_DWORD *)(v23 + v25),
                                             *(_DWORD *)(v24 + 4) - *(_DWORD *)(v23 + v25 + 4),
                                             v17 - *(_DWORD *)(v23 + v25));
                v48 = *v52;
              }
            }
            ++v44;
            v47 += 8;
          }
          while ( v44 < v48 );
        }
      }
      v53 = sub_6F7AD660(a1, v48, v43);
    }
  }
LABEL_29:
  sub_6F773D90(v50, (int)v43);
  return v53;
}
