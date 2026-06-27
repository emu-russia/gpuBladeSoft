signed int __usercall sub_6F968866@<eax>(int a1@<eax>, char a2@<dl>)
{
  int v2; // ebp@1
  int v3; // eax@2
  int v4; // ecx@3
  int v5; // eax@3
  int v6; // edx@3
  int v7; // eax@3
  int v8; // edx@3
  int v9; // esi@3
  int v10; // eax@3
  int v11; // edx@5
  int v12; // ecx@5
  int v13; // eax@5
  int v14; // edi@5
  int v15; // edx@5
  unsigned int v16; // edi@5
  int v17; // ebx@5
  int v18; // ecx@5
  int v19; // edx@6
  int v20; // eax@6
  int v21; // eax@7
  int v22; // esi@7
  char v23; // dl@9
  int v24; // ecx@19
  int v25; // eax@19
  int v26; // edx@19
  signed int v27; // ecx@19
  int v28; // eax@20
  int v29; // ecx@23
  int v30; // eax@23
  int v31; // ebx@23
  int v32; // ecx@26
  int v33; // edx@26
  char v34; // al@26
  int v35; // esi@26
  int v36; // edi@26
  int v37; // ecx@38
  int v38; // ebx@38
  int v39; // eax@40
  int v40; // edx@40
  int v42; // edi@47
  int v43; // esi@47
  int v44; // edx@49
  int v45; // eax@49
  bool v46; // zf@51
  int v47; // edx@51
  int v48; // ebx@52
  int v49; // edx@62
  int v50; // eax@62
  int v51; // edi@65
  int v52; // ebx@68
  bool v53; // dl@70
  int v54; // eax@73
  int v55; // eax@77
  int v56; // ecx@78
  signed int v57; // edx@78
  char v58; // si@78
  int v59; // ebx@78
  int v60; // ecx@78
  int v61; // edx@83
  char *v62; // edi@83
  int v63; // ecx@94
  int v64; // eax@94
  int v65; // eax@97
  int i; // eax@102
  int v67; // ebx@104
  int v68; // edx@105
  char *v69; // esi@105
  int v70; // esi@110
  int v71; // edx@111
  int *v72; // edi@111
  int v73; // eax@121
  int v74; // edx@121
  int v75; // ebx@122
  int v76; // eax@123
  int v77; // ebp@123
  int v78; // edi@123
  int v79; // eax@125
  int v80; // edx@125
  int v81; // esi@127
  int v82; // ecx@128
  int v83; // ecx@139
  int v84; // eax@140
  char *v85; // edx@140
  int j; // eax@146
  int v87; // ebx@149
  int v88; // edx@150
  int *v89; // ecx@150
  __int16 v90; // bx@156
  int v91; // ebx@159
  int v92; // esi@159
  signed int v93; // ecx@168
  int v94; // ebx@168
  int v95; // eax@168
  __int16 *v96; // [sp+4h] [bp-78h]@94
  char *v97; // [sp+8h] [bp-74h]@94
  unsigned int v98; // [sp+24h] [bp-58h]@5
  char v99; // [sp+24h] [bp-58h]@78
  __int16 v100; // [sp+24h] [bp-58h]@94
  __int16 v101; // [sp+24h] [bp-58h]@168
  int v102; // [sp+28h] [bp-54h]@5
  int v103; // [sp+28h] [bp-54h]@79
  int v104; // [sp+28h] [bp-54h]@127
  signed int v105; // [sp+2Ch] [bp-50h]@5
  int v106; // [sp+2Ch] [bp-50h]@128
  int v107; // [sp+30h] [bp-4Ch]@5
  int v108; // [sp+30h] [bp-4Ch]@23
  int v109; // [sp+30h] [bp-4Ch]@38
  __int16 v110; // [sp+30h] [bp-4Ch]@100
  unsigned int v111; // [sp+34h] [bp-48h]@17
  __int16 v112; // [sp+34h] [bp-48h]@121
  _BYTE *v113; // [sp+38h] [bp-44h]@17
  int v114; // [sp+38h] [bp-44h]@38
  __int16 v115; // [sp+38h] [bp-44h]@123
  int v116; // [sp+3Ch] [bp-40h]@38
  int v117; // [sp+40h] [bp-3Ch]@38
  int v118; // [sp+44h] [bp-38h]@1
  signed int v119; // [sp+48h] [bp-34h]@3
  __int16 v120; // [sp+50h] [bp-2Ch]@78
  char v121[10]; // [sp+52h] [bp-2Ah]@78
  int v122; // [sp+5Ch] [bp-20h]@78

  v2 = a1;
  v118 = a2;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 1020);
    if ( v3 < 0 )
      return 0;
    v4 = v2 + 4 * v3;
    v5 = *(_DWORD *)(v2 + 4);
    v9 = *(_DWORD *)(v2 + 32);
    v119 = 0;
    *(_DWORD *)(v2 + 80) = v5 * *(_WORD *)(v4 + 958);
    v6 = *(_WORD *)(v4 + 956);
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 92) = 0;
    *(_BYTE *)(v2 + 87) = 0;
    *(_BYTE *)(v2 + 86) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    v7 = v6 * v5;
    v8 = v9 - 32;
    LOWORD(v9) = 0;
    *(_DWORD *)(v2 + 36) = v8;
    *(_DWORD *)(v2 + 76) = v7;
    v10 = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v2 + 40) = v10;
    *(_DWORD *)(v2 + 88) = v10;
    *(_DWORD *)(v10 + 8) = v10;
    *(_WORD *)(v2 + 84) = 0;
    while ( v119 < *(_WORD *)(v2 + 128) )
    {
      v11 = *(_DWORD *)(v2 + 140);
      v9 = (unsigned __int16)v9;
      v12 = *(_DWORD *)(v2 + 24);
      *(_DWORD *)(v2 + 100) = 0;
      *(_DWORD *)(v2 + 96) = 0;
      v13 = *(_DWORD *)(v2 + 132);
      v14 = *(_WORD *)(v11 + 2 * v119);
      v15 = *(_DWORD *)(v2 + 8);
      v107 = v14;
      v98 = v13 + 8 * v14;
      v16 = v13 + 8 * (unsigned __int16)v9;
      v102 = (*(_DWORD *)v16 << v12) - v15;
      v105 = (*(_DWORD *)(v16 + 4) << v12) - v15;
      v17 = (*(_DWORD *)v98 << v12) - v15;
      v18 = (*(_DWORD *)(v98 + 4) << v12) - v15;
      if ( v118 )
      {
        v19 = v105;
        v105 = v102;
        v20 = v17;
        v102 = v19;
        v17 = v18;
        v18 = v20;
      }
      v21 = *(_DWORD *)(v2 + 136);
      v22 = v21 + v9;
      if ( *(_BYTE *)v22 & 4 )
        *(_BYTE *)(v2 + 176) = *(_BYTE *)v22 >> 5;
      v23 = *(_BYTE *)v22 & 3;
      if ( v23 == 2 )
      {
LABEL_46:
        *(_DWORD *)(v2 + 44) = 20;
        return 1;
      }
      if ( !v23 )
      {
        if ( (*(_BYTE *)(v21 + v107) & 3) == 1 )
        {
          v98 -= 8;
        }
        else
        {
          v17 = (v17 + v102) / 2;
          v18 = (v18 + v105) / 2;
        }
        v16 -= 8;
        --v22;
        v105 = v18;
        v102 = v17;
      }
      *(_DWORD *)(v2 + 68) = v102;
      *(_DWORD *)(v2 + 72) = v105;
      while ( 1 )
      {
        if ( v16 >= v98 )
        {
          if ( sub_6F9686EE(v2, v102, v105) )
            goto LABEL_167;
          goto LABEL_62;
        }
        v111 = v16 + 8;
        v113 = (_BYTE *)(v22 + 1);
        if ( !(*(_BYTE *)(v22 + 1) & 3) )
        {
          v29 = *(_DWORD *)(v2 + 24);
          v30 = *(_DWORD *)(v2 + 8);
          v31 = (*(_DWORD *)(v16 + 12) << v29) - v30;
          v108 = (*(_DWORD *)(v16 + 8) << v29) - v30;
          if ( v118 )
          {
            v108 = (*(_DWORD *)(v16 + 12) << v29) - v30;
            v31 = (*(_DWORD *)(v16 + 8) << v29) - v30;
          }
          while ( v111 < v98 )
          {
            v111 += 8;
            ++v113;
            v32 = *(_DWORD *)(v2 + 24);
            v33 = *(_DWORD *)(v2 + 8);
            v34 = *v113 & 3;
            v35 = (*(_DWORD *)v111 << v32) - v33;
            v36 = (*(_DWORD *)(v111 + 4) << v32) - v33;
            if ( v118 )
            {
              v35 = (*(_DWORD *)(v111 + 4) << v32) - v33;
              v36 = (*(_DWORD *)v111 << v32) - v33;
            }
            if ( v34 == 1 )
            {
              if ( !sub_6F968212(v2, v108, v31, v35, v36) )
                goto LABEL_43;
              goto LABEL_167;
            }
            if ( v34 )
              goto LABEL_46;
            if ( sub_6F968212(v2, v108, v31, (v35 + v108) / 2, (v31 + v36) / 2) )
              goto LABEL_167;
            v31 = v36;
            v108 = v35;
          }
          if ( sub_6F968212(v2, v108, v31, v102, v105) )
            goto LABEL_167;
          goto LABEL_62;
        }
        if ( (*(_BYTE *)(v22 + 1) & 3) != 1 )
          break;
        v24 = *(_DWORD *)(v2 + 24);
        v25 = *(_DWORD *)(v2 + 8);
        v26 = (*(_DWORD *)(v16 + 8) << v24) - v25;
        v27 = (*(_DWORD *)(v16 + 12) << v24) - v25;
        if ( v118 )
        {
          v28 = v26;
          v26 = v27;
          v27 = v28;
        }
        if ( sub_6F9686EE(v2, v26, v27) )
          goto LABEL_167;
LABEL_43:
        v22 = (int)v113;
        v16 = v111;
      }
      if ( v98 < v16 + 16 || (*(_BYTE *)(v22 + 2) & 3) != 2 )
        goto LABEL_46;
      v37 = *(_DWORD *)(v2 + 24);
      v38 = *(_DWORD *)(v2 + 8);
      v111 = v16 + 24;
      v109 = (*(_DWORD *)(v16 + 8) << v37) - v38;
      v114 = (*(_DWORD *)(v16 + 12) << v37) - v38;
      v116 = (*(_DWORD *)(v16 + 16) << v37) - v38;
      v117 = (*(_DWORD *)(v16 + 20) << v37) - v38;
      if ( !v118 )
      {
        if ( v98 < v16 + 24 )
          goto LABEL_61;
        v39 = (*(_DWORD *)(v16 + 24) << v37) - v38;
        v40 = (*(_DWORD *)(v16 + 28) << v37) - v38;
        goto LABEL_41;
      }
      if ( v98 >= v16 + 24 )
      {
        v116 = (*(_DWORD *)(v16 + 20) << v37) - v38;
        v40 = (*(_DWORD *)(v16 + 24) << v37) - v38;
        v39 = (*(_DWORD *)(v16 + 28) << v37) - v38;
        v117 = (*(_DWORD *)(v16 + 16) << v37) - v38;
        v109 = (*(_DWORD *)(v16 + 12) << v37) - v38;
        v114 = (*(_DWORD *)(v16 + 8) << v37) - v38;
LABEL_41:
        if ( sub_6F968364(v2, v109, v114, v116, v117, v39, v40) )
          goto LABEL_167;
        v113 = (_BYTE *)(v22 + 3);
        goto LABEL_43;
      }
      v117 = (*(_DWORD *)(v16 + 16) << v37) - v38;
      v116 = (*(_DWORD *)(v16 + 20) << v37) - v38;
      v114 = (*(_DWORD *)(v16 + 8) << v37) - v38;
      v109 = (*(_DWORD *)(v16 + 12) << v37) - v38;
LABEL_61:
      if ( sub_6F968364(v2, v109, v114, v116, v117, v102, v105) )
        goto LABEL_167;
LABEL_62:
      v49 = *(_DWORD *)(v2 + 72);
      v50 = *(_DWORD *)(v2 + 4);
      LOWORD(v9) = *(_WORD *)(*(_DWORD *)(v2 + 140) + 2 * v119) + 1;
      if ( !(v49 & (v50 - 1)) && v49 >= *(_DWORD *)(v2 + 76) && v49 <= *(_DWORD *)(v2 + 80) )
      {
        v51 = *(_DWORD *)(v2 + 96);
        if ( v51 )
        {
          if ( !((*(_BYTE *)(v51 + 12) ^ *(_BYTE *)(*(_DWORD *)(v2 + 88) + 12)) & 8) )
            *(_DWORD *)(v2 + 40) -= 4;
        }
      }
      v52 = *(_DWORD *)(v2 + 88);
      if ( *(_DWORD *)(v2 + 40) != *(_DWORD *)(v52 + 8) && *(_BYTE *)(v52 + 12) & 8 )
        v53 = (v49 & (v50 - 1)) >= *(_DWORD *)(v2 + 8);
      else
        v53 = ((v49 + v50 - 1) & -v50) - v49 >= *(_DWORD *)(v2 + 8);
      if ( sub_6F967F5A(v2, v53) )
        goto LABEL_167;
      v54 = *(_DWORD *)(v2 + 96);
      if ( v54 )
        *(_DWORD *)(v52 + 28) = v54;
      ++v119;
    }
    v42 = *(_DWORD *)(v2 + 84);
    v43 = *(_DWORD *)(v2 + 92);
    if ( (unsigned __int16)v42 > 1u && v43 )
    {
      while ( 1 )
      {
        v44 = 0;
        v45 = *(_DWORD *)(v43 + 16);
        if ( (_WORD)v42 != 1 )
          v44 = *(_DWORD *)(v43 + 8) + 4 * v45;
        v46 = (*(_BYTE *)(v43 + 12) & 8) == 0;
        *(_DWORD *)(v43 + 4) = v44;
        v47 = *(_DWORD *)(v43 + 20);
        if ( v46 )
        {
          v48 = *(_DWORD *)(v43 + 20);
          *(_DWORD *)(v43 + 8) += 4 * v45 - 4;
          v47 = v47 - v45 + 1;
          *(_DWORD *)(v43 + 20) = v47;
        }
        else
        {
          v48 = v47 + v45 - 1;
        }
        if ( sub_6F967FCE(v2, v47) || sub_6F967FCE(v2, v48 + 1) )
          break;
        LOWORD(v42) = v42 - 1;
        v43 = *(_DWORD *)(v43 + 4);
        if ( !(_WORD)v42 )
          goto LABEL_76;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 92) = 0;
LABEL_76:
      if ( *(_DWORD *)(v2 + 40) < *(_DWORD *)(v2 + 36) )
      {
        v55 = *(_DWORD *)(v2 + 92);
        if ( v55 )
        {
          v56 = *(_DWORD *)v2;
          v57 = *(_DWORD *)(v2 + 76);
          v58 = 0;
          *(_DWORD *)&v121[2] = 0;
          *(_DWORD *)&v121[6] = 0;
          v122 = 0;
          v99 = 0;
          v59 = v57 >> v56;
          *(_DWORD *)v121 = (unsigned __int16)(v57 >> v56);
          v60 = *(_DWORD *)(v2 + 80) >> v56;
          v120 = v60;
          do
          {
            v103 = *(_DWORD *)(v55 + 4);
            if ( (signed __int16)v60 > (signed __int16)*(_DWORD *)(v55 + 20) )
            {
              v60 = *(_DWORD *)(v55 + 20);
              v58 = 1;
            }
            if ( (signed __int16)v59 < (signed __int16)(*(_WORD *)(v55 + 16) + *(_WORD *)(v55 + 20) - 1) )
            {
              v59 = *(_DWORD *)(v55 + 16) + *(_DWORD *)(v55 + 20) - 1;
              v99 = 1;
            }
            v61 = *(_DWORD *)&v121[2];
            v62 = &v121[2];
            *(_DWORD *)v55 = 0;
            while ( v61 && *(_DWORD *)v61 <= 0 )
            {
              v62 = (char *)(v61 + 4);
              v61 = *(_DWORD *)(v61 + 4);
            }
            *(_DWORD *)(v55 + 4) = v61;
            *(_DWORD *)v62 = v55;
            v55 = v103;
          }
          while ( v103 );
          if ( v99 )
            *(_WORD *)v121 = v59;
          if ( v58 )
            v120 = v60;
          if ( !*(_DWORD *)(v2 + 48) )
          {
            *(_DWORD *)(v2 + 44) = 20;
            return 20;
          }
          v97 = v121;
          v96 = &v120;
          (*(void (__thiscall **)(int))(v2 + 160))(v60);
          v63 = v120;
          v64 = *(_DWORD *)&v121[2];
          v100 = v120;
          while ( v64 )
          {
            *(_DWORD *)(v64 + 24) = *(_DWORD *)(v64 + 20) - v63;
            v64 = *(_DWORD *)(v64 + 4);
          }
          v65 = *(_DWORD *)(v2 + 48);
          if ( v65 > 0 )
          {
            if ( v63 == *(_DWORD *)(*(_DWORD *)(v2 + 32) + -4 * v65) )
              *(_DWORD *)(v2 + 48) = v65 - 1;
            v110 = 0;
            while ( *(_DWORD *)(v2 + 48) > 0 )
            {
              for ( i = *(_DWORD *)&v121[2]; i; i = v67 )
              {
                v46 = *(_DWORD *)(i + 24) == v110;
                *(_DWORD *)(i + 24) -= v110;
                v67 = *(_DWORD *)(i + 4);
                if ( v46 )
                {
                  v68 = *(_DWORD *)&v121[2];
                  v69 = &v121[2];
                  while ( v68 )
                  {
                    if ( i == v68 )
                    {
                      *(_DWORD *)v69 = *(_DWORD *)(i + 4);
                      break;
                    }
                    v69 = (char *)(v68 + 4);
                    v68 = *(_DWORD *)(v68 + 4);
                  }
                  v70 = *(_DWORD *)i;
                  if ( *(_BYTE *)(i + 12) & 8 )
                  {
                    v71 = *(_DWORD *)&v121[6];
                    v72 = (int *)&v121[6];
                    while ( v71 && v70 >= *(_DWORD *)v71 )
                    {
                      v72 = (int *)(v71 + 4);
                      v71 = *(_DWORD *)(v71 + 4);
                    }
                  }
                  else
                  {
                    v71 = v122;
                    v72 = &v122;
                    while ( v71 && v70 >= *(_DWORD *)v71 )
                    {
                      v72 = (int *)(v71 + 4);
                      v71 = *(_DWORD *)(v71 + 4);
                    }
                  }
                  *(_DWORD *)(i + 4) = v71;
                  *v72 = i;
                }
              }
              sub_6F9684DF(&v121[6]);
              sub_6F9684DF(&v122);
              v73 = *(_DWORD *)(v2 + 48);
              v74 = *(_DWORD *)(v2 + 32);
              *(_DWORD *)(v2 + 48) = v73 - 1;
              v112 = *(_DWORD *)(v74 + -4 * v73);
              v110 = v112 - v100;
              while ( 1 )
              {
                v75 = *(_DWORD *)&v121[6];
                if ( v112 <= v100 )
                  break;
                v115 = 0;
                v76 = v2;
                v77 = v122;
                v78 = v76;
                while ( v75 )
                {
                  v79 = *(_DWORD *)v75;
                  v80 = *(_DWORD *)v77;
                  if ( *(_DWORD *)v75 > *(_DWORD *)v77 )
                  {
                    v79 = *(_DWORD *)v77;
                    v80 = *(_DWORD *)v75;
                  }
                  v81 = *(_DWORD *)(v78 + 4);
                  v104 = *(_DWORD *)(v78 + 4);
                  if ( v81 < v80 - v79
                    || (v106 = v79 & -v81, v82 = (v80 + v104 - 1) & -v81, v79 == v106)
                    || v80 == v82
                    || v106 <= v82 && v82 != v106 + v104 )
                  {
                    (*(void (__cdecl **)(int, _DWORD, int, int, int, int))(v78 + 164))(v78, v100, v79, v80, v75, v77);
                  }
                  else if ( (*(_WORD *)(v75 + 12) & 7) != 2 )
                  {
                    *(_DWORD *)v75 = v79;
                    ++v115;
                    *(_DWORD *)v77 = v80;
                    *(_DWORD *)(v75 + 24) = 1;
                  }
                  v75 = *(_DWORD *)(v75 + 4);
                  v77 = *(_DWORD *)(v77 + 4);
                }
                v2 = v78;
                if ( v115 > 0 )
                {
                  v91 = *(_DWORD *)&v121[6];
                  v92 = v122;
                  while ( v91 )
                  {
                    if ( *(_DWORD *)(v91 + 24) )
                    {
                      *(_DWORD *)(v91 + 24) = 0;
                      (*(void (__cdecl **)(int, _DWORD, _DWORD, _DWORD, int, int))(v78 + 168))(
                        v78,
                        v100,
                        *(_DWORD *)v91,
                        *(_DWORD *)v92,
                        v91,
                        v92);
                    }
                    v91 = *(_DWORD *)(v91 + 4);
                    v92 = *(_DWORD *)(v92 + 4);
                  }
                }
                (*(void (__cdecl **)(int, __int16 *, char *))(v78 + 172))(v78, v96, v97);
                if ( ++v100 < v112 )
                {
                  sub_6F9684DF(&v121[6]);
                  sub_6F9684DF(&v122);
                }
              }
              while ( v75 )
              {
                v83 = *(_DWORD *)(v75 + 4);
                if ( !*(_DWORD *)(v75 + 16) )
                {
                  v84 = *(_DWORD *)&v121[6];
                  v85 = &v121[6];
                  while ( v84 )
                  {
                    if ( v75 == v84 )
                    {
                      *(_DWORD *)v85 = *(_DWORD *)(v75 + 4);
                      break;
                    }
                    v85 = (char *)(v84 + 4);
                    v84 = *(_DWORD *)(v84 + 4);
                  }
                }
                v75 = v83;
              }
              for ( j = v122; j; j = v87 )
              {
                v87 = *(_DWORD *)(j + 4);
                if ( !*(_DWORD *)(j + 16) )
                {
                  v88 = v122;
                  v89 = &v122;
                  while ( v88 )
                  {
                    if ( j == v88 )
                    {
                      *v89 = *(_DWORD *)(j + 4);
                      break;
                    }
                    v89 = (int *)(v88 + 4);
                    v88 = *(_DWORD *)(v88 + 4);
                  }
                }
              }
            }
          }
          v90 = v100;
          while ( v90 <= *(_WORD *)v121 )
          {
            ++v90;
            (*(void (__cdecl **)(int, __int16 *, char *))(v2 + 172))(v2, v96, v97);
          }
        }
        --*(_DWORD *)(v2 + 1020);
        continue;
      }
    }
LABEL_167:
    if ( *(_DWORD *)(v2 + 44) != 98 )
      return 1;
    v93 = *(_DWORD *)(v2 + 1020);
    *(_DWORD *)(v2 + 44) = 0;
    v94 = v2 + 4 * v93;
    v101 = *(_WORD *)(v94 + 958);
    v95 = (*(_WORD *)(v94 + 956) + v101) / 2;
    if ( v93 > 6 || *(_WORD *)(v94 + 956) > (signed __int16)v95 )
    {
      *(_DWORD *)(v2 + 1020) = 0;
      *(_DWORD *)(v2 + 44) = 20;
      return 20;
    }
    *(_WORD *)(v94 + 960) = v95;
    *(_WORD *)(v94 + 958) = v95 - 1;
    *(_WORD *)(v94 + 962) = v101;
    *(_DWORD *)(v2 + 1020) = v93 + 1;
  }
}
