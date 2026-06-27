signed int __usercall sub_6F787F00@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  int v4; // ebp@1
  int v5; // eax@1
  int v6; // ebx@1
  int v7; // eax@2
  int v8; // eax@6
  int v9; // eax@9
  int v10; // edx@10
  signed int result; // eax@13
  int v12; // ebx@18
  int v13; // esi@18
  int v14; // eax@18
  int v15; // edx@18
  unsigned int v16; // edi@25
  int v17; // esi@27
  int v18; // ecx@27
  unsigned int v19; // edx@30
  int v20; // eax@30
  bool v21; // zf@30
  signed int v22; // eax@31
  int v23; // eax@35
  int v24; // ST00_4@36
  int v25; // esi@38
  unsigned int v26; // edi@38
  int v27; // esi@39
  unsigned int v28; // edx@40
  int v29; // eax@40
  signed int v30; // eax@40
  int v31; // eax@43
  int v32; // edx@45
  signed int v33; // ST30_4@46
  int v34; // eax@48
  int v35; // edi@49
  int (__cdecl *v36)(int, unsigned int, _DWORD, int *); // edx@51
  int v37; // eax@52
  int v38; // eax@55
  int *v39; // edi@55
  int *v40; // esi@55
  int v41; // eax@58
  signed int v42; // eax@60
  int *v43; // ebx@63
  int v44; // eax@66
  int v45; // eax@66
  int v46; // edx@68
  int v47; // eax@68
  char v48; // al@72
  int v49; // edx@75
  int v50; // eax@75
  unsigned __int8 v51; // si@76
  char *v52; // ecx@76
  unsigned int v53; // eax@76
  unsigned int v54; // edi@78
  unsigned int v55; // ebp@78
  __int16 v56; // dx@80
  unsigned int v57; // ST30_4@81
  unsigned int v58; // edx@81
  unsigned int v59; // edx@82
  unsigned __int8 v60; // al@83
  bool v61; // cf@83
  signed int v62; // edi@83
  int v63; // eax@85
  signed int v64; // esi@85
  signed __int64 v65; // rax@91
  signed __int64 v66; // rax@91
  int v67; // eax@92
  int v68; // edx@92
  int v69; // esi@99
  int v70; // ebx@100
  signed __int64 v71; // rax@101
  signed __int64 v72; // rax@101
  int v73; // eax@103
  int v74; // eax@103
  int v75; // edx@103
  char v76; // al@106
  int v77; // edx@109
  int v78; // eax@109
  char *v79; // ecx@110
  unsigned int v80; // eax@110
  unsigned int v81; // ebp@112
  unsigned int v82; // edi@112
  unsigned __int8 v83; // si@114
  __int16 v84; // dx@114
  unsigned __int8 v85; // cl@115
  unsigned int v86; // edx@116
  int v87; // edx@128
  signed int v88; // ST30_4@129
  int v89; // eax@131
  int v90; // ecx@44
  int v91; // edx@44
  int v92; // eax@134
  int *v93; // [sp+8h] [bp-384h]@0
  unsigned int v94; // [sp+24h] [bp-368h]@1
  int v95; // [sp+24h] [bp-368h]@63
  int v96; // [sp+28h] [bp-364h]@1
  int v97; // [sp+2Ch] [bp-360h]@1
  int v98; // [sp+2Ch] [bp-360h]@89
  signed int v99; // [sp+30h] [bp-35Ch]@58
  char v100; // [sp+34h] [bp-358h]@27
  unsigned int v101; // [sp+38h] [bp-354h]@75
  int v102; // [sp+38h] [bp-354h]@89
  unsigned __int8 v103; // [sp+38h] [bp-354h]@110
  int v104[2]; // [sp+3Ch] [bp-350h]@26
  int v105; // [sp+3Ch] [bp-350h]@66
  int v106; // [sp+3Ch] [bp-350h]@78
  char v107; // [sp+47h] [bp-345h]@26
  unsigned int v108; // [sp+4Ch] [bp-340h]@115
  unsigned int v109; // [sp+54h] [bp-338h]@109
  unsigned int v110; // [sp+58h] [bp-334h]@112
  int v111; // [sp+5Ch] [bp-330h]@112
  int v112; // [sp+60h] [bp-32Ch]@36
  int v113; // [sp+64h] [bp-328h]@36
  int v114; // [sp+68h] [bp-324h]@66
  int v115; // [sp+6Ch] [bp-320h]@20
  int v116; // [sp+70h] [bp-31Ch]@26
  int v117; // [sp+74h] [bp-318h]@26
  int v118; // [sp+78h] [bp-314h]@26
  int v119; // [sp+7Ch] [bp-310h]@20
  int v120; // [sp+80h] [bp-30Ch]@36
  int v121; // [sp+84h] [bp-308h]@52
  int v122; // [sp+88h] [bp-304h]@52
  int v123; // [sp+8Ch] [bp-300h]@17
  int v124; // [sp+90h] [bp-2FCh]@18
  int v125; // [sp+94h] [bp-2F8h]@18
  int v126; // [sp+98h] [bp-2F4h]@18
  const void *v127; // [sp+9Ch] [bp-2F0h]@27
  int v128; // [sp+A0h] [bp-2ECh]@27
  int v129; // [sp+A4h] [bp-2E8h]@30
  int v130; // [sp+A8h] [bp-2E4h]@30
  int v131; // [sp+ACh] [bp-2E0h]@30
  int v132; // [sp+B0h] [bp-2DCh]@30
  int v133; // [sp+B4h] [bp-2D8h]@30
  int v134; // [sp+B8h] [bp-2D4h]@30
  char v135; // [sp+CDh] [bp-2BFh]@27
  char v136; // [sp+CEh] [bp-2BEh]@35
  int v137; // [sp+D0h] [bp-2BCh]@27
  int v138; // [sp+D4h] [bp-2B8h]@27
  int v139; // [sp+D8h] [bp-2B4h]@30
  int v140; // [sp+2B4h] [bp-D8h]@43
  int v141; // [sp+2B8h] [bp-D4h]@43
  char v142; // [sp+2BDh] [bp-CFh]@34
  int v143; // [sp+344h] [bp-48h]@40
  unsigned int v144; // [sp+348h] [bp-44h]@30
  int v145; // [sp+34Ch] [bp-40h]@43
  int v146; // [sp+350h] [bp-3Ch]@33
  int v147; // [sp+354h] [bp-38h]@40
  int v148; // [sp+358h] [bp-34h]@30
  int v149; // [sp+364h] [bp-28h]@33
  int v150; // [sp+36Ch] [bp-20h]@43
  unsigned int v151; // [sp+390h] [bp+4h]@8

  v4 = a1;
  v5 = *(_DWORD *)(a1 + 4);
  v97 = a2;
  v94 = a3;
  v6 = *(_DWORD *)(v5 + 656);
  v96 = v5;
  if ( *(_DWORD *)(v6 + 1456) != 0xFFFF && (v7 = *(_DWORD *)(v6 + 1164)) != 0 )
  {
    if ( a3 )
    {
      if ( a3 > *(_DWORD *)(v6 + 1168) )
        return 6;
      v94 = *(_WORD *)(v7 + 2 * a3);
      if ( !*(_WORD *)(v7 + 2 * a3) )
        return 6;
    }
  }
  else if ( a3 >= *(_DWORD *)(v6 + 12) )
  {
    return 6;
  }
  *(_DWORD *)(v4 + 164) = 0x10000;
  *(_DWORD *)(v4 + 168) = 0x10000;
  v8 = a4 | 3;
  if ( !(a4 & 0x400) )
    v8 = a4;
  v151 = v8;
  if ( a2 )
  {
    *(_DWORD *)(v4 + 164) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(v4 + 168) = *(_DWORD *)(a2 + 20);
    v9 = *(_DWORD *)(a2 + 44);
    if ( v9 != -1 )
    {
      v10 = *(_DWORD *)(*(_DWORD *)a2 + 532);
      if ( *(_DWORD *)(v10 + 96) )
      {
        if ( !(v151 & 8)
          && !(*(int (__cdecl **)(int, int, unsigned int, unsigned int, _DWORD, int, int *))(v10 + 72))(
                v96,
                v9,
                v94,
                v151,
                *(_DWORD *)(*(_DWORD *)v97 + 104),
                v4 + 76,
                &v123) )
        {
          v12 = SHIWORD(v125);
          v13 = (signed __int16)v126;
          *(_WORD *)(v4 + 110) = 0;
          *(_DWORD *)(v4 + 72) = 1651078259;
          *(_WORD *)(v4 + 108) = 0;
          *(_DWORD *)(v4 + 24) = HIWORD(v123) << 6;
          *(_DWORD *)(v4 + 28) = (unsigned __int16)v123 << 6;
          v14 = (signed __int16)v124;
          *(_DWORD *)(v4 + 32) = (signed __int16)v124 << 6;
          v15 = SHIWORD(v124);
          *(_DWORD *)(v4 + 36) = SHIWORD(v124) << 6;
          *(_DWORD *)(v4 + 40) = (unsigned __int16)v125 << 6;
          *(_DWORD *)(v4 + 44) = v12 << 6;
          *(_DWORD *)(v4 + 48) = v13 << 6;
          *(_DWORD *)(v4 + 52) = HIWORD(v126) << 6;
          if ( v151 & 0x10 )
          {
            v15 = v13;
            v14 = v12;
          }
          *(_DWORD *)(v4 + 100) = v14;
          *(_DWORD *)(v4 + 104) = v15;
          (*(void (__cdecl **)(int, _DWORD, unsigned int, int *, int *))(*(_DWORD *)(v96 + 532) + 112))(
            v96,
            0,
            v94,
            &v119,
            &v115);
          *(_DWORD *)(v4 + 56) = (unsigned __int16)v115;
          if ( *(_BYTE *)(v96 + 292) && *(_WORD *)(v96 + 330) )
          {
            (*(void (__cdecl **)(int, signed int, unsigned int, int *, int *))(*(_DWORD *)(v96 + 532) + 112))(
              v96,
              1,
              v94,
              &v119,
              &v115);
            *(_DWORD *)(v4 + 60) = (unsigned __int16)v115;
            return 0;
          }
          if ( *(_WORD *)(v96 + 364) == -1 )
          {
            *(_DWORD *)(v4 + 60) = *(_WORD *)(v96 + 220) - *(_WORD *)(v96 + 222);
            result = 0;
          }
          else
          {
            *(_DWORD *)(v4 + 60) = *(_WORD *)(v96 + 434) - *(_WORD *)(v96 + 436);
            result = 0;
          }
          return result;
        }
      }
    }
  }
  if ( v151 & 0x4000 )
    return 6;
  v16 = *(_DWORD *)(v6 + 1896);
  if ( !v16 )
  {
    v107 = 0;
    v115 = *(_DWORD *)(v6 + 1372);
    v116 = *(_DWORD *)(v6 + 1376);
    v117 = *(_DWORD *)(v6 + 1380);
    v118 = *(_DWORD *)(v6 + 1384);
    v104[1] = *(_DWORD *)(v6 + 1396);
    v104[0] = *(_DWORD *)(v6 + 1400);
    goto LABEL_27;
  }
  v48 = *(_BYTE *)(v6 + 2924);
  if ( v48 )
  {
    if ( v48 == 3 )
    {
      if ( v94 - *(_DWORD *)(v6 + 2940) < *(_DWORD *)(v6 + 2944) )
      {
        v51 = *(_BYTE *)(v6 + 2948);
        v59 = *(_BYTE *)(v6 + 2948);
        goto LABEL_83;
      }
      v49 = *(_DWORD *)(v6 + 2932);
      v50 = *(_BYTE *)(v49 + 1) | (*(_BYTE *)v49 << 8);
      v101 = _byteswap_ushort(*(_WORD *)v49);
      if ( v94 >= _byteswap_ushort(*(_WORD *)v49) )
      {
        v51 = *(_BYTE *)(v49 + 2);
        v52 = (char *)(v49 + 5);
        v53 = _byteswap_ushort(*(_WORD *)(v49 + 3));
        if ( v94 < v53 )
        {
          v58 = v101;
LABEL_82:
          *(_DWORD *)(v6 + 2940) = v58;
          *(_DWORD *)(v6 + 2944) = v53 - v58;
          *(_BYTE *)(v6 + 2948) = v51;
          v59 = v51;
          goto LABEL_83;
        }
        if ( v49 + *(_DWORD *)(v6 + 2936) > (unsigned int)v52 )
        {
          v106 = v4;
          v54 = v49 + *(_DWORD *)(v6 + 2936);
          v55 = v53;
          do
          {
            v51 = *v52;
            v52 += 3;
            v56 = (unsigned __int8)*(v52 - 1);
            v53 = (unsigned __int16)(v56 | ((unsigned __int8)*(v52 - 2) << 8));
            if ( v94 < v53 )
            {
              v57 = v55;
              v16 = *(_DWORD *)(v6 + 1896);
              v4 = v106;
              v58 = v57;
              goto LABEL_82;
            }
            v55 = (unsigned __int16)((unsigned __int8)*(v52 - 1) | (unsigned __int16)((unsigned __int8)*(v52 - 2) << 8));
          }
          while ( v54 > (unsigned int)v52 );
          v16 = *(_DWORD *)(v6 + 1896);
          v59 = 0;
          v4 = v106;
          v51 = 0;
          goto LABEL_83;
        }
      }
    }
    v59 = 0;
    v51 = 0;
  }
  else
  {
    v51 = *(_BYTE *)(*(_DWORD *)(v6 + 2932) + v94);
    v59 = *(_BYTE *)(*(_DWORD *)(v6 + 2932) + v94);
  }
LABEL_83:
  v60 = v16 - 1;
  v61 = v16 < v59;
  v21 = v16 == v59;
  v62 = *(_DWORD *)(v6 + 1392);
  v107 = 0;
  if ( v61 || v21 )
    v51 = v60;
  v63 = *(_DWORD *)(v6 + 4 * v51 + 1900);
  v64 = *(_DWORD *)(v63 + 68);
  v115 = *(_DWORD *)(v63 + 48);
  v116 = *(_DWORD *)(v63 + 52);
  v117 = *(_DWORD *)(v63 + 56);
  v118 = *(_DWORD *)(v63 + 60);
  v104[1] = *(_DWORD *)(v63 + 72);
  v104[0] = *(_DWORD *)(v63 + 76);
  if ( v62 != v64 )
  {
    *(_DWORD *)(v4 + 164) = sub_6F7C9420(*(_DWORD *)(v4 + 164), v62, v64);
    v107 = 1;
    *(_DWORD *)(v4 + 168) = sub_6F7C9420(*(_DWORD *)(v4 + 168), v62, v64);
  }
LABEL_27:
  *(_WORD *)(v4 + 110) = 0;
  *(_WORD *)(v4 + 108) = 0;
  *(_DWORD *)(v4 + 72) = &loc_6F75746C;
  *(_BYTE *)(v4 + 161) = v151 & 1 ^ 1;
  *(_BYTE *)(v4 + 160) = ((v151 >> 1) ^ 1) & 1;
  v100 = ((v151 >> 1) ^ 1) & 1;
  v17 = *(_DWORD *)(v96 + 656);
  memset(&v123, 0, 0x2E4u);
  v124 = v96;
  v135 = 1;
  v125 = v4;
  v123 = *(_DWORD *)(v96 + 100);
  v126 = **(_DWORD **)(v4 + 156);
  v127 = (const void *)(v126 + 20);
  v128 = v126 + 56;
  sub_6F7CA220(v126);
  v138 = 0;
  v137 = 0;
  v18 = v97 != 0;
  if ( v100 && (_BYTE)v18 )
  {
    v138 = **(_DWORD **)(v97 + 40);
    v137 = *(_DWORD *)(*(_DWORD *)(v4 + 156) + 36);
  }
  v19 = *(_DWORD *)(v17 + 92);
  v139 = v17;
  v20 = *(_DWORD *)(v17 + 1308);
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v144 = v19;
  v21 = *(_DWORD *)(v17 + 1368) == 1;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v148 = v20;
  if ( v21 )
  {
    v22 = 0;
  }
  else
  {
    v22 = 107;
    if ( v19 > 0x4D7 )
      v22 = v19 < 0x846C ? 1131 : 0x8000;
  }
  v146 = v22;
  v149 = ((signed int)v151 >> 16) & 0xF;
  if ( v151 & 0x100 )
    v142 = 1;
  v136 = 0;
  v23 = *(_DWORD *)(*(_DWORD *)(v96 + 128) + 48);
  if ( v23 )
  {
    v93 = &v119;
    v24 = *(_DWORD *)(v23 + 4);
    result = (**(int (__thiscall ***)(_DWORD))v23)(v18);
    v112 = v119;
    v113 = v120;
  }
  else
  {
    result = sub_6F77D330(*(_DWORD *)(v96 + 656) + 1176, v94, &v112, &v113);
  }
  if ( result )
    return result;
  v25 = *(_DWORD *)(v124 + 656);
  v26 = *(_DWORD *)(v25 + 1896);
  if ( !v26 )
  {
    v27 = v25 + 1324;
    goto LABEL_40;
  }
  v76 = *(_BYTE *)(v25 + 2924);
  if ( v76 )
  {
    if ( v76 == 3 )
    {
      if ( v94 - *(_DWORD *)(v25 + 2940) < *(_DWORD *)(v25 + 2944) )
      {
        v86 = *(_BYTE *)(v25 + 2948);
        v103 = *(_BYTE *)(v25 + 2948);
        goto LABEL_117;
      }
      v77 = *(_DWORD *)(v25 + 2932);
      v78 = (*(_BYTE *)v77 << 8) | *(_BYTE *)(v77 + 1);
      v109 = _byteswap_ushort(*(_WORD *)v77);
      if ( v94 >= v109 )
      {
        v79 = (char *)(v77 + 5);
        v103 = *(_BYTE *)(v77 + 2);
        v80 = _byteswap_ushort(*(_WORD *)(v77 + 3));
        if ( v94 < v80 )
        {
          v108 = v109;
LABEL_116:
          *(_DWORD *)(v25 + 2940) = v108;
          v86 = v103;
          *(_DWORD *)(v25 + 2944) = v80 - v108;
          *(_BYTE *)(v25 + 2948) = v103;
          goto LABEL_117;
        }
        if ( (unsigned int)v79 < v77 + *(_DWORD *)(v25 + 2936) )
        {
          v110 = *(_DWORD *)(v25 + 1896);
          v111 = v4;
          v81 = v77 + *(_DWORD *)(v25 + 2936);
          v82 = v80;
          do
          {
            v83 = *v79;
            v79 += 3;
            v84 = (unsigned __int8)*(v79 - 1);
            v80 = (unsigned __int16)(v84 | ((unsigned __int8)*(v79 - 2) << 8));
            if ( v94 < v80 )
            {
              v85 = v83;
              v108 = v82;
              v25 = *(_DWORD *)(v124 + 656);
              v26 = v110;
              v4 = v111;
              v103 = v85;
              goto LABEL_116;
            }
            v82 = (unsigned __int16)((unsigned __int8)*(v79 - 1) | (unsigned __int16)((unsigned __int8)*(v79 - 2) << 8));
          }
          while ( v81 > (unsigned int)v79 );
          v25 = *(_DWORD *)(v124 + 656);
          v86 = 0;
          v26 = v110;
          v4 = v111;
          v103 = 0;
          goto LABEL_117;
        }
      }
    }
    v86 = 0;
    v103 = 0;
  }
  else
  {
    v89 = *(_DWORD *)(v25 + 2932);
    v86 = *(_BYTE *)(v89 + v94);
    v103 = *(_BYTE *)(v89 + v94);
  }
LABEL_117:
  result = 3;
  if ( v26 <= v86 )
    return result;
  v27 = *(_DWORD *)(v25 + 4 * v103 + 1900);
  if ( v137 && v97 != 0 )
    v138 = *(_DWORD *)(*(_DWORD *)(v97 + 40) + 4 * v103 + 4);
LABEL_40:
  v28 = *(_DWORD *)(v27 + 544);
  v29 = *(_DWORD *)(v27 + 568);
  v143 = *(_DWORD *)(v27 + 544);
  v147 = v29;
  v30 = 0;
  if ( *(_DWORD *)(v139 + 1368) != 1 )
  {
    v30 = 107;
    if ( v28 > 0x4D7 )
      v30 = v28 < 0x846C ? 1131 : 0x8000;
  }
  v145 = v30;
  v140 = *(_DWORD *)(v27 + 528);
  v31 = *(_DWORD *)(v27 + 532);
  v150 = v27;
  v141 = v31;
  result = sub_6F787130((int)&v123, v112, v113);
  if ( (_BYTE)result == -92 )
  {
    v90 = v113;
    v91 = v112;
    *(_BYTE *)(v4 + 160) = 0;
    result = sub_6F787130((int)&v123, v91, v90);
    v107 = 1;
    v100 = 0;
  }
  v32 = *(_DWORD *)(*(_DWORD *)(v96 + 128) + 48);
  if ( v32 )
  {
    v33 = result;
    v119 = v112;
    v120 = v113;
    (*(void (__cdecl **)(_DWORD, int *, int *))(*(_DWORD *)v32 + 4))(*(_DWORD *)(v32 + 4), &v119, v93);
    result = v33;
  }
  else
  {
    v87 = *(_DWORD *)(v96 + 656);
    if ( !*(_DWORD *)(v87 + 1204) )
    {
      v88 = result;
      sub_6F772340(*(_DWORD *)(v87 + 1176), &v112);
      result = v88;
    }
  }
  if ( !result )
  {
    v34 = *(_DWORD *)(*(_DWORD *)(v96 + 128) + 48);
    if ( v34 )
    {
      v35 = v125;
      *(_DWORD *)(v4 + 136) = 0;
      *(_DWORD *)(v4 + 140) = 0;
      if ( v35 )
        qmemcpy((void *)(v35 + 108), v127, 0x14u);
      v36 = *(int (__cdecl **)(_DWORD, unsigned int, _DWORD, int *))(*(_DWORD *)v34 + 8);
      if ( v36 )
      {
        v120 = 0;
        v119 = v131;
        v37 = *(_DWORD *)(v34 + 4);
        v121 = v133;
        v122 = v134;
        result = v36(v37, v94, 0, &v119);
        v131 = v119;
        v133 = v121;
        v134 = v122;
        if ( result )
          return result;
      }
    }
    else
    {
      v92 = *(_DWORD *)(v6 + 1200);
      if ( v92 )
      {
        *(_DWORD *)(v4 + 136) = *(_DWORD *)(v6 + 1204) + *(_DWORD *)(v92 + 4 * v94) - 1;
        *(_DWORD *)(v4 + 140) = v113;
      }
      if ( v125 )
        qmemcpy((void *)(v125 + 108), v127, 0x14u);
    }
    if ( v151 & 0x400 )
    {
      v67 = *(_DWORD *)(v4 + 156);
      *(_DWORD *)(v4 + 32) = v131;
      *(_DWORD *)(v4 + 40) = v140;
      *(_DWORD *)(v67 + 12) = v115;
      *(_DWORD *)(v67 + 16) = v116;
      *(_DWORD *)(v67 + 20) = v117;
      v68 = v118;
      *(_DWORD *)(v67 + 28) = v104[1];
      *(_BYTE *)(v67 + 8) = 1;
      *(_DWORD *)(v67 + 24) = v68;
      *(_DWORD *)(v67 + 32) = v104[0];
      return 0;
    }
    if ( *(_WORD *)(v96 + 250) )
    {
      v73 = *(_DWORD *)(v96 + 532);
      LOWORD(v113) = 0;
      v39 = &v119;
      v40 = &v113;
      LOWORD(v119) = 0;
      (*(void (__cdecl **)(int, _DWORD, unsigned int, int *, int *))(v73 + 112))(v96, 0, v94, &v113, &v119);
      v74 = (unsigned __int16)v119;
      v75 = (signed __int16)v113;
      *(_DWORD *)(v4 + 40) = (unsigned __int16)v119;
      *(_DWORD *)(v4 + 32) = v75;
      *(_DWORD *)(v4 + 56) = v74;
    }
    else
    {
      v38 = v140;
      v39 = &v119;
      v40 = &v113;
      *(_DWORD *)(v4 + 40) = v140;
      *(_DWORD *)(v4 + 56) = v38;
    }
    *(_BYTE *)(*(_DWORD *)(v4 + 156) + 8) = 0;
    if ( *(_BYTE *)(v96 + 292) && *(_WORD *)(v96 + 330) )
    {
      LOWORD(v113) = 0;
      LOWORD(v119) = 0;
      (*(void (__cdecl **)(int, signed int, unsigned int, int *, int *))(*(_DWORD *)(v96 + 532) + 112))(
        v96,
        1,
        v94,
        v40,
        v39);
      v99 = 1;
      *(_DWORD *)(v4 + 48) = (signed __int16)v113;
      v41 = (unsigned __int16)v119;
      *(_DWORD *)(v4 + 52) = (unsigned __int16)v119;
    }
    else if ( *(_WORD *)(v96 + 364) == -1 )
    {
      v99 = 0;
      v41 = *(_WORD *)(v96 + 220) - *(_WORD *)(v96 + 222);
      *(_DWORD *)(v4 + 52) = v41;
    }
    else
    {
      v99 = 0;
      v41 = *(_WORD *)(v96 + 434) - *(_WORD *)(v96 + 436);
      *(_DWORD *)(v4 + 52) = v41;
    }
    *(_DWORD *)(v4 + 60) = v41;
    *(_DWORD *)(v4 + 72) = &loc_6F75746C;
    *(_DWORD *)(v4 + 124) = 0;
    if ( v97 )
      v42 = *(_WORD *)(v97 + 14) < 0x18u ? 260 : 4;
    else
      v42 = 4;
    v21 = v115 == 0x10000;
    *(_DWORD *)(v4 + 124) = v42;
    if ( !v21 || v118 != 0x10000 || v116 || v117 )
    {
      v43 = &v115;
      v95 = v4 + 108;
      sub_6F770750(v4 + 108, (int)&v115);
    }
    else
    {
      v43 = &v115;
      v95 = v4 + 108;
    }
    if ( *(_QWORD *)v104 )
      sub_6F770420(v95, v104[1], v104[0]);
    v44 = *(_DWORD *)(v4 + 40);
    v114 = 0;
    v113 = v44;
    sub_6F770690((int)v40, (int)v43);
    v45 = v113 + v104[1];
    v113 = 0;
    *(_DWORD *)(v4 + 40) = v45;
    v114 = *(_DWORD *)(v4 + 52);
    sub_6F770690((int)v40, (int)v43);
    v105 = v114 + v104[0];
    *(_DWORD *)(v4 + 52) = v105;
    if ( !(v151 & 1) || v107 )
    {
      v98 = *(_DWORD *)(v4 + 164);
      v102 = *(_DWORD *)(v4 + 168);
      if ( !v100 || !v137 )
      {
        v69 = *(_WORD *)(v4 + 110);
        if ( v69 > 0 )
        {
          v70 = *(_DWORD *)(v4 + 112);
          do
          {
            v71 = (unsigned int)(((signed int)((unsigned __int64)(v98 * (signed __int64)*(_DWORD *)v70) >> 32) >> 31)
                               + 0x8000)
                + v98 * (signed __int64)*(_DWORD *)v70;
            *(_DWORD *)v70 = (HIDWORD(v71) << 16) + ((unsigned int)v71 >> 16);
            v72 = (unsigned int)(((signed int)((unsigned __int64)(v102 * (signed __int64)*(_DWORD *)(v70 + 4)) >> 32) >> 31)
                               + 0x8000)
                + v102 * (signed __int64)*(_DWORD *)(v70 + 4);
            *(_DWORD *)(v70 + 4) = (HIDWORD(v72) << 16) + ((unsigned int)v72 >> 16);
            v70 += 8;
            --v69;
          }
          while ( v69 );
        }
      }
      v65 = (unsigned int)(((signed int)((unsigned __int64)(v98 * (signed __int64)*(_DWORD *)(v4 + 40)) >> 32) >> 31)
                         + 0x8000)
          + v98 * (signed __int64)*(_DWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 40) = (HIDWORD(v65) << 16) + ((unsigned int)v65 >> 16);
      v66 = (unsigned int)(((signed int)((unsigned __int64)(v102 * (signed __int64)v105) >> 32) >> 31) + 0x8000)
          + v102 * (signed __int64)v105;
      *(_DWORD *)(v4 + 52) = (HIDWORD(v66) << 16) + ((unsigned int)v66 >> 16);
    }
    sub_6F770380(v95, (int)v39);
    v46 = v119;
    *(_DWORD *)(v4 + 24) = v121 - v119;
    v47 = v122;
    v21 = *(_WORD *)(v96 + 250) == 0;
    *(_DWORD *)(v4 + 28) = v122 - v120;
    if ( v21 )
      *(_DWORD *)(v4 + 32) = v46;
    *(_DWORD *)(v4 + 36) = v47;
    if ( v99 )
    {
      result = 0;
      *(_DWORD *)(v4 + 44) = *(_DWORD *)(v4 + 32) - *(_DWORD *)(v4 + 40) / 2;
    }
    else
    {
      if ( !(v151 & 0x10) )
        return 0;
      sub_6F76C600(v4 + 24, *(_DWORD *)(v4 + 52));
      result = 0;
    }
  }
  return result;
}
