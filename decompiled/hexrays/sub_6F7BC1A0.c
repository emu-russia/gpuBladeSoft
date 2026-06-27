int __usercall sub_6F7BC1A0@<eax>(int a1@<eax>)
{
  int v1; // ebp@1
  int v2; // eax@1
  int v3; // ebx@1
  int v4; // esi@1
  void (__cdecl **v5)(_DWORD, _DWORD, _DWORD, _DWORD); // eax@1
  signed int v6; // eax@1
  int v7; // ebx@15
  int v9; // edx@19
  int v10; // ecx@19
  int v11; // eax@20
  int v12; // ebx@21
  char *v13; // ecx@22
  int v14; // edx@22
  char *v15; // ebx@22
  unsigned int v16; // eax@23
  char *v17; // esi@31
  bool v18; // zf@34
  const char *v19; // edi@35
  signed int v20; // ecx@35
  __int16 v21; // dx@43
  int v22; // eax@43
  int v23; // edi@47
  char *v24; // eax@49
  int v25; // eax@51
  char *v26; // esi@53
  signed int v27; // eax@54
  int v28; // eax@56
  __int16 v29; // si@57
  char *v30; // edx@64
  int v31; // ecx@64
  int v32; // eax@69
  int v33; // eax@70
  int v34; // edx@71
  unsigned int v35; // edx@75
  signed int v36; // eax@85
  int v37; // eax@89
  int v38; // eax@89
  const char *v39; // esi@92
  int v40; // ebx@94
  int v41; // edi@94
  _BYTE *v42; // ebp@96
  int v43; // eax@96
  bool v44; // zf@96
  signed int v45; // ecx@97
  _BYTE *v46; // edi@97
  const char *v47; // esi@97
  int v48; // eax@101
  int v49; // eax@108
  char *v50; // eax@120
  int v51; // esi@125
  unsigned int v52; // ebx@129
  void *v53; // edi@129
  bool v54; // al@130
  bool v55; // dl@131
  char v56; // al@132
  size_t v57; // edi@137
  char v58; // al@142
  char v59; // al@144
  char v60; // al@146
  int v61; // [sp+4h] [bp-1E8h]@1
  signed int v62; // [sp+8h] [bp-1E4h]@1
  int v63; // [sp+20h] [bp-1CCh]@1
  int v64; // [sp+20h] [bp-1CCh]@86
  int v65; // [sp+24h] [bp-1C8h]@21
  signed int v66; // [sp+24h] [bp-1C8h]@91
  __int16 v67; // [sp+24h] [bp-1C8h]@117
  char *v68; // [sp+24h] [bp-1C8h]@125
  unsigned int v69; // [sp+28h] [bp-1C4h]@56
  int v70; // [sp+28h] [bp-1C4h]@91
  size_t v71; // [sp+28h] [bp-1C4h]@129
  int v72; // [sp+38h] [bp-1B4h]@90
  int v73; // [sp+3Ch] [bp-1B0h]@91
  int v74; // [sp+4Ch] [bp-1A0h]@4
  int v75; // [sp+50h] [bp-19Ch]@1
  int v76; // [sp+54h] [bp-198h]@43
  char *v77; // [sp+58h] [bp-194h]@1
  char *v78; // [sp+5Ch] [bp-190h]@52
  char *v79; // [sp+60h] [bp-18Ch]@31
  int v80; // [sp+64h] [bp-188h]@39
  int v81; // [sp+68h] [bp-184h]@15
  void (__cdecl *v82)(char **); // [sp+70h] [bp-17Ch]@17
  void (__cdecl *v83)(char **); // [sp+74h] [bp-178h]@33
  void (__cdecl *v84)(char **); // [sp+78h] [bp-174h]@39
  int v85; // [sp+A0h] [bp-14Ch]@1
  char *v86; // [sp+A4h] [bp-148h]@1
  int v87; // [sp+A8h] [bp-144h]@1
  char *v88; // [sp+ACh] [bp-140h]@1
  int i; // [sp+B0h] [bp-13Ch]@1
  char v90; // [sp+B4h] [bp-138h]@1
  char v91; // [sp+B5h] [bp-137h]@1
  char v92; // [sp+B6h] [bp-136h]@1
  int v93; // [sp+B8h] [bp-134h]@105
  char v94; // [sp+BCh] [bp-130h]@6
  int v95; // [sp+CCh] [bp-120h]@90
  int v96; // [sp+D4h] [bp-118h]@92
  void (__cdecl *v97)(char *, int, signed int); // [sp+ECh] [bp-100h]@5
  int v98; // [sp+F0h] [bp-FCh]@86
  int v99; // [sp+F4h] [bp-F8h]@10
  int v100; // [sp+10Ch] [bp-E0h]@89
  void (__cdecl *v101)(int *, int, signed int); // [sp+124h] [bp-C8h]@9
  int v102; // [sp+128h] [bp-C4h]@8
  int v103; // [sp+134h] [bp-B8h]@89
  int v104; // [sp+140h] [bp-ACh]@89
  int v105; // [sp+144h] [bp-A8h]@89
  void (__cdecl *v106)(int *, int, signed int); // [sp+158h] [bp-94h]@7
  char v107; // [sp+15Ch] [bp-90h]@12
  void (__cdecl *v108)(char *, int, signed int); // [sp+18Ch] [bp-60h]@11
  int v109; // [sp+190h] [bp-5Ch]@87
  int v110; // [sp+194h] [bp-58h]@14
  int v111; // [sp+1A0h] [bp-4Ch]@86
  int v112; // [sp+1ACh] [bp-40h]@87
  int v113; // [sp+1B0h] [bp-3Ch]@87
  void (__cdecl *v114)(int *, int, signed int); // [sp+1C4h] [bp-28h]@13

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 488);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_DWORD *)(v1 + 100);
  *(_DWORD *)(v1 + 532) = -1;
  *(_DWORD *)(v1 + 536) = -1;
  *(_DWORD *)(v1 + 540) = 0;
  v63 = v2;
  memset(&v77, 0, 0x178u);
  *(_DWORD *)(v1 + 280) = 7;
  *(_DWORD *)(v1 + 284) = 1;
  *(_DWORD *)(v1 + 172) = 4;
  *(_DWORD *)(v1 + 348) = 3932;
  v5 = *(void (__cdecl ***)(_DWORD, _DWORD, _DWORD, _DWORD))(v2 + 4);
  *(_DWORD *)(v1 + 276) = 2596864;
  (*v5)(&v77, 0, 0, v4);
  v85 = v3;
  v87 = 0;
  v86 = 0;
  i = 0;
  v88 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v6 = sub_6F7BA630(v3, "%!PS-AdobeFont", 0xEu);
  v75 = v6;
  if ( v6 )
  {
    if ( (_BYTE)v6 != 2 )
      goto LABEL_3;
    v75 = sub_6F7BA630(v3, "%!FontType", 0xAu);
    if ( v75 )
      goto LABEL_3;
  }
  v75 = sub_6F771FF0(v3, 0);
  if ( v75 )
    goto LABEL_3;
  v21 = sub_6F772620(v3, &v76);
  v22 = v76;
  if ( v76 )
    goto LABEL_155;
  if ( (unsigned __int16)(v21 + 0x7FFF) > 1u )
  {
    v75 = 0;
LABEL_46:
    v75 = sub_6F771FF0(v3, 0);
    if ( v75 )
      goto LABEL_3;
    v23 = *(_DWORD *)(v3 + 4);
    goto LABEL_48;
  }
  v67 = v21;
  v23 = sub_6F772860(v3, &v76);
  v22 = v76;
  if ( v76 )
  {
LABEL_155:
    v75 = v22;
    goto LABEL_3;
  }
  v75 = 0;
  if ( v67 != -32767 )
    goto LABEL_46;
  v90 = 1;
LABEL_48:
  if ( *(_DWORD *)(v3 + 20) )
  {
    v24 = (char *)sub_6F773A50(v4, v23, &v75);
    v86 = v24;
    if ( !v75 )
    {
      v75 = sub_6F7720B0(v3, v24, v23);
      if ( !v75 )
      {
        v87 = v23;
        v25 = v23;
        v9 = v23;
LABEL_52:
        v10 = (int)v86;
        v74 = 0;
        v78 = v86;
        v77 = v86;
        v79 = &v86[v25];
LABEL_20:
        sub_6F7BBC20(v10, (int)&v77, v9);
        v74 = v11;
        if ( v11 )
          goto LABEL_5;
        v12 = v85;
        v75 = 0;
        v65 = v81;
        if ( v90 )
        {
          v28 = sub_6F7720A0(v85);
          i = 0;
          v69 = v28;
          while ( 1 )
          {
            v29 = sub_6F772620(v12, &v76);
            v27 = v76;
            if ( v76 )
              goto LABEL_55;
            if ( (unsigned __int16)(v29 + 0x7FFF) > 1u )
            {
              v75 = 0;
LABEL_60:
              if ( !i )
                goto LABEL_54;
              v27 = sub_6F771FF0(v12, v69);
              v75 = v27;
              if ( !v27 )
              {
                v88 = (char *)sub_6F773A50(v65, i, &v75);
                v27 = v75;
                if ( !v75 )
                {
                  for ( i = 0; ; i += v51 )
                  {
                    v30 = (char *)sub_6F772620(v12, &v76);
                    if ( v76 )
                      break;
                    if ( (unsigned __int16)((_WORD)v30 + 0x7FFF) > 1u )
                      break;
                    v68 = v30;
                    v51 = sub_6F772860(v12, &v76);
                    if ( v76 )
                      break;
                    v30 = v68;
                    v75 = 0;
                    if ( (_WORD)v68 != -32766 )
                      break;
                    v27 = sub_6F7720B0(v12, &v88[i], v51);
                    v75 = v27;
                    if ( v27 )
                      goto LABEL_55;
                  }
                  v75 = 0;
                  goto LABEL_67;
                }
              }
              goto LABEL_55;
            }
            v49 = sub_6F772860(v12, &v76);
            if ( v76 )
            {
              v74 = v76;
              goto LABEL_5;
            }
            v75 = 0;
            if ( v29 != -32766 )
              goto LABEL_60;
            i += v49;
            v27 = sub_6F772040(v12, v49);
            v75 = v27;
            if ( v27 )
              goto LABEL_55;
          }
        }
        v13 = v86;
        v14 = v87;
        v15 = v86;
        do
        {
LABEL_23:
          v16 = (unsigned int)&v13[v14];
          while ( *v15 != 101
               || v16 <= (unsigned int)(v15 + 9)
               || v15[1] != 101
               || v15[2] != 120
               || v15[3] != 101
               || v15[4] != 99 )
          {
            if ( v16 <= (unsigned int)++v15 )
              goto LABEL_54;
          }
          v15 += 10;
          v17 = v13;
          v77 = v13;
          v79 = v15;
        }
        while ( v13 >= v15 );
        while ( 1 )
        {
          v18 = *v17 == 101;
          if ( *v17 == 101 )
          {
            v19 = "eexec";
            v20 = 5;
            do
            {
              if ( !v20 )
                break;
              v18 = *v17++ == *v19++;
              --v20;
            }
            while ( v18 );
            if ( v18 )
              break;
          }
          v84(&v77);
          if ( !v80 )
          {
            v83(&v77);
            v17 = v77;
            if ( v15 > v77 )
              continue;
          }
          v14 = v87;
          v13 = v86;
          goto LABEL_23;
        }
        v79 = &v86[v87];
        v84(&v77);
        v52 = (unsigned int)v79;
        v26 = v77;
        v71 = v79 - v77;
        v53 = memchr(v77, 10, v79 - v77);
        if ( v53 )
          v54 = v53 > memchr(v26, 13, v71);
        else
          v54 = 1;
        v55 = v54;
        if ( (unsigned int)v26 < v52 )
        {
          while ( 1 )
          {
            v56 = *v26;
            if ( (unsigned __int8)(*v26 - 9) > 1u && v56 != 32 && (v56 != 13 || !v55) )
              break;
            if ( (char *)v52 == ++v26 )
              goto LABEL_54;
          }
          if ( (unsigned int)v26 < v52 )
          {
            v57 = v87 + v86 - v26;
            if ( v91 )
            {
              v88 = (char *)sub_6F773A50(v65, v57 + 1, &v75);
              v27 = v75;
              if ( v75 )
                goto LABEL_55;
              i = v57;
            }
            else
            {
              v92 = 1;
              v88 = v86;
              i = v87 + v86 - v26;
              v86 = 0;
              v87 = 0;
            }
            if ( v52 <= (unsigned int)(v26 + 3)
              || (unsigned __int8)(*v26 - 48) > 9u && (unsigned __int8)((*v26 & 0xDF) - 65) > 5u
              || (v58 = v26[1], (unsigned __int8)(v58 - 48) > 9u) && (unsigned __int8)((v58 & 0xDF) - 65) > 5u
              || (v59 = v26[2], (unsigned __int8)(v59 - 48) > 9u) && (unsigned __int8)((v59 & 0xDF) - 65) > 5u
              || (v60 = v26[3], (unsigned __int8)(v60 - 48) > 9u) && (unsigned __int8)((v60 & 0xDF) - 65) > 5u )
            {
              memmove(v88, v26, v57);
            }
            else
            {
              v77 = v26;
              (*(void (__cdecl **)(int *, void *, int, int *, _DWORD))(*(_DWORD *)(v63 + 4) + 24))(
                (int *)&v77,
                v88,
                i,
                &v76,
                0);
              v30 = v88;
              i = v76;
              v88[v76] = 0;
            }
LABEL_67:
            v62 = 55665;
            v61 = i;
            (*(void (__fastcall **)(int, void *))(v63 + 16))(v31, v30);
            if ( (unsigned int)i > 3 )
            {
              *v88 = 32;
              v88[1] = 32;
              v88[2] = 32;
              v88[3] = 32;
              v78 = v88;
              v77 = v88;
              v79 = &v88[i];
              v74 = v75;
              if ( v75 )
                goto LABEL_5;
              sub_6F7BBC20((int)v88, (int)&v77, i);
              v74 = v32;
              if ( v32 )
                goto LABEL_5;
              v33 = *(_DWORD *)(v1 + 528);
              *(_BYTE *)(v1 + 176) &= 0xFEu;
              if ( !v33 )
                goto LABEL_114;
              v34 = *(_DWORD *)(v33 + 416);
              if ( v34 && v34 != *(_DWORD *)(v33 + 4) )
                *(_DWORD *)(v33 + 416) = 0;
              if ( *(_DWORD *)v33 )
              {
                v35 = *(_DWORD *)(v33 + 4);
                if ( v35 )
                  goto LABEL_156;
              }
              sub_6F7B9AA0(*(_DWORD *)(v1 + 100), (int *)(v1 + 528));
              v33 = *(_DWORD *)(v1 + 528);
              if ( !v33 )
              {
LABEL_114:
                *(_DWORD *)(v1 + 540) = 0;
LABEL_86:
                v64 = v98;
                *(_DWORD *)(v1 + 416) = v98;
                if ( v111 )
                {
                  v111 = 0;
                  *(_DWORD *)(v1 + 404) = v109;
                  *(_DWORD *)(v1 + 392) = v110;
                  *(_DWORD *)(v1 + 408) = v112;
                  *(_DWORD *)(v1 + 412) = v113;
                }
                if ( !*(_DWORD *)(*(_DWORD *)(v1 + 128) + 48) && !v103 )
                  v74 = 3;
                v18 = *(_DWORD *)(v1 + 368) == 1;
                v103 = 0;
                *(_DWORD *)(v1 + 396) = v102;
                *(_DWORD *)(v1 + 424) = v104;
                *(_DWORD *)(v1 + 428) = v105;
                v37 = v99;
                v99 = 0;
                *(_DWORD *)(v1 + 400) = v37;
                v38 = v100;
                v100 = 0;
                *(_DWORD *)(v1 + 420) = v38;
                if ( v18 )
                {
                  v72 = v95;
                  if ( v95 <= 0 )
                  {
                    v73 = 0;
                  }
                  else
                  {
                    v66 = 1;
                    v73 = 0;
                    v70 = v1;
                    do
                    {
                      *(_WORD *)(*(_DWORD *)(v70 + 384) + 2 * (v66 + 0x7FFFFFFF)) = 0;
                      *(_DWORD *)(*(_DWORD *)(v70 + 388) + 4 * (v66 + 0x3FFFFFFF)) = ".notdef";
                      v39 = *(const char **)(v96 + 4 * (v66 + 0x3FFFFFFF));
                      if ( !v39 || v64 <= 0 )
                        goto LABEL_106;
                      v40 = 0;
                      v41 = *(_DWORD *)(v70 + 420);
                      while ( 1 )
                      {
                        v42 = *(_BYTE **)(v41 + 4 * v40);
                        v43 = strcmp(v39, *(const char **)(v41 + 4 * v40));
                        v44 = v43 == 0;
                        if ( !v43 )
                          break;
                        if ( v64 == ++v40 )
                          goto LABEL_106;
                      }
                      v45 = 8;
                      *(_WORD *)(*(_DWORD *)(v70 + 384) + 2 * (v66 + 0x7FFFFFFF)) = v40;
                      v46 = v42;
                      *(_DWORD *)(*(_DWORD *)(v70 + 388) + 4 * (v66 + 0x3FFFFFFF)) = v42;
                      v47 = ".notdef";
                      do
                      {
                        if ( !v45 )
                          break;
                        v44 = *v47++ == *v46++;
                        --v45;
                      }
                      while ( v44 );
                      if ( v44 )
                      {
LABEL_106:
                        v48 = v66;
                      }
                      else
                      {
                        v48 = v66;
                        if ( v73 <= v66 - 1 )
                          v73 = v66;
                      }
                      ++v66;
                    }
                    while ( v48 < v72 );
                    v1 = v70;
                  }
                  *(_DWORD *)(v1 + 376) = 0;
                  *(_DWORD *)(v1 + 380) = v73;
                  *(_DWORD *)(v1 + 372) = v93;
                }
                goto LABEL_5;
              }
              v35 = *(_DWORD *)(v33 + 4);
              if ( v35 )
              {
LABEL_156:
                if ( !*(_BYTE *)(v33 + 88)
                  || v35 > 1
                  && (!*(_BYTE *)(v33 + 100)
                   || v35 != 2 && (!*(_BYTE *)(v33 + 112) || v35 != 3 && !*(_BYTE *)(v33 + 124))) )
                {
                  sub_6F7B9AA0(*(_DWORD *)(v1 + 100), (int *)(v1 + 528));
                  if ( !*(_DWORD *)(v1 + 528) )
                    goto LABEL_114;
                }
              }
              v36 = *(_DWORD *)(v1 + 540);
              if ( v36 )
              {
                *(_DWORD *)(v1 + 544) = sub_6F773B30(*(_DWORD *)(v1 + 100), 4, 0, v36, 0, &v74);
                if ( v74 )
                {
                  *(_DWORD *)(v1 + 540) = 0;
                  goto LABEL_5;
                }
              }
              goto LABEL_86;
            }
          }
        }
LABEL_54:
        v27 = 3;
LABEL_55:
        v74 = v27;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v50 = (char *)(*(_DWORD *)v3 + *(_DWORD *)(v3 + 8));
    v87 = v23;
    v91 = 1;
    v86 = v50;
    v75 = sub_6F772040(v3, v23);
    if ( !v75 )
    {
      v9 = v87;
      v25 = v87;
      goto LABEL_52;
    }
  }
LABEL_3:
  if ( v91 )
  {
    v74 = v75;
    goto LABEL_5;
  }
  sub_6F773D90(v4, (int)v86);
  v86 = 0;
  v74 = v75;
  if ( !v75 )
  {
    v9 = v87;
    v10 = 0;
    goto LABEL_20;
  }
LABEL_5:
  if ( v97 )
    v97(&v94, v61, v62);
  if ( v106 )
    v106(&v102, v61, v62);
  if ( v101 )
    v101(&v99, v61, v62);
  if ( v108 )
    v108(&v107, v61, v62);
  if ( v114 )
    v114(&v110, v61, v62);
  v7 = v81;
  sub_6F773D90(v81, (int)v88);
  v88 = 0;
  if ( !v91 )
  {
    sub_6F773D90(v7, (int)v86);
    v86 = 0;
  }
  v82(&v77);
  return v74;
}
