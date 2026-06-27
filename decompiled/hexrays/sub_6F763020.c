int __cdecl sub_6F763020(int a1, const char *a2, int a3)
{
  size_t v3; // eax@2
  int v4; // ebx@3
  const char *v5; // ecx@3
  const char *v6; // edi@3
  unsigned int v7; // eax@3
  int v8; // ebx@11
  int v9; // ebx@12
  int v10; // ebx@13
  int v11; // ebx@14
  int v12; // ebx@15
  int v13; // ebx@16
  int v14; // ebx@17
  unsigned int v15; // eax@18
  unsigned int v16; // esi@18
  unsigned int v17; // eax@18
  unsigned int v18; // esi@18
  int v19; // eax@18
  unsigned int v20; // ecx@19
  int v21; // eax@20
  int v22; // edi@21
  int v23; // esi@21
  int v24; // edx@21
  int v25; // ebx@23
  const char *v26; // eax@31
  const char *v27; // eax@34
  const char *v28; // eax@37
  const char *v29; // eax@40
  const char *v30; // eax@43
  const char *v31; // eax@46
  const char *v32; // eax@49
  unsigned int v34; // ST1C_4@53
  int v35; // eax@53
  int v36; // ebx@54
  const char *v37; // eax@54
  const char *v38; // edx@56
  const char *v39; // edx@58
  const char *v40; // edx@60
  const char *v41; // edx@62
  const char *v42; // edx@64
  const char *v43; // edx@66
  const char *v44; // eax@69
  unsigned int v45; // ST1C_4@72
  int v46; // eax@72
  unsigned int v47; // ST1C_4@75
  int v48; // eax@75
  unsigned int v49; // ST1C_4@77
  int v50; // eax@77
  unsigned int v51; // ST1C_4@79
  int v52; // eax@79
  unsigned int v53; // ST1C_4@81
  int v54; // eax@81
  unsigned int v55; // ST1C_4@83
  int v56; // eax@83
  unsigned int v57; // ST1C_4@85
  int v58; // eax@85
  int v59; // ST1C_4@87
  unsigned int v60; // ST14_4@87
  int v61; // eax@87
  unsigned int v62; // ST14_4@89
  int v63; // eax@89
  unsigned int v64; // ST14_4@91
  int v65; // eax@91
  unsigned int v66; // ST14_4@93
  int v67; // eax@93
  unsigned int v68; // ST14_4@95
  int v69; // eax@95
  unsigned int v70; // ST14_4@97
  int v71; // eax@97
  unsigned int v72; // ST14_4@99
  int v73; // eax@99
  unsigned int v74; // ST14_4@101
  int v75; // eax@101
  int v76; // [sp+14h] [bp-28h]@54
  int v77; // [sp+18h] [bp-24h]@20

  if ( a2 && (v3 = strlen(a2)) != 0 )
  {
    v4 = ((_BYTE)v3 - 1) & 7;
    v5 = &a2[v3];
    v6 = a2 + 1;
    v7 = ((unsigned int)(1025 * *a2) >> 6) ^ 1025 * *a2;
    if ( v5 != a2 + 1 )
    {
      if ( !v4 )
        goto LABEL_106;
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
LABEL_106:
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
  v77 = *(_DWORD *)(a1 + 4);
  if ( v21 <= 0 )
    return a3;
  v22 = *(_DWORD *)(a1 + 12);
  v23 = 0;
  v24 = ((_BYTE)v21 - 1) & 7;
  if ( *(_DWORD *)v22 )
  {
    if ( **(_DWORD **)(a1 + 16) == v20 )
    {
      v59 = ((_BYTE)v21 - 1) & 7;
      v60 = v20;
      v61 = strcmp(a2, *(const char **)v22);
      v20 = v60;
      v24 = v59;
      if ( !v61 )
        return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
    }
  }
  v25 = 1;
  if ( 1 == v77 )
    return a3;
  if ( !v24 )
    goto LABEL_69;
  if ( v24 == 1 )
  {
LABEL_49:
    v32 = *(const char **)(v22 + 4 * v25);
    v23 = 4 * v25;
    if ( v32 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
      {
        v74 = v20;
        v75 = strcmp(a2, v32);
        v20 = v74;
        if ( !v75 )
          return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
      }
    }
    if ( ++v25 != v77 )
    {
LABEL_69:
      while ( 1 )
      {
        v44 = *(const char **)(v22 + 4 * v25);
        v76 = 4 * v25;
        if ( v44 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * v25) == v20 )
          {
            v34 = v20;
            v35 = strcmp(a2, v44);
            v20 = v34;
            if ( !v35 )
              break;
          }
        }
        v36 = v25 + 1;
        v37 = *(const char **)(v22 + 4 * v36);
        v76 = 4 * v36;
        if ( v37 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * v36) == v20 )
          {
            v45 = v20;
            v46 = strcmp(a2, v37);
            v20 = v45;
            if ( !v46 )
              break;
          }
        }
        v38 = *(const char **)(v22 + 4 * (v36 + 1));
        v76 = 4 * (v36 + 1);
        if ( v38 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v36 + 1)) == v20 )
          {
            v47 = v20;
            v48 = strcmp(a2, v38);
            v20 = v47;
            if ( !v48 )
              break;
          }
        }
        v76 = 4 * (v36 + 2);
        v39 = *(const char **)(v22 + 4 * (v36 + 2));
        if ( v39 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v36 + 2)) == v20 )
          {
            v49 = v20;
            v50 = strcmp(a2, v39);
            v20 = v49;
            if ( !v50 )
              break;
          }
        }
        v76 = 4 * (v36 + 3);
        v40 = *(const char **)(v22 + 4 * (v36 + 3));
        if ( v40 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v36 + 3)) == v20 )
          {
            v51 = v20;
            v52 = strcmp(a2, v40);
            v20 = v51;
            if ( !v52 )
              break;
          }
        }
        v76 = 4 * (v36 + 4);
        v41 = *(const char **)(v22 + 4 * (v36 + 4));
        if ( v41 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v36 + 4)) == v20 )
          {
            v53 = v20;
            v54 = strcmp(a2, v41);
            v20 = v53;
            if ( !v54 )
              break;
          }
        }
        v76 = 4 * (v36 + 5);
        v42 = *(const char **)(v22 + 4 * (v36 + 5));
        if ( v42 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v36 + 5)) == v20 )
          {
            v55 = v20;
            v56 = strcmp(a2, v42);
            v20 = v55;
            if ( !v56 )
              break;
          }
        }
        v76 = 4 * (v36 + 6);
        v43 = *(const char **)(v22 + 4 * (v36 + 6));
        if ( v43 )
        {
          if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (v36 + 6)) == v20 )
          {
            v57 = v20;
            v58 = strcmp(a2, v43);
            v20 = v57;
            if ( !v58 )
              break;
          }
        }
        v25 = v36 + 7;
        if ( v25 == v77 )
          return a3;
      }
      v23 = v76;
      return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
    }
    return a3;
  }
  if ( v24 == 2 )
  {
LABEL_46:
    v31 = *(const char **)(v22 + 4 * v25);
    v23 = 4 * v25;
    if ( v31 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
      {
        v72 = v20;
        v73 = strcmp(a2, v31);
        v20 = v72;
        if ( !v73 )
          return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
      }
    }
    ++v25;
    goto LABEL_49;
  }
  if ( v24 == 3 )
  {
LABEL_43:
    v30 = *(const char **)(v22 + 4 * v25);
    v23 = 4 * v25;
    if ( v30 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
      {
        v70 = v20;
        v71 = strcmp(a2, v30);
        v20 = v70;
        if ( !v71 )
          return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
      }
    }
    ++v25;
    goto LABEL_46;
  }
  if ( v24 == 4 )
  {
LABEL_40:
    v29 = *(const char **)(v22 + 4 * v25);
    v23 = 4 * v25;
    if ( v29 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
      {
        v68 = v20;
        v69 = strcmp(a2, v29);
        v20 = v68;
        if ( !v69 )
          return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
      }
    }
    ++v25;
    goto LABEL_43;
  }
  if ( v24 == 5 )
  {
LABEL_37:
    v28 = *(const char **)(v22 + 4 * v25);
    v23 = 4 * v25;
    if ( v28 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) == v20 )
      {
        v66 = v20;
        v67 = strcmp(a2, v28);
        v20 = v66;
        if ( !v67 )
          return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
      }
    }
    ++v25;
    goto LABEL_40;
  }
  if ( v24 != 6 )
  {
    v26 = *(const char **)(v22 + 4);
    v23 = 4;
    if ( v26 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) == v20 )
      {
        v62 = v20;
        v63 = strcmp(a2, v26);
        v20 = v62;
        if ( !v63 )
          return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
      }
    }
    v25 = 2;
  }
  v27 = *(const char **)(v22 + 4 * v25);
  v23 = 4 * v25;
  if ( !v27 || *(_DWORD *)(*(_DWORD *)(a1 + 16) + v23) != v20 || (v64 = v20, v65 = strcmp(a2, v27), v20 = v64, v65) )
  {
    ++v25;
    goto LABEL_37;
  }
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + v23);
}
