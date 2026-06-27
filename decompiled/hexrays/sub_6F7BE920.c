signed int __cdecl sub_6F7BE920(_DWORD a1, int a2, _DWORD a3, void (__cdecl *a4)(_DWORD), void (__cdecl *a5)(_DWORD))
{
  signed int v5; // ebx@1
  int v6; // ebp@1
  int v7; // eax@1
  int v8; // ebx@2
  int v10; // esi@18
  void (__cdecl **v11)(_DWORD, _DWORD, _DWORD, _DWORD); // eax@18
  int v12; // eax@22
  int v13; // edx@22
  unsigned int v14; // edi@23
  _BYTE *v15; // esi@23
  unsigned int v16; // ebx@24
  int v17; // eax@27
  bool v18; // zf@30
  const char *v19; // edi@31
  signed int v20; // ecx@31
  int v21; // ebp@35
  _BYTE *v22; // eax@36
  bool v23; // zf@39
  const char *v24; // edi@40
  signed int v25; // ecx@40
  _BYTE *v26; // esi@40
  size_t v27; // edi@51
  char *v28; // eax@52
  int v29; // edi@57
  int v30; // ecx@58
  _DWORD v31; // edi@59
  _BYTE *v32; // ebx@60
  const char *v33; // ebp@62
  int v34; // esi@62
  char *v35; // edx@66
  const char *v36; // eax@66
  _DWORD v37; // edx@67
  _DWORD v38; // edx@76
  _DWORD v39; // eax@76
  _BYTE *v40; // ecx@76
  _DWORD v41; // eax@76
  int v42; // edx@76
  int v43; // eax@76
  _DWORD v44; // esi@79
  _BYTE v45; // al@80
  _BYTE v46; // dl@82
  _DWORD v47; // eax@88
  signed int v48; // eax@90
  int v49; // eax@104
  int v50; // eax@104
  const char *v51; // ebx@107
  _DWORD v52; // ebp@109
  _DWORD v53; // esi@109
  _BYTE *v54; // edi@111
  int v55; // eax@111
  bool v56; // zf@111
  const char *v57; // esi@112
  signed int v58; // ecx@112
  int v59; // eax@116
  _DWORD v60; // eax@122
  _DWORD v61; // ecx@122
  _WORD v62; // dx@122
  signed int v63; // edx@122
  _DWORD v64; // esi@129
  signed int v65; // eax@129
  unsigned int v66; // eax@131
  int v67; // eax@135
  _DWORD v68; // eax@140
  int v69; // eax@147
  char *v70; // [sp+4h] [bp-1A8h]@71
  int v71; // [sp+2Ch] [bp-180h]@1
  int v72; // [sp+30h] [bp-17Ch]@1
  size_t v73; // [sp+34h] [bp-178h]@60
  int v74; // [sp+34h] [bp-178h]@102
  const void *v75; // [sp+38h] [bp-174h]@57
  signed int v76; // [sp+38h] [bp-174h]@106
  unsigned int v77; // [sp+3Ch] [bp-170h]@60
  int v78; // [sp+48h] [bp-164h]@105
  int v79; // [sp+4Ch] [bp-160h]@106
  int v80; // [sp+50h] [bp-15Ch]@2
  int v81; // [sp+54h] [bp-158h]@18
  int v82; // [sp+5Ch] [bp-150h]@95
  unsigned int v83; // [sp+60h] [bp-14Ch]@2
  signed int v84; // [sp+64h] [bp-148h]@55
  char *v85; // [sp+68h] [bp-144h]@23
  int v86; // [sp+6Ch] [bp-140h]@23
  int v87; // [sp+70h] [bp-13Ch]@12
  int v88; // [sp+74h] [bp-138h]@88
  void (__cdecl *v89)(_DWORD); // [sp+78h] [bp-134h]@13
  void (__cdecl *v90)(_DWORD); // [sp+7Ch] [bp-130h]@23
  void (__cdecl *v91)(_DWORD); // [sp+80h] [bp-12Ch]@27
  void (__cdecl *v92)(_DWORD, _DWORD); // [sp+98h] [bp-114h]@95
  int (__cdecl *v93)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+A0h] [bp-10Ch]@72
  int (__cdecl *v94)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [sp+A4h] [bp-108h]@152
  int v95; // [sp+A8h] [bp-104h]@18
  char *v96; // [sp+ACh] [bp-100h]@12
  int v97; // [sp+B0h] [bp-FCh]@18
  char v98; // [sp+B4h] [bp-F8h]@11
  int v99; // [sp+B8h] [bp-F4h]@120
  char v100; // [sp+BCh] [bp-F0h]@4
  int v101; // [sp+CCh] [bp-E0h]@105
  int v102; // [sp+D4h] [bp-D8h]@107
  void (__cdecl *v103)(_DWORD); // [sp+ECh] [bp-C0h]@3
  int v104; // [sp+F0h] [bp-BCh]@102
  int v105; // [sp+F4h] [bp-B8h]@8
  int v106; // [sp+10Ch] [bp-A0h]@104
  void (__cdecl *v107)(_DWORD); // [sp+124h] [bp-88h]@7
  int v108; // [sp+128h] [bp-84h]@6
  int v109; // [sp+134h] [bp-78h]@102
  int v110; // [sp+140h] [bp-6Ch]@104
  int v111; // [sp+144h] [bp-68h]@104
  void (__cdecl *v112)(_DWORD); // [sp+158h] [bp-54h]@5
  char v113; // [sp+15Ch] [bp-50h]@10
  void (__cdecl *v114)(_DWORD); // [sp+18Ch] [bp-20h]@9
  int v115; // [sp+1B4h] [bp+8h]@106

  v5 = 11;
  v6 = a2;
  *(_DWORD *)(a2 + 500) = 0;
  *(_DWORD *)a2 = 1;
  v7 = sub_6F76F110(*(_DWORD *)(a2 + 96), (int)"postscript-cmaps");
  *(_DWORD *)(a2 + 484) = v7;
  v72 = v7;
  v71 = sub_6F76F0A0(*(_DWORD *)(*(_DWORD *)(a2 + 96) + 4), "psaux");
  *(_DWORD *)(a2 + 488) = v71;
  if ( !v71 )
    return v5;
  v8 = *(_DWORD *)(a2 + 100);
  memset(&v83, 0, 0x130u);
  *(_DWORD *)(a2 + 492) = sub_6F773A50(v8, 12, &v80);
  if ( !v80 )
  {
    v10 = *(_DWORD *)(a2 + 104);
    *(_DWORD *)(a2 + 496) = 12;
    v11 = *(void (__cdecl ***)(_DWORD, _DWORD, _DWORD, _DWORD))(v71 + 4);
    v81 = 0;
    (*v11)(&v83, 0, 0, v8);
    v95 = v10;
    v97 = 0;
    v96 = 0;
    v98 = 0;
    v81 = sub_6F771FF0(v10, 0);
    if ( v81 )
      goto LABEL_19;
    v81 = sub_6F772380(v10, 0x11u);
    if ( v81 )
      goto LABEL_19;
    if ( memcmp(*(const void **)(v10 + 32), "%!PS-TrueTypeFont", 0x11u) )
      v81 = 2;
    sub_6F772460(v10);
    if ( v81 )
      goto LABEL_19;
    v81 = sub_6F771FF0(v10, 0);
    if ( v81 )
      goto LABEL_19;
    v27 = *(_DWORD *)(v10 + 4);
    if ( *(_DWORD *)(v10 + 20) )
    {
      v28 = (char *)sub_6F773A50(v8, *(_DWORD *)(v10 + 4), &v81);
      v96 = v28;
      if ( v81 )
        goto LABEL_19;
      v81 = sub_6F7720B0(v10, v28, v27);
      if ( v81 )
        goto LABEL_19;
      v97 = v27;
      v12 = v27;
    }
    else
    {
      v69 = *(_DWORD *)v10 + *(_DWORD *)(v10 + 8);
      v97 = *(_DWORD *)(v10 + 4);
      v98 = 1;
      v96 = (char *)v69;
      v81 = sub_6F772040(v10, v97);
      if ( v81 )
        goto LABEL_19;
      v12 = v97;
    }
    v13 = (int)v96;
    v84 = (signed int)v96;
    v83 = (unsigned int)v96;
    v85 = &v96[v12];
    if ( !v81 )
    {
      v80 = 0;
LABEL_23:
      v83 = v13;
      v86 = 0;
      v14 = v13 + v12;
      v85 = (char *)(v13 + v12);
      v90(&v83);
      v15 = (_BYTE *)v83;
      if ( v83 >= v14 )
      {
LABEL_99:
        v80 = v86;
        if ( !v86 )
        {
          if ( *(_BYTE *)(v6 + 433) == 42 )
          {
            v18 = v109 == 0;
            v74 = v104;
            *(_DWORD *)(v6 + 416) = v104;
            if ( v18 )
              v80 = 3;
            v18 = *(_DWORD *)(v6 + 368) == 1;
            v109 = 0;
            *(_DWORD *)(v6 + 396) = v108;
            *(_DWORD *)(v6 + 424) = v110;
            *(_DWORD *)(v6 + 428) = v111;
            v49 = v105;
            v105 = 0;
            *(_DWORD *)(v6 + 400) = v49;
            v50 = v106;
            v106 = 0;
            *(_DWORD *)(v6 + 420) = v50;
            if ( v18 )
            {
              v78 = v101;
              if ( v101 <= 0 )
              {
                v79 = 0;
              }
              else
              {
                v76 = 1;
                v79 = 0;
                v115 = v6;
                do
                {
                  *(_WORD *)(*(_DWORD *)(v115 + 384) + 2 * (v76 + 0x7FFFFFFF)) = 0;
                  *(_DWORD *)(*(_DWORD *)(v115 + 388) + 4 * (v76 + 0x3FFFFFFF)) = ".notdef";
                  v51 = *(const char **)(v102 + 4 * (v76 + 0x3FFFFFFF));
                  if ( !v51 || v74 <= 0 )
                    goto LABEL_121;
                  v52 = 0;
                  v53 = *(_DWORD *)(v115 + 420);
                  while ( 1 )
                  {
                    v54 = *(_BYTE **)(v53 + 4 * v52);
                    v55 = strcmp(v51, *(const char **)(v53 + 4 * v52));
                    v56 = v55 == 0;
                    if ( !v55 )
                      break;
                    if ( v74 == ++v52 )
                      goto LABEL_121;
                  }
                  v57 = ".notdef";
                  *(_WORD *)(*(_DWORD *)(v115 + 384) + 2 * (v76 + 0x7FFFFFFF)) = v52;
                  *(_DWORD *)(*(_DWORD *)(v115 + 388) + 4 * (v76 + 0x3FFFFFFF)) = v54;
                  v58 = 8;
                  do
                  {
                    if ( !v58 )
                      break;
                    v56 = *v57++ == *v54++;
                    --v58;
                  }
                  while ( v56 );
                  if ( v56 )
                  {
LABEL_121:
                    v59 = v76;
                  }
                  else
                  {
                    v59 = v76;
                    if ( v76 - 1 >= v79 )
                      v79 = v76;
                  }
                  ++v76;
                }
                while ( v78 > v59 );
                v6 = v115;
              }
              *(_DWORD *)(v6 + 376) = 0;
              *(_DWORD *)(v6 + 380) = v79;
              *(_DWORD *)(v6 + 372) = v99;
            }
          }
          else
          {
            v80 = 2;
          }
        }
        goto LABEL_3;
      }
      v16 = v14;
      while ( *v15 == 70 )
      {
        v18 = v16 == (_DWORD)(v15 + 25);
        if ( v16 <= (unsigned int)(v15 + 25) )
          goto LABEL_27;
        v19 = "FontDirectory";
        v20 = 13;
        do
        {
          if ( !v20 )
            break;
          v18 = *v15++ == *v19++;
          --v20;
        }
        while ( v18 );
        if ( !v18 )
          goto LABEL_27;
        v91(&v83);
        v90(&v83);
        v21 = v83;
        if ( v16 > v83 )
        {
          v22 = (_BYTE *)v83;
          while ( 1 )
          {
            if ( *v22 == 107 )
            {
              v23 = v16 == (_DWORD)(v22 + 5);
              if ( v16 > (unsigned int)(v22 + 5) )
              {
                v24 = "known";
                v25 = 5;
                v26 = v22;
                do
                {
                  if ( !v25 )
                    break;
                  v23 = *v26++ == *v24++;
                  --v25;
                }
                while ( v23 );
                if ( v23 )
                  break;
              }
            }
            v91(&v83);
            v17 = v86;
            if ( v86 )
              goto LABEL_45;
            v90(&v83);
            v22 = (_BYTE *)v83;
            if ( v16 <= v83 )
              goto LABEL_97;
          }
          if ( v16 > (unsigned int)v22 )
          {
            v91(&v83);
            v92(&v83, &v81);
            if ( v82 == 3 )
              v21 = v83;
          }
        }
LABEL_97:
        v83 = v21;
LABEL_28:
        v90(&v83);
        v15 = (_BYTE *)v83;
        if ( v16 <= v83 )
        {
          v6 = a2;
          goto LABEL_99;
        }
      }
      if ( *v15 == 47 && v16 > (unsigned int)(v15 + 2) )
      {
        v75 = v15 + 1;
        v83 = (unsigned int)(v15 + 1);
        v29 = (int)(v15 + 1);
        v91(&v83);
        v17 = v86;
        if ( v86 )
          goto LABEL_45;
        v30 = v83 - v29;
        if ( v83 - v29 - 1 <= 0x14 )
        {
          v31 = 0;
          if ( v16 > v83 )
          {
            v77 = v16;
            v73 = v30;
            v32 = v15;
            while ( 1 )
            {
              v33 = off_6FB6A8A0[9 * v31];
              v34 = 9 * v31;
              if ( v33 )
              {
                if ( v32[1] == *v33 && v73 == strlen(off_6FB6A8A0[9 * v31]) && !memcmp(v75, v33, v73) )
                  break;
              }
              if ( ++v31 == 20 )
              {
                v16 = v77;
                goto LABEL_28;
              }
            }
            v16 = v77;
            v35 = (char *)&off_6FB6A8A0[v34];
            v36 = off_6FB6A8A0[v34 + 2];
            if ( v36 == (const char *)11 )
            {
              (*((void (__cdecl **)(int, int *))v35 + 3))(a2, (int *)&v83);
              v17 = v86;
            }
            else
            {
              v37 = *((_DWORD *)v35 + 1);
              if ( v37 == 3 )
                goto LABEL_70;
              if ( v37 == 5 )
              {
                v81 = a2 + 460;
              }
              else if ( v37 == 2 )
              {
                v81 = a2 + 164;
              }
              else
              {
LABEL_70:
                v81 = a2 + 132;
              }
              v70 = (char *)&off_6FB6A8A0[9 * v31];
              if ( (unsigned int)(v36 - 9) <= 1 )
                v17 = v94(&v83, v70, &v81, 0, 0);
              else
                v17 = v93(&v83, v70, &v81, 0, 0);
            }
            v86 = v17;
            if ( !v17 )
              goto LABEL_28;
LABEL_45:
            v6 = a2;
            v80 = v17;
            goto LABEL_3;
          }
        }
        goto LABEL_28;
      }
LABEL_27:
      v91(&v83);
      v17 = v86;
      if ( v86 )
        goto LABEL_45;
      goto LABEL_28;
    }
LABEL_19:
    if ( v98 )
    {
      v80 = v81;
      goto LABEL_3;
    }
    sub_6F773D90(v8, (int)v96);
    v96 = 0;
    v80 = v81;
    if ( v81 )
      goto LABEL_3;
    v12 = v97;
    v13 = 0;
    goto LABEL_23;
  }
LABEL_3:
  if ( v103 )
    v103(&v100);
  if ( v112 )
    v112(&v108);
  if ( v107 )
    v107(&v105);
  if ( v114 )
    v114(&v113);
  if ( !v98 )
  {
    sub_6F773D90(v87, (int)v96);
    v96 = 0;
  }
  v89(&v83);
  v5 = v80;
  if ( !v80 && a3 >= 0 )
  {
    if ( a3 )
      return 6;
    v38 = *(_DWORD *)(v6 + 8);
    v39 = *(_DWORD *)(v6 + 416);
    v40 = *(_BYTE **)(v6 + 144);
    *(_DWORD *)(v6 + 36) = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 24) = "Regular";
    *(_DWORD *)(v6 + 16) = v39;
    v41 = v38;
    v42 = v38 | 0x215;
    v43 = v41 | 0x211;
    v18 = *(_BYTE *)(v6 + 156) == 0;
    *(_DWORD *)(v6 + 20) = v40;
    if ( !v18 )
      v43 = v42;
    BYTE1(v43) |= 8u;
    *(_DWORD *)(v6 + 8) = v43;
    if ( v40 )
    {
      v44 = *(_DWORD *)(v6 + 140);
      if ( v44 )
      {
        v45 = *(_BYTE *)v44;
LABEL_81:
        if ( v45 )
        {
          while ( 1 )
          {
            v46 = *v40;
            if ( *v40 == v45 )
            {
              v45 = *(_BYTE *)(v44 + 1);
              ++v40;
              ++v44;
              goto LABEL_81;
            }
            if ( v45 == 32 || v45 == 45 )
            {
              v45 = *(_BYTE *)(v44++ + 1);
              goto LABEL_81;
            }
            if ( v46 != 32 && v46 != 45 )
              break;
            ++v40;
            if ( !v45 )
              goto LABEL_88;
          }
          if ( !v46 )
            *(_DWORD *)(v6 + 24) = v44;
        }
      }
    }
    else
    {
      v68 = *(_DWORD *)(v6 + 364);
      if ( v68 )
        *(_DWORD *)(v6 + 20) = v68;
    }
LABEL_88:
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 32) = 0;
    v47 = *(_DWORD *)(v6 + 96);
    v83 = 9;
    v88 = sub_6F76F030(*(_DWORD *)(v47 + 4), "truetype");
    v84 = *(_DWORD *)(v6 + 492);
    v85 = *(char **)(v6 + 496);
    if ( a4 )
    {
      v83 |= 0x10u;
      v89 = a4;
      v90 = a5;
    }
    v48 = sub_6F7699B0(*(_DWORD *)(*(_DWORD *)(v6 + 96) + 4), (int)&v83, 0, (int *)(v6 + 500));
    if ( v48 )
      return v48;
    sub_6F76C3D0(*(_DWORD *)(*(_DWORD *)(v6 + 500) + 88));
    v60 = *(_DWORD *)(v6 + 500);
    v61 = *(_DWORD *)(v6 + 152);
    *(_DWORD *)(v6 + 52) = *(_DWORD *)(v60 + 52);
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(v60 + 56);
    *(_DWORD *)(v6 + 60) = *(_DWORD *)(v60 + 60);
    *(_DWORD *)(v6 + 64) = *(_DWORD *)(v60 + 64);
    *(_WORD *)(v6 + 68) = *(_WORD *)(v60 + 68);
    *(_WORD *)(v6 + 70) = *(_WORD *)(v60 + 70);
    *(_WORD *)(v6 + 72) = *(_WORD *)(v60 + 72);
    *(_WORD *)(v6 + 74) = *(_WORD *)(v60 + 74);
    *(_WORD *)(v6 + 76) = *(_WORD *)(v60 + 76);
    v62 = *(_WORD *)(v60 + 78);
    *(_DWORD *)(v6 + 12) = 0;
    *(_WORD *)(v6 + 78) = v62;
    *(_WORD *)(v6 + 80) = *(_WORD *)(v6 + 158);
    *(_WORD *)(v6 + 82) = *(_WORD *)(v6 + 160);
    v63 = 2;
    if ( v61 )
    {
      *(_DWORD *)(v6 + 12) = 1;
      v63 = 3;
    }
    if ( *(_BYTE *)(v60 + 12) & 2 )
      *(_DWORD *)(v6 + 12) = v63;
    if ( *(_BYTE *)(v60 + 8) & 0x20 )
      *(_DWORD *)(v6 + 8) |= 0x20u;
    if ( v72 )
    {
      v64 = *(_DWORD *)(v71 + 20);
      v83 = v6;
      v85 = (char *)65539;
      v84 = 1970170211;
      v65 = sub_6F76D420(*(_DWORD *)(v64 + 12), 0, (int)&v83, 0);
      v5 = v65;
      if ( !v65 || (_BYTE)v65 == -93 )
      {
        v66 = *(_DWORD *)(v6 + 368);
        LOWORD(v85) = 7;
        if ( v66 == 2 )
        {
          v84 = 1094995778;
          v67 = *(_DWORD *)v64;
          HIWORD(v85) = 0;
        }
        else if ( v66 <= 2 )
        {
          if ( v66 != 1 )
            return 0;
          v84 = 1094992451;
          v67 = *(_DWORD *)(v64 + 8);
          HIWORD(v85) = 2;
        }
        else if ( v66 == 3 )
        {
          v84 = 1818326065;
          HIWORD(v85) = 3;
          v67 = *(_DWORD *)(v64 + 12);
        }
        else
        {
          if ( v66 != 4 )
            return 0;
          v67 = *(_DWORD *)(v64 + 4);
          v84 = 1094992453;
          HIWORD(v85) = 1;
        }
        if ( v67 )
          return sub_6F76D420(v67, 0, (int)&v83, 0);
        return 0;
      }
    }
  }
  return v5;
}
