int __usercall sub_6F828EC0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // esi@1
  int v4; // ebx@1
  int v5; // eax@1
  int v6; // edi@1
  int v7; // ebx@1
  int v8; // ebp@1
  int v9; // esi@1
  int v10; // edx@1
  int v11; // esi@1
  int v12; // eax@1
  int v13; // esi@1
  int v14; // eax@1
  int v15; // ebx@2
  unsigned int v16; // eax@2
  int v17; // ebp@2
  int v18; // esi@2
  unsigned int v19; // ebx@3
  unsigned int v20; // ebx@5
  unsigned int v21; // esi@6
  int v22; // esi@7
  signed int v23; // ebp@8
  char *v24; // ebx@8
  int v25; // edx@10
  int v26; // edx@10
  signed int v27; // eax@10
  int v28; // ecx@10
  int v29; // ST50_4@11
  int v30; // esi@11
  int v31; // edx@11
  int v32; // esi@11
  int v33; // eax@11
  int v34; // esi@11
  int v35; // edx@11
  unsigned int v36; // eax@11
  int v37; // esi@14
  int *v38; // ebx@15
  int v39; // ebp@17
  signed int v40; // eax@17
  int v41; // ecx@17
  int v42; // ST50_4@18
  int v43; // esi@18
  int v44; // edx@18
  int v45; // esi@18
  int v46; // eax@18
  int v47; // esi@18
  int v48; // edx@18
  unsigned int v49; // eax@18
  int v50; // ebp@21
  int v51; // eax@23
  int v52; // esi@23
  int v53; // eax@23
  int v54; // esi@23
  int v55; // eax@23
  int v56; // esi@23
  int v57; // ecx@23
  int result; // eax@23
  signed int v59; // esi@24
  int v60; // edi@25
  int v61; // ecx@25
  int v62; // edi@26
  int v63; // edi@26
  int v64; // ebp@26
  int v65; // ebx@26
  int v66; // eax@26
  signed int v67; // edx@26
  int v68; // esi@26
  signed int v69; // edi@27
  signed int v70; // ebp@29
  int v71; // ebx@29
  int v72; // eax@29
  signed int v73; // edx@29
  int v74; // esi@29
  signed int v75; // esi@31
  int v76; // ebx@31
  int v77; // eax@31
  signed int v78; // edx@31
  int v79; // ebp@31
  signed int v80; // esi@32
  int v81; // ebx@32
  int v82; // eax@32
  signed int v83; // edx@32
  int v84; // ebp@32
  int v85; // ebx@33
  int v86; // ebp@33
  int v87; // edx@33
  int v88; // ebp@33
  int v89; // eax@33
  int v90; // ebp@33
  int v91; // eax@33
  unsigned int v92; // eax@33
  int v93; // ebx@37
  int v94; // ebp@37
  int v95; // edx@37
  int v96; // ebp@37
  int v97; // eax@37
  int v98; // ebp@37
  int v99; // eax@37
  unsigned int v100; // eax@37
  int v101; // esi@39
  int v102; // ebx@39
  int v103; // ecx@39
  int v104; // ebx@39
  int v105; // eax@39
  int v106; // ebx@39
  int v107; // eax@39
  unsigned int v108; // ebx@39
  int v109; // esi@41
  int v110; // ebx@41
  int v111; // ecx@41
  int v112; // ebx@41
  int v113; // eax@41
  int v114; // ebx@41
  int v115; // eax@41
  unsigned int v116; // ebx@41
  int v117; // [sp+2Ch] [bp-150h]@1
  int v118; // [sp+30h] [bp-14Ch]@1
  int v119; // [sp+34h] [bp-148h]@1
  int v120; // [sp+38h] [bp-144h]@1
  int v121; // [sp+3Ch] [bp-140h]@1
  signed int v122; // [sp+40h] [bp-13Ch]@1
  int v123; // [sp+44h] [bp-138h]@1
  signed int v124; // [sp+44h] [bp-138h]@10
  int v125; // [sp+44h] [bp-138h]@15
  int v126; // [sp+44h] [bp-138h]@24
  int v127; // [sp+48h] [bp-134h]@1
  int v128; // [sp+48h] [bp-134h]@10
  int v129; // [sp+48h] [bp-134h]@17
  int v130; // [sp+48h] [bp-134h]@24
  unsigned int v131; // [sp+4Ch] [bp-130h]@1
  int v132; // [sp+50h] [bp-12Ch]@26
  int v133; // [sp+54h] [bp-128h]@1
  int v134; // [sp+54h] [bp-128h]@25
  unsigned int v135; // [sp+58h] [bp-124h]@7
  signed int v136; // [sp+58h] [bp-124h]@26
  int v137; // [sp+5Ch] [bp-120h]@2
  int v138; // [sp+74h] [bp-108h]@1
  int v139; // [sp+78h] [bp-104h]@1
  char v140; // [sp+7Ch] [bp-100h]@8
  int v141; // [sp+DCh] [bp-A0h]@7
  int v142; // [sp+E0h] [bp-9Ch]@14
  int v143[15]; // [sp+E4h] [bp-98h]@1
  int v144[23]; // [sp+120h] [bp-5Ch]@1

  v3 = a1;
  v4 = a3;
  v121 = a1;
  v123 = *(_DWORD *)(a1 + 51572);
  sub_6F8289C0(v123, (int)&v138, a2, a3, 0);
  memset(v143, 0, 0x7Cu);
  v122 = v138;
  v4 *= 3;
  v127 = v4;
  v5 = *(_DWORD *)(v3 + 272);
  v133 = v139;
  v144[v139] = 1 << (v138 + 15);
  v118 = *(_DWORD *)(v3 + 492);
  v119 = *(_DWORD *)(v3 + 208);
  v6 = 16 * v4 + *(_DWORD *)(v3 + 232);
  v117 = *(_DWORD *)(v3 + 496);
  v120 = *(_DWORD *)(v3 + 4 * v5 + 480);
  v7 = v122 + *(_DWORD *)(v3 + 496) * v133;
  v8 = v3;
  v9 = sub_6F8274A0(
         v3,
         v118 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v6),
         v120 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v6) + v7,
         *(_DWORD *)(v3 + 496));
  v10 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 4));
  v11 = sub_6F8274A0(v8, v118 + v10, v120 + v10 + v7, v117) + v9;
  v12 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 8));
  v13 = sub_6F8274A0(v8, v118 + v12, v120 + v12 + v7, v117) + v11;
  v14 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 12));
  v131 = v13 + sub_6F8274A0(v8, v118 + v14, v120 + v14 + v7, v117);
  if ( v131 <= 0x100 )
  {
    v50 = v123 + 32 * v127;
  }
  else
  {
    v15 = v123 + 32 * v127;
    v137 = v123 + 32 * v127;
    v16 = *(_WORD *)(v15 + 68);
    v17 = v123 + 32 * v127;
    v18 = *(_BYTE *)(v15 + 32) <= 2u ? *(_BYTE *)(v15 + 32) - 3 + 3 : 3;
    if ( v18 > 0 )
    {
      v19 = *(_WORD *)(v123 + 96 * *(_DWORD *)v15 + 68);
      v16 -= v19 > v16 ? v16 - v19 : 0;
      if ( v18 != 1 )
      {
        v16 -= ((v16 - (unsigned __int64)*(_WORD *)(v123 + 96 * *(_DWORD *)(v17 + 4) + 68)) >> 32) & (v16 - *(_WORD *)(v123 + 96 * *(_DWORD *)(v17 + 4) + 68));
        if ( v18 != 2 )
        {
          v20 = *(_WORD *)(v123 + 96 * *(_DWORD *)(v17 + 8) + 68);
          v16 -= v20 > v16 ? v16 - v20 : 0;
          if ( v18 != 3 )
          {
            v21 = *(_WORD *)(v123 + 96 * *(_DWORD *)(v17 + 12) + 68);
            v16 -= v21 > v16 ? v16 - v21 : 0;
          }
        }
      }
    }
    v22 = v141;
    v135 = v16 + (v16 >> 4) + 64;
    if ( v141 <= 1 )
    {
      v23 = 1;
    }
    else
    {
      v23 = 1;
      v24 = &v140;
      do
      {
        while ( 1 )
        {
          v25 = *((_DWORD *)v24 + 1);
          v128 = v25;
          v26 = v25 + 15;
          v124 = *(_DWORD *)v24;
          v27 = 1 << (*(_DWORD *)v24 + 15);
          v28 = v143[v26];
          if ( !(v27 & v28) )
          {
            v143[v26] = v28 | v27;
            v29 = v124 + v117 * v128;
            v30 = sub_6F8274A0(
                    v121,
                    v118 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v6),
                    v120 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v6) + v29,
                    v117);
            v31 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 4));
            v32 = sub_6F8274A0(v121, v118 + v31, v120 + v31 + v29, v117) + v30;
            v33 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 8));
            v34 = sub_6F8274A0(v121, v118 + v33, v120 + v33 + v29, v117) + v32;
            v35 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 12));
            v36 = v34 + sub_6F8274A0(v121, v118 + v35, v120 + v35 + v29, v117);
            v22 = v141;
            if ( v131 > v36 )
              break;
          }
          ++v23;
          v24 += 8;
          if ( v23 >= v22 )
            goto LABEL_13;
        }
        ++v23;
        v24 += 8;
        v131 = v36;
        v133 = v128;
        v122 = v124;
      }
      while ( v23 < v141 );
    }
    if ( v135 >= v131 )
      goto LABEL_48;
LABEL_13:
    v37 = v142;
    if ( v23 >= v142 )
      goto LABEL_49;
    v125 = v23;
    v38 = &v138 + 2 * v23;
    do
    {
      while ( 1 )
      {
        v39 = v38[1];
        v129 = *v38;
        v40 = 1 << (*v38 + 15);
        v41 = v143[v39 + 15];
        if ( !(v40 & v41) )
        {
          v143[v39 + 15] = v41 | v40;
          v42 = v129 + v39 * v117;
          v43 = sub_6F8274A0(
                  v121,
                  v118 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v6),
                  v120 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v6) + v42,
                  v117);
          v44 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 4));
          v45 = sub_6F8274A0(v121, v118 + v44, v120 + v44 + v42, v117) + v43;
          v46 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 8));
          v47 = sub_6F8274A0(v121, v118 + v46, v120 + v46 + v42, v117) + v45;
          v48 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 12));
          v49 = v47 + sub_6F8274A0(v121, v118 + v48, v120 + v48 + v42, v117);
          v37 = v142;
          if ( v131 > v49 )
            break;
        }
        ++v125;
        v38 += 2;
        if ( v125 >= v37 )
          goto LABEL_20;
      }
      ++v125;
      v133 = v39;
      v38 += 2;
      v131 = v49;
      v122 = v129;
    }
    while ( v125 < v142 );
LABEL_20:
    if ( v135 < v131 )
    {
LABEL_49:
      v130 = v6;
      v126 = v133;
      v59 = v133;
      while ( 1 )
      {
        v60 = 4 * ((1 - v59) / 16) | 8 * ((v59 + (v59 < -1 ? 0xF : 0) + 1) >> 4) | (1 - v122) / 16 | 2 * ((v122 + (v122 < -1 ? 0xF : 0) + 1) >> 4);
        v61 = dword_6FB97DE0[v60];
        v134 = dword_6FB97DE0[v60];
        if ( v61 <= 0 )
        {
          v6 = v130;
          v50 = v137;
          LOBYTE(v133) = v126;
          v7 = v122 + v126 * v117;
          goto LABEL_23;
        }
        v62 = 8 * v60;
        v132 = v62 * 4;
        v63 = dword_6FB97C80[v62];
        v136 = 4;
        v64 = ((_BYTE)v61 - 1) & 1;
        v65 = dword_6FB97E60[v63] + v122;
        v66 = dword_6FB97E20[v63] + v126;
        v67 = 1 << (v65 + 15);
        v68 = v143[v66 + 15];
        if ( !(v67 & v68) )
        {
          v143[v66 + 15] = v68 | v67;
          v101 = v65 + v117 * v66;
          v102 = sub_6F8274A0(
                   v121,
                   v118 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130),
                   v120 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130) + v101,
                   v117);
          v103 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 4));
          v104 = sub_6F8274A0(v121, v118 + v103, v120 + v103 + v101, v117) + v102;
          v105 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 8));
          v106 = sub_6F8274A0(v121, v118 + v105, v120 + v105 + v101, v117) + v104;
          v107 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 12));
          v108 = sub_6F8274A0(v121, v118 + v107, v120 + v107 + v101, v117) + v106;
          if ( v131 > v108 )
          {
            v136 = v63;
            v131 = v108;
          }
        }
        v69 = 1;
        if ( 1 != v134 )
        {
          if ( v64 )
          {
            v70 = *(int *)((char *)&dword_6FB97C84 + v132);
            v71 = dword_6FB97E60[v70] + v122;
            v72 = dword_6FB97E20[v70] + v126;
            v73 = 1 << (v71 + 15);
            v74 = v143[v72 + 15];
            if ( !(v73 & v74) )
            {
              v143[v72 + 15] = v74 | v73;
              v109 = v71 + v117 * v72;
              v110 = sub_6F8274A0(
                       v121,
                       v118 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130),
                       v120 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130) + v109,
                       v117);
              v111 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 4));
              v112 = sub_6F8274A0(v121, v118 + v111, v120 + v111 + v109, v117) + v110;
              v113 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 8));
              v114 = sub_6F8274A0(v121, v118 + v113, v120 + v113 + v109, v117) + v112;
              v115 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 12));
              v116 = sub_6F8274A0(v121, v118 + v115, v120 + v115 + v109, v117) + v114;
              if ( v131 > v116 )
              {
                v136 = v70;
                v131 = v116;
              }
            }
          }
          else
          {
            while ( 1 )
            {
LABEL_31:
              v75 = *(int *)((char *)&dword_6FB97C80[v69] + v132);
              v76 = dword_6FB97E60[v75] + v122;
              v77 = dword_6FB97E20[v75] + v126;
              v78 = 1 << (v76 + 15);
              v79 = v143[v77 + 15];
              if ( !(v78 & v79) )
              {
                v143[v77 + 15] = v79 | v78;
                v93 = v117 * v77 + v76;
                v94 = sub_6F8274A0(
                        v121,
                        v118 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130),
                        v120 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130) + v93,
                        v117);
                v95 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 4));
                v96 = sub_6F8274A0(v121, v118 + v95, v120 + v95 + v93, v117) + v94;
                v97 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 8));
                v98 = sub_6F8274A0(v121, v118 + v97, v120 + v97 + v93, v117) + v96;
                v99 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 12));
                v100 = v98 + sub_6F8274A0(v121, v118 + v99, v120 + v99 + v93, v117);
                if ( v131 > v100 )
                {
                  v136 = v75;
                  v131 = v100;
                }
              }
              v80 = *(int *)((char *)&dword_6FB97C80[++v69] + v132);
              v81 = dword_6FB97E60[v80] + v122;
              v82 = dword_6FB97E20[v80] + v126;
              v83 = 1 << (v81 + 15);
              v84 = v143[v82 + 15];
              if ( v83 & v84 )
                break;
              v143[v82 + 15] = v84 | v83;
              v85 = v117 * v82 + v81;
              v86 = sub_6F8274A0(
                      v121,
                      v118 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130),
                      v120 + *(_DWORD *)(v119 + 4 * *(_DWORD *)v130) + v85,
                      v117);
              v87 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 4));
              v88 = sub_6F8274A0(v121, v118 + v87, v120 + v87 + v85, v117) + v86;
              v89 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 8));
              v90 = sub_6F8274A0(v121, v118 + v89, v120 + v89 + v85, v117) + v88;
              v91 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v130 + 12));
              v92 = v90 + sub_6F8274A0(v121, v118 + v91, v120 + v91 + v85, v117);
              if ( v131 <= v92 )
                break;
              ++v69;
              v136 = v80;
              v131 = v92;
              if ( v69 == v134 )
                goto LABEL_35;
            }
          }
          if ( ++v69 != v134 )
            goto LABEL_31;
        }
LABEL_35:
        if ( v136 == 4 )
          break;
        v126 += dword_6FB97E20[v136];
        v59 = v126;
        v122 += dword_6FB97E60[v136];
      }
      v6 = v130;
      v50 = v137;
      LOBYTE(v133) = v126;
      v7 = v122 + v126 * v117;
    }
    else
    {
LABEL_48:
      v50 = v137;
      v7 = v122 + v133 * v117;
    }
  }
LABEL_23:
  v51 = *(_DWORD *)(v119 + 4 * *(_DWORD *)v6);
  *(_WORD *)(v50 + 68) = v131;
  v52 = sub_6F827990(v121, v118 + v51, v120 + v51 + v7, v117, -1);
  v53 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 4));
  v54 = sub_6F827990(v121, v118 + v53, v120 + v53 + v7, v117, -1) + v52;
  v55 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 8));
  v56 = sub_6F827990(v121, v118 + v55, v120 + v55 + v7, v117, -1) + v54;
  v57 = *(_DWORD *)(v119 + 4 * *(_DWORD *)(v6 + 12));
  result = sub_6F827990(v121, v118 + v57, v120 + v57 + v7, v117, -1);
  *(_DWORD *)(v50 + 72) = result + v56;
  *(_BYTE *)(v50 + 35) = 2 * v122;
  *(_BYTE *)(v50 + 36) = 2 * v133;
  return result;
}
