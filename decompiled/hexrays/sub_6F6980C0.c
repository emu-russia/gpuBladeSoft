void __usercall sub_6F6980C0(_DWORD *a1@<eax>)
{
  const CHAR *v1; // eax@1
  int i; // eax@2
  unsigned __int8 v3; // cf@3
  bool v4; // zf@3
  const char *v5; // eax@3
  const char *v6; // edi@3
  signed int v7; // ecx@3
  const char *v8; // esi@3
  char v9; // bl@6
  bool v10; // cf@6
  bool v11; // zf@6
  const char *v12; // edi@7
  signed int v13; // ecx@7
  const char *v14; // esi@7
  int v15; // eax@11
  int *v16; // ebx@13
  int *v17; // eax@13
  int v18; // ebp@15
  char *v19; // ebp@27
  int v20; // edi@28
  int v21; // eax@28
  unsigned int v22; // ecx@29
  unsigned int v23; // ebp@33
  int v24; // ST0C_4@34
  signed int v25; // esi@34
  int *v26; // ebx@36
  int *v27; // esi@42
  int v28; // eax@45
  int v29; // edi@53
  int v30; // ebx@53
  char *v31; // ecx@53
  int v32; // ebp@55
  unsigned int *v33; // eax@55
  int v34; // edx@55
  unsigned int *v35; // ebx@55
  int v36; // eax@55
  unsigned int v37; // eax@55
  void *v38; // eax@57
  unsigned int v39; // edx@57
  int *v40; // ebp@57
  unsigned int v41; // eax@58
  unsigned int v42; // edi@58
  unsigned int v43; // edx@60
  int v44; // eax@61
  int v45; // edi@64
  int *v46; // esi@65
  unsigned int v47; // ebx@65
  unsigned int v48; // ebp@67
  size_t v49; // eax@67
  int v50; // eax@70
  int v51; // ebp@74
  int v52; // edi@75
  const void *v53; // ST0C_4@79
  int v54; // edi@81
  int v55; // ecx@81
  int v56; // esi@81
  void *v57; // eax@82
  int v58; // edx@82
  int v59; // ecx@82
  _DWORD *v60; // esi@82
  _DWORD *v61; // eax@87
  int v62; // edx@87
  int v63; // ecx@87
  int v64; // ST28_4@88
  int *v65; // edi@88
  int v66; // eax@88
  int *v67; // edx@88
  bool v68; // al@91
  unsigned int v69; // eax@94
  int v70; // eax@97
  int *v71; // ST28_4@106
  int v72; // [sp+Ch] [bp-E4h]@11
  int v73; // [sp+Ch] [bp-E4h]@55
  void *v74; // [sp+18h] [bp-D8h]@1
  char *v75; // [sp+1Ch] [bp-D4h]@27
  const void **v76; // [sp+20h] [bp-D0h]@1
  char *v77; // [sp+24h] [bp-CCh]@65
  int v78; // [sp+24h] [bp-CCh]@82
  unsigned int *v79; // [sp+28h] [bp-C8h]@65
  int v80; // [sp+28h] [bp-C8h]@82
  int v81; // [sp+2Ch] [bp-C4h]@82
  int v82; // [sp+30h] [bp-C0h]@97
  int *v83; // [sp+38h] [bp-B8h]@1
  int v84; // [sp+3Ch] [bp-B4h]@1
  int v85; // [sp+40h] [bp-B0h]@1
  int *v86; // [sp+50h] [bp-A0h]@13
  int v87; // [sp+54h] [bp-9Ch]@15
  unsigned int v88; // [sp+58h] [bp-98h]@13
  int v89; // [sp+5Ch] [bp-94h]@34
  int v90; // [sp+60h] [bp-90h]@34
  char *v91; // [sp+68h] [bp-88h]@11
  unsigned int v92; // [sp+6Ch] [bp-84h]@65
  char v93; // [sp+70h] [bp-80h]@23
  int *v94; // [sp+7Ch] [bp-74h]@45
  int *v95; // [sp+80h] [bp-70h]@11
  int v96; // [sp+84h] [bp-6Ch]@13
  int v97; // [sp+88h] [bp-68h]@11
  int v98; // [sp+8Ch] [bp-64h]@53
  int v99; // [sp+90h] [bp-60h]@53
  char *v100; // [sp+94h] [bp-5Ch]@49
  char *v101; // [sp+98h] [bp-58h]@11
  char v102; // [sp+A0h] [bp-50h]@21
  char v103; // [sp+B0h] [bp-40h]@25
  __int16 v104; // [sp+B6h] [bp-3Ah]@26

  v76 = (const void **)a1;
  v1 = (const CHAR *)*a1;
  v83 = &v85;
  v84 = 0;
  LOBYTE(v85) = 0;
  v74 = sub_6F8A21E0(v1);
  if ( v74 )
  {
LABEL_2:
    for ( i = sub_6F8A23C0((int)v74); i; i = sub_6F8A23C0((int)v74) )
    {
      v3 = __CFADD__(i, 8);
      v4 = i == -8;
      v5 = (const char *)(i + 8);
      v6 = ".";
      v7 = 2;
      v8 = v5;
      do
      {
        if ( !v7 )
          break;
        v3 = (const unsigned __int8)*v8 < *v6;
        v4 = *v8++ == *v6++;
        --v7;
      }
      while ( v4 );
      v9 = !(v3 | v4) - v3;
      v10 = 0;
      v11 = v9 == 0;
      if ( !v9 )
        goto LABEL_2;
      v12 = "..";
      v13 = 3;
      v14 = v5;
      do
      {
        if ( !v13 )
          break;
        v10 = (const unsigned __int8)*v14 < *v12;
        v11 = *v14++ == *v12++;
        --v13;
      }
      while ( v11 );
      if ( (!v10 && !v11) == v10 )
        goto LABEL_2;
      sub_6F695280(&v91, v5);
      sub_6F695280(&v101, "/");
      v15 = sub_6F93A0E0((int)&v101, 0, 0, *v76, (size_t)v76[1]);
      v95 = &v97;
      if ( *(_DWORD *)v15 == v15 + 8 )
      {
        v29 = *(_DWORD *)(v15 + 12);
        v30 = *(_DWORD *)(v15 + 16);
        v31 = *(char **)(v15 + 20);
        v97 = *(_DWORD *)(v15 + 8);
        v98 = v29;
        v99 = v30;
        v100 = v31;
      }
      else
      {
        v95 = *(int **)v15;
        v97 = *(_DWORD *)(v15 + 8);
      }
      v16 = (int *)&v88;
      v96 = *(_DWORD *)(v15 + 4);
      *(_DWORD *)v15 = v15 + 8;
      *(_DWORD *)(v15 + 4) = 0;
      *(_BYTE *)(v15 + 8) = 0;
      sub_6F7544E0((int)&v86, (int)&v95, (int)&v91);
      v17 = v83;
      if ( (unsigned int *)v86 == &v88 )
      {
        sub_6F93C180((int)&v83, (int)&v86);
        v17 = v86;
      }
      else
      {
        if ( v83 == &v85 )
        {
          v83 = v86;
          v84 = v87;
          v85 = v88;
        }
        else
        {
          v18 = v85;
          v83 = v86;
          v84 = v87;
          v85 = v88;
          if ( v17 )
          {
            v86 = v17;
            v88 = v18;
            goto LABEL_17;
          }
        }
        v86 = (int *)&v88;
        v16 = (int *)&v88;
        v17 = (int *)&v88;
      }
LABEL_17:
      v87 = 0;
      *(_BYTE *)v17 = 0;
      if ( v86 != v16 )
        j_free_1(v86);
      if ( v95 != &v97 )
        j_free_1(v95);
      if ( v101 != &v102 )
        j_free_1(v101);
      if ( v91 != &v93 )
        j_free_1(v91);
      if ( sub_6F8A3890((int)v83, (int)&v103) < 0 )
        goto LABEL_2;
      if ( (v104 & 0xF000) == 0x4000 )
      {
        sub_6F695280(&v101, "/");
        sub_6F93BDA0((int)&v101, 0, 0, (int)v83);
        v94 = &v96;
        if ( *(_DWORD *)v28 == v28 + 8 )
        {
          v54 = *(_DWORD *)(v28 + 16);
          v55 = *(_DWORD *)(v28 + 20);
          v56 = *(_DWORD *)(v28 + 8);
          v97 = *(_DWORD *)(v28 + 12);
          v96 = v56;
          v98 = v54;
          v99 = v55;
        }
        else
        {
          v94 = *(int **)v28;
          v96 = *(_DWORD *)(v28 + 8);
        }
        v95 = *(int **)(v28 + 4);
        *(_DWORD *)v28 = v28 + 8;
        *(_DWORD *)(v28 + 4) = 0;
        *(_BYTE *)(v28 + 8) = 0;
        sub_6F6980C0(&v94);
        if ( v94 != &v96 )
          j_free_1(v94);
        if ( v100 != &v102 )
          j_free_1(v100);
        goto LABEL_2;
      }
      v19 = strdup((const char *)v83);
      v75 = v19;
      sub_6F7612A0(v19);
      sub_6F761630(v19, (const char *)&unk_6FB4D5C0);
      do
      {
        v20 = *(_DWORD *)v19;
        v19 += 4;
        v21 = ~v20 & (v20 - 16843009);
      }
      while ( !(v21 & 0x80808080) );
      v22 = (v21 & 0x80808080) >> 16;
      if ( v21 & 0x8080 )
        LOBYTE(v22) = v21 & 0x80;
      if ( !(v21 & 0x8080) )
        v19 += 2;
      v23 = &v19[-__CFADD__((_BYTE)v22, (_BYTE)v22) - 3] - v75;
      if ( v23 > 0x1F )
      {
        sub_6F695280(&v91, &v75[v23 - 32]);
        LOBYTE(v72) = 0;
        v95 = &v97;
        sub_6F93A6C0((int)&v95, v83, (_BYTE *)v83 + v84, v72);
        LOBYTE(v24) = 0;
        v86 = 0;
        v87 = 0;
        v88 = 0;
        v89 = 0;
        v90 = 0;
        v101 = &v102;
        sub_6F93A6C0((int)&v101, v95, (_BYTE *)v95 + v96, v24);
        v25 = sub_6F759860(&v86, (const char **)&v101);
        if ( v101 != &v102 )
          j_free_1(v101);
        v26 = v95;
        if ( v25 )
          goto LABEL_37;
        v73 = (int)v95;
        v32 = -1;
        nullsub_10();
        v33 = (unsigned int *)sub_6F961B60(0xCu);
        v34 = v87;
        v35 = v33;
        *v33 = v87;
        v36 = v88;
        v35[1] = v88;
        v37 = v34 * v36;
        if ( v37 < 0x20000000 )
          v32 = 4 * v37;
        v38 = sub_6F961B40(v32);
        v39 = v35[1];
        v40 = v86;
        v35[2] = (unsigned int)v38;
        if ( v39 )
        {
          v41 = *v35;
          v42 = 0;
          do
          {
            if ( v41 )
            {
              v43 = 0;
              do
              {
                v44 = v43++ + v42 * v41;
                *(_DWORD *)(v35[2] + 4 * v44) = v40[v44];
                v41 = *v35;
              }
              while ( *v35 > v43 );
              v39 = v35[1];
            }
            else if ( v39 <= ++v42 )
            {
              break;
            }
            ++v42;
          }
          while ( v42 < v39 );
        }
        v45 = dword_6FBBD7E4;
        if ( !dword_6FBBD7E4 )
          goto LABEL_113;
        v79 = v35;
        v46 = &dword_6FBBD7E0;
        v77 = v91;
        v47 = v92;
        do
        {
          while ( 1 )
          {
            v48 = *(_DWORD *)(v45 + 20);
            v49 = v47;
            if ( v48 <= v47 )
              v49 = *(_DWORD *)(v45 + 20);
            if ( !v49 || (v50 = memcmp(*(const void **)(v45 + 16), v77, v49)) == 0 )
              v50 = v48 - v47;
            if ( v50 >= 0 )
              break;
            v45 = *(_DWORD *)(v45 + 12);
            if ( !v45 )
              goto LABEL_74;
          }
          v46 = (int *)v45;
          v45 = *(_DWORD *)(v45 + 8);
        }
        while ( v45 );
LABEL_74:
        v35 = v79;
        v51 = (int)v46;
        if ( v46 == &dword_6FBBD7E0 )
        {
LABEL_113:
          v61 = sub_6F961B60(0x2Cu);
          v62 = v92;
          v51 = (int)v61;
          v61[4] = v61 + 6;
          LOBYTE(v73) = 0;
          v78 = (int)(v61 + 4);
          v81 = (int)(v61 + 6);
          sub_6F93A6C0((int)(v61 + 4), v91, &v91[v62], v73);
          v63 = dword_6FBBD7F0;
          *(_DWORD *)(v51 + 40) = 0;
          if ( !v63
            || (v64 = dword_6FBBD7EC, v65 = 0, v66 = sub_6F8C7600(dword_6FBBD7EC + 16, v78), v67 = (int *)v64, v66 >= 0) )
          {
            v65 = sub_6F68D640(v78);
          }
          goto LABEL_90;
        }
        v52 = (int)(v46 + 4);
        if ( sub_6F8C7600((int)&v91, (int)(v46 + 4)) >= 0 )
        {
LABEL_76:
          *(_DWORD *)(v51 + 40) = v35;
          v26 = v95;
LABEL_37:
          if ( v26 != &v97 )
            j_free_1(v26);
          if ( v91 != &v93 )
            j_free_1(v91);
          goto LABEL_41;
        }
        v57 = sub_6F961B60(0x2Cu);
        v58 = v92;
        v59 = (int)v57 + 16;
        v60 = v57;
        v80 = (int)v57;
        v57 = (char *)v57 + 24;
        v60[4] = v57;
        v81 = (int)v57;
        LOBYTE(v73) = 0;
        v78 = v59;
        sub_6F93A6C0(v59, v91, &v91[v58], v73);
        v60[10] = 0;
        if ( sub_6F8C7600(v78, v52) >= 0 )
        {
          if ( sub_6F8C7600(v52, v78) >= 0 )
          {
LABEL_84:
            if ( *(_DWORD *)(v80 + 16) != v81 )
              j_free_1(*(void **)(v80 + 16));
            j_free_1((void *)v80);
            goto LABEL_76;
          }
          if ( v51 == dword_6FBBD7EC )
          {
            v67 = (int *)v51;
            v51 = v80;
            goto LABEL_106;
          }
          v65 = (int *)sub_6F95AC00(v51);
          if ( sub_6F8C7600(v78, (int)(v65 + 4)) < 0 )
          {
            if ( *(_DWORD *)(v51 + 12) )
            {
              v51 = v80;
              v67 = v65;
LABEL_90:
              if ( !v67 )
              {
                v80 = v51;
                v51 = (int)v65;
                goto LABEL_84;
              }
LABEL_91:
              v68 = v65 != 0;
LABEL_92:
              if ( v67 == &dword_6FBBD7E0 || v68 )
              {
                LOBYTE(v69) = 1;
LABEL_95:
                sub_6F95C050(v69, v51, (int)v67, (int)&dword_6FBBD7E0);
                ++dword_6FBBD7F0;
                goto LABEL_76;
              }
              v52 = (int)(v67 + 4);
LABEL_106:
              v71 = v67;
              v69 = (unsigned int)sub_6F8C7600(v78, v52) >> 31;
              v67 = v71;
              goto LABEL_95;
            }
            v67 = (int *)v51;
LABEL_108:
            v51 = v80;
            v68 = 0;
            goto LABEL_92;
          }
LABEL_104:
          v51 = v80;
          v65 = sub_6F68D640(v78);
          goto LABEL_90;
        }
        if ( v51 != dword_6FBBD7E8 )
        {
          sub_6F95ABE0(v51);
          v82 = v70;
          if ( sub_6F8C7600(v70 + 16, v78) >= 0 )
            goto LABEL_104;
          v67 = (int *)v82;
          if ( !*(_DWORD *)(v82 + 12) )
            goto LABEL_108;
        }
        v65 = (int *)v51;
        v67 = (int *)v51;
        v51 = v80;
        goto LABEL_91;
      }
LABEL_41:
      free(v75);
    }
    sub_6F8A24D0((int)v74);
    v27 = v83;
    if ( v83 != &v85 )
      goto LABEL_43;
  }
  else
  {
    v53 = *v76;
    nullsub_10();
    v27 = v83;
    if ( v83 != &v85 )
    {
LABEL_43:
      j_free_1(v27);
      return;
    }
  }
}
