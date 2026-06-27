signed int __cdecl sub_6F763710(int a1, const char *a2, const char *a3)
{
  size_t v3; // eax@3
  int v4; // ebx@4
  const char *v5; // ecx@4
  const char *v6; // esi@4
  unsigned int v7; // eax@4
  int v8; // ebx@12
  int v9; // edx@13
  int v10; // ebp@14
  int v11; // ebx@15
  int v12; // edx@16
  int v13; // ebp@17
  int v14; // ebx@18
  unsigned int v15; // eax@19
  unsigned int v16; // ebp@19
  unsigned int v17; // ebp@19
  int v18; // eax@19
  unsigned int v19; // edx@19
  int v20; // edx@21
  int v21; // ecx@23
  int v22; // ebp@23
  int v23; // ebx@23
  signed int v24; // esi@25
  const char *v25; // eax@33
  const char *v26; // eax@36
  const char *v27; // eax@39
  const char *v28; // eax@42
  const char *v29; // eax@45
  const char *v30; // eax@48
  const char *v31; // eax@51
  int v32; // ebp@54
  int v33; // ebx@54
  unsigned int v34; // ecx@54
  int v35; // ebx@55
  const char *v36; // eax@55
  const char *v37; // edx@57
  const char *v38; // edx@59
  const char *v39; // edx@61
  const char *v40; // edx@63
  const char *v41; // edx@65
  const char *v42; // edx@67
  const char *v43; // eax@70
  unsigned int v44; // ST2C_4@72
  int v45; // eax@72
  int v46; // edx@73
  void **v47; // esi@74
  int v48; // ST18_4@75
  void *v49; // ebx@76
  size_t v50; // edi@77
  char *v52; // edx@81
  int v53; // ebx@81
  char *v54; // esi@82
  void *v55; // ebp@84
  void *v56; // ebx@85
  int v57; // ecx@85
  char *v58; // ebx@87
  size_t v59; // eax@88
  size_t v60; // esi@88
  void *v61; // eax@88
  unsigned int v62; // ST2C_4@92
  unsigned int v63; // ST2C_4@94
  unsigned int v64; // ST2C_4@96
  unsigned int v65; // ST2C_4@98
  unsigned int v66; // ST2C_4@100
  unsigned int v67; // ST2C_4@102
  unsigned int v68; // ST2C_4@104
  int v69; // ST18_4@106
  int v70; // ST18_4@108
  int v71; // ST18_4@110
  int v72; // ST18_4@112
  int v73; // ST18_4@114
  int v74; // ST18_4@116
  int v75; // ST18_4@118
  int v76; // ST18_4@120
  void *v77; // eax@122
  void *v78; // ebx@122
  void *v79; // eax@122
  void *v80; // ecx@122
  void *v81; // esi@125
  size_t v82; // eax@125
  int v83; // [sp+18h] [bp-34h]@55
  int v84; // [sp+18h] [bp-34h]@77
  void *v85; // [sp+18h] [bp-34h]@81
  int v86; // [sp+18h] [bp-34h]@88
  unsigned int v87; // [sp+1Ch] [bp-30h]@20
  int v88; // [sp+20h] [bp-2Ch]@21
  void *v89; // [sp+20h] [bp-2Ch]@81
  int v90; // [sp+24h] [bp-28h]@21
  int v91; // [sp+24h] [bp-28h]@85
  size_t v92; // [sp+28h] [bp-24h]@3
  size_t v93; // [sp+28h] [bp-24h]@85
  void *v94; // [sp+28h] [bp-24h]@122

  if ( !a1 || !a2 )
    return -1;
  v3 = strlen(a2);
  v92 = v3;
  if ( v3 )
  {
    v4 = ((_BYTE)v3 - 1) & 7;
    v5 = &a2[v3];
    v6 = a2 + 1;
    v7 = ((unsigned int)(1025 * *a2) >> 6) ^ 1025 * *a2;
    if ( v5 != a2 + 1 )
    {
      if ( !v4 )
        goto LABEL_136;
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
                  v7 = (1025 * (v7 + v8) >> 6) ^ 1025 * (v7 + v8);
                }
                v9 = *v6++;
                v7 = (1025 * (v7 + v9) >> 6) ^ 1025 * (v7 + v9);
              }
              v10 = *v6++;
              v7 = (1025 * (v7 + v10) >> 6) ^ 1025 * (v7 + v10);
            }
            v11 = *v6++;
            v7 = (1025 * (v7 + v11) >> 6) ^ 1025 * (v7 + v11);
          }
          v12 = *v6++;
          v7 = (1025 * (v7 + v12) >> 6) ^ 1025 * (v7 + v12);
        }
        v13 = *v6++;
        v7 = (1025 * (v7 + v13) >> 6) ^ 1025 * (v7 + v13);
      }
      v14 = *v6++;
      v7 = (1025 * (v7 + v14) >> 6) ^ 1025 * (v7 + v14);
      if ( v5 != v6 )
      {
LABEL_136:
        do
        {
          v15 = 1025 * ((1025 * (*v6 + v7) ^ (1025 * (*v6 + v7) >> 6)) + v6[1]);
          v16 = 1025 * ((v15 ^ (v15 >> 6)) + v6[2]);
          v17 = 1025 * ((v16 ^ (v16 >> 6)) + v6[3]);
          v18 = v6[7];
          v19 = 1025
              * ((1025 * ((1025 * ((v17 ^ (v17 >> 6)) + v6[4]) ^ (1025 * ((v17 ^ (v17 >> 6)) + v6[4]) >> 6)) + v6[5]) ^ (1025 * ((1025 * ((v17 ^ (v17 >> 6)) + v6[4]) ^ (1025 * ((v17 ^ (v17 >> 6)) + v6[4]) >> 6)) + v6[5]) >> 6))
               + v6[6]);
          v6 += 8;
          v7 = (1025 * ((v19 ^ (v19 >> 6)) + v18) >> 6) ^ 1025 * ((v19 ^ (v19 >> 6)) + v18);
        }
        while ( v5 != v6 );
      }
    }
    v87 = 32769 * (9 * v7 ^ (9 * v7 >> 11));
  }
  else
  {
    v87 = 0;
  }
  v20 = *(_DWORD *)(a1 + 4);
  v90 = *(_DWORD *)a1;
  v88 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)a1 > 0 )
  {
    if ( v20 <= 0 )
    {
LABEL_81:
      v52 = *(char **)(a1 + 12);
      v53 = v90;
      v85 = *(void **)(a1 + 8);
      v89 = *(void **)(a1 + 16);
      goto LABEL_82;
    }
    v21 = *(_DWORD *)(a1 + 12);
    v22 = 0;
    v23 = ((_BYTE)v20 - 1) & 7;
    if ( *(_DWORD *)v21 )
    {
      if ( **(_DWORD **)(a1 + 16) == v87 )
      {
        v69 = *(_DWORD *)(a1 + 12);
        v46 = strcmp(a2, *(const char **)v21);
        v21 = v69;
        if ( !v46 )
          goto LABEL_74;
      }
    }
    v24 = 1;
    if ( 1 != v88 )
    {
      if ( !v23 )
        goto LABEL_137;
      if ( v23 != 1 )
      {
        if ( v23 != 2 )
        {
          if ( v23 != 3 )
          {
            if ( v23 != 4 )
            {
              if ( v23 != 5 )
              {
                if ( v23 != 6 )
                {
                  v25 = *(const char **)(v21 + 4);
                  v22 = 4;
                  if ( v25 )
                  {
                    if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) == v87 )
                    {
                      v73 = v21;
                      v46 = strcmp(a2, v25);
                      v21 = v73;
                      if ( !v46 )
                        goto LABEL_74;
                    }
                  }
                  v24 = 2;
                }
                v26 = *(const char **)(v21 + 4 * v24);
                v22 = 4 * v24;
                if ( v26 )
                {
                  if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v22) == v87 )
                  {
                    v74 = v21;
                    v46 = strcmp(a2, v26);
                    v21 = v74;
                    if ( !v46 )
                    {
LABEL_74:
                      v47 = (void **)(v22 + *(_DWORD *)(a1 + 8));
                      if ( *v47 )
                      {
                        v48 = v46;
                        free(*v47);
                        v46 = v48;
                        v47 = (void **)(v22 + *(_DWORD *)(a1 + 8));
                      }
                      v49 = 0;
                      if ( a3 )
                      {
                        v84 = v46;
                        v50 = strlen(a3) + 1;
                        v49 = malloc(v50);
                        v46 = v84;
                        if ( v49 )
                        {
                          memcpy(v49, a3, v50);
                          v46 = v84;
                        }
                      }
                      *v47 = v49;
                      return v46;
                    }
                  }
                }
                ++v24;
              }
              v27 = *(const char **)(v21 + 4 * v24);
              v22 = 4 * v24;
              if ( v27 )
              {
                if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v22) == v87 )
                {
                  v75 = v21;
                  v46 = strcmp(a2, v27);
                  v21 = v75;
                  if ( !v46 )
                    goto LABEL_74;
                }
              }
              ++v24;
            }
            v28 = *(const char **)(v21 + 4 * v24);
            v22 = 4 * v24;
            if ( v28 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v22) == v87 )
              {
                v76 = v21;
                v46 = strcmp(a2, v28);
                v21 = v76;
                if ( !v46 )
                  goto LABEL_74;
              }
            }
            ++v24;
          }
          v29 = *(const char **)(v21 + 4 * v24);
          v22 = 4 * v24;
          if ( v29 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v22) == v87 )
            {
              v70 = v21;
              v46 = strcmp(a2, v29);
              v21 = v70;
              if ( !v46 )
                goto LABEL_74;
            }
          }
          ++v24;
        }
        v30 = *(const char **)(v21 + 4 * v24);
        v22 = 4 * v24;
        if ( v30 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v22) == v87 )
          {
            v71 = v21;
            v46 = strcmp(a2, v30);
            v21 = v71;
            if ( !v46 )
              goto LABEL_74;
          }
        }
        ++v24;
      }
      v31 = *(const char **)(v21 + 4 * v24);
      v22 = 4 * v24;
      if ( v31 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v22) == v87 )
        {
          v72 = v21;
          v46 = strcmp(a2, v31);
          v21 = v72;
          if ( !v46 )
            goto LABEL_74;
        }
      }
      if ( ++v24 != v88 )
      {
LABEL_137:
        v32 = v21;
        v33 = v24;
        v34 = v87;
        while ( 1 )
        {
          v43 = *(const char **)(v32 + 4 * v33);
          v83 = 4 * v33;
          if ( v43 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * v33) == v34 )
            {
              v44 = v34;
              v45 = strcmp(a2, v43);
              v34 = v44;
              if ( !v45 )
                break;
            }
          }
          v35 = v33 + 1;
          v36 = *(const char **)(v32 + 4 * v35);
          v83 = 4 * v35;
          if ( v36 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * v35) == v34 )
            {
              v62 = v34;
              v45 = strcmp(a2, v36);
              v34 = v62;
              if ( !v45 )
                break;
            }
          }
          v37 = *(const char **)(v32 + 4 * (v35 + 1));
          v83 = 4 * (v35 + 1);
          if ( v37 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v35 + 1)) == v34 )
            {
              v63 = v34;
              v45 = strcmp(a2, v37);
              v34 = v63;
              if ( !v45 )
                break;
            }
          }
          v83 = 4 * (v35 + 2);
          v38 = *(const char **)(v32 + 4 * (v35 + 2));
          if ( v38 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v35 + 2)) == v34 )
            {
              v64 = v34;
              v45 = strcmp(a2, v38);
              v34 = v64;
              if ( !v45 )
                break;
            }
          }
          v83 = 4 * (v35 + 3);
          v39 = *(const char **)(v32 + 4 * (v35 + 3));
          if ( v39 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v35 + 3)) == v34 )
            {
              v65 = v34;
              v45 = strcmp(a2, v39);
              v34 = v65;
              if ( !v45 )
                break;
            }
          }
          v83 = 4 * (v35 + 4);
          v40 = *(const char **)(v32 + 4 * (v35 + 4));
          if ( v40 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v35 + 4)) == v34 )
            {
              v66 = v34;
              v45 = strcmp(a2, v40);
              v34 = v66;
              if ( !v45 )
                break;
            }
          }
          v83 = 4 * (v35 + 5);
          v41 = *(const char **)(v32 + 4 * (v35 + 5));
          if ( v41 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v35 + 5)) == v34 )
            {
              v67 = v34;
              v45 = strcmp(a2, v41);
              v34 = v67;
              if ( !v45 )
                break;
            }
          }
          v83 = 4 * (v35 + 6);
          v42 = *(const char **)(v32 + 4 * (v35 + 6));
          if ( v42 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v35 + 6)) == v34 )
            {
              v68 = v34;
              v45 = strcmp(a2, v42);
              v34 = v68;
              if ( !v45 )
                break;
            }
          }
          v33 = v35 + 7;
          if ( v33 == v88 )
            goto LABEL_80;
        }
        v22 = v83;
        v46 = v45;
        goto LABEL_74;
      }
    }
  }
LABEL_80:
  if ( v90 != v88 )
    goto LABEL_81;
  v77 = calloc(2 * v90, 4u);
  v78 = v77;
  v85 = v77;
  v94 = calloc(2 * v90, 4u);
  v79 = calloc(2 * v90, 4u);
  v89 = v79;
  v80 = v94;
  if ( !v78 || !v94 )
  {
    if ( !v85 )
    {
LABEL_128:
      if ( v80 )
        free(v80);
      if ( v89 )
        free(v89);
      return -1;
    }
LABEL_127:
    free(v85);
    v80 = v94;
    goto LABEL_128;
  }
  if ( !v79 )
    goto LABEL_127;
  v81 = *(void **)(a1 + 8);
  memcpy(v85, *(const void **)(a1 + 8), 4 * v90);
  memcpy(v94, *(const void **)(a1 + 12), 4 * v90);
  memcpy(v89, *(const void **)(a1 + 16), 4 * v90);
  free(v81);
  free(*(void **)(a1 + 12));
  free(*(void **)(a1 + 16));
  *(_DWORD *)(a1 + 4) *= 2;
  *(_DWORD *)(a1 + 16) = v89;
  *(_DWORD *)(a1 + 8) = v85;
  v53 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 12) = v94;
  v82 = strlen(a2);
  v52 = (char *)v94;
  v92 = v82;
LABEL_82:
  v54 = &v52[4 * v53];
  while ( 1 )
  {
    v55 = *(void **)v54;
    if ( !*(_DWORD *)v54 )
      break;
    ++v53;
    v54 += 4;
    if ( v53 == *(_DWORD *)(a1 + 4) )
    {
      v53 = 0;
      goto LABEL_82;
    }
  }
  v91 = v54 - v52;
  v93 = v92 + 1;
  v56 = malloc(v93);
  v57 = v91;
  if ( v56 )
  {
    memcpy(v56, a2, v93);
    v57 = v91;
  }
  *(_DWORD *)v54 = v56;
  v58 = (char *)v85 + v57;
  if ( a3 )
  {
    v86 = v57;
    v59 = strlen(a3);
    v60 = v59 + 1;
    v61 = malloc(v59 + 1);
    v55 = v61;
    v57 = v86;
    if ( v61 )
    {
      memcpy(v61, a3, v60);
      v57 = v86;
    }
  }
  *(_DWORD *)v58 = v55;
  *(_DWORD *)((char *)v89 + v57) = v87;
  ++*(_DWORD *)a1;
  return 0;
}
