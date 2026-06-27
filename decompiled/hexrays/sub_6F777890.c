int __usercall sub_6F777890@<eax>(int a1@<eax>, char *a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // eax@1
  char v5; // di@1
  unsigned int v6; // ebp@1
  unsigned int v7; // esi@1
  char *v8; // ebx@2
  unsigned int v9; // eax@2
  int v10; // edx@2
  int v11; // eax@4
  char v12; // cl@5
  int *v13; // ebx@5
  int v14; // edi@5
  int v15; // ebp@8
  char v16; // ST24_1@10
  int result; // eax@10
  int v18; // edx@11
  int v19; // ebp@11
  int v20; // edx@11
  char v21; // bl@15
  int v22; // ebp@15
  char v23; // di@15
  char *v24; // ecx@15
  unsigned int v25; // eax@15
  char v26; // dl@18
  unsigned int v27; // esi@18
  int *v28; // ebp@18
  int v29; // ebx@21
  char v30; // ST38_1@23
  int v31; // eax@23
  unsigned int v32; // ebp@24
  unsigned int v33; // eax@25
  int v34; // edi@26
  _BYTE *v35; // eax@26
  int v36; // ebx@27
  int v37; // edx@27
  int v38; // eax@27
  bool v39; // zf@29
  char *v40; // esi@30
  const char *v41; // edi@30
  signed int v42; // ecx@30
  char *v43; // esi@34
  char v44; // al@34
  bool v45; // zf@38
  const char *v46; // edi@38
  signed int v47; // ecx@38
  char v48; // al@42
  unsigned __int8 v49; // al@43
  char *v50; // esi@44
  const char *v51; // edi@44
  signed int v52; // ecx@44
  char v53; // al@48
  unsigned __int8 v54; // al@49
  char *v55; // esi@50
  const char *v56; // edi@50
  signed int v57; // ecx@50
  char v58; // al@54
  unsigned __int8 v59; // al@55
  char *v60; // esi@56
  const char *v61; // edi@56
  signed int v62; // ecx@56
  char v63; // al@60
  _BYTE *v64; // eax@62
  char v65; // al@63
  int v66; // ecx@68
  int v67; // edx@68
  char *v68; // edi@69
  int v69; // ebx@70
  unsigned __int8 *v70; // eax@71
  int v71; // esi@72
  int v72; // edx@79
  int v73; // ecx@79
  char *v74; // edi@82
  int v75; // ebx@83
  unsigned __int8 *v76; // eax@84
  int v77; // esi@85
  unsigned int v78; // eax@92
  char v79; // di@92
  char v80; // bl@92
  char *v81; // ebp@92
  int v82; // edx@93
  int v83; // eax@93
  int v84; // ebx@94
  char *v85; // eax@97
  char *v86; // edx@97
  int v87; // eax@98
  const char ***v88; // ebx@100
  char v89; // bp@106
  unsigned int v90; // edi@106
  char v91; // cl@107
  unsigned int v92; // eax@107
  int v93; // esi@107
  char *v94; // ebx@107
  int *v95; // esi@110
  int v96; // edx@130
  int v97; // eax@130
  char *v98; // edi@131
  int v99; // ecx@132
  unsigned __int8 *v100; // ebx@133
  int v101; // esi@134
  int v102; // eax@138
  int v103; // edx@138
  char *v104; // edi@141
  int v105; // ecx@142
  unsigned __int8 *v106; // ebx@143
  int v107; // esi@144
  char *v108; // edx@158
  int v109; // ebx@159
  size_t v110; // eax@159
  size_t v111; // edi@159
  char *v112; // eax@159
  char *v113; // edx@159
  unsigned int v114; // [sp+24h] [bp-48h]@15
  signed int v115; // [sp+24h] [bp-48h]@69
  signed int v116; // [sp+24h] [bp-48h]@82
  signed int v117; // [sp+24h] [bp-48h]@131
  signed int v118; // [sp+24h] [bp-48h]@141
  char *v119; // [sp+28h] [bp-44h]@1
  signed int v120; // [sp+28h] [bp-44h]@80
  int v121; // [sp+2Ch] [bp-40h]@1
  int v122; // [sp+30h] [bp-3Ch]@1
  int v123; // [sp+34h] [bp-38h]@1
  int v124; // [sp+38h] [bp-34h]@133
  signed int v125; // [sp+38h] [bp-34h]@139
  int v126; // [sp+3Ch] [bp-30h]@18
  int v127; // [sp+3Ch] [bp-30h]@143
  int v128; // [sp+48h] [bp-24h]@1
  int v129; // [sp+4Ch] [bp-20h]@92

  v3 = *(_DWORD *)(a1 + 278664);
  v121 = a1;
  v4 = *(_DWORD *)(a1 + 128);
  v119 = a2;
  v122 = a3;
  v123 = v3;
  v5 = *a2;
  v6 = *(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(v4 + 12);
  v128 = 0;
  if ( v5 )
  {
    v8 = a2;
    v9 = 0;
    v10 = v5;
    do
    {
      ++v8;
      v9 = v10 + 31 * v9;
      v10 = *v8;
    }
    while ( (_BYTE)v10 );
    v11 = 4 * (v9 % v6);
  }
  else
  {
    v11 = 0;
  }
  v12 = v5;
  v13 = (int *)(v7 + v11);
  v14 = v7 + 4 * v6 - 4;
  while ( 1 )
  {
    v15 = *v13;
    if ( !*v13 )
    {
      v21 = v12;
      v22 = 0;
      v23 = v12;
      v24 = v119;
      v114 = *(_DWORD *)(v121 + 278680);
      v25 = 0;
      if ( v21 )
      {
        do
        {
          ++v24;
          v25 = v21 + 31 * v25;
          v21 = *v24;
        }
        while ( *v24 );
        v22 = 4 * (v25 % v114);
      }
      v26 = v23;
      v27 = *(_DWORD *)(v121 + 278688);
      v28 = (int *)(v27 + v22);
      v126 = v114 + 0x3FFFFFFF;
      while ( 1 )
      {
        v29 = *v28;
        if ( !*v28 )
          break;
        if ( **(_BYTE **)v29 == v26 )
        {
          v30 = v26;
          v31 = strcmp(*(const char **)v29, v119);
          v26 = v30;
          if ( !v31 )
            goto LABEL_24;
        }
        --v28;
        if ( v27 > (unsigned int)v28 )
          v28 = (int *)(v27 + 4 * (v114 + 0x3FFFFFFF));
      }
      v78 = 0;
      v129 = 0;
      v79 = v26;
      v80 = v26;
      v81 = v119;
      if ( v26 )
      {
        do
        {
          ++v81;
          v82 = 31 * v78;
          v83 = v80;
          v80 = *v81;
          v78 = v82 + v83;
        }
        while ( *v81 );
        v84 = 4 * (v78 % v114);
      }
      else
      {
        v84 = 0;
      }
      v88 = (const char ***)(v27 + v84);
      while ( *v88 )
      {
        if ( ***v88 == v79 && !strcmp(**v88, v119) )
        {
          v89 = v79;
          v90 = v27;
          goto LABEL_107;
        }
        --v88;
        if ( v27 > (unsigned int)v88 )
          v88 = (const char ***)(v27 + 4 * (v114 + 0x3FFFFFFF));
      }
      v108 = sub_6F773B30(
               v123,
               16,
               *(_DWORD *)(v121 + 278672),
               *(_DWORD *)(v121 + 278672) + 1,
               *(char **)(v121 + 278668),
               &v129);
      result = v129;
      *(_DWORD *)(v121 + 278668) = v108;
      if ( result )
        return result;
      v109 = (int)&v108[16 * *(_DWORD *)(v121 + 278672)];
      *(_DWORD *)v109 = 0;
      *(_DWORD *)(v109 + 4) = 0;
      *(_DWORD *)(v109 + 8) = 0;
      *(_DWORD *)(v109 + 12) = 0;
      v110 = strlen(v119);
      v111 = v110 + 1;
      v112 = sub_6F773B30(v123, 1, 0, v110 + 1, 0, &v129);
      v113 = v112;
      *(_DWORD *)v109 = v112;
      result = v129;
      if ( v129 )
        return result;
      memcpy(v113, v119, v111);
      *(_DWORD *)(v109 + 4) = 1;
      *(_DWORD *)(v109 + 8) = 0;
      result = sub_6F7752C0(*(_BYTE **)v109, *(_DWORD *)(v121 + 278672) + 83, v121 + 278676, v123);
      v129 = result;
      if ( result )
        return result;
      ++*(_DWORD *)(v121 + 278672);
      v89 = *v119;
      v114 = *(_DWORD *)(v121 + 278680);
      v90 = *(_DWORD *)(v121 + 278688);
      v126 = *(_DWORD *)(v121 + 278680) + 0x3FFFFFFF;
LABEL_107:
      v91 = v89;
      v92 = 0;
      v93 = 0;
      v128 = 0;
      v94 = v119;
      if ( v89 )
      {
        do
        {
          ++v94;
          v92 = v91 + 31 * v92;
          v91 = *v94;
        }
        while ( *v94 );
        v93 = 4 * (v92 % v114);
      }
      v95 = (int *)(v90 + v93);
      while ( 1 )
      {
        v29 = *v95;
        if ( !*v95 || **(_BYTE **)v29 == v89 && !strcmp(*(const char **)v29, v119) )
          break;
        --v95;
        if ( (unsigned int)v95 < v90 )
          v95 = (int *)(v90 + 4 * v126);
      }
LABEL_24:
      v32 = *(_DWORD *)(v121 + 76);
      if ( v32 == *(_DWORD *)(v121 + 72) )
      {
        if ( v32 )
        {
          v86 = sub_6F773B30(v123, 16, v32, v32 + 1, *(char **)(v121 + 80), &v128);
          result = v128;
          *(_DWORD *)(v121 + 80) = v86;
          if ( result )
            return result;
        }
        else
        {
          v85 = sub_6F773B30(v123, 16, 0, 1, 0, &v128);
          v86 = v85;
          *(_DWORD *)(v121 + 80) = v85;
          result = v128;
          if ( v128 )
            return result;
        }
        v87 = (int)&v86[16 * *(_DWORD *)(v121 + 72)];
        *(_DWORD *)v87 = 0;
        *(_DWORD *)(v87 + 4) = 0;
        *(_DWORD *)(v87 + 8) = 0;
        *(_DWORD *)(v87 + 12) = 0;
        ++*(_DWORD *)(v121 + 72);
        v32 = *(_DWORD *)(v121 + 76);
      }
      v33 = *(_DWORD *)(v29 + 4);
      if ( v33 > 0x52 )
      {
        v34 = v121;
        v35 = (_BYTE *)(*(_DWORD *)(v121 + 278668) + 16 * (v33 + 268435373));
      }
      else
      {
        v34 = v121;
        v35 = &off_6FB56020[16 * v33];
      }
      v36 = *(_DWORD *)(v34 + 80) + 16 * v32;
      *(_DWORD *)v36 = *(_DWORD *)v35;
      *(_DWORD *)(v36 + 4) = *((_DWORD *)v35 + 1);
      v37 = *((_DWORD *)v35 + 2);
      v38 = *((_DWORD *)v35 + 1);
      *(_DWORD *)(v36 + 8) = v37;
      if ( v38 == 2 )
      {
        if ( v122 )
        {
          v102 = *(_BYTE *)v122;
          v103 = 0;
          v39 = (_BYTE)v102 == 0;
          if ( (_BYTE)v102 )
          {
            v125 = 0;
            if ( (_BYTE)v102 == 45 )
            {
              v125 = 1;
              v102 = *(_BYTE *)(v122++ + 1);
            }
            v104 = (char *)&unk_6FB55B80;
            v118 = 10;
            if ( (_BYTE)v102 == 48 && (*(_BYTE *)(v122 + 1) & 0xDF) == 88 )
            {
              v102 = *(_BYTE *)(v122 + 2);
              v118 = 16;
              v122 += 2;
              v104 = byte_6FB55B60;
            }
            v105 = (unsigned __int8)v104[(unsigned __int8)v102 >> 3];
            v103 = 0;
            if ( _bittest(&v105, v102 & 7) )
            {
              v127 = v36;
              v106 = (unsigned __int8 *)v122;
              do
              {
                ++v106;
                v103 = (unsigned __int8)byte_6FB55BA0[v102] + v118 * v103;
                v102 = (char)*v106;
                v107 = (unsigned __int8)v104[*v106 >> 3];
              }
              while ( _bittest(&v107, *v106 & 7) );
              v36 = v127;
            }
            v39 = v125 == 0;
            if ( v125 )
              v103 = -v103;
          }
        }
        else
        {
          v103 = 0;
          v39 = 1;
        }
        *(_DWORD *)(v36 + 12) = v103;
      }
      else if ( v38 == 3 )
      {
        if ( v122 )
        {
          v96 = *(_BYTE *)v122;
          v97 = 0;
          v39 = (_BYTE)v96 == 0;
          if ( (_BYTE)v96 )
          {
            v98 = (char *)&unk_6FB55B80;
            v117 = 10;
            if ( (_BYTE)v96 == 48 && (*(_BYTE *)(v122 + 1) & 0xDF) == 88 )
            {
              v96 = *(_BYTE *)(v122 + 2);
              v98 = byte_6FB55B60;
              v117 = 16;
              v122 += 2;
            }
            v99 = (unsigned __int8)v98[(unsigned __int8)v96 >> 3];
            v97 = 0;
            if ( _bittest(&v99, v96 & 7) )
            {
              v124 = v36;
              v100 = (unsigned __int8 *)v122;
              do
              {
                ++v100;
                v97 = (unsigned __int8)byte_6FB55BA0[v96] + v117 * v97;
                v96 = (char)*v100;
                v101 = (unsigned __int8)v98[*v100 >> 3];
              }
              while ( _bittest(&v101, *v100 & 7) );
              v36 = v124;
            }
          }
        }
        else
        {
          v97 = 0;
          v39 = 1;
        }
        *(_DWORD *)(v36 + 12) = v97;
      }
      else
      {
        v39 = v38 == 1;
        if ( v38 == 1 )
        {
          *(_DWORD *)(v36 + 12) = 0;
          v39 = v122 == 0;
          if ( v122 )
          {
            v39 = *(_BYTE *)v122 == 0;
            if ( *(_BYTE *)v122 )
            {
              *(_DWORD *)(v36 + 12) = sub_6F773E40(v123, (const char *)v122, &v128);
              result = v128;
              v39 = v128 == 0;
              if ( v128 )
                return result;
              v32 = *(_DWORD *)(v121 + 76);
            }
          }
        }
      }
      v40 = v119;
      v41 = "COMMENT";
      v42 = 7;
      do
      {
        if ( !v42 )
          break;
        v39 = *v40++ == *v41++;
        --v42;
      }
      while ( v39 );
      if ( !v39 || (v43 = v119, v44 = v119[7], v44 != 13 && (v44 & 0xDF) != 0) && (unsigned __int8)(v44 - 9) > 1u )
      {
        result = sub_6F7752C0(*(_BYTE **)v36, v32, *(_DWORD *)(v121 + 128), v123);
        v128 = result;
        if ( result )
          return result;
        v32 = *(_DWORD *)(v121 + 76);
        v43 = v119;
      }
      v45 = v32 == -1;
      v46 = "DEFAULT_CHAR";
      v47 = 12;
      *(_DWORD *)(v121 + 76) = v32 + 1;
      do
      {
        if ( !v47 )
          break;
        v45 = *v43++ == *v46++;
        --v47;
      }
      while ( v45 );
      if ( v45 )
      {
        v48 = v119[12];
        if ( v48 == 13 || (v48 & 0xDF) == 0 || (v49 = v48 - 9, v45 = v49 == 1, v49 <= 1u) )
        {
          *(_DWORD *)(v121 + 36) = *(_DWORD *)(v36 + 12);
          return v128;
        }
      }
      v50 = v119;
      v51 = "FONT_ASCENT";
      v52 = 11;
      do
      {
        if ( !v52 )
          break;
        v45 = *v50++ == *v51++;
        --v52;
      }
      while ( v45 );
      if ( v45 && ((v53 = v119[11], v53 == 13 || (v53 & 0xDF) == 0) || (v54 = v53 - 9, v45 = v54 == 1, v54 <= 1u)) )
      {
        *(_DWORD *)(v121 + 40) = *(_DWORD *)(v36 + 12);
      }
      else
      {
        v55 = v119;
        v56 = "FONT_DESCENT";
        v57 = 12;
        do
        {
          if ( !v57 )
            break;
          v45 = *v55++ == *v56++;
          --v57;
        }
        while ( v45 );
        if ( v45 )
        {
          v58 = v119[12];
          if ( v58 == 13 || (v58 & 0xDF) == 0 || (v59 = v58 - 9, v45 = v59 == 1, v59 <= 1u) )
          {
            *(_DWORD *)(v121 + 44) = *(_DWORD *)(v36 + 12);
            return v128;
          }
        }
        v60 = v119;
        v61 = "SPACING";
        v62 = 7;
        do
        {
          if ( !v62 )
            break;
          v45 = *v60++ == *v61++;
          --v62;
        }
        while ( v45 );
        if ( v45 )
        {
          v63 = v119[7];
          if ( v63 == 13 || (v63 & 0xDF) == 0 || (unsigned __int8)(v63 - 9) <= 1u )
          {
            v64 = *(_BYTE **)(v36 + 12);
            if ( v64 )
            {
              v65 = *v64 & 0xDF;
              if ( v65 == 80 )
              {
                *(_DWORD *)(v121 + 28) = 8;
                result = v128;
              }
              else
              {
                if ( v65 != 77 )
                {
                  if ( v65 == 67 )
                  {
                    *(_DWORD *)(v121 + 28) = 32;
                    return v128;
                  }
                  return v128;
                }
                *(_DWORD *)(v121 + 28) = 16;
                result = v128;
              }
            }
            else
            {
              result = 3;
            }
            return result;
          }
        }
      }
      return v128;
    }
    if ( **(_BYTE **)v15 == v12 )
    {
      v16 = v12;
      result = strcmp(*(const char **)v15, v119);
      v12 = v16;
      if ( !result )
        break;
    }
    --v13;
    if ( v7 > (unsigned int)v13 )
      v13 = (int *)v14;
  }
  v18 = *(_DWORD *)(v121 + 80) + 16 * *(_DWORD *)(v15 + 4);
  v19 = v18;
  v20 = *(_DWORD *)(v18 + 4);
  if ( v20 == 2 )
  {
    if ( v122 )
    {
      v72 = *(_BYTE *)v122;
      v73 = 0;
      if ( (_BYTE)v72 )
      {
        v120 = 0;
        if ( (_BYTE)v72 == 45 )
        {
          v72 = *(_BYTE *)(v122 + 1);
          v120 = 1;
          ++v122;
        }
        v74 = (char *)&unk_6FB55B80;
        v116 = 10;
        if ( (_BYTE)v72 == 48 && (*(_BYTE *)(v122 + 1) & 0xDF) == 88 )
        {
          v72 = *(_BYTE *)(v122 + 2);
          v116 = 16;
          v122 += 2;
          v74 = byte_6FB55B60;
        }
        v75 = (unsigned __int8)v74[(unsigned __int8)v72 >> 3];
        v73 = 0;
        if ( _bittest(&v75, v72 & 7) )
        {
          v76 = (unsigned __int8 *)v122;
          do
          {
            ++v76;
            v73 = (unsigned __int8)byte_6FB55BA0[v72] + v116 * v73;
            v72 = (char)*v76;
            v77 = (unsigned __int8)v74[*v76 >> 3];
          }
          while ( _bittest(&v77, *v76 & 7) );
          result = 0;
        }
        if ( v120 )
          v73 = -v73;
      }
    }
    else
    {
      v73 = 0;
    }
    *(_DWORD *)(v19 + 12) = v73;
  }
  else if ( v20 == 3 )
  {
    if ( v122 )
    {
      v66 = *(_BYTE *)v122;
      v67 = 0;
      if ( (_BYTE)v66 )
      {
        v68 = (char *)&unk_6FB55B80;
        v115 = 10;
        if ( (_BYTE)v66 == 48 && (*(_BYTE *)(v122 + 1) & 0xDF) == 88 )
        {
          v66 = *(_BYTE *)(v122 + 2);
          v115 = 16;
          v122 += 2;
          v68 = byte_6FB55B60;
        }
        v69 = (unsigned __int8)v68[(unsigned __int8)v66 >> 3];
        v67 = 0;
        if ( _bittest(&v69, v66 & 7) )
        {
          v70 = (unsigned __int8 *)v122;
          do
          {
            ++v70;
            v67 = (unsigned __int8)byte_6FB55BA0[v66] + v115 * v67;
            v66 = (char)*v70;
            v71 = (unsigned __int8)v68[*v70 >> 3];
          }
          while ( _bittest(&v71, *v70 & 7) );
          result = 0;
        }
      }
    }
    else
    {
      v67 = 0;
    }
    *(_DWORD *)(v19 + 12) = v67;
  }
  else
  {
    if ( v20 != 1 )
      return result;
    sub_6F773D90(v123, *(_DWORD *)(v19 + 12));
    *(_DWORD *)(v19 + 12) = 0;
    if ( !v122 || !*(_BYTE *)v122 )
      return v128;
    *(_DWORD *)(v19 + 12) = sub_6F773E40(v123, (const char *)v122, &v128);
    result = v128;
  }
  return result;
}
