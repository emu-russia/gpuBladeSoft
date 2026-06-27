signed int __cdecl sub_6F7BA040(int a1, _DWORD *a2)
{
  signed int v2; // edx@1
  int v3; // ebx@1
  int v4; // edx@2
  int v5; // esi@2
  unsigned int v6; // edi@2
  int *v7; // eax@3
  int *v8; // eax@4
  int *v9; // eax@5
  int *v10; // eax@6
  _DWORD *v11; // eax@7
  _DWORD *v12; // ebp@7
  int v13; // ecx@9
  int v14; // esi@9
  const char *v15; // edi@9
  int v16; // eax@9
  signed int v17; // ecx@9
  unsigned __int8 v18; // cf@9
  bool v19; // zf@9
  _BYTE *v20; // esi@9
  signed int v21; // ecx@9
  bool v22; // si@12
  bool v23; // zf@12
  int v24; // ecx@15
  int v25; // esi@15
  const char *v26; // edi@15
  int v27; // eax@15
  signed int v28; // ecx@15
  unsigned __int8 v29; // cf@15
  bool v30; // zf@15
  _BYTE *v31; // esi@15
  signed int v32; // ecx@15
  bool v33; // si@18
  bool v34; // zf@18
  int v35; // ecx@21
  int v36; // esi@21
  const char *v37; // edi@21
  int v38; // eax@21
  signed int v39; // ecx@21
  unsigned __int8 v40; // cf@21
  bool v41; // zf@21
  _BYTE *v42; // esi@21
  signed int v43; // ecx@21
  bool v44; // si@24
  bool v45; // zf@24
  int v46; // esi@27
  int v47; // ecx@27
  const char *v48; // edi@27
  int v49; // eax@27
  signed int v50; // ecx@27
  unsigned __int8 v51; // cf@27
  bool v52; // zf@27
  _BYTE *v53; // esi@27
  signed int v54; // ecx@27
  bool v55; // si@30
  bool v56; // zf@30
  int v57; // ecx@32
  _BYTE *v59; // esi@35
  const char *v60; // edi@35
  signed int v61; // ecx@35
  _BYTE *v62; // esi@39
  const char *v63; // edi@39
  signed int v64; // ecx@39
  _BYTE *v65; // esi@44
  const char *v66; // edi@44
  signed int v67; // ecx@44
  _BYTE *v68; // esi@48
  const char *v69; // edi@48
  signed int v70; // ecx@48
  _BYTE *v71; // esi@53
  const char *v72; // edi@53
  signed int v73; // ecx@53
  _BYTE *v74; // esi@57
  const char *v75; // edi@57
  signed int v76; // ecx@57
  _BYTE *v77; // esi@62
  const char *v78; // edi@62
  signed int v79; // ecx@62
  _BYTE *v80; // esi@66
  const char *v81; // edi@66
  signed int v82; // ecx@66
  int v83; // eax@75
  int v84; // esi@78
  int v85; // edi@78
  int v86; // ecx@78
  int v87; // esi@78
  int v88; // ecx@78
  int v89; // esi@78
  int v90; // ecx@78
  int v91; // esi@78
  int v92; // edx@80
  int v93; // edi@80
  int v94; // ecx@81
  int *v95; // eax@81
  int v96; // ebx@81
  signed int v97; // esi@82
  int v98; // edx@83
  signed int v99; // eax@84
  unsigned int v100; // edx@87
  int v101; // esi@91
  int v102; // eax@92
  int v103; // ebp@92
  int v104; // eax@92
  int v105; // ecx@95
  int v106; // esi@95
  int v107; // ecx@95
  int v108; // ecx@96
  int v109; // edi@96
  int v110; // esi@96
  int v111; // ecx@96
  int v112; // esi@96
  int v113; // ecx@96
  unsigned int v114; // [sp+1Ch] [bp-80h]@2
  int v115; // [sp+20h] [bp-7Ch]@80
  int v116; // [sp+24h] [bp-78h]@8
  int v117; // [sp+24h] [bp-78h]@81
  _DWORD *v118; // [sp+28h] [bp-74h]@80
  int v119; // [sp+2Ch] [bp-70h]@91
  int v120; // [sp+34h] [bp-68h]@7
  int v121; // [sp+38h] [bp-64h]@78
  int v122; // [sp+3Ch] [bp-60h]@78
  int v123; // [sp+40h] [bp-5Ch]@78
  int v124; // [sp+44h] [bp-58h]@78
  int v125; // [sp+48h] [bp-54h]@2
  int v126; // [sp+4Ch] [bp-50h]@2
  int v127; // [sp+50h] [bp-4Ch]@3
  int v128; // [sp+54h] [bp-48h]@3
  int v129; // [sp+58h] [bp-44h]@3
  int v130; // [sp+5Ch] [bp-40h]@4
  int v131; // [sp+60h] [bp-3Ch]@4
  int v132; // [sp+64h] [bp-38h]@4
  int v133; // [sp+68h] [bp-34h]@5
  int v134; // [sp+6Ch] [bp-30h]@5
  int v135; // [sp+70h] [bp-2Ch]@5
  int v136; // [sp+74h] [bp-28h]@6
  int v137; // [sp+78h] [bp-24h]@6
  int v138; // [sp+7Ch] [bp-20h]@6

  v2 = 6;
  v3 = *(_DWORD *)(a1 + 528);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 100);
    v5 = *(_DWORD *)v3;
    v6 = *(_DWORD *)(v3 + 4);
    v114 = *(_DWORD *)(v3 + 4);
    v125 = *(_DWORD *)(v3 + 4);
    v126 = v5;
    if ( v125 )
    {
      v127 = *(_DWORD *)(v3 + 8);
      v7 = *(int **)(v3 + 92);
      v128 = *v7;
      v129 = v7[*(_BYTE *)(v3 + 88) - 1];
      if ( v6 > 1 )
      {
        v130 = *(_DWORD *)(v3 + 12);
        v8 = *(int **)(v3 + 104);
        v131 = *v8;
        v132 = v8[*(_BYTE *)(v3 + 100) - 1];
        if ( v6 != 2 )
        {
          v133 = *(_DWORD *)(v3 + 16);
          v9 = *(int **)(v3 + 116);
          v134 = *v9;
          v135 = v9[*(_BYTE *)(v3 + 112) - 1];
          if ( v6 != 3 )
          {
            v136 = *(_DWORD *)(v3 + 20);
            v10 = *(int **)(v3 + 128);
            v137 = *v10;
            v138 = v10[*(_BYTE *)(v3 + 124) - 1];
          }
        }
      }
    }
    v120 = 0;
    v11 = sub_6F773A50(v4, 24 * v114 + 20, &v120);
    v2 = v120;
    v12 = v11;
    if ( !v120 )
    {
      v11[1] = v5;
      v11[2] = -1;
      v11[4] = 0;
      v116 = (int)(v11 + 5);
      v11[3] = v11 + 5;
      *v11 = v114;
      if ( v114 )
      {
        v13 = v128;
        v14 = v129;
        v15 = "Weight";
        v16 = v127;
        v12[10] = -1;
        v12[9] = -1;
        v14 <<= 16;
        v13 <<= 16;
        v12[6] = v13;
        v17 = v14 + v13;
        v12[5] = v16;
        v18 = v17 & 1;
        v17 >>= 1;
        v19 = v17 == 0;
        v12[8] = v14;
        v20 = (_BYTE *)v16;
        v12[7] = v17;
        v21 = 7;
        do
        {
          if ( !v21 )
            break;
          v18 = *v20 < (const unsigned __int8)*v15;
          v19 = *v20++ == *v15++;
          --v21;
        }
        while ( v19 );
        v22 = !(v18 | v19);
        v23 = v22 == v18;
        if ( v22 == v18 )
        {
          v12[9] = 2003265652;
        }
        else
        {
          v59 = (_BYTE *)v16;
          v60 = "Width";
          v61 = 6;
          do
          {
            if ( !v61 )
              break;
            v23 = *v59++ == *v60++;
            --v61;
          }
          while ( v23 );
          if ( v23 )
          {
            v12[9] = 2003072104;
          }
          else
          {
            v62 = (_BYTE *)v16;
            v63 = "OpticalSize";
            v64 = 12;
            do
            {
              if ( !v64 )
                break;
              v23 = *v62++ == *v63++;
              --v64;
            }
            while ( v23 );
            if ( v23 )
              v12[9] = &loc_6F70737A;
          }
        }
        if ( v114 > 1 )
        {
          v24 = v131;
          v25 = v132;
          v26 = "Weight";
          v27 = v130;
          v12[16] = -1;
          v12[15] = -1;
          v25 <<= 16;
          v24 <<= 16;
          v12[12] = v24;
          v28 = v25 + v24;
          v12[11] = v27;
          v29 = v28 & 1;
          v28 >>= 1;
          v30 = v28 == 0;
          v12[14] = v25;
          v31 = (_BYTE *)v27;
          v12[13] = v28;
          v32 = 7;
          do
          {
            if ( !v32 )
              break;
            v29 = *v31 < (const unsigned __int8)*v26;
            v30 = *v31++ == *v26++;
            --v32;
          }
          while ( v30 );
          v33 = !(v29 | v30);
          v34 = v33 == v29;
          if ( v33 == v29 )
          {
            v12[15] = 2003265652;
          }
          else
          {
            v77 = (_BYTE *)v27;
            v78 = "Width";
            v79 = 6;
            do
            {
              if ( !v79 )
                break;
              v34 = *v77++ == *v78++;
              --v79;
            }
            while ( v34 );
            if ( v34 )
            {
              v12[15] = 2003072104;
            }
            else
            {
              v80 = (_BYTE *)v27;
              v81 = "OpticalSize";
              v82 = 12;
              do
              {
                if ( !v82 )
                  break;
                v34 = *v80++ == *v81++;
                --v82;
              }
              while ( v34 );
              if ( v34 )
                v12[15] = &loc_6F70737A;
            }
          }
          if ( v114 != 2 )
          {
            v35 = v134;
            v36 = v135;
            v37 = "Weight";
            v38 = v133;
            v12[22] = -1;
            v12[21] = -1;
            v36 <<= 16;
            v35 <<= 16;
            v12[18] = v35;
            v39 = v36 + v35;
            v12[17] = v38;
            v40 = v39 & 1;
            v39 >>= 1;
            v41 = v39 == 0;
            v12[20] = v36;
            v42 = (_BYTE *)v38;
            v12[19] = v39;
            v43 = 7;
            do
            {
              if ( !v43 )
                break;
              v40 = *v42 < (const unsigned __int8)*v37;
              v41 = *v42++ == *v37++;
              --v43;
            }
            while ( v41 );
            v44 = !(v40 | v41);
            v45 = v44 == v40;
            if ( v44 == v40 )
            {
              v12[21] = 2003265652;
            }
            else
            {
              v71 = (_BYTE *)v38;
              v72 = "Width";
              v73 = 6;
              do
              {
                if ( !v73 )
                  break;
                v45 = *v71++ == *v72++;
                --v73;
              }
              while ( v45 );
              if ( v45 )
              {
                v12[21] = 2003072104;
              }
              else
              {
                v74 = (_BYTE *)v38;
                v75 = "OpticalSize";
                v76 = 12;
                do
                {
                  if ( !v76 )
                    break;
                  v45 = *v74++ == *v75++;
                  --v76;
                }
                while ( v45 );
                if ( v45 )
                  v12[21] = &loc_6F70737A;
              }
            }
            if ( v114 != 3 )
            {
              v46 = v137;
              v47 = v138;
              v48 = "Weight";
              v49 = v136;
              v12[28] = -1;
              v12[27] = -1;
              v46 <<= 16;
              v47 <<= 16;
              v12[26] = v47;
              v50 = v46 + v47;
              v12[23] = v49;
              v51 = v50 & 1;
              v50 >>= 1;
              v52 = v50 == 0;
              v12[24] = v46;
              v53 = (_BYTE *)v49;
              v12[25] = v50;
              v54 = 7;
              do
              {
                if ( !v54 )
                  break;
                v51 = *v53 < (const unsigned __int8)*v48;
                v52 = *v53++ == *v48++;
                --v54;
              }
              while ( v52 );
              v55 = !(v51 | v52);
              v56 = v55 == v51;
              if ( v55 == v51 )
              {
                v12[27] = 2003265652;
              }
              else
              {
                v65 = (_BYTE *)v49;
                v66 = "Width";
                v67 = 6;
                do
                {
                  if ( !v67 )
                    break;
                  v56 = *v65++ == *v66++;
                  --v67;
                }
                while ( v56 );
                if ( v56 )
                {
                  v12[27] = 2003072104;
                }
                else
                {
                  v68 = (_BYTE *)v49;
                  v69 = "OpticalSize";
                  v70 = 12;
                  do
                  {
                    if ( !v70 )
                      break;
                    v56 = *v68++ == *v69++;
                    --v70;
                  }
                  while ( v56 );
                  if ( v56 )
                    v12[27] = &loc_6F70737A;
                }
              }
            }
          }
        }
      }
      v57 = *(_DWORD *)(v3 + 4);
      if ( *(_DWORD *)v3 == 1 << v57 )
      {
        v83 = *(_DWORD *)(v3 + 140);
        switch ( v57 )
        {
          case 1:
            v121 = *(_DWORD *)(v83 + 4);
            break;
          case 2:
            v105 = *(_DWORD *)(v83 + 12);
            v106 = v105 + *(_DWORD *)(v83 + 4);
            v107 = *(_DWORD *)(v83 + 8) + v105;
            v121 = v106;
            v122 = v107;
            break;
          case 3:
            v108 = *(_DWORD *)(v83 + 28);
            v109 = *(_DWORD *)(v83 + 20);
            v110 = *(_DWORD *)(v83 + 12) + v108 + v109;
            v111 = *(_DWORD *)(v83 + 24) + v108;
            v121 = *(_DWORD *)(v83 + 4) + v110;
            v112 = v111 + *(_DWORD *)(v83 + 12);
            v113 = *(_DWORD *)(v83 + 16) + v109 + v111;
            v122 = *(_DWORD *)(v83 + 8) + v112;
            v123 = v113;
            break;
          default:
            v84 = *(_DWORD *)(v83 + 60);
            v85 = *(_DWORD *)(v83 + 44);
            v86 = v84 + *(_DWORD *)(v83 + 52);
            v87 = *(_DWORD *)(v83 + 56) + v84;
            v121 = *(_DWORD *)(v83 + 4)
                 + *(_DWORD *)(v83 + 12)
                 + *(_DWORD *)(v83 + 20)
                 + *(_DWORD *)(v83 + 28)
                 + *(_DWORD *)(v83 + 36)
                 + v85
                 + v86;
            v88 = *(_DWORD *)(v83 + 28) + *(_DWORD *)(v83 + 40) + v85 + v87;
            v89 = *(_DWORD *)(v83 + 48) + *(_DWORD *)(v83 + 52) + v87;
            v122 = *(_DWORD *)(v83 + 8) + *(_DWORD *)(v83 + 12) + *(_DWORD *)(v83 + 24) + v88;
            v90 = *(_DWORD *)(v83 + 24) + v89 + *(_DWORD *)(v83 + 28);
            v91 = *(_DWORD *)(v83 + 36) + *(_DWORD *)(v83 + 40) + v85 + v89;
            v123 = *(_DWORD *)(v83 + 16) + *(_DWORD *)(v83 + 20) + v90;
            v124 = v91 + *(_DWORD *)(v83 + 32);
            break;
        }
        if ( v114 )
        {
          v92 = v116;
          v93 = 0;
          v118 = v12;
          v115 = v3 + 92;
          while ( 1 )
          {
            v94 = *(&v121 + v93);
            v117 = v92 + 24 * v93;
            v95 = (int *)v115;
            v96 = *(_DWORD *)(v115 + 4);
            if ( v94 <= *(_DWORD *)v96 )
            {
              v100 = **(_DWORD **)v115 << 16;
            }
            else
            {
              v97 = *(_BYTE *)(v115 - 4);
              if ( v97 <= 1 )
                goto LABEL_87;
              v98 = *(_DWORD *)(v96 + 4);
              if ( v94 > v98 )
              {
                v99 = 1;
                while ( v97 != ++v99 )
                {
                  v98 = *(_DWORD *)(v96 + 4 * v99);
                  if ( v94 <= v98 )
                  {
                    v101 = 4 * v99;
                    v119 = 4 * v99 - 4;
                    v95 = (int *)v115;
                    goto LABEL_92;
                  }
                }
LABEL_87:
                v100 = *(_DWORD *)(*(_DWORD *)v115 + 4 * v97 - 4) << 16;
                goto LABEL_88;
              }
              v119 = 0;
              v101 = 4;
LABEL_92:
              v102 = *v95;
              v103 = *(_DWORD *)(v102 + v119);
              v104 = *(_DWORD *)(v102 + v101) - v103;
              v100 = v104 * sub_6F7C9760(v94 - *(_DWORD *)(v96 + v119), v98 - *(_DWORD *)(v96 + v119)) + (v103 << 16);
            }
LABEL_88:
            ++v93;
            v115 += 12;
            *(_DWORD *)(v117 + 8) = v100;
            if ( v93 == v114 )
            {
              v12 = v118;
              v2 = v120;
              break;
            }
            v92 = v118[3];
          }
        }
      }
      *a2 = v12;
    }
  }
  return v2;
}
