void __cdecl sub_6F764130(int a1, const char *a2)
{
  int v2; // ebp@1
  size_t v3; // eax@3
  int v4; // ebx@4
  const char *v5; // ecx@4
  const char *v6; // edi@4
  unsigned int v7; // eax@4
  int v8; // ebx@12
  int v9; // ebx@13
  int v10; // ebx@14
  int v11; // ebx@15
  int v12; // ebx@16
  int v13; // ebx@17
  int v14; // ebx@18
  unsigned int v15; // eax@19
  unsigned int v16; // esi@19
  unsigned int v17; // eax@19
  unsigned int v18; // esi@19
  int v19; // eax@19
  unsigned int v20; // ecx@20
  int v21; // eax@21
  int v22; // edx@22
  int v23; // edi@22
  const char *v24; // esi@22
  int v25; // ebx@24
  int v26; // edi@53
  int v27; // edx@53
  int v28; // ebx@54
  unsigned int v29; // ST18_4@71
  int v30; // ST1C_4@71
  int v31; // eax@71
  int v32; // eax@73
  int v33; // ST1C_4@77
  unsigned int v34; // ST18_4@77
  int v35; // eax@77
  unsigned int v36; // ST18_4@79
  int v37; // ST1C_4@79
  int v38; // eax@79
  int v39; // ST1C_4@81
  unsigned int v40; // ST18_4@81
  int v41; // eax@81
  unsigned int v42; // ST18_4@83
  int v43; // ST1C_4@83
  int v44; // eax@83
  int v45; // ST1C_4@85
  unsigned int v46; // ST18_4@85
  int v47; // eax@85
  unsigned int v48; // ST18_4@87
  int v49; // ST1C_4@87
  int v50; // eax@87
  int v51; // ST1C_4@89
  unsigned int v52; // ST18_4@89
  int v53; // eax@89
  int v54; // ST1C_4@92
  unsigned int v55; // ST18_4@92
  int v56; // eax@92
  unsigned int v57; // ST10_4@94
  int v58; // ST18_4@94
  int v59; // eax@94
  int v60; // ST18_4@96
  unsigned int v61; // ST10_4@96
  int v62; // eax@96
  unsigned int v63; // ST10_4@98
  int v64; // ST18_4@98
  int v65; // eax@98
  int v66; // ST18_4@100
  unsigned int v67; // ST10_4@100
  int v68; // eax@100
  unsigned int v69; // ST10_4@102
  int v70; // ST18_4@102
  int v71; // eax@102
  int v72; // ST18_4@104
  unsigned int v73; // ST10_4@104
  int v74; // eax@104
  unsigned int v75; // ST10_4@106
  int v76; // ST18_4@106
  int v77; // eax@106
  int v78; // [sp+10h] [bp-2Ch]@22
  int v79; // [sp+10h] [bp-2Ch]@54
  int v80; // [sp+14h] [bp-28h]@21

  v2 = a1;
  if ( a2 && a1 )
  {
    v3 = strlen(a2);
    if ( v3 )
    {
      v4 = ((_BYTE)v3 - 1) & 7;
      v5 = &a2[v3];
      v6 = a2 + 1;
      v7 = ((unsigned int)(1025 * *a2) >> 6) ^ 1025 * *a2;
      if ( v5 != a2 + 1 )
      {
        if ( !v4 )
          goto LABEL_110;
        if ( v4 != 1 )
        {
          if ( v4 != 2 )
          {
            if ( v4 != 3 )
            {
              if ( v4 != 4 )
              {
                if ( v4 != 5 )
                {
                  if ( v4 != 6 )
                  {
                    v8 = *v6;
                    v6 = a2 + 2;
                    v7 = (1025 * (v8 + v7) >> 6) ^ 1025 * (v8 + v7);
                  }
                  v9 = *v6++;
                  v7 = (1025 * (v9 + v7) >> 6) ^ 1025 * (v9 + v7);
                }
                v10 = *v6++;
                v7 = (1025 * (v10 + v7) >> 6) ^ 1025 * (v10 + v7);
              }
              v11 = *v6++;
              v7 = (1025 * (v11 + v7) >> 6) ^ 1025 * (v11 + v7);
            }
            v12 = *v6++;
            v7 = (1025 * (v12 + v7) >> 6) ^ 1025 * (v12 + v7);
          }
          v13 = *v6++;
          v7 = (1025 * (v13 + v7) >> 6) ^ 1025 * (v13 + v7);
        }
        v14 = *v6++;
        v7 = (1025 * (v14 + v7) >> 6) ^ 1025 * (v14 + v7);
        if ( v5 != v6 )
        {
LABEL_110:
          do
          {
            v15 = 1025 * ((1025 * (*v6 + v7) ^ (1025 * (*v6 + v7) >> 6)) + v6[1]);
            v16 = 1025 * ((v15 ^ (v15 >> 6)) + v6[2]);
            v17 = (1025 * ((1025 * ((v16 ^ (v16 >> 6)) + v6[3]) ^ (1025 * ((v16 ^ (v16 >> 6)) + v6[3]) >> 6)) + v6[4]) ^ (1025 * ((1025 * ((v16 ^ (v16 >> 6)) + v6[3]) ^ (1025 * ((v16 ^ (v16 >> 6)) + v6[3]) >> 6)) + v6[4]) >> 6))
                + v6[5];
            v18 = 1025 * ((1025 * v17 ^ (1025 * v17 >> 6)) + v6[6]);
            v19 = v6[7];
            v6 += 8;
            v7 = (1025 * ((v18 ^ (v18 >> 6)) + v19) >> 6) ^ 1025 * ((v18 ^ (v18 >> 6)) + v19);
          }
          while ( v5 != v6 );
        }
      }
      v20 = 32769 * (9 * v7 ^ (9 * v7 >> 11));
    }
    else
    {
      v20 = 0;
    }
    v21 = *(_DWORD *)(a1 + 4);
    v80 = *(_DWORD *)(a1 + 4);
    if ( v21 > 0 )
    {
      v22 = *(_DWORD *)(a1 + 12);
      v23 = 0;
      v78 = ((_BYTE)v21 - 1) & 7;
      v24 = *(const char **)v22;
      if ( *(_DWORD *)v22 )
      {
        if ( **(_DWORD **)(a1 + 16) == v20 )
        {
          v54 = *(_DWORD *)(a1 + 12);
          v55 = v20;
          v56 = strcmp(a2, v24);
          v20 = v55;
          v22 = v54;
          if ( !v56 )
          {
LABEL_73:
            free((void *)v24);
            v32 = *(_DWORD *)(v2 + 8);
            *(_DWORD *)(*(_DWORD *)(v2 + 12) + v23) = 0;
            if ( *(_DWORD *)(v32 + v23) )
            {
              free(*(void **)(v32 + v23));
              *(_DWORD *)(*(_DWORD *)(v2 + 8) + v23) = 0;
            }
            *(_DWORD *)(*(_DWORD *)(v2 + 16) + v23) = 0;
            --*(_DWORD *)v2;
            return;
          }
        }
      }
      v25 = 1;
      if ( 1 == v80 )
        return;
      if ( v78 )
      {
        if ( v78 != 1 )
        {
          if ( v78 != 2 )
          {
            if ( v78 != 3 )
            {
              if ( v78 != 4 )
              {
                if ( v78 != 5 )
                {
                  if ( v78 != 6 )
                  {
                    v24 = *(const char **)(v22 + 4);
                    v23 = 4;
                    if ( v24 )
                    {
                      if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) == v20 )
                      {
                        v57 = v20;
                        v58 = v22;
                        v59 = strcmp(a2, v24);
                        v20 = v57;
                        v22 = v58;
                        if ( !v59 )
                          goto LABEL_73;
                      }
                    }
                    v25 = 2;
                  }
                  v24 = *(const char **)(v22 + 4 * v25);
                  v23 = 4 * v25;
                  if ( v24 )
                  {
                    if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
                    {
                      v60 = v22;
                      v61 = v20;
                      v62 = strcmp(a2, v24);
                      v20 = v61;
                      v22 = v60;
                      if ( !v62 )
                        goto LABEL_73;
                    }
                  }
                  ++v25;
                }
                v24 = *(const char **)(v22 + 4 * v25);
                v23 = 4 * v25;
                if ( v24 )
                {
                  if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
                  {
                    v63 = v20;
                    v64 = v22;
                    v65 = strcmp(a2, v24);
                    v20 = v63;
                    v22 = v64;
                    if ( !v65 )
                      goto LABEL_73;
                  }
                }
                ++v25;
              }
              v24 = *(const char **)(v22 + 4 * v25);
              v23 = 4 * v25;
              if ( v24 )
              {
                if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
                {
                  v66 = v22;
                  v67 = v20;
                  v68 = strcmp(a2, v24);
                  v20 = v67;
                  v22 = v66;
                  if ( !v68 )
                    goto LABEL_73;
                }
              }
              ++v25;
            }
            v24 = *(const char **)(v22 + 4 * v25);
            v23 = 4 * v25;
            if ( v24 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
              {
                v69 = v20;
                v70 = v22;
                v71 = strcmp(a2, v24);
                v20 = v69;
                v22 = v70;
                if ( !v71 )
                  goto LABEL_73;
              }
            }
            ++v25;
          }
          v24 = *(const char **)(v22 + 4 * v25);
          v23 = 4 * v25;
          if ( v24 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
            {
              v72 = v22;
              v73 = v20;
              v74 = strcmp(a2, v24);
              v20 = v73;
              v22 = v72;
              if ( !v74 )
                goto LABEL_73;
            }
          }
          ++v25;
        }
        v24 = *(const char **)(v22 + 4 * v25);
        v23 = 4 * v25;
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
          {
            v75 = v20;
            v76 = v22;
            v77 = strcmp(a2, v24);
            v20 = v75;
            v22 = v76;
            if ( !v77 )
              goto LABEL_73;
          }
        }
        if ( ++v25 == v80 )
          return;
      }
      v26 = v22;
      v27 = a1;
      while ( 1 )
      {
        v24 = *(const char **)(v26 + 4 * v25);
        v79 = 4 * v25;
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * v25) == v20 )
          {
            v29 = v20;
            v30 = v27;
            v31 = strcmp(a2, v24);
            v20 = v29;
            v27 = v30;
            if ( !v31 )
              break;
          }
        }
        v28 = v25 + 1;
        v79 = 4 * v28;
        v24 = *(const char **)(v26 + 4 * v28);
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * v28) == v20 )
          {
            v33 = v27;
            v34 = v20;
            v35 = strcmp(a2, v24);
            v20 = v34;
            v27 = v33;
            if ( !v35 )
              break;
          }
        }
        v79 = 4 * (v28 + 1);
        v24 = *(const char **)(v26 + 4 * (v28 + 1));
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * (v28 + 1)) == v20 )
          {
            v36 = v20;
            v37 = v27;
            v38 = strcmp(a2, v24);
            v20 = v36;
            v27 = v37;
            if ( !v38 )
              break;
          }
        }
        v79 = 4 * (v28 + 2);
        v24 = *(const char **)(v26 + 4 * (v28 + 2));
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * (v28 + 2)) == v20 )
          {
            v39 = v27;
            v40 = v20;
            v41 = strcmp(a2, v24);
            v20 = v40;
            v27 = v39;
            if ( !v41 )
              break;
          }
        }
        v79 = 4 * (v28 + 3);
        v24 = *(const char **)(v26 + 4 * (v28 + 3));
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * (v28 + 3)) == v20 )
          {
            v42 = v20;
            v43 = v27;
            v44 = strcmp(a2, v24);
            v20 = v42;
            v27 = v43;
            if ( !v44 )
              break;
          }
        }
        v79 = 4 * (v28 + 4);
        v24 = *(const char **)(v26 + 4 * (v28 + 4));
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * (v28 + 4)) == v20 )
          {
            v45 = v27;
            v46 = v20;
            v47 = strcmp(a2, v24);
            v20 = v46;
            v27 = v45;
            if ( !v47 )
              break;
          }
        }
        v79 = 4 * (v28 + 5);
        v24 = *(const char **)(v26 + 4 * (v28 + 5));
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * (v28 + 5)) == v20 )
          {
            v48 = v20;
            v49 = v27;
            v50 = strcmp(a2, v24);
            v20 = v48;
            v27 = v49;
            if ( !v50 )
              break;
          }
        }
        v79 = 4 * (v28 + 6);
        v24 = *(const char **)(v26 + 4 * (v28 + 6));
        if ( v24 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(v27 + 16) + 4 * (v28 + 6)) == v20 )
          {
            v51 = v27;
            v52 = v20;
            v53 = strcmp(a2, v24);
            v20 = v52;
            v27 = v51;
            if ( !v53 )
              break;
          }
        }
        v25 = v28 + 7;
        if ( v25 == v80 )
          return;
      }
      v23 = v79;
      v2 = v27;
      goto LABEL_73;
    }
  }
}
