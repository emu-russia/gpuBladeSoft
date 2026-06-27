// local variable allocation has failed, the output may be wrong!
__int16 __usercall sub_6F6A1B20@<ax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  size_t v3; // ebx@1
  int v4; // ecx@2
  int v5; // edx@6
  unsigned int *v6; // ebp@8
  signed int v7; // esi@12
  signed int v8; // ebx@15
  signed int v9; // ecx@16
  signed int v10; // ebp@17
  int v11; // edi@18
  int v12; // edx@18
  int v13; // edx@20
  int v14; // ebp@20
  int v15; // esi@20
  __int16 v16; // di@22
  int v17; // ebx@22
  signed int v18; // ecx@22
  int v19; // edi@24
  int v20; // edx@24
  unsigned int v21; // eax@26
  int v22; // edx@26
  int v23; // edi@34
  char *v24; // esi@35
  int v25; // ebp@35
  int v26; // ebx@41
  int v27; // edi@41
  signed int v28; // ecx@42
  unsigned __int16 v29; // ax@42
  char v30; // cl@42
  int v31; // ST5C_4@42
  char v32; // ST50_1@42 OVERLAPPED
  char v33; // ST51_1@42
  __int64 v34; // ST52_8@42 OVERLAPPED
  __int16 v35; // ST5A_2@42
  int v36; // ebp@47
  int v37; // ebx@47
  int v38; // edi@49
  __int16 v39; // ax@50
  int v40; // ST50_4@50
  int v41; // ST54_4@50
  signed int v42; // edx@54
  unsigned __int16 v43; // bx@57
  int v44; // ebx@57
  int v45; // ecx@58
  signed int v46; // edi@58
  __int16 v47; // dx@59
  signed int v48; // eax@59
  unsigned __int16 v49; // bp@59
  int v50; // esi@69
  int v51; // ebx@70
  int v52; // ecx@70
  unsigned int v53; // eax@72
  int v54; // ebx@75
  int v55; // ebp@77
  int v56; // edi@77
  int v57; // ST00_4@78
  unsigned __int16 v58; // ax@78
  signed int v59; // edx@78
  signed int v60; // ecx@78
  int v61; // ebp@84
  signed int v62; // edi@88
  int v63; // edx@91
  int v64; // eax@91
  int v65; // ecx@92
  int v66; // ebx@93
  char v67; // bl@97
  char v68; // bl@98
  char v69; // cl@100
  int v70; // ebx@103
  int v71; // eax@103
  int v72; // ebp@107
  int v73; // edi@107
  int v74; // eax@107
  int v75; // ebx@107
  signed int v76; // ecx@111
  __int16 *v77; // eax@114
  int v78; // ecx@116
  int v79; // edi@117
  char v80; // dl@120
  char v81; // bl@121
  char v82; // bl@122
  char v83; // al@124
  int v84; // edx@126
  int v85; // ecx@126
  int v86; // ebx@126
  char v87; // cl@129
  char v88; // bl@130
  char v89; // bl@131
  char v90; // cl@133
  int v91; // ST2C_4@135
  int v93; // [sp+10h] [bp-6Ch]@8
  int v94; // [sp+10h] [bp-6Ch]@35
  int v95; // [sp+10h] [bp-6Ch]@75
  int v96; // [sp+10h] [bp-6Ch]@99
  int v97; // [sp+10h] [bp-6Ch]@114
  int v98; // [sp+10h] [bp-6Ch]@116
  int v99; // [sp+10h] [bp-6Ch]@132
  int v100; // [sp+14h] [bp-68h]@1
  int v101; // [sp+14h] [bp-68h]@39
  int v102; // [sp+14h] [bp-68h]@61
  int v103; // [sp+14h] [bp-68h]@107
  int v104; // [sp+18h] [bp-64h]@1
  unsigned int *v105; // [sp+1Ch] [bp-60h]@17
  int v106; // [sp+1Ch] [bp-60h]@39
  int v107; // [sp+1Ch] [bp-60h]@55
  int v108; // [sp+1Ch] [bp-60h]@84
  int v109; // [sp+1Ch] [bp-60h]@107
  int v110; // [sp+20h] [bp-5Ch]@8
  int v111; // [sp+20h] [bp-5Ch]@55
  int v112; // [sp+20h] [bp-5Ch]@84
  int v113; // [sp+24h] [bp-58h]@15
  int v114; // [sp+24h] [bp-58h]@84
  int v115; // [sp+24h] [bp-58h]@107
  int v116; // [sp+28h] [bp-54h]@6
  __int16 *v117; // [sp+28h] [bp-54h]@114
  int v118; // [sp+2Ch] [bp-50h]@84
  int v119; // [sp+30h] [bp-4Ch]@6
  int v120; // [sp+34h] [bp-48h]@6
  int v121; // [sp+38h] [bp-44h]@6
  int v122; // [sp+3Ch] [bp-40h]@8
  int v123; // [sp+3Ch] [bp-40h]@84
  int v124; // [sp+40h] [bp-3Ch]@8
  int v125; // [sp+40h] [bp-3Ch]@123
  int v126; // [sp+44h] [bp-38h]@8
  int v127; // [sp+44h] [bp-38h]@84
  int v128; // [sp+48h] [bp-34h]@8
  int v129; // [sp+4Ch] [bp-30h]@84

  v2 = a2;
  v104 = a1;
  v100 = dword_70041D4C;
  v3 = 4 * dword_70041D4C;
  if ( unk_6FBB979E >= 0 || dword_6FBB7560 > 2 )
  {
    a1 = dword_6FBB51DC;
    v4 = dword_6FBB51E0;
    switch ( dword_6FBB7560 )
    {
      case 3:
        a1 = 4 * dword_6FBB51DC;
        dword_70041D48 = dword_6FBB51E0;
        dword_70041D4C = 4 * dword_6FBB51DC;
        if ( dword_6FBB51E0 > a2 )
        {
          v106 = v3 * v104;
          v101 = dword_70041D50 + a2 * v3;
          do
          {
            if ( a1 > 0 )
            {
              v26 = v101;
              v27 = 0;
              do
              {
                v28 = v27;
                v27 += 4;
                v26 += 16;
                v29 = dword_6FBB51E4(v28 >> 2, v2);
                v30 = v29 & 0xF0;
                BYTE2(v31) = 16 * (v29 >> 12);
                LOBYTE(v29) = 16 * v29;
                v32 = v29;
                v33 = v29;
                v34 = (unsigned __int8)v29;
                BYTE6(v34) = 16 * HIBYTE(v29);
                BYTE7(v34) = 16 * HIBYTE(v29);
                v35 = (unsigned __int8)(16 * HIBYTE(v29));
                BYTE2(v34) = v30;
                BYTE3(v34) = v30;
                *(_DWORD *)(v26 - 8) = *(_DWORD *)((char *)&v34 + 6);
                a1 = dword_70041D4C;
                BYTE4(v34) = v30;
                LOBYTE(v31) = BYTE2(v31);
                BYTE1(v31) = BYTE2(v31);
                HIWORD(v31) = BYTE2(v31);
                *(_DWORD *)(v26 - 16) = *(_DWORD *)&v32;
                *(_DWORD *)(v26 - 12) = *(_DWORD *)((char *)&v34 + 2);
                *(_DWORD *)(v26 - 4) = v31;
              }
              while ( a1 > v27 );
              v4 = dword_70041D48;
            }
            v2 += v104;
            v101 += v106;
          }
          while ( v2 < v4 );
        }
        break;
      case 4:
        a1 = 2 * dword_6FBB51DC;
        dword_70041D48 = dword_6FBB51E0;
        dword_70041D4C = 2 * dword_6FBB51DC;
        if ( dword_6FBB51E0 > a2 )
        {
          v36 = v3 * v104;
          v37 = dword_70041D50 + a2 * v3;
          do
          {
            if ( a1 > 0 )
            {
              v38 = 0;
              do
              {
                v39 = dword_6FBB51E4(v38 >> 1, v2);
                LOBYTE(v40) = v39;
                BYTE1(v40) = v39;
                HIWORD(v40) = (unsigned __int8)v39;
                LOBYTE(v41) = HIBYTE(v39);
                BYTE1(v41) = HIBYTE(v39);
                HIWORD(v41) = HIBYTE(v39);
                *(_DWORD *)(v37 + 4 * v38) = v40;
                a1 = dword_70041D4C;
                *(_DWORD *)(v37 + 4 * v38 + 4) = v41;
                v38 += 2;
              }
              while ( a1 > v38 );
              v4 = dword_70041D48;
            }
            v2 += v104;
            v37 += v36;
          }
          while ( v2 < v4 );
        }
        break;
      case 5:
        dword_70041D4C = dword_6FBB51DC;
        dword_70041D48 = dword_6FBB51E0;
        if ( dword_6FBB51E0 > a2 )
        {
          v95 = v3 * v104;
          v54 = dword_70041D50 + a2 * v3;
          do
          {
            if ( a1 > 0 )
            {
              v55 = v54;
              v56 = 0;
              do
              {
                v57 = v56++;
                v55 += 4;
                v58 = dword_6FBB51E4(v57, v2);
                *(_BYTE *)(v55 - 1) = 0;
                *(_BYTE *)(v55 - 2) = 8 * v58;
                v59 = (signed int)v58 >> 7;
                v60 = (signed int)v58 >> 2;
                a1 = dword_70041D4C;
                *(_BYTE *)(v55 - 4) = v59 & 0xF8;
                *(_BYTE *)(v55 - 3) = v60 & 0xF8;
              }
              while ( a1 > v56 );
              v4 = dword_70041D48;
            }
            v2 += v104;
            v54 += v95;
          }
          while ( v2 < v4 );
        }
        break;
      case 6:
        dword_70041D48 = dword_6FBB51E0;
        LOWORD(a1) = 21846 * dword_6FBB51DC;
        v42 = 2 * dword_6FBB51DC / 3u;
        dword_70041D4C = 2 * dword_6FBB51DC / 3u;
        if ( dword_6FBB51E0 > v2 )
        {
          v111 = v3 * v104;
          v107 = dword_70041D50 + v2 * v3 + 4;
          do
          {
            if ( v42 > 0 )
            {
              v43 = dword_6FBB51E4(0, v2);
              LOBYTE(a1) = dword_6FBB51E4(1, v2);
              v42 = dword_70041D4C;
              *(_BYTE *)(v107 - 4) = a1;
              LOWORD(a1) = v43 >> 8;
              *(_BYTE *)(v107 - 2) = v43;
              v44 = v107;
              *(_BYTE *)(v107 - 3) = a1;
              *(_BYTE *)(v107 - 1) = 0;
              if ( v42 > 1 )
              {
                v45 = 1;
                v46 = 1;
                do
                {
                  v102 = v45;
                  v49 = dword_6FBB51E4(v46, v2);
                  LOWORD(v48) = dword_6FBB51E4(v46 + 1, v2);
                  if ( v102 & 1 )
                  {
                    v46 += 2;
                    v47 = v48;
                    v48 = (signed int)(unsigned __int16)v48 >> 8;
                    v49 = (v47 << 8) | HIBYTE(v49);
                  }
                  else
                  {
                    ++v46;
                  }
                  *(_BYTE *)v44 = a1;
                  v45 = v102 + 1;
                  *(_BYTE *)(v44 + 2) = v49;
                  v42 = dword_70041D4C;
                  LOWORD(a1) = v49 >> 8;
                  v44 += 4;
                  *(_BYTE *)(v44 - 3) = HIBYTE(v49);
                  *(_BYTE *)(v44 - 1) = 0;
                }
                while ( v42 > v102 + 1 );
              }
              v4 = dword_70041D48;
            }
            v2 += v104;
            v107 += v111;
          }
          while ( v2 < v4 );
        }
        break;
      default:
        a1 = dword_6FBB52F4 * dword_6FBB51DC;
        v121 = dword_6FBBDB70 * dword_6FBB52F4;
        v119 = dword_6FBB52F4 * dword_6FBB51DC;
        v5 = dword_6FBB52F8 * dword_6FBBDB74;
        v120 = dword_6FBB51E0 * dword_6FBB52F8;
        v116 = dword_70041D48;
        if ( unk_6FBB979E & 0x20 )
        {
          if ( v2 < dword_70041D48 )
          {
            v93 = v2;
            v124 = 2 * v121;
            v122 = v5 + v2;
            v110 = 2 * v119;
            v128 = v5 - dword_6FBB51E0 * dword_6FBB52F8;
            v6 = (unsigned int *)(dword_70041D50 + v2 * v3);
            v126 = v3 * v104;
            do
            {
              v7 = v93 + v128;
              if ( v120 > v122 )
                v7 = v122;
              if ( dword_6FBB5304
                || !(unk_6FBB979E & 8)
                || (a1 = v7 / dword_6FBB52F8 & 1, a1 == (unsigned __int8)byte_6FBB979F >> 7) )
              {
                v8 = dword_6FBB52F4;
                LOWORD(a1) = v100;
                v113 = dword_6FBB5084 + dword_6FBB52F4 * (v7 << 11);
                if ( v100 > 0 )
                {
                  v9 = 0;
                  if ( v100 & 1 )
                  {
                    v105 = v6;
                    v10 = 0;
                  }
                  else
                  {
                    v50 = 2 * dword_6FBB52F4;
                    if ( dword_6FBB52F4 > 0 )
                    {
                      v70 = v121 + dword_6FBB52F4 - 1;
                      v71 = 2 * v70 - v110;
                      if ( v119 > v70 )
                        v71 = 2 * v70;
                      v53 = *(_DWORD *)(v113 + v71);
                    }
                    else
                    {
                      v51 = v124 + 4 * dword_6FBB52F4 - 1;
                      v52 = v51 - v110;
                      if ( v110 > v51 )
                        v52 = v124 + 4 * dword_6FBB52F4 - 1;
                      v53 = *(_DWORD *)(v113 + v52);
                    }
                    v105 = v6;
                    *v6 = (unsigned __int8)(v53 >> 16) | (v53 << 16) & 0xFF0000 | v53 & 0xFF00;
                    v9 = 1;
                    v10 = v50 != 1;
                    v8 = dword_6FBB52F4;
                  }
                  while ( 1 )
                  {
                    if ( v10 < v8 )
                    {
                      v11 = v121 + v8 - 1;
                      v12 = 2 * v11;
                      if ( v119 <= v11 )
                        v12 = 2 * v11 - v110;
                    }
                    else
                    {
                      v12 = v124 + 4 * v8 - 1;
                      if ( v110 <= v12 )
                        v12 = v124 + 4 * v8 - 1 - v110;
                    }
                    a1 = *(_DWORD *)(v113 + 3 * v8 * (2 * v8 * (v9 / (2 * v8)) / v8) + v12);
                    v13 = v10 + 1;
                    v14 = 0;
                    v15 = a1;
                    if ( 2 * v8 != v13 )
                      v14 = v13;
                    v16 = a1;
                    v17 = (unsigned __int8)((unsigned int)a1 >> 16);
                    LOWORD(a1) = (_WORD)v105;
                    v105[v9] = v17 | (v15 << 16) & 0xFF0000 | v16 & 0xFF00;
                    v18 = v9 + 1;
                    if ( v100 == v18 )
                      break;
                    if ( v14 >= dword_6FBB52F4 )
                    {
                      v20 = v124 + 4 * dword_6FBB52F4 - 1;
                      if ( v110 <= v20 )
                        v20 = v124 + 4 * dword_6FBB52F4 - 1 - v110;
                    }
                    else
                    {
                      v19 = v121 + dword_6FBB52F4 - 1;
                      v20 = 2 * v19;
                      if ( v119 <= v19 )
                        v20 = 2 * v19 - v110;
                    }
                    v21 = *(_DWORD *)(v113
                                    + 3
                                    * dword_6FBB52F4
                                    * (2
                                     * dword_6FBB52F4
                                     * (v18
                                      / (2
                                       * dword_6FBB52F4))
                                     / dword_6FBB52F4)
                                    + v20);
                    v22 = v14 + 1;
                    v10 = 0;
                    if ( 2 * dword_6FBB52F4 != v22 )
                      v10 = v22;
                    v105[v18] = (unsigned __int8)(v21 >> 16) | (v21 << 16) & 0xFF0000 | v21 & 0xFF00;
                    v8 = dword_6FBB52F4;
                    v9 = v18 + 1;
                  }
                  v6 = v105;
                }
              }
              v6 = (unsigned int *)((char *)v6 + v126);
              v93 += v104;
              v122 += v104;
            }
            while ( v93 < v116 );
          }
        }
        else if ( dword_6FBB52FC )
        {
          if ( v2 < dword_70041D48 )
          {
            v118 = a1 - v121;
            v129 = 4 * (a1 - v121);
            v127 = v121 + dword_70041D4C;
            v108 = v5 + v2;
            v114 = v5 - v120;
            v61 = dword_70041D50 + v2 * v3;
            v112 = v3 * v104;
            v123 = v121 + dword_70041D4C - a1;
            do
            {
              v62 = v114 + v2;
              if ( v120 > v108 )
                v62 = v108;
              if ( dword_6FBB5304
                || !(unk_6FBB979E & 8)
                || (v62 / dword_6FBB52F8 & 1) == (unsigned __int8)byte_6FBB979F >> 7 )
              {
                v63 = v61;
                v64 = dword_6FBB505C + 4 * (v121 + dword_6FBB52F4 * (v62 << 10));
                if ( v127 > v119 )
                {
                  v78 = dword_6FBB505C + 4 * (v121 + dword_6FBB52F4 * (v62 << 10)) + 4 * v121;
                  v98 = v118 - 1;
                  if ( v118 )
                  {
                    v79 = v118 & 3;
                    if ( !(v118 & 3) )
                      goto LABEL_139;
                    if ( v79 != 1 )
                    {
                      if ( v79 != 2 )
                      {
                        v80 = *(_BYTE *)(v78 + 2);
                        v78 += 4;
                        *(_BYTE *)v61 = v80;
                        v98 = v118 - 2;
                        *(_BYTE *)(v61 + 1) = *(_BYTE *)(v78 - 3);
                        *(_BYTE *)(v61 + 2) = *(_BYTE *)(v78 - 4);
                        v63 = v61 + 4;
                        *(_BYTE *)(v61 + 3) = *(_BYTE *)(v78 - 1);
                      }
                      v81 = *(_BYTE *)(v78 + 2);
                      --v98;
                      v78 += 4;
                      v63 += 4;
                      *(_BYTE *)(v63 - 4) = v81;
                      *(_BYTE *)(v63 - 3) = *(_BYTE *)(v78 - 3);
                      *(_BYTE *)(v63 - 2) = *(_BYTE *)(v78 - 4);
                      *(_BYTE *)(v63 - 1) = *(_BYTE *)(v78 - 1);
                    }
                    v82 = *(_BYTE *)(v78 + 2);
                    --v98;
                    v78 += 4;
                    v63 += 4;
                    *(_BYTE *)(v63 - 4) = v82;
                    *(_BYTE *)(v63 - 3) = *(_BYTE *)(v78 - 3);
                    *(_BYTE *)(v63 - 2) = *(_BYTE *)(v78 - 4);
                    *(_BYTE *)(v63 - 1) = *(_BYTE *)(v78 - 1);
                    if ( v98 != -1 )
                    {
LABEL_139:
                      v125 = v64;
                      do
                      {
                        v83 = *(_BYTE *)(v78 + 2);
                        v63 += 16;
                        v78 += 16;
                        *(_BYTE *)(v63 - 16) = v83;
                        *(_BYTE *)(v63 - 15) = *(_BYTE *)(v78 - 15);
                        *(_BYTE *)(v63 - 14) = *(_BYTE *)(v78 - 16);
                        *(_BYTE *)(v63 - 13) = *(_BYTE *)(v78 - 13);
                        *(_BYTE *)(v63 - 12) = *(_BYTE *)(v78 - 10);
                        *(_BYTE *)(v63 - 11) = *(_BYTE *)(v78 - 11);
                        *(_BYTE *)(v63 - 10) = *(_BYTE *)(v78 - 12);
                        *(_BYTE *)(v63 - 9) = *(_BYTE *)(v78 - 9);
                        *(_BYTE *)(v63 - 8) = *(_BYTE *)(v78 - 6);
                        *(_BYTE *)(v63 - 7) = *(_BYTE *)(v78 - 7);
                        *(_BYTE *)(v63 - 6) = *(_BYTE *)(v78 - 8);
                        *(_BYTE *)(v63 - 5) = *(_BYTE *)(v78 - 5);
                        *(_BYTE *)(v63 - 4) = *(_BYTE *)(v78 - 2);
                        *(_BYTE *)(v63 - 3) = *(_BYTE *)(v78 - 3);
                        *(_BYTE *)(v63 - 2) = *(_BYTE *)(v78 - 4);
                        *(_BYTE *)(v63 - 1) = *(_BYTE *)(v78 - 1);
                        v98 -= 4;
                      }
                      while ( v98 != -1 );
                      v64 = v125;
                    }
                  }
                  v84 = v129 + v61;
                  v85 = v123 - 1;
                  v86 = v123 & 3;
                  if ( !(v123 & 3) )
                    goto LABEL_140;
                  if ( v86 != 1 )
                  {
                    if ( v86 != 2 )
                    {
                      v87 = *(_BYTE *)(v64 + 2);
                      v64 += 4;
                      v84 += 4;
                      *(_BYTE *)(v84 - 4) = v87;
                      *(_BYTE *)(v84 - 3) = *(_BYTE *)(v64 - 3);
                      *(_BYTE *)(v84 - 2) = *(_BYTE *)(v64 - 4);
                      v85 = v123 - 2;
                      *(_BYTE *)(v84 - 1) = *(_BYTE *)(v64 - 1);
                    }
                    v88 = *(_BYTE *)(v64 + 2);
                    v84 += 4;
                    v64 += 4;
                    --v85;
                    *(_BYTE *)(v84 - 4) = v88;
                    *(_BYTE *)(v84 - 3) = *(_BYTE *)(v64 - 3);
                    *(_BYTE *)(v84 - 2) = *(_BYTE *)(v64 - 4);
                    *(_BYTE *)(v84 - 1) = *(_BYTE *)(v64 - 1);
                  }
                  v89 = *(_BYTE *)(v64 + 2);
                  --v85;
                  v64 += 4;
                  v84 += 4;
                  *(_BYTE *)(v84 - 4) = v89;
                  *(_BYTE *)(v84 - 3) = *(_BYTE *)(v64 - 3);
                  *(_BYTE *)(v84 - 2) = *(_BYTE *)(v64 - 4);
                  *(_BYTE *)(v84 - 1) = *(_BYTE *)(v64 - 1);
                  if ( v85 != -1 )
                  {
LABEL_140:
                    v99 = v85;
                    do
                    {
                      v90 = *(_BYTE *)(v64 + 2);
                      v84 += 16;
                      v64 += 16;
                      *(_BYTE *)(v84 - 16) = v90;
                      *(_BYTE *)(v84 - 15) = *(_BYTE *)(v64 - 15);
                      *(_BYTE *)(v84 - 14) = *(_BYTE *)(v64 - 16);
                      *(_BYTE *)(v84 - 13) = *(_BYTE *)(v64 - 13);
                      *(_BYTE *)(v84 - 12) = *(_BYTE *)(v64 - 10);
                      *(_BYTE *)(v84 - 11) = *(_BYTE *)(v64 - 11);
                      *(_BYTE *)(v84 - 10) = *(_BYTE *)(v64 - 12);
                      *(_BYTE *)(v84 - 9) = *(_BYTE *)(v64 - 9);
                      *(_BYTE *)(v84 - 8) = *(_BYTE *)(v64 - 6);
                      *(_BYTE *)(v84 - 7) = *(_BYTE *)(v64 - 7);
                      *(_BYTE *)(v84 - 6) = *(_BYTE *)(v64 - 8);
                      *(_BYTE *)(v84 - 5) = *(_BYTE *)(v64 - 5);
                      *(_BYTE *)(v84 - 4) = *(_BYTE *)(v64 - 2);
                      *(_BYTE *)(v84 - 3) = *(_BYTE *)(v64 - 3);
                      *(_BYTE *)(v84 - 2) = *(_BYTE *)(v64 - 4);
                      *(_BYTE *)(v84 - 1) = *(_BYTE *)(v64 - 1);
                      v99 -= 4;
                    }
                    while ( v99 != -1 );
                  }
                }
                else
                {
                  v65 = v100 - 1;
                  if ( v100 )
                  {
                    v66 = v100 & 3;
                    if ( !(v100 & 3) )
                      goto LABEL_141;
                    if ( v66 != 1 )
                    {
                      if ( v66 != 2 )
                      {
                        v64 = dword_6FBB505C + 4 * (v121 + dword_6FBB52F4 * (v62 << 10)) + 4;
                        *(_BYTE *)v61 = *(_BYTE *)(dword_6FBB505C + 4 * (v121 + dword_6FBB52F4 * (v62 << 10)) + 2);
                        *(_BYTE *)(v61 + 1) = *(_BYTE *)(v64 - 3);
                        v65 = v100 - 2;
                        *(_BYTE *)(v61 + 2) = *(_BYTE *)(v64 - 4);
                        *(_BYTE *)(v61 + 3) = *(_BYTE *)(v64 - 1);
                        v63 = v61 + 4;
                      }
                      v67 = *(_BYTE *)(v64 + 2);
                      v63 += 4;
                      v64 += 4;
                      --v65;
                      *(_BYTE *)(v63 - 4) = v67;
                      *(_BYTE *)(v63 - 3) = *(_BYTE *)(v64 - 3);
                      *(_BYTE *)(v63 - 2) = *(_BYTE *)(v64 - 4);
                      *(_BYTE *)(v63 - 1) = *(_BYTE *)(v64 - 1);
                    }
                    v68 = *(_BYTE *)(v64 + 2);
                    --v65;
                    v64 += 4;
                    v63 += 4;
                    *(_BYTE *)(v63 - 4) = v68;
                    *(_BYTE *)(v63 - 3) = *(_BYTE *)(v64 - 3);
                    *(_BYTE *)(v63 - 2) = *(_BYTE *)(v64 - 4);
                    *(_BYTE *)(v63 - 1) = *(_BYTE *)(v64 - 1);
                    if ( v65 != -1 )
                    {
LABEL_141:
                      v96 = v65;
                      do
                      {
                        v69 = *(_BYTE *)(v64 + 2);
                        v63 += 16;
                        v64 += 16;
                        *(_BYTE *)(v63 - 16) = v69;
                        *(_BYTE *)(v63 - 15) = *(_BYTE *)(v64 - 15);
                        *(_BYTE *)(v63 - 14) = *(_BYTE *)(v64 - 16);
                        *(_BYTE *)(v63 - 13) = *(_BYTE *)(v64 - 13);
                        *(_BYTE *)(v63 - 12) = *(_BYTE *)(v64 - 10);
                        *(_BYTE *)(v63 - 11) = *(_BYTE *)(v64 - 11);
                        *(_BYTE *)(v63 - 10) = *(_BYTE *)(v64 - 12);
                        *(_BYTE *)(v63 - 9) = *(_BYTE *)(v64 - 9);
                        *(_BYTE *)(v63 - 8) = *(_BYTE *)(v64 - 6);
                        *(_BYTE *)(v63 - 7) = *(_BYTE *)(v64 - 7);
                        *(_BYTE *)(v63 - 6) = *(_BYTE *)(v64 - 8);
                        *(_BYTE *)(v63 - 5) = *(_BYTE *)(v64 - 5);
                        *(_BYTE *)(v63 - 4) = *(_BYTE *)(v64 - 2);
                        *(_BYTE *)(v63 - 3) = *(_BYTE *)(v64 - 3);
                        *(_BYTE *)(v63 - 2) = *(_BYTE *)(v64 - 4);
                        *(_BYTE *)(v63 - 1) = *(_BYTE *)(v64 - 1);
                        v96 -= 4;
                      }
                      while ( v96 != -1 );
                    }
                  }
                }
              }
              LOWORD(a1) = v104;
              v61 += v112;
              v108 += v104;
              v2 += v104;
            }
            while ( v2 < v116 );
          }
        }
        else if ( v2 < dword_70041D48 )
        {
          v72 = v5 + v2;
          v73 = v5 - v120;
          v109 = a1 - v121;
          v115 = 4 * (a1 - v121);
          v74 = v3 * v104;
          v75 = v2 * v3;
          v103 = v74;
          do
          {
            v76 = v73 + v2;
            if ( v120 > v72 )
              v76 = v72;
            if ( dword_6FBB5304
              || !(unk_6FBB979E & 8)
              || (a1 = v76 / dword_6FBB52F8 & 1, a1 == (unsigned __int8)byte_6FBB979F >> 7) )
            {
              v97 = v75 + dword_70041D50;
              v117 = (__int16 *)(dword_6FBB5068 + 2 * (v76 << 10) * dword_6FBB52F4);
              v77 = &v117[v121];
              if ( dword_70041D4C + v121 > v119 )
              {
                v91 = dword_70041D4C + v121 - v119;
                sub_6F751AD0(v77, v97, v109);
                sub_6F751AD0(v117, v115 + v97, v91);
                LOWORD(a1) = dword_70041D48;
                v116 = dword_70041D48;
              }
              else
              {
                LOWORD(a1) = (unsigned int)sub_6F751AD0(v77, v97, dword_70041D4C);
                v116 = dword_70041D48;
              }
            }
            v75 += v103;
            v2 += v104;
            v72 += v104;
          }
          while ( v2 < v116 );
        }
        break;
    }
  }
  else
  {
    v23 = dword_70041D48;
    if ( a2 < dword_70041D48 )
    {
      v24 = (char *)(dword_70041D50 + v3 * a2);
      v25 = a2;
      v94 = v3 * a1;
      do
      {
        LOWORD(a1) = (unsigned int)memset(v24, 0, v3);
        v25 += v104;
        v24 += v94;
      }
      while ( v25 < v23 );
    }
  }
  return a1;
}
