_DWORD __cdecl sub_6F811B70(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, _DWORD a5, _DWORD a6, signed int a7, _DWORD *a8, int a9)
{
  _DWORD v9; // edx@1
  int v10; // esi@1
  signed int v11; // ebx@2
  int v12; // ebp@2
  int v13; // eax@3
  int v14; // ecx@3
  int v15; // esi@3
  unsigned int v16; // esi@3
  int v17; // edx@3
  unsigned int v18; // ecx@3
  int v19; // ebx@4
  signed __int64 v20; // rax@5
  _BYTE v21; // dl@7
  int *v22; // eax@7
  int v23; // edx@7
  int *v24; // ebx@7
  int v25; // edi@7
  int v26; // esi@7
  _QWORD v27; // rax@7
  unsigned int v28; // eax@9
  int v29; // edi@9
  _DWORD v30; // eax@9
  _DWORD v31; // ecx@10
  int v32; // edi@12
  signed int v33; // esi@12
  int v34; // edi@12
  _DWORD v35; // ebx@12
  int v36; // esi@14
  int v37; // eax@15
  int v38; // ecx@18
  unsigned int v39; // ecx@18
  int v40; // eax@23
  _DWORD v41; // esi@36
  int v42; // ecx@37
  int v43; // esi@47
  signed int v44; // edi@48
  int v45; // ebx@48
  int v46; // edi@48
  signed int v47; // edx@48
  int v48; // ecx@50
  int v49; // edx@51
  signed int v50; // ebp@52
  int v51; // eax@54
  int v52; // edx@54
  int *v53; // ecx@54
  unsigned int v54; // eax@54
  int v55; // eax@58
  int *v56; // ecx@58
  unsigned int v57; // eax@58
  _DWORD v58; // eax@60
  int v59; // ebx@63
  _BYTE v60; // al@63
  bool v61; // dl@63
  _DWORD v62; // edi@65
  int *v63; // edi@68
  int v64; // ecx@68
  int v65; // edx@68
  unsigned int v66; // ecx@68
  unsigned int v67; // esi@71
  int v68; // eax@73
  int v69; // ecx@77
  int v70; // esi@77
  int v71; // edi@77
  int v72; // ecx@77
  int v73; // edx@77
  int v74; // ebp@79
  int v75; // esi@80
  int v76; // ecx@82
  unsigned int v77; // ecx@83
  _WORD v78; // di@85
  _BYTE v79; // bl@86
  _BYTE v80; // si@86
  int v81; // eax@87
  _QWORD v82; // rax@90
  _DWORD v83; // ebx@91
  int v84; // ecx@93
  _DWORD v85; // esi@93
  int v86; // ecx@95
  int *v87; // ecx@95
  int v88; // ST18_4@95
  int v89; // edi@95
  signed int v90; // ebx@101
  int v91; // ebp@101
  _DWORD v92; // ecx@103
  int v93; // edx@103
  char *v94; // esi@103
  int v95; // edx@104
  int v96; // edi@104
  signed int v97; // esi@104
  _WORD v98; // si@107
  _DWORD v99; // edx@108
  int v100; // eax@113
  int v101; // ecx@113
  unsigned int v102; // eax@113
  int v103; // eax@115
  _DWORD v104; // ecx@115
  int v105; // ecx@115
  signed int v106; // esi@116
  signed int v107; // edi@116
  int v108; // ebp@116
  int v109; // eax@117
  _DWORD v110; // ebx@117
  _BYTE v111; // cl@117
  _DWORD result; // eax@119
  int v113; // eax@123
  int v114; // ecx@124
  int v115; // edx@125
  int v116; // eax@125
  int v117; // ecx@125
  int v118; // edi@125
  unsigned int v119; // ecx@125
  int v120; // eax@81
  int v121; // eax@131
  int v122; // esi@131
  int v123; // edx@132
  int v124; // edx@132
  unsigned int v125; // edi@136
  int v126; // edx@140
  int v127; // eax@140
  unsigned int v128; // edi@144
  unsigned __int64 v129; // [sp+10h] [bp-9CCh]@2
  _DWORD v130; // [sp+10h] [bp-9CCh]@101
  char v131; // [sp+18h] [bp-9C4h]@4
  _DWORD v132; // [sp+18h] [bp-9C4h]@9
  int v133; // [sp+18h] [bp-9C4h]@15
  int v134; // [sp+18h] [bp-9C4h]@93
  int v135; // [sp+18h] [bp-9C4h]@100
  _DWORD v136; // [sp+1Ch] [bp-9C0h]@12
  int v137; // [sp+1Ch] [bp-9C0h]@47
  unsigned int v138; // [sp+1Ch] [bp-9C0h]@52
  char *v139; // [sp+1Ch] [bp-9C0h]@90
  _BYTE v140; // [sp+1Ch] [bp-9C0h]@104
  unsigned __int64 v141; // [sp+20h] [bp-9BCh]@2
  int v142; // [sp+20h] [bp-9BCh]@102
  unsigned int v143; // [sp+28h] [bp-9B4h]@9
  int v144; // [sp+28h] [bp-9B4h]@52
  int v145; // [sp+28h] [bp-9B4h]@79
  int v146; // [sp+28h] [bp-9B4h]@93
  _WORD *v147; // [sp+28h] [bp-9B4h]@104
  signed int v148; // [sp+2Ch] [bp-9B0h]@9
  int v149; // [sp+30h] [bp-9ACh]@0
  _DWORD v150; // [sp+30h] [bp-9ACh]@101
  int v151; // [sp+34h] [bp-9A8h]@9
  _BYTE v152; // [sp+34h] [bp-9A8h]@107
  unsigned __int64 v153; // [sp+38h] [bp-9A4h]@2
  _DWORD v154; // [sp+38h] [bp-9A4h]@101
  int v155; // [sp+40h] [bp-99Ch]@51
  int v156; // [sp+44h] [bp-998h]@48
  int v157; // [sp+48h] [bp-994h]@0
  int v158; // [sp+4Ch] [bp-990h]@52
  _BYTE v159; // [sp+50h] [bp-98Ch]@68
  int v160; // [sp+50h] [bp-98Ch]@71
  int v161; // [sp+54h] [bp-988h]@68
  int v162; // [sp+58h] [bp-984h]@9
  int v163; // [sp+5Ch] [bp-980h]@0
  int v164; // [sp+60h] [bp-97Ch]@52
  int v165; // [sp+68h] [bp-974h]@9
  int v166; // [sp+6Ch] [bp-970h]@71
  signed int v167; // [sp+70h] [bp-96Ch]@71
  int v168; // [sp+74h] [bp-968h]@71
  int v169; // [sp+78h] [bp-964h]@71
  int v170; // [sp+7Ch] [bp-960h]@0
  int v171; // [sp+80h] [bp-95Ch]@0
  int v172; // [sp+84h] [bp-958h]@9
  int v173; // [sp+8Ch] [bp-950h]@52
  int v174; // [sp+90h] [bp-94Ch]@53
  int v175; // [sp+90h] [bp-94Ch]@58
  _DWORD v176; // [sp+94h] [bp-948h]@1
  int v177; // [sp+98h] [bp-944h]@51
  signed int v178; // [sp+9Ch] [bp-940h]@48
  signed __int64 v179; // [sp+A0h] [bp-93Ch]@47
  unsigned int v180; // [sp+A8h] [bp-934h]@53
  int v181; // [sp+ACh] [bp-930h]@47
  _DWORD v182; // [sp+B4h] [bp-928h]@58
  int v183[64]; // [sp+C0h] [bp-91Ch]@1
  int v184; // [sp+1C0h] [bp-81Ch]@1
  int v185; // [sp+1C4h] [bp-818h]@1
  int v186; // [sp+1C8h] [bp-814h]@1
  int v187; // [sp+1CCh] [bp-810h]@1
  int v188; // [sp+1D0h] [bp-80Ch]@1
  int v189; // [sp+1D4h] [bp-808h]@1
  int v190; // [sp+1D8h] [bp-804h]@1
  int v191; // [sp+1DCh] [bp-800h]@1
  char v192[28]; // [sp+9C0h] [bp-1Ch]@90

  v184 = 0;
  v185 = 0;
  v9 = *(_BYTE *)(a1 + 792);
  v186 = 0;
  v187 = 0;
  v188 = 0;
  v189 = 0;
  v190 = 0;
  v191 = 0;
  v183[0] = 0;
  v10 = a7 > 63 ? 63 - a7 : 0;
  v176 = *(_BYTE *)(((a2 + 1) >> 1) + a1 + 4 * v9 + 51617);
  if ( v10 + a7 <= 0 )
  {
    v135 = 0;
    goto LABEL_101;
  }
  v11 = 64;
  v141 = 0i64;
  v129 = 0i64;
  v153 = 1i64;
  v12 = v10 + a7;
  do
  {
    while ( 1 )
    {
      v172 = 2 * v12;
      v28 = *(_WORD *)(a4 + 2 * v12);
      v132 = *(_DWORD *)(a1 + 53164);
      v143 = v28 >> 31;
      v151 = v28 >> 31;
      v162 = -v151;
      v29 = -v151 ^ (v28 - v151);
      v148 = v29;
      v30 = (unsigned __int8)byte_6FB8E900[v12];
      v165 = *(_WORD *)(a6 + 2 * v30);
      if ( v29 > 1 )
      {
        v31 = 0;
        if ( a9 <= v12 )
          v31 = *(_DWORD *)(a1 + 53164);
        v32 = *(_WORD *)(a6 + 2 * v30) - v151;
        v183[v12] = 0;
        v33 = *(_WORD *)(a1 + (a2 << 7) + 52552 + 2 * v12);
        v34 = v162 ^ v32;
        v35 = *(_WORD *)(a5 + 2 * v12);
        v136 = v31;
        if ( *(_WORD *)(a1 + (a2 << 7) + 52552 + 2 * v12) )
        {
          if ( v33 > 3 )
          {
            v81 = sub_6F8095C0(v33);
            v36 = v81 - 3 + (v81 - 3 > 3 ? 6 - v81 : 0) + 3;
          }
          else
          {
            v36 = v33 - 1;
          }
          v37 = v176 + (unsigned __int8)byte_6FB8E7C0[v12];
          v133 = *(_DWORD *)(a1 + 8 * (v36 + 32 * (v176 + (unsigned __int8)byte_6FB8E7C0[v12]) + 6646) + 4)
               + (unsigned __int8)byte_6FB8E840[v36];
        }
        else
        {
          v133 = 0;
          v37 = v176 + (unsigned __int8)byte_6FB8E7C0[v12];
        }
        if ( v148 == 2 )
        {
          v13 = 32 * v37;
          v14 = 2 * v35 - v34;
          v157 = v151 + 11;
          v15 = v133 + *(_DWORD *)(a1 + 8 * (v151 + 11 + v13 + 6646) + 4) + (unsigned __int8)byte_6FB8E840[v151 + 11];
          v149 = v15;
          v16 = v15 * v136 + v14 * v14;
          v17 = *(_DWORD *)(a1 + 8 * (v151 + 9 + v13 + 6646) + 4) + (unsigned __int8)byte_6FB8E840[v151 + 9] + v133;
          v18 = v17 * v136 + (v14 - v35) * (v14 - v35);
          if ( v16 >= v18 )
          {
            v131 = v151 + 9;
            v157 = v151 + 9;
            v16 = v18;
            v149 = v17;
            LOWORD(v19) = 0;
            v163 = 0;
            v148 = 1;
          }
          else
          {
            LOWORD(v19) = 0;
            v163 = 0;
            v131 = v151 + 11;
          }
        }
        else if ( v148 == 3 )
        {
          v38 = 3 * v35 - v34;
          v149 = v133 + *(_DWORD *)(a1 + (v37 << 8) + 53276) + 1;
          v16 = (v133 + *(_DWORD *)(a1 + (v37 << 8) + 53276) + 1) * v136 + v38 * v38;
          v157 = v151 + 11;
          v39 = (*(_DWORD *)(a1 + 8 * (v151 + 11 + 32 * v37 + 6646) + 4)
               + (unsigned __int8)byte_6FB8E840[v151 + 11]
               + v133)
              * v136
              + (v38 - v35) * (v38 - v35);
          if ( v16 >= v39 )
          {
            v149 = *(_DWORD *)(a1 + 8 * (v151 + 11 + 32 * v37 + 6646) + 4)
                 + (unsigned __int8)byte_6FB8E840[v151 + 11]
                 + v133;
            v16 = v39;
            LOWORD(v19) = 0;
            v163 = 0;
            v148 = 2;
            v131 = v151 + 11;
          }
          else
          {
            LOWORD(v19) = (unsigned __int8)v143;
            v131 = 13;
            v157 = 13;
            v163 = v151;
          }
        }
        else if ( v148 > 6 )
        {
          if ( v148 > 8 )
          {
            v114 = v35 * v148;
            if ( v148 > 12 )
            {
              v121 = a1 + (v37 << 8);
              v122 = v114 - v34;
              if ( v148 > 20 )
              {
                if ( v148 > 36 )
                {
                  if ( v148 > 68 )
                  {
                    v149 = v133 + *(_DWORD *)(v121 + 53348) + 10;
                    v16 = v149 * v136 + v122 * v122;
                    v128 = (*(_DWORD *)(v121 + 53340) + 6 + v133) * v136 + (68 * v35 - v34) * (68 * v35 - v34);
                    if ( v16 > v128 )
                    {
                      v149 = *(_DWORD *)(v121 + 53340) + 6 + v133;
                      v16 = v128;
                      v131 = 21;
                      v157 = 21;
                      v163 = 32 * v151 + 31;
                      v19 = 32 * v151 + 31;
                      v148 = 68;
                    }
                    else
                    {
                      v131 = 22;
                      v157 = 22;
                      v19 = v148 + (v151 << 9) - 69;
                      v163 = v148 + (v151 << 9) - 69;
                    }
                  }
                  else
                  {
                    v149 = v133 + *(_DWORD *)(v121 + 53340) + 6;
                    v16 = v149 * v136 + v122 * v122;
                    v126 = *(_DWORD *)(v121 + 53332) + 5 + v133;
                    v127 = (36 * v35 - v34) * (36 * v35 - v34);
                    if ( v16 > v126 * v136 + v127 )
                    {
                      v149 = v126;
                      v16 = v126 * v136 + v127;
                      v131 = 20;
                      v157 = 20;
                      v163 = 16 * v151 + 15;
                      v19 = 16 * v151 + 15;
                      v148 = 36;
                    }
                    else
                    {
                      v131 = 21;
                      v157 = 21;
                      v19 = v148 + 32 * v151 - 37;
                      v163 = v148 + 32 * v151 - 37;
                    }
                  }
                }
                else
                {
                  v149 = v133 + *(_DWORD *)(v121 + 53332) + 5;
                  v16 = v149 * v136 + v122 * v122;
                  v125 = (*(_DWORD *)(v121 + 53324) + 4 + v133) * v136 + (20 * v35 - v34) * (20 * v35 - v34);
                  if ( v16 < v125 )
                  {
                    v131 = 20;
                    v157 = 20;
                    v19 = v148 + 16 * v151 - 21;
                    v163 = v148 + 16 * v151 - 21;
                  }
                  else
                  {
                    v149 = *(_DWORD *)(v121 + 53324) + 4 + v133;
                    v131 = 19;
                    v157 = 19;
                    v16 = v125;
                    v148 = 20;
                    v163 = 8 * v151 + 7;
                    v19 = 8 * v151 + 7;
                  }
                }
              }
              else
              {
                v123 = v133 + *(_DWORD *)(v121 + 53324) + 4;
                v149 = v123;
                v16 = v123 * v136 + v122 * v122;
                v124 = *(_DWORD *)(v121 + 53316) + 3 + v133;
                if ( v16 >= v124 * v136 + (12 * v35 - v34) * (12 * v35 - v34) )
                {
                  v149 = *(_DWORD *)(v121 + 53316) + 3 + v133;
                  v131 = 18;
                  v157 = 18;
                  v148 = 12;
                  v16 = v124 * v136 + (12 * v35 - v34) * (12 * v35 - v34);
                  v163 = 4 * v151 + 3;
                  v19 = 4 * v151 + 3;
                }
                else
                {
                  v131 = 19;
                  v157 = 19;
                  v19 = v148 + 8 * v151 - 13;
                  v163 = v148 + 8 * v151 - 13;
                }
              }
            }
            else
            {
              v115 = a1 + (v37 << 8);
              v149 = v133 + *(_DWORD *)(v115 + 53316) + 3;
              v116 = (v114 - v34) * (v114 - v34);
              v117 = 8 * v35 - v34;
              v118 = *(_DWORD *)(v115 + 53308) + 2;
              v16 = v116 + (v133 + *(_DWORD *)(v115 + 53316) + 3) * v136;
              v119 = (v118 + v133) * v136 + v117 * v117;
              if ( v16 < v119 )
              {
                v131 = 18;
                v157 = 18;
                v19 = v148 + 4 * v151 - 9;
                v163 = v148 + 4 * v151 - 9;
              }
              else
              {
                v149 = v118 + v133;
                v131 = 17;
                v157 = 17;
                v148 = 8;
                v16 = v119;
                v163 = 2 * v151 + 1;
                v19 = 2 * v151 + 1;
              }
            }
          }
          else
          {
            v100 = a1 + (v37 << 8);
            v149 = v133 + *(_DWORD *)(v100 + 53308) + 2;
            v16 = v149 * v136 + (v35 * v148 - v34) * (v35 * v148 - v34);
            v101 = *(_DWORD *)(v100 + 53300) + 1 + v133;
            v102 = v101 * v136 + (6 * v35 - v34) * (6 * v35 - v34);
            if ( v16 < v102 )
            {
              v131 = 17;
              v157 = 17;
              v19 = v148 + 2 * v151 - 7;
              v163 = v148 + 2 * v151 - 7;
            }
            else
            {
              LOWORD(v19) = (unsigned __int8)v143;
              v149 = v101;
              v131 = 16;
              v157 = 16;
              v148 = 6;
              v163 = v151;
              v16 = v102;
            }
          }
        }
        else
        {
          v69 = v35 * v148 - v34;
          v157 = v148 + 10;
          v70 = v133
              + *(_DWORD *)(a1 + 8 * (v148 + 10 + 32 * v37 + 6646) + 4)
              + (unsigned __int8)byte_6FB8E840[v148 + 10];
          v149 = v70;
          v16 = v70 * v136 + v69 * v69;
          v71 = v148 + 9;
          v72 = (v69 - v35) * (v69 - v35);
          v73 = *(_DWORD *)(a1 + 8 * (v148 + 9 + 32 * v37 + 6646) + 4) + (unsigned __int8)byte_6FB8E840[v148 + 9] + v133;
          if ( v16 < v73 * v136 + v72 )
          {
            LOWORD(v19) = (unsigned __int8)v143;
            v163 = v151;
            v131 = v148 + 10;
          }
          else
          {
            --v148;
            v131 = v71;
            v157 = v71;
            LOWORD(v19) = (unsigned __int8)v143;
            v149 = v73;
            v163 = v151;
            v16 = v73 * v136 + v72;
          }
        }
        v20 = (signed __int64)v141 >> ((v12 + 1) & 0x1F);
        if ( ((_BYTE)v12 + 1) & 0x20 )
          LOBYTE(v20) = (unsigned __int64)((signed __int64)v141 >> ((v12 + 1) & 0x1F)) >> 32;
        v21 = v20;
        v22 = &v188 + 8 * v12;
        v23 = (v21 & 1) + 2 * (((_BYTE)v12 + 1) & 0x3F);
        *((_WORD *)v22 + 1) = v19;
        *(_BYTE *)v22 = v23;
        v24 = &v184 + 4 * v23;
        *((_BYTE *)v22 + 1) = v131;
        v25 = v16 + v24[1];
        v26 = v24[2] + v149;
        v22[1] = v25;
        v22[3] = v162 ^ (v148 - v151);
        v22[2] = v26;
        LODWORD(v27) = ((v12 & 0x20) == 0) << v12;
        HIDWORD(v27) = ((v12 & 0x20) != 0) << v12;
        v129 |= v27;
        v11 = v12;
        v141 |= v27;
        --v12;
        goto LABEL_8;
      }
      if ( v29 )
      {
        v165 = v162 ^ (v165 - v151);
        v43 = (v12 + 62) >> 6;
        v137 = v165 * v165;
        LODWORD(v179) = ((v12 & 0x20) == 0) << v12;
        HIDWORD(v179) = ((v12 & 0x20) != 0) << v12;
        v181 = v12 - 1;
      }
      else
      {
        if ( v12 == 1 )
          goto LABEL_122;
        if ( !*(_WORD *)(a4 + v172 - 2) )
        {
          v40 = ((_BYTE)v12 - 2) & 7;
          if ( !(((_BYTE)v12 - 2) & 7) )
            goto LABEL_129;
          if ( !*(_WORD *)(a4 + 2 * --v12 - 2) )
          {
            if ( v40 == 1 )
            {
LABEL_129:
              v41 = a4;
              goto LABEL_37;
            }
            if ( v40 == 2
              || (v40 == 3
               || (v40 == 4
                || (v40 == 5
                 || (v40 == 6 || (--v12, !*(_WORD *)(a4 + 2 * v12 - 2))) && (--v12, !*(_WORD *)(a4 + 2 * v12 - 2)))
                && (--v12, !*(_WORD *)(a4 + 2 * v12 - 2)))
               && (--v12, !*(_WORD *)(a4 + 2 * v12 - 2)))
              && (--v12, !*(_WORD *)(a4 + 2 * v12 - 2)) )
            {
              --v12;
              v41 = a4;
              if ( !*(_WORD *)(a4 + 2 * v12 - 2) )
              {
LABEL_37:
                while ( 1 )
                {
                  v42 = v12-- - 1;
                  if ( v12 == 1 )
                    break;
                  if ( !*(_WORD *)(v41 + 2 * v42 - 2) && !*(_WORD *)(v41 + 2 * --v12 - 2) )
                  {
                    v12 = v42 - 2;
                    if ( !*(_WORD *)(v41 + 2 * (v42 - 2) - 2) )
                    {
                      v12 = v42 - 3;
                      if ( !*(_WORD *)(v41 + 2 * (v42 - 3) - 2) )
                      {
                        v12 = v42 - 4;
                        if ( !*(_WORD *)(v41 + 2 * (v42 - 4) - 2) )
                        {
                          v12 = v42 - 5;
                          if ( !*(_WORD *)(v41 + 2 * (v42 - 5) - 2) )
                          {
                            v12 = v42 - 6;
                            if ( !*(_WORD *)(v41 + 2 * (v42 - 6) - 2) )
                            {
                              v12 = v42 - 7;
                              if ( !*(_WORD *)(v41 + 2 * (v42 - 7) - 2) )
                                continue;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LABEL_46;
                }
LABEL_122:
                v181 = 0;
                v179 = 2i64;
                v43 = 0;
                v172 = 2;
                v137 = 0;
                goto LABEL_48;
              }
            }
          }
LABEL_46:
          v172 = 2 * v12;
        }
        v137 = 0;
        v43 = (v12 + 62) >> 6;
        v181 = v12 - 1;
        LODWORD(v179) = ((v12 & 0x20) == 0) << v12;
        HIDWORD(v179) = ((v12 & 0x20) != 0) << v12;
      }
LABEL_48:
      v44 = v11;
      v45 = v11 & 0x3F;
      v46 = v44 - v12;
      v47 = *(_WORD *)(a1 + (a2 << 7) + 52552 + v172);
      v178 = *(_WORD *)(a1 + (a2 << 7) + 52552 + v172);
      v156 = v183[v45] + v137;
      v183[v12] = v156;
      if ( v47 )
      {
        if ( v47 > 3 )
        {
          v113 = sub_6F8095C0(v47);
          v48 = v113 - 3 + (v113 - 3 > 3 ? 6 - v113 : 0) + 3;
        }
        else
        {
          v48 = v47 - 1;
        }
        v49 = v176 + (unsigned __int8)byte_6FB8E7C0[v12];
        v177 = v49;
        v155 = *(_DWORD *)(a1 + 8 * (v48 + 32 * v49 + 6646) + 4) + (unsigned __int8)byte_6FB8E840[v48];
      }
      else
      {
        v155 = 0;
        v49 = v176 + (unsigned __int8)byte_6FB8E7C0[v12];
        v177 = v176 + (unsigned __int8)byte_6FB8E7C0[v12];
      }
      v144 = v12;
      v138 = -1;
      v50 = v46;
      v158 = 32 * v49;
      v164 = v43 + 15;
      v173 = v43 + 1;
      while ( 1 )
      {
        v62 = v129 >> v45;
        if ( v45 & 0x20 )
          v62 = SHIDWORD(v129) >> v45;
        if ( v62 & 1 )
        {
          v63 = &v188 + 8 * v45;
          v159 = *((_BYTE *)&v188 + 32 * v45);
          v64 = v183[v45];
          v65 = v155
              + *(_DWORD *)(a1 + 8 * (((v50 + 55) >> 6) + 7 + v158 + 6646) + 4)
              + (unsigned __int8)byte_6FB8E840[((v50 + 55) >> 6) + 7];
          v161 = v64;
          v66 = v63[1] + v156 - v64 + v65 * v132;
          if ( v138 >= v66 )
          {
            v157 = ((v50 + 55) >> 6) + 7;
            v138 = v66;
            v170 = 0;
            v171 = 2 * v45 + 1;
            v149 = v63[2] + v65;
            v163 = v50 - 1;
          }
          if ( v50 <= v164 )
          {
            v168 = 2 * v45;
            v167 = (signed int)v159 >> 1;
            v166 = v159 & 1;
            v67 = (unsigned int)*(_WORD *)(a4 + 2 * v45) >> 31;
            v160 = -v67;
            v169 = -v67 ^ (*(_WORD *)(a4 + 2 * v45) - v67);
            if ( v169 <= 2 )
            {
              if ( v50 <= 5 )
              {
                v180 = (unsigned int)*(_WORD *)(a4 + 2 * v45) >> 31;
                v174 = v50 + 22;
              }
              else
              {
                v68 = (v50 + 54) >> 6;
                v174 = v68 + 28;
                v180 = v50 + (v67 << (v68 + 2)) - 6 - 4 * v68;
              }
              v51 = (v160 ^ (*(_WORD *)(a6 + 2 * (unsigned __int8)byte_6FB8E900[v45]) - v67)) - *(_WORD *)(a5 + v168);
              v52 = v155 + *(_DWORD *)(a1 + 8 * (v174 + v158 + 6646) + 4) + (unsigned __int8)byte_6FB8E840[v174];
              v53 = &v184 + 4 * (v166 + 2 * v167);
              v54 = v52 * v132 + v53[1] + v156 - v161 + v51 * v51;
              if ( v138 >= v54 )
              {
                v138 = v54;
                v157 = v174;
                v149 = v53[2] + v52;
                v163 = v180;
                v170 = v160 ^ (1 - v67);
                LOBYTE(v171) = *((_BYTE *)&v188 + 32 * v45);
              }
            }
            if ( v50 <= v173 && (unsigned int)(v169 - 2) <= 2 )
            {
              v175 = v155
                   + *(_DWORD *)(a1 + 8 * ((v50 >> 1) + 30 + v158 + 6646) + 4)
                   + (unsigned __int8)byte_6FB8E840[(v50 >> 1) + 30];
              v182 = (signed int)(v160 ^ (v169 - v67)) > 2;
              v55 = (v160 ^ (*(_WORD *)(a6 + 2 * (unsigned __int8)byte_6FB8E900[v45]) - v67))
                  - (v182 + 2) * *(_WORD *)(a5 + v168);
              v56 = &v184 + 4 * (v166 + 2 * v167);
              v57 = v175 * v132 + v56[1] + v156 - v161 + v55 * v55;
              if ( v138 >= v57 )
              {
                v149 = v56[2] + v175;
                v138 = v57;
                v163 = (v182 << (v50 >> 1)) + (v67 << ((v50 >> 1) + 1)) + ((v50 - 1) >> 1);
                LOBYTE(v171) = *((_BYTE *)&v188 + 32 * v45);
                v157 = (v50 >> 1) + 30;
                v170 = v160 ^ (v182 + 2 - v67);
              }
            }
          }
          v58 = v153 >> v45;
          if ( v45 & 0x20 )
            v58 = SHIDWORD(v153) >> v45;
          if ( !(v58 & 1) )
          {
            v74 = v144;
            v79 = v171;
            v80 = v157;
            v78 = v163;
            v77 = v138;
            goto LABEL_90;
          }
        }
        v59 = 32 * v45;
        v60 = *((_BYTE *)&v184 + v59) >> 1;
        v61 = *(int *)((char *)&v187 + v59) != 0;
        v45 = (v60 - v61) & 0x3F;
        if ( !((v60 - v61) & 0x3F) )
          break;
        v50 = v45 - v144;
      }
      v74 = v144;
      v145 = v149;
      if ( v178 > 4094 )
      {
        v76 = *(_DWORD *)(a1 + (v177 << 8) + 53172);
        v149 = *(_DWORD *)(a1 + (v177 << 8) + 53172);
      }
      else
      {
        v75 = v178;
        if ( v178 + 1 > 3 )
        {
          v120 = sub_6F8095C0(v178 + 1);
          v75 = v120 - 3 + (v120 - 3 > 3 ? 6 - v120 : 0) + 3;
        }
        v76 = *(_DWORD *)(a1 + 8 * (v75 + 32 * v177 + 6646) + 4) + (unsigned __int8)byte_6FB8E840[v75] - v155;
        v149 = *(_DWORD *)(a1 + 8 * (v75 + 32 * v177 + 6646) + 4) + (unsigned __int8)byte_6FB8E840[v75] - v155;
      }
      v77 = v156 + v132 * v76;
      if ( v77 <= v138 )
      {
LABEL_89:
        v78 = 0;
        v80 = 0;
        v79 = 0;
        v170 = 0;
        v163 = 0;
        v157 = 0;
        LOBYTE(v171) = 0;
        goto LABEL_90;
      }
      if ( v157 <= 8 )
      {
        v78 = v163;
        if ( v74 + v163 != 63 )
        {
          v79 = v171;
          v80 = v157;
          v77 = v138;
          v149 = v145;
          goto LABEL_90;
        }
        goto LABEL_89;
      }
      v79 = v171;
      v80 = v157;
      v78 = v163;
      v77 = v138;
      v149 = v145;
LABEL_90:
      LODWORD(v82) = &v192[32 * v74];
      *((_BYTE *)&v184 + 32 * v74) = v79;
      *(_BYTE *)(v82 - 2047) = v80;
      *(_WORD *)(v82 - 2046) = v78;
      *(_DWORD *)(v82 - 2044) = v77;
      v139 = &v192[32 * v74];
      LODWORD(v82) = v82 - 2048;
      *(_DWORD *)(v82 + 12) = v170;
      v153 |= v179;
      *(_DWORD *)(v82 + 8) = v149;
      if ( v148 )
        break;
      v11 = v74;
      v12 = v181;
LABEL_8:
      if ( !v12 )
        goto LABEL_100;
    }
    v83 = 0;
    if ( v74 >= a9 )
      v83 = v132;
    v134 = *(_WORD *)(a5 + v172) - v165;
    v146 = *(_DWORD *)(a1 + 8 * (v151 + 9 + 32 * v177 + 6646) + 4) + (unsigned __int8)byte_6FB8E849[v151] + v155;
    v84 = ((_BYTE)v74 + 1) & 0x3F;
    v85 = v141 >> v84;
    if ( ((_BYTE)v74 + 1) & 0x20 )
      v85 = SHIDWORD(v141) >> v84;
    v86 = (v85 & 1) + 2 * v84;
    *(v139 - 2031) = v151 + 9;
    *((_BYTE *)&v188 + 32 * v74) = v86;
    v87 = &v184 + 4 * v86;
    *((_WORD *)v139 - 1015) = 0;
    v88 = v87[1] + v134 * v134;
    *((_DWORD *)v139 - 506) = v146 + v87[2];
    HIDWORD(v82) = v146 * v83 + v88;
    *((_DWORD *)v139 - 507) = HIDWORD(v82);
    *((_DWORD *)v139 - 505) = v162 ^ (1 - v151);
    v129 |= v179;
    LOBYTE(v82) = HIDWORD(v82) < *(_DWORD *)(v82 + 4);
    HIDWORD(v82) = (unsigned __int64)(unsigned __int8)v82 << v74 >> 32;
    v89 = (unsigned __int8)v82 << v74;
    if ( v74 & 0x20 )
      HIDWORD(v82) = (unsigned __int8)v82 << v74;
    if ( v74 & 0x20 )
      v89 = 0;
    LODWORD(v82) = v89;
    v141 |= v82;
    v11 = v74;
    v12 = v181;
  }
  while ( v181 );
LABEL_100:
  v135 = (v141 >> 1) & 1;
LABEL_101:
  v130 = *a8;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 124) = 0;
  memset((void *)((a4 + 4) & 0xFFFFFFFC), 0, 4 * ((a4 - ((a4 + 4) & 0xFFFFFFFC) + 128) >> 2));
  v90 = 1;
  v150 = *(_DWORD *)(a1 + 100);
  v154 = *(&v186 + 4 * (v135 + 2));
  v91 = a1 + 4 * a2;
  while ( 1 )
  {
    v130 += 8;
    *(_BYTE *)(v130 - 8) = a2;
    v95 = v90 + (a2 << 6);
    *(_BYTE *)(v130 - 7) = v90;
    v96 = a1 + 4 * v95;
    *(_WORD *)(v130 - 6) = *(_WORD *)(a1 + 2 * v95 + 52552);
    *(_DWORD *)(v130 - 4) = *(_DWORD *)(v96 + 51784);
    v147 = (_WORD *)(a1 + (a2 << 7) + 52552 + 2 * v90);
    v97 = *v147;
    v140 = *((_BYTE *)&v184 + 16 * (v135 + 2 * v90) + 1);
    if ( *((_BYTE *)&v184 + 16 * (v135 + 2 * v90) + 1) <= 6 )
      break;
    if ( *v147 )
    {
      if ( v97 > 3 )
      {
        v103 = sub_6F8095C0(v97);
        v104 = v103 - 3 < 3;
        LOBYTE(v104) = v103 - 3 > 3;
        v105 = v103 - 3 + (-v104 & (6 - v103));
        v152 = v105 + 3;
        v98 = v97 - (char)(1050628 >> 8 * v105);
      }
      else
      {
        v152 = v97 - 1;
        v98 = 0;
      }
      v99 = *(_DWORD *)(v96 + 51784);
      v142 = 4 * v90;
      *(_DWORD *)(v96 + 51784) = v99 + 1;
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v91 + 51760) + 4 * v90) + v99) = v152;
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v91 + 51772) + 4 * v90) + 2 * v99) = v98;
      *v147 = 0;
    }
    else
    {
      v142 = 4 * v90;
    }
    v92 = *(_DWORD *)(v96 + 51784);
    v93 = 16 * (v135 + 2 * v90);
    v94 = (char *)&v184 + v93;
    *(_DWORD *)(v96 + 51784) = v92 + 1;
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v91 + 51760) + v142) + v92) = v140;
    LOBYTE(v93) = *((_BYTE *)&v184 + v93);
    v90 = (signed int)(unsigned __int8)v93 >> 1;
    *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v91 + 51772) + v142) + 2 * v92) = *((_WORD *)v94 + 1);
    v135 = v93 & 1;
    *(_WORD *)(a4 + 2 * *(_BYTE *)(v150 + (((_BYTE)v90 - 1) & 0x3F))) = *((_WORD *)v94 + 6)
                                                                      * *(_WORD *)(a5 + 2 * (((_BYTE)v90 - 1) & 0x3F));
    if ( !v90 )
      goto LABEL_119;
  }
  v106 = v97 + 1;
  v107 = v90;
  v108 = v90 + (a2 << 6);
  if ( v106 > 4094 )
  {
    v109 = sub_6F8095C0(v106);
    v110 = *(_DWORD *)(a1 + 4 * (v90 + (a2 << 6)) + 51784);
    v111 = (v109 - 3 > 3 ? (unsigned __int8)(6 - v109) : 0) + v109 - 3;
    *(_DWORD *)(a1 + 4 * v108 + 51784) = v110 + 1;
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 4 * a2 + 51760) + 4 * v107) + v110) = v111 + 3;
    *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4 * a2 + 51772) + 4 * v107) + 2 * v110) = v106 - (char)(1050628 >> 8 * v111);
    LOWORD(v106) = 0;
  }
  *v147 = v106;
  v154 -= *(&v186 + 4 * (v135 + 2 * v107));
LABEL_119:
  result = v154;
  *a8 = v130;
  return result;
}
