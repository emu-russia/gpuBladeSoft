void __thiscall sub_6F756AD0(int this, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi@7
  char *v5; // ebp@7
  int v6; // ecx@8
  char *v7; // ebx@8
  char *v8; // edx@9
  int v9; // eax@9
  int v10; // ecx@10
  int v11; // ecx@18
  int v12; // ecx@19
  int v13; // ecx@20
  int v14; // ecx@21
  int v15; // ecx@22
  int v16; // ecx@23
  int v17; // ecx@24
  int v18; // ecx@32
  char *v19; // eax@32
  int v20; // edx@32
  int v21; // ecx@32
  char v22; // cl@40
  char v23; // bl@41
  char v24; // cl@42
  char v25; // bl@43
  char v26; // cl@44
  char v27; // bl@45
  char v28; // cl@46
  void *v29; // edi@48
  unsigned int v32; // ecx@50
  double v35; // st7@52
  float v36; // ST18_4@53
  double v37; // st6@54
  int v38; // ebp@56
  unsigned int v39; // ecx@57
  int v40; // esi@57
  signed int v41; // eax@59
  int v42; // edx@59
  char *v43; // ecx@59
  int v44; // ebp@59
  int v45; // ebp@65
  int v46; // ebx@65
  int v47; // ebp@65
  int v48; // eax@68
  char *v49; // edx@68
  int v50; // ebx@68
  int v51; // eax@75
  int v52; // ebx@76
  int v53; // ebx@77
  int v54; // ebx@78
  int v55; // ebx@79
  int v56; // ebx@80
  int v57; // ebp@85
  unsigned int *v58; // ecx@85
  int v59; // esi@85
  unsigned int v60; // eax@93
  unsigned int v61; // eax@94
  unsigned int v62; // eax@95
  unsigned int v63; // eax@96
  unsigned int v64; // eax@97
  unsigned int v65; // eax@98
  unsigned int v66; // eax@99
  char *v67; // [sp+10h] [bp-9Ch]@3
  unsigned int v68; // [sp+18h] [bp-94h]@9
  char *v69; // [sp+18h] [bp-94h]@32
  unsigned int v70; // [sp+18h] [bp-94h]@57
  unsigned int v71; // [sp+24h] [bp-88h]@1
  int v72; // [sp+28h] [bp-84h]@8
  unsigned int v73; // [sp+28h] [bp-84h]@50
  unsigned int v74; // [sp+2Ch] [bp-80h]@6
  unsigned int v75; // [sp+2Ch] [bp-80h]@56
  unsigned int v76; // [sp+38h] [bp-74h]@6
  int v77; // [sp+38h] [bp-74h]@57
  int v78; // [sp+3Ch] [bp-70h]@1
  int v79; // [sp+40h] [bp-6Ch]@50
  unsigned int v80; // [sp+44h] [bp-68h]@51
  _BYTE *v81; // [sp+48h] [bp-64h]@1
  unsigned int v82; // [sp+4Ch] [bp-60h]@51
  unsigned int v83; // [sp+50h] [bp-5Ch]@9
  int v84; // [sp+50h] [bp-5Ch]@58
  float v85; // [sp+54h] [bp-58h]@1
  char *v86; // [sp+58h] [bp-54h]@6
  unsigned int v87; // [sp+58h] [bp-54h]@52
  unsigned int v88; // [sp+5Ch] [bp-50h]@6
  unsigned int v89; // [sp+5Ch] [bp-50h]@51
  unsigned int v90; // [sp+60h] [bp-4Ch]@6
  int v91; // [sp+60h] [bp-4Ch]@51
  float v92; // [sp+64h] [bp-48h]@1
  _BYTE *v93; // [sp+68h] [bp-44h]@52
  int v94; // [sp+6Ch] [bp-40h]@1
  _BYTE *v95; // [sp+70h] [bp-3Ch]@51
  int v96; // [sp+80h] [bp-2Ch]@6
  size_t v97; // [sp+80h] [bp-2Ch]@48
  signed int v98; // [sp+88h] [bp-24h]@57

  v78 = *(_DWORD *)(this + 4);
  v94 = this;
  v71 = *(_DWORD *)(this + 12);
  v85 = (double)*(_DWORD *)(this + 4) / (double)a2;
  v92 = (double)*(_DWORD *)(this + 8) / (double)a3;
  v81 = malloc(v71 * a3 * a2);
  if ( !v81 )
    goto LABEL_105;
  if ( a4 )
  {
    v97 = 4 * v71;
    v29 = malloc(4 * v71);
    if ( v29 )
    {
      v67 = *(char **)v94;
      if ( !a3 )
        goto LABEL_102;
      _ST7 = v85;
      __asm { frndint }
      v32 = (signed __int64)_ST7;
      _ST7 = v92;
      __asm { frndint }
      v73 = v32;
      v79 = (signed __int64)_ST7;
      if ( !a2 )
      {
LABEL_102:
        free(v29);
        goto LABEL_31;
      }
      v89 = 0;
      v95 = v81;
      v80 = (unsigned __int64)(signed __int64)_ST7 * v32;
      v91 = (int)v29 + v97;
      v82 = v32 - 1;
LABEL_52:
      v87 = 0;
      v35 = (double)v89 * v92;
      v93 = v95;
      while ( 1 )
      {
        v36 = v35;
        memset(v29, 0, v97);
        v35 = v36;
        if ( v79 && (v37 = (double)v87 * v85, v73) )
        {
          if ( v71 )
          {
            v75 = 0;
            v38 = (int)v29 + v97;
            do
            {
              v39 = 0;
              v70 = 1;
              v98 = (signed int)((double)v75 + v35);
              v40 = v78 * v98;
              v77 = v78 * v98;
              if ( v73 > 2 )
              {
                v84 = v38;
                do
                {
                  v41 = 0;
                  v42 = v71 * (v77 + (signed int)((double)v70 + v37));
                  v43 = &v67[v71 * (v77 + (signed int)((double)(v70 - 1) + v37))];
                  v44 = v71 & 3;
                  if ( !(v71 & 3) )
                    goto LABEL_109;
                  if ( v44 != 1 )
                  {
                    if ( v44 != 2 )
                    {
                      v41 = 1;
                      *(_DWORD *)v29 += (unsigned __int8)*v43 + (unsigned __int8)v67[v42];
                    }
                    *((_DWORD *)v29 + v41) += (unsigned __int8)v43[v41] + (unsigned __int8)*(&v67[v41] + v42);
                    ++v41;
                  }
                  *((_DWORD *)v29 + v41) += (unsigned __int8)v43[v41] + (unsigned __int8)*(&v67[v41] + v42);
                  if ( v71 != ++v41 )
                  {
LABEL_109:
                    do
                    {
                      v45 = (unsigned __int8)v43[v41 + 1];
                      *((_DWORD *)v29 + v41) += (unsigned __int8)v43[v41] + (unsigned __int8)*(&v67[v41] + v42);
                      *((_DWORD *)v29 + v41 + 1) += v45 + (unsigned __int8)*(&v67[v41 + 1] + v42);
                      *((_DWORD *)v29 + v41 + 2) += (unsigned __int8)v43[v41 + 2]
                                                  + (unsigned __int8)*(&v67[v41 + 2] + v42);
                      v46 = v41 + 3;
                      v47 = (unsigned __int8)v43[v41 + 3];
                      v41 += 4;
                      *((_DWORD *)v29 + v46) += v47 + (unsigned __int8)*(&v67[v46] + v42);
                    }
                    while ( v71 != v41 );
                  }
                  v39 = v70 + 1;
                  v70 += 2;
                }
                while ( v70 < v82 );
                v38 = v84;
                v40 = v78 * v98;
              }
              do
              {
                v48 = (int)v29;
                v49 = &v67[v71 * (v40 + (signed int)((double)v39 + v37))];
                v50 = ((unsigned __int8)((unsigned int)(v38 - (_DWORD)v29 - 4) >> 2) + 1) & 7;
                if ( !(((unsigned __int8)((unsigned int)(v38 - (_DWORD)v29 - 4) >> 2) + 1) & 7) )
                  goto LABEL_110;
                if ( v50 != 1 )
                {
                  if ( v50 != 2 )
                  {
                    if ( v50 != 3 )
                    {
                      if ( v50 != 4 )
                      {
                        if ( v50 != 5 )
                        {
                          if ( v50 != 6 )
                          {
                            v51 = (unsigned __int8)*v49++;
                            *(_DWORD *)v29 += v51;
                            v48 = (int)v29 + 4;
                          }
                          v52 = (unsigned __int8)*v49++;
                          *(_DWORD *)v48 += v52;
                          v48 += 4;
                        }
                        v53 = (unsigned __int8)*v49++;
                        *(_DWORD *)v48 += v53;
                        v48 += 4;
                      }
                      v54 = (unsigned __int8)*v49++;
                      *(_DWORD *)v48 += v54;
                      v48 += 4;
                    }
                    v55 = (unsigned __int8)*v49++;
                    *(_DWORD *)v48 += v55;
                    v48 += 4;
                  }
                  v56 = (unsigned __int8)*v49++;
                  *(_DWORD *)v48 += v56;
                  v48 += 4;
                }
                *(_DWORD *)v48 += (unsigned __int8)*v49;
                v48 += 4;
                ++v49;
                if ( v48 != v38 )
                {
LABEL_110:
                  do
                  {
                    *(_DWORD *)v48 += (unsigned __int8)*v49;
                    v49 += 8;
                    *(_DWORD *)(v48 + 4) += (unsigned __int8)*(v49 - 7);
                    *(_DWORD *)(v48 + 8) += (unsigned __int8)*(v49 - 6);
                    *(_DWORD *)(v48 + 12) += (unsigned __int8)*(v49 - 5);
                    *(_DWORD *)(v48 + 16) += (unsigned __int8)*(v49 - 4);
                    *(_DWORD *)(v48 + 20) += (unsigned __int8)*(v49 - 3);
                    *(_DWORD *)(v48 + 24) += (unsigned __int8)*(v49 - 2);
                    *(_DWORD *)(v48 + 28) += (unsigned __int8)*(v49 - 1);
                    v48 += 32;
                  }
                  while ( v48 != v38 );
                }
                ++v39;
              }
              while ( v73 > v39 );
              ++v75;
            }
            while ( v79 != v75 );
LABEL_85:
            v57 = (int)v93;
            v58 = (unsigned int *)v29;
            v59 = ((unsigned __int8)((v97 - 4) >> 2) + 1) & 7;
            if ( !(((unsigned __int8)((v97 - 4) >> 2) + 1) & 7) )
              goto LABEL_111;
            if ( v59 != 1 )
            {
              if ( v59 != 2 )
              {
                if ( v59 != 3 )
                {
                  if ( v59 != 4 )
                  {
                    if ( v59 != 5 )
                    {
                      if ( v59 != 6 )
                      {
                        v58 = (unsigned int *)((char *)v29 + 4);
                        v57 = (int)(v93 + 1);
                        *v93 = *(_DWORD *)v29 / v80;
                      }
                      v60 = *v58;
                      ++v58;
                      *(_BYTE *)(++v57 - 1) = v60 / v80;
                    }
                    v61 = *v58;
                    ++v58;
                    *(_BYTE *)(++v57 - 1) = v61 / v80;
                  }
                  v62 = *v58;
                  ++v58;
                  *(_BYTE *)(++v57 - 1) = v62 / v80;
                }
                v63 = *v58;
                ++v58;
                *(_BYTE *)(++v57 - 1) = v63 / v80;
              }
              v64 = *v58;
              ++v58;
              *(_BYTE *)(++v57 - 1) = v64 / v80;
            }
            v65 = *v58;
            ++v58;
            *(_BYTE *)(++v57 - 1) = v65 / v80;
            if ( v58 != (unsigned int *)v91 )
            {
LABEL_111:
              do
              {
                v66 = *v58;
                v58 += 8;
                v57 += 8;
                *(_BYTE *)(v57 - 8) = v66 / v80;
                *(_BYTE *)(v57 - 7) = *(v58 - 7) / v80;
                *(_BYTE *)(v57 - 6) = *(v58 - 6) / v80;
                *(_BYTE *)(v57 - 5) = *(v58 - 5) / v80;
                *(_BYTE *)(v57 - 4) = *(v58 - 4) / v80;
                *(_BYTE *)(v57 - 3) = *(v58 - 3) / v80;
                *(_BYTE *)(v57 - 2) = *(v58 - 2) / v80;
                *(_BYTE *)(v57 - 1) = *(v58 - 1) / v80;
              }
              while ( v58 != (unsigned int *)v91 );
            }
            goto LABEL_100;
          }
        }
        else if ( v71 )
        {
          goto LABEL_85;
        }
LABEL_100:
        ++v87;
        v93 += v71;
        if ( a2 == v87 )
        {
          ++v89;
          v95 += a2 * v71;
          if ( a3 == v89 )
            goto LABEL_102;
          goto LABEL_52;
        }
      }
    }
LABEL_105:
    nullsub_10();
    exit(1);
  }
  v67 = *(char **)v94;
  if ( a3 && a2 && v71 )
  {
    v96 = v71 + *(_DWORD *)v94;
    v76 = v71 & 0xFFFFFFFC;
    v88 = (v71 & 0xFFFFFFFC) + 1;
    v90 = (v71 & 0xFFFFFFFC) + 2;
    v86 = v81;
    v74 = 0;
    do
    {
      v4 = 0;
      v5 = v86;
      do
      {
        v72 = v5 - v81;
        v6 = v71 * (v78 * (signed int)((double)v74 * v92) + (signed int)((double)v4 * v85));
        v7 = &v67[v6];
        if ( v71 - 1 <= 3
          || &v67[v6 + 4] > v5 && &v67[v6] < v5 + 4
          || (v8 = &v67[v6],
              v83 = v71 & 0xFFFFFFFC,
              v68 = (unsigned int)&v5[v71 & 0xFFFFFFFC],
              v9 = (int)v5,
              ((unsigned __int8)v5 | (unsigned __int8)v7) & 3) )
        {
          v18 = v96 + v6;
          v19 = v7;
          v20 = (int)v5;
          v69 = (char *)v18;
          v21 = ((_BYTE)v18 - (_BYTE)v7) & 7;
          if ( !v21 )
            goto LABEL_112;
          if ( v21 != 1 )
          {
            if ( v21 != 2 )
            {
              if ( v21 != 3 )
              {
                if ( v21 != 4 )
                {
                  if ( v21 != 5 )
                  {
                    if ( v21 != 6 )
                    {
                      v19 = v7 + 1;
                      *v5 = *v7;
                      v20 = (int)(v5 + 1);
                    }
                    v22 = *v19;
                    ++v20;
                    ++v19;
                    *(_BYTE *)(v20 - 1) = v22;
                  }
                  v23 = *v19;
                  ++v20;
                  ++v19;
                  *(_BYTE *)(v20 - 1) = v23;
                }
                v24 = *v19;
                ++v20;
                ++v19;
                *(_BYTE *)(v20 - 1) = v24;
              }
              v25 = *v19;
              ++v20;
              ++v19;
              *(_BYTE *)(v20 - 1) = v25;
            }
            v26 = *v19;
            ++v20;
            ++v19;
            *(_BYTE *)(v20 - 1) = v26;
          }
          v27 = *v19;
          ++v20;
          ++v19;
          *(_BYTE *)(v20 - 1) = v27;
          if ( v69 != v19 )
          {
LABEL_112:
            do
            {
              v28 = *v19;
              v20 += 8;
              v19 += 8;
              *(_BYTE *)(v20 - 8) = v28;
              *(_BYTE *)(v20 - 7) = *(v19 - 7);
              *(_BYTE *)(v20 - 6) = *(v19 - 6);
              *(_BYTE *)(v20 - 5) = *(v19 - 5);
              *(_BYTE *)(v20 - 4) = *(v19 - 4);
              *(_BYTE *)(v20 - 3) = *(v19 - 3);
              *(_BYTE *)(v20 - 2) = *(v19 - 2);
              *(_BYTE *)(v20 - 1) = *(v19 - 1);
            }
            while ( v69 != v19 );
          }
        }
        else
        {
          v10 = ((unsigned __int8)((v83 - 4) >> 2) + 1) & 7;
          if ( !(((unsigned __int8)((v83 - 4) >> 2) + 1) & 7) )
            goto LABEL_113;
          if ( v10 != 1 )
          {
            if ( v10 != 2 )
            {
              if ( v10 != 3 )
              {
                if ( v10 != 4 )
                {
                  if ( v10 != 5 )
                  {
                    if ( v10 != 6 )
                    {
                      v9 = (int)(v5 + 4);
                      *(_DWORD *)v5 = *(_DWORD *)v7;
                      v8 = v7 + 4;
                    }
                    v11 = *(_DWORD *)v8;
                    v9 += 4;
                    v8 += 4;
                    *(_DWORD *)(v9 - 4) = v11;
                  }
                  v12 = *(_DWORD *)v8;
                  v9 += 4;
                  v8 += 4;
                  *(_DWORD *)(v9 - 4) = v12;
                }
                v13 = *(_DWORD *)v8;
                v9 += 4;
                v8 += 4;
                *(_DWORD *)(v9 - 4) = v13;
              }
              v14 = *(_DWORD *)v8;
              v9 += 4;
              v8 += 4;
              *(_DWORD *)(v9 - 4) = v14;
            }
            v15 = *(_DWORD *)v8;
            v9 += 4;
            v8 += 4;
            *(_DWORD *)(v9 - 4) = v15;
          }
          v16 = *(_DWORD *)v8;
          v9 += 4;
          v8 += 4;
          *(_DWORD *)(v9 - 4) = v16;
          if ( v9 != v68 )
          {
LABEL_113:
            do
            {
              v17 = *(_DWORD *)v8;
              v9 += 32;
              v8 += 32;
              *(_DWORD *)(v9 - 32) = v17;
              *(_DWORD *)(v9 - 28) = *((_DWORD *)v8 - 7);
              *(_DWORD *)(v9 - 24) = *((_DWORD *)v8 - 6);
              *(_DWORD *)(v9 - 20) = *((_DWORD *)v8 - 5);
              *(_DWORD *)(v9 - 16) = *((_DWORD *)v8 - 4);
              *(_DWORD *)(v9 - 12) = *((_DWORD *)v8 - 3);
              *(_DWORD *)(v9 - 8) = *((_DWORD *)v8 - 2);
              *(_DWORD *)(v9 - 4) = *((_DWORD *)v8 - 1);
            }
            while ( v9 != v68 );
          }
          if ( v71 != v76 )
          {
            *(&v81[v76] + v72) = v7[v76];
            if ( v71 > v88 )
            {
              *(&v81[v88] + v72) = v7[v88];
              if ( v71 > v90 )
                *(&v81[v90] + v72) = v7[v90];
            }
          }
        }
        ++v4;
        v5 += v71;
      }
      while ( a2 != v4 );
      ++v74;
      v86 += v71 * a2;
    }
    while ( a3 != v74 );
  }
LABEL_31:
  *(_DWORD *)(v94 + 4) = a2;
  *(_DWORD *)(v94 + 8) = a3;
  free(v67);
  *(_DWORD *)v94 = v81;
}
