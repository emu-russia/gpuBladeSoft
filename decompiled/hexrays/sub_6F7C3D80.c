int *__usercall sub_6F7C3D80@<eax>(int a1@<eax>, int a2@<edx>)
{
  int *result; // eax@1
  int v3; // ebp@1
  char v4; // dl@3
  char v5; // dl@6
  int v6; // eax@7
  int v7; // eax@8
  int v8; // edi@8
  int v9; // edi@11
  int v10; // esi@11
  int v11; // ecx@11
  int v12; // ebx@12
  int v13; // eax@12
  signed int v14; // edx@13
  int v15; // esi@23
  int v16; // edx@23
  signed int v17; // eax@23
  int v18; // ebp@28
  int v19; // ebx@30
  int v20; // eax@30
  int i; // ecx@36
  int v22; // ebx@39
  int v23; // esi@41
  signed int v24; // eax@41
  signed int v25; // eax@50
  int v26; // edx@54
  bool v27; // zf@56
  bool v28; // sf@56
  unsigned __int8 v29; // of@56
  int v30; // ecx@56
  char v31; // al@56
  int v32; // edx@57
  int v33; // eax@58
  int v34; // ebx@58
  int v35; // eax@60
  int v36; // esi@61
  int v37; // edx@61
  signed int v38; // esi@68
  int v39; // eax@80
  signed int v40; // ebx@80
  int v41; // eax@81
  int v42; // eax@82
  int *v43; // ebx@86
  signed int v44; // ebp@86
  signed int v45; // edi@86
  int v46; // ecx@89
  int v47; // edx@89
  signed int v48; // eax@90
  int v49; // esi@90
  int v50; // ebx@90
  int *v51; // ebx@94
  signed int v52; // ebp@94
  signed int v53; // edi@94
  int v54; // ecx@97
  int v55; // edx@97
  signed int v56; // eax@98
  int v57; // esi@98
  int v58; // ebx@98
  int v59; // edx@102
  int v60; // ecx@104
  int v61; // eax@104
  int v62; // ebx@104
  __int16 v63; // si@106
  __int16 v64; // cx@106
  signed int v65; // kr00_4@107
  int v66; // ebx@107
  int v67; // eax@108
  signed int v68; // ebx@109
  signed int v69; // eax@109
  signed int v70; // esi@109
  int v71; // ecx@131
  int v72; // ecx@133
  int v73; // ebx@138
  int v74; // ecx@138
  int v75; // edx@138
  int v76; // eax@140
  signed int v77; // eax@142
  signed int v78; // eax@145
  char *v79; // [sp+10h] [bp-21Ch]@2
  int v80; // [sp+10h] [bp-21Ch]@89
  int v81; // [sp+10h] [bp-21Ch]@97
  signed int v82; // [sp+14h] [bp-218h]@11
  int v83; // [sp+14h] [bp-218h]@56
  int v84; // [sp+18h] [bp-214h]@11
  int v85; // [sp+1Ch] [bp-210h]@11
  int v86; // [sp+20h] [bp-20Ch]@11
  int v87; // [sp+20h] [bp-20Ch]@36
  unsigned int v88; // [sp+20h] [bp-20Ch]@48
  int v89; // [sp+20h] [bp-20Ch]@138
  int v90; // [sp+24h] [bp-208h]@1
  int v91; // [sp+28h] [bp-204h]@10
  int v92; // [sp+28h] [bp-204h]@23
  int v93; // [sp+28h] [bp-204h]@56
  int v94; // [sp+2Ch] [bp-200h]@11
  __int64 v95; // [sp+30h] [bp-1FCh]@2
  int *v96; // [sp+38h] [bp-1F4h]@1
  int v97; // [sp+3Ch] [bp-1F0h]@8
  signed int v98; // [sp+3Ch] [bp-1F0h]@25
  signed int v99; // [sp+40h] [bp-1ECh]@25
  int v100; // [sp+44h] [bp-1E8h]@1
  int v101; // [sp+48h] [bp-1E4h]@23
  int v102; // [sp+50h] [bp-1DCh]@61
  signed int v103; // [sp+54h] [bp-1D8h]@56
  signed int v104; // [sp+58h] [bp-1D4h]@56
  int v105; // [sp+68h] [bp-1C4h]@56
  _DWORD *v106; // [sp+6Ch] [bp-1C0h]@56
  int v107; // [sp+74h] [bp-1B8h]@99
  int v108[50]; // [sp+78h] [bp-1B4h]@94
  int v109; // [sp+140h] [bp-ECh]@91
  int v110[58]; // [sp+144h] [bp-E8h]@86

  v90 = a1;
  v100 = a2;
  result = *(int **)(*(_DWORD *)a1 + 12);
  v3 = dword_6FB6BB00[2 * (signed int)result];
  v96 = &dword_6FB6BB00[2 * (signed int)result];
  if ( v3 != 759 )
  {
    do
    {
      v95 = 0i64;
      v79 = &aZEDG[v3];
LABEL_3:
      while ( 1 )
      {
        v4 = *v79;
        if ( !*v79 )
          break;
        if ( (unsigned __int8)v4 <= 0x7Fu )
        {
          ++v79;
        }
        else if ( (unsigned __int8)v4 > 0xDFu )
        {
          if ( (unsigned __int8)v4 > 0xEFu )
          {
            v39 = v4 & 7;
            v40 = 3;
          }
          else
          {
            v39 = v4 & 0xF;
            v40 = 2;
          }
          v41 = (((v39 << 6) | v79[1] & 0x3F) << 6) | v79[2] & 0x3F;
          if ( v40 != 2 )
            v42 = v79[3] & 0x3F | (v41 << 6);
          v79 += v40 + 1;
        }
        else
        {
          v5 = v79[1];
          v79 += 2;
        }
        v6 = sub_6F76D560(**(_DWORD **)(v90 + 36));
        if ( v6 )
        {
          v7 = sub_6F76E6F0(v100, v6, 1);
          v8 = *(_DWORD *)(v100 + 84);
          v97 = v8;
          if ( *(_WORD *)(v8 + 110) > 2 && !v7 )
          {
            v91 = *(_WORD *)(v8 + 108);
            if ( v91 <= 0 )
            {
              v108[(signed int)v95] = 0;
              LODWORD(v95) = v95 + 1;
            }
            else
            {
              v9 = *(_DWORD *)(v8 + 112);
              v86 = 0;
              v10 = 0;
              v85 = 0;
              v84 = 0;
              v82 = -1;
              v11 = 0;
              v94 = *(_DWORD *)(*(_DWORD *)(v100 + 84) + 120);
              do
              {
                v12 = *(_WORD *)(v94 + 2 * v10);
                v13 = v86;
                if ( v12 <= v86 )
                  goto LABEL_21;
                v14 = v82;
                if ( *((_BYTE *)v96 + 4) & 1 )
                {
                  while ( v14 >= 0 )
                  {
                    if ( *(_DWORD *)(v9 + 8 * v13 + 4) > v11 )
                    {
                      v11 = *(_DWORD *)(v9 + 8 * v13 + 4);
LABEL_17:
                      v14 = v13;
                    }
                    if ( v12 < ++v13 )
                      goto LABEL_19;
                  }
                  v11 = *(_DWORD *)(v9 + 8 * v13 + 4);
                  goto LABEL_17;
                }
                do
                {
                  if ( v14 < 0 )
                  {
                    v11 = *(_DWORD *)(v9 + 8 * v13 + 4);
LABEL_72:
                    v14 = v13;
                    goto LABEL_73;
                  }
                  if ( *(_DWORD *)(v9 + 8 * v13 + 4) < v11 )
                  {
                    v11 = *(_DWORD *)(v9 + 8 * v13 + 4);
                    goto LABEL_72;
                  }
LABEL_73:
                  ++v13;
                }
                while ( v12 >= v13 );
LABEL_19:
                if ( v14 != v82 )
                {
                  v85 = *(_WORD *)(v94 + 2 * v10);
                  v82 = v14;
                  v84 = v86;
                }
LABEL_21:
                ++v10;
                v86 = v12 + 1;
              }
              while ( v10 != v91 );
              if ( v82 < 0 )
                goto LABEL_117;
              v15 = *(_DWORD *)(v97 + 116);
              v92 = *(_DWORD *)(v9 + 8 * v82);
              v16 = v82;
              v101 = *(_DWORD *)(v97 + 116);
              v17 = -1;
              if ( (*(_BYTE *)(v15 + v82) & 3) == 1 )
                v17 = v82;
              v98 = v17;
              v99 = v17;
              while ( 1 )
              {
                v18 = v16 - 1;
                if ( v84 >= v16 )
                  v18 = v85;
                v19 = v9 + 8 * v18;
                v20 = (((*(_DWORD *)(v19 + 4) - v11) >> 31) ^ (*(_DWORD *)(v19 + 4) - v11))
                    - ((*(_DWORD *)(v19 + 4) - v11) >> 31);
                if ( v20 > 5 && abs(*(_DWORD *)v19 - v92) <= 20 * v20 )
                  break;
                if ( (*(_BYTE *)(v15 + v18) & 3) == 1 )
                {
                  if ( v99 < 0 )
                    v99 = v18;
                  v98 = v18;
                  if ( v82 == v18 )
                    goto LABEL_36;
                }
                else if ( v82 == v18 )
                {
                  goto LABEL_36;
                }
                v16 = v18;
              }
              v18 = v16;
LABEL_36:
              v87 = v11;
              for ( i = v82; ; i = v22 )
              {
                v22 = i + 1;
                if ( v85 <= i )
                  v22 = v84;
                v23 = v9 + 8 * v22;
                v24 = abs(*(_DWORD *)(v23 + 4) - v87);
                if ( v24 > 5
                  && (((*(_DWORD *)v23 - v92) >> 31) ^ (*(_DWORD *)v23 - v92)) - ((*(_DWORD *)v23 - v92) >> 31) <= 20 * v24 )
                {
                  break;
                }
                if ( (*(_BYTE *)(v101 + v22) & 3) != 1 || (v99 = v22, v98 >= 0) )
                {
                  if ( v82 == v22 )
                    goto LABEL_46;
                }
                else
                {
                  v98 = v22;
                  if ( v82 == v22 )
                  {
LABEL_46:
                    v11 = v87;
                    goto LABEL_47;
                  }
                }
              }
              v22 = i;
              v11 = v87;
LABEL_47:
              if ( *((_WORD *)v96 + 2) & 8
                && (v88 = *(_DWORD *)(v90 + 40),
                    (signed int)(v88 / 0x19) > abs(*(_DWORD *)(v9 + 8 * v22) - *(_DWORD *)(v9 + 8 * v18)))
                && v22 - v18 + 1 < v85 - v84 )
              {
                v25 = v82;
                while ( 1 )
                {
                  v29 = __OFSUB__(v84, v25);
                  v28 = v84 - v25-- < 0;
                  if ( !(v28 ^ v29) )
                    v25 = v85;
                  v26 = *(_DWORD *)(v9 + 8 * v25);
                  if ( v92 != v26 )
                    break;
                  if ( v82 == v25 )
                    goto LABEL_3;
                }
                if ( v82 != v25 )
                {
                  v29 = __OFSUB__(v92, v26);
                  v27 = v92 == v26;
                  v28 = v92 - v26 < 0;
                  v93 = v11;
                  v83 = v22;
                  v30 = v22;
                  v104 = 0;
                  v103 = 0;
                  v105 = v22;
                  v106 = (_DWORD *)v23;
                  v31 = 0;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      if ( v31 )
                      {
                        v32 = v83;
                      }
                      else
                      {
                        v38 = -1;
                        v32 = v30;
                        v83 = v30;
                        if ( (*(_BYTE *)(v101 + v30) & 3) == 1 )
                          v38 = v30;
                        v104 = v38;
                        v103 = v38;
                      }
                      v33 = v30 + 1;
                      v34 = v9 + 8 * v32;
                      if ( v85 <= v30 )
                        v33 = v84;
                      v30 = v33;
                      v35 = *(_DWORD *)(v34 + 4);
                      if ( *(_DWORD *)(v90 + 40) >> 2 >= (((v93 - v35) >> 31) ^ (v93 - v35)) - ((v93 - v35) >> 31) )
                      {
                        v36 = v9 + 8 * v30;
                        v37 = (((*(_DWORD *)(v36 + 4) - v35) >> 31) ^ (*(_DWORD *)(v36 + 4) - v35))
                            - ((*(_DWORD *)(v36 + 4) - v35) >> 31);
                        v102 = *(_DWORD *)v34;
                        if ( v37 <= 5
                          || (((*(_DWORD *)v36 - v102) >> 31) ^ (*(_DWORD *)v36 - v102))
                           - ((*(_DWORD *)v36 - v102) >> 31) > 20 * v37 )
                        {
                          break;
                        }
                      }
                      v31 = 0;
                      if ( v30 == v18 )
                      {
LABEL_135:
                        v11 = v93;
                        v22 = v105;
                        goto LABEL_120;
                      }
                    }
                    if ( (*(_BYTE *)(v101 + v30) & 3) == 1 )
                    {
                      v104 = v30;
                      if ( v103 < 0 )
                        v103 = v30;
                    }
                    if ( *(_DWORD *)v36 > v102 == !((unsigned __int8)(v28 ^ v29) | v27)
                      && (signed int)(v88 / 0x19) <= (((*(_DWORD *)v36 - v102) >> 31) ^ (*(_DWORD *)v36 - v102))
                                                   - ((*(_DWORD *)v36 - v102) >> 31) )
                    {
                      break;
                    }
                    v31 = 1;
                    if ( v30 == v18 )
                      goto LABEL_135;
                  }
                  v89 = *(_DWORD *)(v34 + 4);
                  v73 = v30;
                  v74 = 20 * v37;
                  v75 = v73;
                  v99 = v104;
                  v98 = v103;
                  while ( 1 )
                  {
                    v76 = v75 + 1;
                    if ( v85 <= v75 )
                      v76 = v84;
                    v75 = v76;
                    v77 = *(_DWORD *)(v9 + 8 * v76 + 4) - v89;
                    if ( ((v77 >> 31) ^ v77) - (v77 >> 31) > 5
                      && (((*v106 - v102) >> 31) ^ (*v106 - v102)) - ((*v106 - v102) >> 31) <= v74 )
                    {
                      break;
                    }
                    if ( (*(_BYTE *)(v101 + v75) & 3) == 1 )
                    {
                      v78 = v98;
                      if ( (unsigned int)v98 >> 31 )
                        v78 = v75;
                      v98 = v78;
                    }
                    if ( v75 == v18 )
                    {
                      v22 = v18;
                      v99 = v18;
                      v11 = v89;
                      v18 = v83;
                      goto LABEL_120;
                    }
                    v99 = v75;
                  }
                  if ( v84 >= v75 )
                  {
                    v22 = v85;
                    v18 = v83;
                    v11 = v89;
                  }
                  else
                  {
                    v18 = v83;
                    v11 = v89;
                    v22 = v75 - 1;
                  }
                  goto LABEL_120;
                }
              }
              else
              {
LABEL_120:
                if ( (v98 < 0
                   || v99 < 0
                   || abs(*(_DWORD *)(v9 + 8 * v99) - *(_DWORD *)(v9 + 8 * v98)) <= *(_DWORD *)(v90 + 40) >> 3)
                  && ((*(_BYTE *)(v101 + v18) & 3) != 1 || (*(_BYTE *)(v101 + v22) & 3) != 1) )
                {
                  if ( !(*((_WORD *)v96 + 2) & 2) )
                    v110[HIDWORD(v95)++] = v11;
                }
                else
                {
LABEL_117:
                  v108[(signed int)v95] = v11;
                  LODWORD(v95) = v95 + 1;
                }
              }
            }
          }
        }
      }
      if ( v95 )
      {
        v43 = v110;
        v44 = -1;
        v45 = 1;
        if ( HIDWORD(v95) > 1 )
        {
          do
          {
            if ( !v45 )
            {
              ++v43;
              --v44;
              v45 = 1;
            }
            v46 = v43[1];
            v47 = *v43;
            v80 = (int)(v43 + 1);
            if ( *v43 > v46 )
            {
              v48 = v45;
              v49 = (int)&v43[v44 + 1];
              v50 = (int)&v43[v44];
              do
              {
                *(_DWORD *)(v49 + 4 * v48) = v47;
                *(_DWORD *)(v50 + 4 * v48--) = v46;
                if ( !v48 )
                  break;
                v47 = *(&v109 + v48);
              }
              while ( v46 < v47 );
            }
            ++v45;
            --v44;
            v43 = (int *)v80;
          }
          while ( HIDWORD(v95) != v45 );
        }
        v51 = v108;
        v52 = -1;
        v53 = 1;
        if ( (unsigned int)v95 <= 1 )
        {
          v59 = *(_DWORD *)(v90 + 1832);
          *(_DWORD *)(v90 + 1832) = v59 + 1;
          if ( (_DWORD)v95 )
            goto LABEL_103;
          v61 = v110[HIDWORD(v95) >> 1];
          v72 = v90 + 28 * v59;
          *(_DWORD *)(v72 + 1848) = v61;
          *(_DWORD *)(v72 + 1836) = v61;
          v62 = v61;
        }
        else
        {
          do
          {
            if ( !v53 )
            {
              ++v51;
              --v52;
              v53 = 1;
            }
            v54 = v51[1];
            v55 = *v51;
            v81 = (int)(v51 + 1);
            if ( v54 < *v51 )
            {
              v56 = v53;
              v57 = (int)&v51[v52 + 1];
              v58 = (int)&v51[v52];
              do
              {
                *(_DWORD *)(v57 + 4 * v56) = v55;
                *(_DWORD *)(v58 + 4 * v56--) = v54;
                if ( !v56 )
                  break;
                v55 = *(&v107 + v56);
              }
              while ( v54 < v55 );
            }
            ++v53;
            --v52;
            v51 = (int *)v81;
          }
          while ( (_DWORD)v95 != v53 );
          v59 = *(_DWORD *)(v90 + 1832);
          *(_DWORD *)(v90 + 1832) = v59 + 1;
LABEL_103:
          if ( HIDWORD(v95) )
          {
            v71 = v90 + 28 * v59;
            v61 = v108[(unsigned int)v95 >> 1];
            v62 = v110[HIDWORD(v95) >> 1];
            *(_DWORD *)(v71 + 1836) = v61;
            *(_DWORD *)(v71 + 1848) = v62;
          }
          else
          {
            v60 = v90 + 28 * v59;
            v61 = v108[(unsigned int)v95 >> 1];
            *(_DWORD *)(v60 + 1848) = v61;
            *(_DWORD *)(v60 + 1836) = v61;
            v62 = v61;
          }
        }
        if ( v62 == v61 )
        {
          v64 = *((_WORD *)v96 + 2);
          v63 = *((_WORD *)v96 + 2) & 1;
        }
        else
        {
          v63 = *((_WORD *)v96 + 2) & 1;
          v64 = *((_WORD *)v96 + 2);
          if ( (v64 & 1) != v62 > v61 )
          {
            v65 = v62 + v61;
            v66 = v90 + 28 * v59;
            *(_DWORD *)(v66 + 1848) = v65 / 2;
            *(_DWORD *)(v66 + 1836) = v65 / 2;
          }
        }
        v67 = 28 * v59;
        if ( v63 )
        {
          *(_DWORD *)(v90 + v67 + 1860) = 2;
          v68 = 14;
          v69 = 10;
          v70 = 6;
        }
        else
        {
          *(_DWORD *)(v90 + v67 + 1860) = 0;
          v68 = 12;
          v69 = 8;
          v70 = 4;
        }
        if ( v64 & 2 )
        {
          *(_DWORD *)(v90 + 28 * v59 + 1860) = v70;
          v69 = v68;
        }
        if ( v64 & 4 )
          *(_DWORD *)(v90 + 28 * v59 + 1860) = v69;
      }
      v96 += 2;
      result = v96;
      v3 = *v96;
    }
    while ( *v96 != 759 );
  }
  return result;
}
