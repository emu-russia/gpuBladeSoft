int __cdecl sub_6F7BFAB0(int a1, int a2, signed int a3)
{
  int v3; // ebx@1
  int v4; // esi@1
  int v5; // ebp@1
  signed int v6; // edx@1
  _DWORD *v7; // eax@3
  _DWORD *v8; // esi@3
  signed int v10; // eax@5
  unsigned int v11; // ecx@5
  int v12; // esi@14
  int v13; // eax@14
  bool v14; // zf@14
  char *v15; // eax@20
  int v16; // edx@20
  char *v17; // edi@20
  __int16 v18; // ax@21
  signed int v19; // ecx@21
  signed int v20; // edx@21
  signed int v21; // eax@21
  int v22; // eax@25
  int v23; // edx@25
  signed int v24; // eax@25
  signed int v25; // edx@25
  int v26; // eax@26
  int v27; // eax@32
  int v28; // edx@32
  unsigned int v29; // edi@33
  unsigned int v30; // eax@33
  int v31; // esi@35
  int v32; // edi@35
  int v33; // edx@39
  int v34; // edi@42
  int v35; // esi@42
  int v36; // ecx@45
  signed int v37; // eax@50
  size_t v38; // edi@53
  void *v39; // eax@53
  int v40; // edx@53
  const char *v41; // ST28_4@54
  size_t v42; // eax@54
  char *v43; // eax@54
  int v44; // eax@55
  const char *v45; // eax@56
  __int16 v46; // ax@60
  __int16 v47; // cx@60
  unsigned __int16 v48; // ax@65
  __int16 v49; // di@67
  int v50; // ecx@84
  int v51; // edi@91
  void *v52; // eax@95
  _DWORD *v53; // edi@98
  int v54; // edi@98
  int *v55; // edx@101
  unsigned __int16 v56; // di@101
  int v57; // ebx@114
  unsigned int v58; // ebx@114
  int v59; // edi@121
  unsigned int v60; // edi@121
  unsigned __int16 i; // bx@123
  unsigned int *v62; // eax@139
  signed int *v63; // [sp+24h] [bp-C8h]@3
  __int16 v64; // [sp+24h] [bp-C8h]@64
  int *v65; // [sp+24h] [bp-C8h]@103
  signed int v66; // [sp+28h] [bp-C4h]@23
  unsigned __int16 v67; // [sp+28h] [bp-C4h]@91
  unsigned __int16 v68; // [sp+28h] [bp-C4h]@116
  signed int v69; // [sp+2Ch] [bp-C0h]@25
  unsigned __int16 v70; // [sp+2Ch] [bp-C0h]@109
  unsigned int v71; // [sp+30h] [bp-BCh]@109
  int v72; // [sp+38h] [bp-B4h]@116
  int v73; // [sp+3Ch] [bp-B0h]@109
  int v74; // [sp+40h] [bp-ACh]@1
  __int16 v75; // [sp+46h] [bp-A6h]@40
  unsigned __int16 v76; // [sp+48h] [bp-A4h]@5
  __int16 v77; // [sp+4Ah] [bp-A2h]@6
  unsigned __int16 v78; // [sp+4Ch] [bp-A0h]@62
  unsigned __int16 v79; // [sp+4Eh] [bp-9Eh]@63
  int v80; // [sp+50h] [bp-9Ch]@112
  int v81; // [sp+54h] [bp-98h]@113
  char v82; // [sp+58h] [bp-94h]@119
  int v83; // [sp+5Ch] [bp-90h]@120
  char v84; // [sp+60h] [bp-8Ch]@126
  int v85; // [sp+64h] [bp-88h]@131
  char v86; // [sp+68h] [bp-84h]@108
  unsigned __int16 v87; // [sp+74h] [bp-78h]@110
  unsigned __int16 v88; // [sp+76h] [bp-76h]@110
  char v89; // [sp+78h] [bp-74h]@115
  unsigned __int16 v90; // [sp+84h] [bp-68h]@117
  unsigned __int16 v91; // [sp+86h] [bp-66h]@117
  char v92; // [sp+88h] [bp-64h]@122
  unsigned __int16 v93; // [sp+94h] [bp-58h]@124
  unsigned __int16 v94; // [sp+96h] [bp-56h]@124
  int v95; // [sp+98h] [bp-54h]@132
  unsigned int v96; // [sp+9Ch] [bp-50h]@140
  int v97; // [sp+A8h] [bp-44h]@2
  __int16 v98; // [sp+ACh] [bp-40h]@99
  unsigned __int16 v99; // [sp+AEh] [bp-3Eh]@102
  int v100; // [sp+B0h] [bp-3Ch]@100
  int v101; // [sp+B4h] [bp-38h]@104
  int v102; // [sp+BCh] [bp-30h]@27
  int v103; // [sp+C0h] [bp-2Ch]@27
  int v104; // [sp+C4h] [bp-28h]@27
  unsigned int v105; // [sp+CCh] [bp-20h]@107

  v3 = a2;
  v4 = *(_DWORD *)(a2 + 104);
  v5 = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(a2 + 132) = 0;
  v6 = sub_6F771FF0(v4, 0);
  v74 = v6;
  if ( v6 )
    goto LABEL_2;
  v6 = sub_6F7728E0(v4, (int)&unk_6FB6ADEC, (int)&v75);
  if ( v6 )
    goto LABEL_2;
  v74 = 2;
  v6 = 2;
  if ( v75 == 23117 )
  {
    v10 = sub_6F771FF0(v4, v76);
    LOBYTE(v11) = 0;
    v6 = v10;
    v74 = v10;
    if ( v10 )
      goto LABEL_46;
    v6 = sub_6F7728E0(v4, (int)&unk_6FB6ADD4, (int)&v77);
    LOBYTE(v11) = 0;
    if ( v6 )
      goto LABEL_46;
    v74 = 2;
    if ( v77 == 17742 )
    {
      v6 = sub_6F771FF0(v4, v76 + v78);
      v74 = v6;
      LOBYTE(v11) = 0;
      if ( v6 )
        goto LABEL_46;
      v6 = sub_6F772380(v4, v79 - v78);
      v74 = v6;
      LOBYTE(v11) = 0;
      if ( v6 )
        goto LABEL_46;
      v64 = sub_6F7724F0(v4);
      while ( 1 )
      {
        v49 = sub_6F7724F0(v4);
        if ( !v49 )
        {
          sub_6F772460(v4);
          goto LABEL_69;
        }
        v48 = sub_6F7724F0(v4);
        if ( v49 == -32760 )
          break;
        *(_DWORD *)(v4 + 32) += 12 * v48 + 4;
      }
      v67 = v48;
      v51 = sub_6F7720A0(v4) + *(_DWORD *)(v4 + 32) - *(_DWORD *)(v4 + 36) + 4;
      sub_6F772460(v4);
      if ( v51 == 0 || v67 == 0 || 118 * (unsigned int)v67 > *(_DWORD *)(v4 + 4) )
        goto LABEL_69;
      *(_DWORD *)a2 = v67;
      if ( a3 >= v67 )
      {
LABEL_81:
        LOBYTE(v11) = 0;
        v6 = 6;
        goto LABEL_46;
      }
      if ( a3 < 0 )
      {
        v6 = v74;
        LOBYTE(v11) = v74 == 0;
        goto LABEL_46;
      }
      v52 = sub_6F773A50(v5, 172, &v74);
      v6 = v74;
      *(_DWORD *)(a2 + 132) = v52;
      LOBYTE(v11) = 0;
      if ( v6 )
        goto LABEL_46;
      v74 = sub_6F771FF0(v4, 12 * a3 + v51);
      if ( v74 || (v74 = sub_6F772380(v4, 0xCu)) != 0 )
      {
LABEL_11:
        v6 = v74;
        if ( v74 )
          goto LABEL_42;
        v97 = 0;
        if ( a3 < 0 )
          return v6;
        goto LABEL_13;
      }
      v53 = *(_DWORD **)(a2 + 132);
      *v53 = (unsigned __int16)sub_6F7724F0(v4) << v64;
      v54 = *(_DWORD *)(a2 + 132);
      *(_DWORD *)(v54 + 164) = (unsigned __int16)sub_6F7724F0(v4) << v64;
      *(_DWORD *)(v4 + 32) += 8;
      sub_6F772460(v4);
      v74 = sub_6F7BF860(*(unsigned int **)(a2 + 132), v4);
    }
    else if ( v77 == 17744 )
    {
      v74 = sub_6F771FF0(v4, v76);
      if ( !v74 )
      {
        v74 = sub_6F7728E0(v4, (int)&unk_6FB6ADA0, (int)&v97);
        if ( !v74 )
        {
          if ( v97 == 17744 && v98 == 332 && v100 == 17498336 )
          {
            v55 = &v102;
            *(_DWORD *)a2 = 0;
            v56 = 0;
            while ( v56 < v99 )
            {
              v65 = v55;
              v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD80, (int)v55);
              if ( v74 )
                goto LABEL_85;
              if ( v101 == v104 )
              {
                v74 = sub_6F771FF0(v4, v105);
                if ( !v74 )
                {
                  v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD60, (int)&v86);
                  if ( !v74 )
                  {
                    v70 = 0;
                    v71 = v105;
                    v73 = v105 + 16;
                    while ( 1 )
                    {
                      if ( v70 >= v87 + v88 )
                      {
                        v3 = a2;
                        goto LABEL_9;
                      }
                      v74 = sub_6F771FF0(v4, v73 + 8 * v70);
                      if ( v74 )
                        break;
                      v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD50, (int)&v80);
                      if ( v74 )
                        break;
                      if ( v81 >= 0 )
                        goto LABEL_136;
                      v57 = v81 & 0x7FFFFFFF;
                      v81 = v57;
                      v58 = v105 + v57;
                      v74 = sub_6F771FF0(v4, v58);
                      if ( v74 )
                        break;
                      v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD60, (int)&v89);
                      if ( v74 )
                        break;
                      v68 = 0;
                      v72 = v58 + 16;
LABEL_117:
                      if ( v68 < v90 + v91 )
                      {
                        v74 = sub_6F771FF0(v4, v72 + 8 * v68);
                        if ( !v74 )
                        {
                          v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD50, (int)&v82);
                          if ( !v74 )
                          {
                            if ( v83 >= 0 )
                            {
LABEL_136:
                              v3 = a2;
                              goto LABEL_90;
                            }
                            v59 = v83 & 0x7FFFFFFF;
                            v83 = v59;
                            v60 = v105 + v59;
                            v74 = sub_6F771FF0(v4, v60);
                            if ( !v74 )
                            {
                              v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD60, (int)&v92);
                              if ( !v74 )
                              {
                                for ( i = 0; ; ++i )
                                {
                                  if ( i >= v93 + v94 )
                                  {
                                    ++v68;
                                    goto LABEL_117;
                                  }
                                  v74 = sub_6F771FF0(v4, v60 + 16 + 8 * i);
                                  if ( v74 )
                                    goto LABEL_137;
                                  v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD50, (int)&v84);
                                  if ( v74 )
                                    goto LABEL_137;
                                  if ( v83 < 0 )
                                    goto LABEL_136;
                                  if ( v80 == 8 )
                                  {
                                    v74 = sub_6F771FF0(v4, v85 + v71);
                                    if ( v74 )
                                      goto LABEL_137;
                                    v74 = sub_6F7728E0(v4, (int)&unk_6FB6AD38, (int)&v95);
                                    if ( v74 )
                                      goto LABEL_137;
                                    if ( a3 == *(_DWORD *)a2 )
                                    {
                                      v62 = (unsigned int *)sub_6F773A50(v5, 172, &v74);
                                      v14 = v74 == 0;
                                      *(_DWORD *)(a2 + 132) = v62;
                                      if ( !v14 )
                                        goto LABEL_137;
                                      *v62 = v105 + v95 - v104;
                                      v62[41] = v96;
                                      v74 = sub_6F7BF860(v62, v4);
                                      if ( v74 )
                                      {
                                        v3 = a2;
                                        goto LABEL_11;
                                      }
                                    }
                                    ++*(_DWORD *)a2;
                                  }
                                }
                              }
                            }
                          }
                        }
                        break;
                      }
                      ++v70;
                    }
LABEL_137:
                    v3 = a2;
                  }
                }
                goto LABEL_85;
              }
              ++v56;
              v55 = v65;
            }
          }
LABEL_90:
          v74 = 3;
        }
      }
LABEL_85:
      v6 = v74;
      LOBYTE(v50) = v74 == 0;
      v11 = ((unsigned int)a3 >> 31) & v50;
LABEL_46:
      v97 = v6;
      if ( (_BYTE)v11 )
        return v6;
      if ( (_BYTE)v6 != 2 )
      {
        if ( v6 )
          goto LABEL_35;
LABEL_13:
        v63 = &v97;
LABEL_14:
        v12 = *(_DWORD *)(v3 + 132);
        *(_DWORD *)(v3 + 4) = a3;
        v13 = *(_DWORD *)(v3 + 8);
        v14 = *(_WORD *)(v12 + 100) == *(_WORD *)(v12 + 102);
        *(_DWORD *)(v3 + 8) |= 0x12u;
        if ( v14 )
          *(_DWORD *)(v3 + 8) = v13 | 0x16;
        if ( *(_BYTE *)(v12 + 86) )
          *(_DWORD *)(v3 + 12) |= 1u;
        if ( *(_WORD *)(v12 + 90) > 0x31Fu )
          *(_DWORD *)(v3 + 12) |= 2u;
        v15 = sub_6F773B30(v5, 16, 0, 1, 0, v63);
        v16 = v97;
        v17 = v15;
        *(_DWORD *)(v3 + 32) = v15;
        if ( v16 )
          goto LABEL_35;
        v18 = *(_WORD *)(v12 + 100);
        *(_DWORD *)(v3 + 28) = 1;
        v19 = 72;
        v20 = *(_WORD *)(v12 + 78);
        *((_WORD *)v17 + 1) = v18;
        *(_WORD *)v17 = *(_WORD *)(v12 + 96) + *(_WORD *)(v12 + 84);
        v21 = *(_WORD *)(v12 + 74) << 6;
        v14 = *(_WORD *)(v12 + 78) == 0;
        *((_DWORD *)v17 + 1) = v21;
        if ( v14 )
          v20 = 72;
        v66 = v20;
        if ( *(_WORD *)(v12 + 76) )
          v19 = *(_WORD *)(v12 + 76);
        v69 = v19;
        v22 = sub_6F7C9420(v21, v19, 72);
        v23 = *(_WORD *)(v12 + 96);
        v24 = (v22 + 32) & 0xFFFFFFC0;
        *((_DWORD *)v17 + 3) = v24;
        v25 = v23 << 6;
        if ( v24 > v25 )
        {
          *((_DWORD *)v17 + 3) = v25;
          v26 = sub_6F7C9420(v25, 72, v69);
          *((_DWORD *)v17 + 1) = v26;
        }
        else
        {
          v26 = *((_DWORD *)v17 + 1);
        }
        *((_DWORD *)v17 + 2) = (sub_6F7C9420(v26, v66, 72) + 32) & 0xFFFFFFC0;
        v103 = 0;
        v104 = 0;
        v102 = v3;
        if ( *(_BYTE *)(v12 + 92) == 77 )
        {
          v103 = 1634889070;
          LOWORD(v104) = 1;
        }
        v97 = sub_6F76D420((int)&unk_6FB6AC60, 0, (int)&v102, 0);
        if ( v97 )
          goto LABEL_35;
        if ( *(_DWORD *)(v3 + 36) )
          *(_DWORD *)(v3 + 92) = **(_DWORD **)(v3 + 40);
        v27 = *(_BYTE *)(v12 + 105);
        v28 = *(_BYTE *)(v12 + 104);
        if ( (unsigned __int8)v27 < (unsigned __int8)v28
          || (v29 = *(_DWORD *)(v12 + 8), *(_DWORD *)(v3 + 16) = v27 - v28 + 2, v30 = *(_DWORD *)(v12 + 116), v30 >= v29) )
        {
          v97 = 3;
          goto LABEL_35;
        }
        v38 = v29 - v30;
        v39 = sub_6F773A50(v5, v38 + 1, v63);
        v40 = v97;
        *(_DWORD *)(v12 + 168) = v39;
        if ( v40 )
          goto LABEL_35;
        memcpy(v39, (const void *)(*(_DWORD *)(v12 + 160) + *(_DWORD *)(v12 + 116)), v38);
        *(_BYTE *)(*(_DWORD *)(v12 + 168) + v38) = 0;
        v41 = *(const char **)(v12 + 168);
        v42 = strlen(v41);
        v43 = sub_6F773B30(v5, 1, v38, v42 + 1, (char *)v41, v63);
        v6 = v97;
        *(_DWORD *)(v12 + 168) = v43;
        if ( v6 )
          goto LABEL_35;
        *(_DWORD *)(v3 + 20) = v43;
        v44 = *(_DWORD *)(v3 + 12);
        *(_DWORD *)(v3 + 24) = "Regular";
        if ( v44 & 2 )
        {
          v14 = (v44 & 1) == 0;
          v45 = "Bold";
          if ( !v14 )
            v45 = "Bold Italic";
          *(_DWORD *)(v3 + 24) = v45;
        }
        else if ( v44 & 1 )
        {
          *(_DWORD *)(v3 + 24) = "Italic";
        }
        return v6;
      }
LABEL_3:
      v63 = &v97;
      v7 = sub_6F773A50(v5, 172, &v97);
      v6 = v97;
      v8 = v7;
      *(_DWORD *)(v3 + 132) = v7;
      if ( v6 )
        return v6;
      *(_DWORD *)v3 = 1;
      *v7 = 0;
      v7[41] = *(_DWORD *)(a1 + 4);
      v37 = sub_6F771FF0(a1, 0);
      if ( !v37 )
      {
        v37 = sub_6F7728E0(a1, (int)&unk_6FB6ACA0, (int)(v8 + 1));
        if ( !v37 )
        {
          v46 = *((_WORD *)v8 + 2);
          v47 = *((_WORD *)v8 + 2);
          HIBYTE(v47) &= 0xFEu;
          if ( v47 != 512 )
          {
LABEL_61:
            v37 = 2;
            goto LABEL_51;
          }
          if ( v46 == 768 )
          {
            if ( v8[2] <= 0x93u )
              goto LABEL_61;
          }
          else
          {
            if ( v8[2] <= 0x75u )
              goto LABEL_61;
            if ( v46 == 512 )
            {
              v8[33] = 0;
              *((_WORD *)v8 + 68) = 0;
              *((_WORD *)v8 + 69) = 0;
              *((_WORD *)v8 + 70) = 0;
              *((_WORD *)v8 + 71) = 0;
            }
          }
          if ( *((_BYTE *)v8 + 72) & 1 )
            goto LABEL_61;
          v37 = sub_6F771FF0(a1, *v8);
          if ( !v37 )
          {
            v97 = sub_6F772240(a1, v8[2], v8 + 40);
            if ( v97 )
              goto LABEL_35;
            v6 = 0;
            if ( a3 > 0 )
            {
              v97 = 6;
              goto LABEL_35;
            }
            if ( a3 )
              return v6;
            goto LABEL_14;
          }
        }
      }
LABEL_51:
      v97 = v37;
      goto LABEL_35;
    }
LABEL_9:
    if ( *(_DWORD *)v3 )
    {
      if ( a3 < *(_DWORD *)v3 )
        goto LABEL_11;
      goto LABEL_81;
    }
LABEL_69:
    LOBYTE(v11) = 0;
    v6 = 3;
    goto LABEL_46;
  }
LABEL_42:
  v34 = *(_DWORD *)(v3 + 132);
  v35 = *(_DWORD *)(v3 + 100);
  if ( v34 )
  {
    if ( *(_DWORD *)(v34 + 160) )
      sub_6F772340(*(_DWORD *)(v3 + 104), (_DWORD *)(v34 + 160));
    sub_6F773D90(v35, *(_DWORD *)(v34 + 168));
    *(_DWORD *)(v34 + 168) = 0;
    sub_6F773D90(v35, v34);
    v6 = v74;
    *(_DWORD *)(v3 + 132) = 0;
    LOBYTE(v36) = v6 == 0;
    v11 = ((unsigned int)a3 >> 31) & v36;
    goto LABEL_46;
  }
LABEL_2:
  v97 = v6;
  if ( (_BYTE)v6 == 2 )
    goto LABEL_3;
LABEL_35:
  v31 = *(_DWORD *)(v3 + 132);
  v32 = *(_DWORD *)(v3 + 100);
  if ( v31 )
  {
    if ( *(_DWORD *)(v31 + 160) )
      sub_6F772340(*(_DWORD *)(v3 + 104), (_DWORD *)(v31 + 160));
    sub_6F773D90(v32, *(_DWORD *)(v31 + 168));
    *(_DWORD *)(v31 + 168) = 0;
    sub_6F773D90(v32, v31);
    *(_DWORD *)(v3 + 132) = 0;
  }
  sub_6F773D90(v32, *(_DWORD *)(v3 + 32));
  v33 = v97;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  return v33;
}
