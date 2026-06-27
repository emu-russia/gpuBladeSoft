void *__usercall sub_6F801320@<eax>(void *result@<eax>, int *a2@<edx>, _DWORD *a3@<ecx>, int a4, int a5, size_t a6, unsigned int a7)
{
  int v7; // ebp@3
  const void *v8; // ebx@3
  signed int v9; // edi@3
  char *v10; // ST00_4@3
  int v11; // esi@3
  char *v12; // ebx@3
  void *v13; // ST00_4@11
  void *v14; // ST00_4@12
  void *v15; // ST00_4@13
  void *v16; // ST00_4@14
  void *v17; // ST00_4@15
  void *v18; // ST00_4@16
  void *v19; // ST00_4@17
  char *v20; // edx@18
  int v21; // ecx@18
  int v22; // edi@18
  void *v23; // ST00_4@19
  int v24; // esi@19
  char *v25; // ST18_4@19
  int v26; // ST28_4@19
  void *v27; // ST00_4@19
  int v28; // esi@19
  char *v29; // ST18_4@19
  void *v30; // ST00_4@19
  int v31; // esi@19
  char *v32; // ST18_4@19
  void *v33; // ST00_4@19
  int v34; // esi@19
  char *v35; // ST18_4@19
  void *v36; // ST00_4@19
  int v37; // esi@19
  char *v38; // ST18_4@19
  void *v39; // ST00_4@19
  void *v40; // esi@19
  char *v41; // ST18_4@19
  char *v42; // ST18_4@19
  char *v43; // ST00_4@19
  char *v44; // ST18_4@19
  int v45; // eax@21
  unsigned int v46; // edx@21
  int v47; // eax@21
  int v48; // eax@24
  bool v49; // bl@24
  unsigned int v50; // edx@28
  char *v51; // eax@28
  int v52; // eax@28
  bool v53; // cf@30
  bool v54; // zf@30
  int v55; // esi@30
  int v56; // ecx@31
  int v57; // esi@34
  signed int v58; // eax@36
  bool v59; // ST18_1@39
  unsigned int v60; // edx@41
  unsigned int v61; // eax@43
  int v62; // ecx@46
  int v63; // ST18_4@46
  int v64; // ebx@46
  int v65; // esi@46
  int v66; // esi@49
  int v67; // ebx@50
  signed int v68; // edi@50
  int v69; // ebp@50
  void *v70; // ST00_4@58
  void *v71; // ST00_4@59
  void *v72; // ST00_4@60
  void *v73; // ST00_4@61
  void *v74; // ST00_4@62
  void *v75; // ST00_4@63
  void *v76; // ST00_4@64
  void *v77; // ST00_4@65
  int v78; // ebx@65
  void *v79; // ST00_4@65
  int v80; // ebx@65
  void *v81; // ST00_4@65
  int v82; // ebx@65
  void *v83; // ST00_4@65
  int v84; // ebx@65
  void *v85; // ST00_4@65
  int v86; // ebx@65
  void *v87; // ST00_4@65
  void *v88; // ebx@65
  char *v89; // ST00_4@65
  size_t v90; // [sp+10h] [bp-3Ch]@1
  int v91; // [sp+14h] [bp-38h]@3
  int v92; // [sp+14h] [bp-38h]@35
  int v93; // [sp+14h] [bp-38h]@43
  int v94; // [sp+18h] [bp-34h]@3
  size_t v95; // [sp+18h] [bp-34h]@27
  int v96; // [sp+1Ch] [bp-30h]@3
  char *v97; // [sp+1Ch] [bp-30h]@34
  void *v98; // [sp+1Ch] [bp-30h]@41
  int v99; // [sp+20h] [bp-2Ch]@3
  unsigned int v100; // [sp+24h] [bp-28h]@1
  int v101; // [sp+28h] [bp-24h]@3

  v90 = *(_DWORD *)result;
  v100 = *((_DWORD *)result + 1);
  if ( a6 && a7 )
  {
    v7 = *((_DWORD *)result + 2);
    v91 = a4;
    v94 = *a2;
    v99 = *((_DWORD *)result + 3);
    v8 = (const void *)(*a3 + a4 + *a2 * a5);
    v96 = v7 * a5;
    v9 = 1;
    v10 = (char *)(v99 + v7 * a5 + a4);
    v11 = (int)&v10[v7];
    v101 = ((_BYTE)a7 - 1) & 7;
    memcpy(v10, v8, a6);
    v12 = (char *)v8 + v94;
    if ( 1 != a7 )
    {
      if ( !(((_BYTE)a7 - 1) & 7) )
        goto LABEL_69;
      if ( v101 != 1 )
      {
        if ( v101 != 2 )
        {
          if ( v101 != 3 )
          {
            if ( v101 != 4 )
            {
              if ( v101 != 5 )
              {
                if ( v101 != 6 )
                {
                  v9 = 2;
                  v13 = (void *)v11;
                  v11 += v7;
                  memcpy(v13, v12, a6);
                  v12 += v94;
                }
                ++v9;
                v14 = (void *)v11;
                v11 += v7;
                memcpy(v14, v12, a6);
                v12 += v94;
              }
              ++v9;
              v15 = (void *)v11;
              v11 += v7;
              memcpy(v15, v12, a6);
              v12 += v94;
            }
            ++v9;
            v16 = (void *)v11;
            v11 += v7;
            memcpy(v16, v12, a6);
            v12 += v94;
          }
          ++v9;
          v17 = (void *)v11;
          v11 += v7;
          memcpy(v17, v12, a6);
          v12 += v94;
        }
        ++v9;
        v18 = (void *)v11;
        v11 += v7;
        memcpy(v18, v12, a6);
        v12 += v94;
      }
      ++v9;
      v19 = (void *)v11;
      v11 += v7;
      memcpy(v19, v12, a6);
      v12 += v94;
      if ( v9 != a7 )
      {
LABEL_69:
        v20 = v12;
        v21 = v9;
        v22 = v94;
        do
        {
          v23 = (void *)v11;
          v24 = v7 + v11;
          v25 = v20;
          v26 = v21;
          memcpy(v23, v20, a6);
          v27 = (void *)v24;
          v28 = v7 + v24;
          v29 = &v25[v22];
          memcpy(v27, v29, a6);
          v30 = (void *)v28;
          v31 = v7 + v28;
          v32 = &v29[v22];
          memcpy(v30, v32, a6);
          v33 = (void *)v31;
          v34 = v7 + v31;
          v35 = &v32[v22];
          memcpy(v33, v35, a6);
          v36 = (void *)v34;
          v37 = v7 + v34;
          v38 = &v35[v22];
          memcpy(v36, v38, a6);
          v39 = (void *)v37;
          v40 = (void *)(v7 + v37);
          v41 = &v38[v22];
          memcpy(v39, v41, a6);
          v42 = &v41[v22];
          memcpy(v40, v42, a6);
          v43 = (char *)v40 + v7;
          v11 = (int)v40 + v7 + v7;
          v44 = &v42[v22];
          memcpy(v43, v44, a6);
          v20 = &v44[v22];
          v21 = v26 + 8;
        }
        while ( v26 + 8 != a7 );
      }
    }
    while ( --v91 != -1 )
    {
      v45 = v99 + v91 + v96;
      v46 = 1;
      *(_BYTE *)v45 = (3 * *(_BYTE *)(v45 + 1) + *(_BYTE *)(v45 + (a7 > 1 ? v7 : 0) + 1) + 2) >> 2;
      v47 = v7 + v45;
      if ( a7 > 1 )
      {
        if ( !(((_BYTE)a7 - 1) & 1)
          || (v46 = 2,
              *(_BYTE *)v47 = (*(_BYTE *)(v47 + 1 - v7)
                             + 2 * *(_BYTE *)(v47 + 1)
                             + *(_BYTE *)(v47 + (a7 > 2 ? v7 : 0) + 1)
                             + 2) >> 2,
              v47 += v7,
              a7 > 2) )
        {
          do
          {
            *(_BYTE *)v47 = (*(_BYTE *)(v47 + (v46 != 0 ? v7 + 1 : -1))
                           + 2 * *(_BYTE *)(v47 + 1)
                           + *(_BYTE *)(v47 + (a7 > v46 + 1 ? v7 : 0) + 1)
                           + 2) >> 2;
            v48 = v7 + v47;
            v49 = v46 != -1;
            v46 += 2;
            *(_BYTE *)v48 = (*(_BYTE *)(v48 + (v49 ? v7 + 1 : -1))
                           + 2 * *(_BYTE *)(v48 + 1)
                           + *(_BYTE *)(v48 + (a7 > v46 ? v7 : 0) + 1)
                           + 2) >> 2;
            v47 = v7 + v48;
          }
          while ( v46 < a7 );
        }
      }
    }
    result = (void *)(v96 - 1);
    if ( v90 > a4 + a6 )
    {
      v95 = a4 + a6;
      result = (void *)(a4 + a6);
      do
      {
        v50 = 1;
        v51 = (char *)result + v96 + v99 - 1;
        v51[1] = (3 * (unsigned __int8)*v51 + (unsigned __int8)v51[a7 > 1 ? v7 : 0] + 2) >> 2;
        v52 = (int)&v51[v7];
        if ( a7 > 1 )
        {
          if ( ((_BYTE)a7 - 1) & 1 )
          {
            v53 = a7 < 2;
            v54 = a7 == 2;
            v50 = 2;
            v55 = *(_BYTE *)(v52 - v7) + 2 * *(_BYTE *)v52;
            goto LABEL_32;
          }
          do
          {
            *(_BYTE *)(v52 + 1) = (*(_BYTE *)(v52 - (v50 != 0 ? v7 : 0))
                                 + 2 * *(_BYTE *)v52
                                 + *(_BYTE *)(v52 + (a7 > v50 + 1 ? v7 : 0))
                                 + 2) >> 2;
            v52 += v7;
            v56 = v50 != -1;
            v50 += 2;
            v53 = a7 < v50;
            v54 = a7 == v50;
            v55 = *(_BYTE *)(v52 - (v7 & -v56)) + 2 * *(_BYTE *)v52;
LABEL_32:
            *(_BYTE *)(v52 + 1) = (v55 + *(_BYTE *)(v52 + (!v53 && !v54 ? v7 : 0)) + 2) >> 2;
            v52 += v7;
          }
          while ( v50 < a7 );
        }
        result = (void *)++v95;
      }
      while ( v90 != v95 );
    }
    v57 = v99 + v96;
    v97 = (char *)(a5 - 1);
    if ( a5 )
    {
      do
      {
        v92 = v57 - v7;
        if ( v90 )
        {
          v58 = 1;
          *(_BYTE *)(v57 - v7) = (3 * *(_BYTE *)v57 + *(_BYTE *)(v57 + (v90 > 1)) + 2) >> 2;
          if ( v90 > 1 )
          {
            if ( !(((_BYTE)v90 - 1) & 1)
              || (v58 = 2,
                  *(_BYTE *)(v92 + 1) = (*(_BYTE *)v57 + 2 * *(_BYTE *)(v57 + 1) + *(_BYTE *)(v57 + (v90 > 2) + 1) + 2) >> 2,
                  v90 > 2) )
            {
              do
              {
                *(_BYTE *)(v92 + v58) = (*(_BYTE *)(v57 + v58 - (v58 != 0))
                                       + 2 * *(_BYTE *)(v57 + v58)
                                       + *(_BYTE *)(v57 + v58 + (v90 > v58 + 1))
                                       + 2) >> 2;
                v59 = v90 > v58 + 2;
                *(_BYTE *)(v92 + v58 + 1) = (*(_BYTE *)(v57 + v58 + 1 - (v58 != -1))
                                           + 2 * *(_BYTE *)(v57 + v58 + 1)
                                           + *(_BYTE *)(v57 + v58 + 1 + v59)
                                           + 2) >> 2;
                v58 += 2;
              }
              while ( v59 );
            }
          }
        }
        --v97;
        v57 -= v7;
        result = v97;
      }
      while ( v97 != (char *)-1 );
    }
    v60 = v99 + (a5 + a7) * v7;
    v98 = (void *)(a5 + a7);
    if ( v100 > a5 + a7 )
    {
      do
      {
        if ( v90 )
        {
          v93 = v60 - v7;
          v61 = 1;
          *(_BYTE *)v60 = (3 * *(_BYTE *)(v60 - v7) + *(_BYTE *)(v60 - v7 + (v90 > 1)) + 2) >> 2;
          if ( v90 > 1 )
          {
            if ( !(((_BYTE)v90 - 1) & 1)
              || (v61 = 2,
                  *(_BYTE *)(v60 + 1) = (*(_BYTE *)(v60 - v7)
                                       + 2 * *(_BYTE *)(v93 + 1)
                                       + *(_BYTE *)(v60 + 1 - v7 + (v90 > 2))
                                       + 2) >> 2,
                  v90 > 2) )
            {
              do
              {
                v62 = v61 + 1;
                v63 = v61 + 1 - v7;
                *(_BYTE *)(v60 + v61) = (*(_BYTE *)(v60 + v61 - (v61 != 0) - v7)
                                       + 2 * *(_BYTE *)(v93 + v61)
                                       + *(_BYTE *)(v60 + v61 - v7 + (v90 > v61 + 1))
                                       + 2) >> 2;
                v64 = v61 != -1;
                v65 = *(_BYTE *)(v93 + v61 + 1);
                v61 += 2;
                *(_BYTE *)(v60 + v61 - 1) = (*(_BYTE *)(v60 + v62 - v64 - v7)
                                           + 2 * v65
                                           + *(_BYTE *)(v60 + v63 + (v90 > v61))
                                           + 2) >> 2;
              }
              while ( v90 > v61 );
            }
          }
        }
        v98 = (char *)v98 + 1;
        v60 += v7;
        result = v98;
      }
      while ( (void *)v100 != v98 );
    }
  }
  else
  {
    v66 = *((_DWORD *)result + 2);
    if ( v100 )
    {
      v67 = v66 + *((_DWORD *)result + 3);
      v68 = 1;
      v69 = ((_BYTE)v100 - 1) & 7;
      result = memset(*((void **)result + 3), 0, v90);
      if ( v100 != 1 )
      {
        if ( !(((_BYTE)v100 - 1) & 7) )
          goto LABEL_70;
        if ( v69 != 1 )
        {
          if ( v69 != 2 )
          {
            if ( v69 != 3 )
            {
              if ( v69 != 4 )
              {
                if ( v69 != 5 )
                {
                  if ( v69 != 6 )
                  {
                    v70 = (void *)v67;
                    v68 = 2;
                    v67 += v66;
                    memset(v70, 0, v90);
                  }
                  v71 = (void *)v67;
                  ++v68;
                  v67 += v66;
                  memset(v71, 0, v90);
                }
                v72 = (void *)v67;
                ++v68;
                v67 += v66;
                memset(v72, 0, v90);
              }
              v73 = (void *)v67;
              ++v68;
              v67 += v66;
              memset(v73, 0, v90);
            }
            v74 = (void *)v67;
            ++v68;
            v67 += v66;
            memset(v74, 0, v90);
          }
          v75 = (void *)v67;
          ++v68;
          v67 += v66;
          memset(v75, 0, v90);
        }
        v76 = (void *)v67;
        ++v68;
        v67 += v66;
        result = memset(v76, 0, v90);
        if ( v100 != v68 )
        {
LABEL_70:
          do
          {
            v77 = (void *)v67;
            v78 = v66 + v67;
            v68 += 8;
            memset(v77, 0, v90);
            v79 = (void *)v78;
            v80 = v66 + v78;
            memset(v79, 0, v90);
            v81 = (void *)v80;
            v82 = v66 + v80;
            memset(v81, 0, v90);
            v83 = (void *)v82;
            v84 = v66 + v82;
            memset(v83, 0, v90);
            v85 = (void *)v84;
            v86 = v66 + v84;
            memset(v85, 0, v90);
            v87 = (void *)v86;
            v88 = (void *)(v66 + v86);
            memset(v87, 0, v90);
            memset(v88, 0, v90);
            v89 = (char *)v88 + v66;
            v67 = (int)v88 + v66 + v66;
            result = memset(v89, 0, v90);
          }
          while ( v100 != v68 );
        }
      }
    }
  }
  return result;
}
