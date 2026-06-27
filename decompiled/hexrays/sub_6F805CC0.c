void *__cdecl sub_6F805CC0(int a1)
{
  int v1; // eax@3
  int v2; // edx@3
  int v3; // esi@3
  int v4; // edi@3
  int v5; // ebp@3
  int v6; // ecx@3
  int v7; // eax@3
  int v8; // edx@3
  signed int v9; // ecx@3
  int v10; // esi@3
  int v11; // edi@3
  int v12; // ebp@3
  int v13; // eax@3
  int v14; // edx@3
  int v15; // ebx@3
  size_t v16; // ST00_4@7
  size_t v17; // ebx@7
  void *v18; // eax@7
  unsigned int v19; // ebp@7
  int v20; // ST18_4@7
  char v21; // cl@7
  int v22; // ecx@7
  signed int v23; // ebp@21
  int v24; // edi@21
  unsigned int v25; // ecx@24
  unsigned int v26; // edx@26
  unsigned int v27; // edx@28
  int v28; // ebx@29
  unsigned int v29; // ecx@31
  unsigned int v30; // edx@33
  unsigned int v31; // edx@35
  int v32; // ebx@36
  unsigned int v33; // ecx@38
  unsigned int v34; // edx@40
  unsigned int v35; // edx@42
  int v36; // ebx@43
  unsigned int v37; // ecx@45
  unsigned int v38; // edx@47
  unsigned int v39; // edx@49
  int v40; // esi@50
  unsigned int v41; // edx@51
  unsigned int v42; // edx@55
  int v43; // ecx@56
  unsigned int v44; // ecx@58
  unsigned int v45; // ecx@60
  int v46; // ebx@61
  unsigned int v47; // ecx@62
  unsigned int v48; // ecx@65
  int v49; // ebx@66
  unsigned int v50; // edx@68
  unsigned int v51; // eax@70
  int v52; // esi@71
  void *v53; // edx@75
  void *v54; // eax@75
  void *v55; // ebp@75
  int v56; // esi@75
  int v57; // edi@76
  int v58; // ecx@76
  int v59; // edi@76
  int v60; // ebx@77
  unsigned int v62; // [sp+18h] [bp-A4h]@23
  unsigned int v63; // [sp+1Ch] [bp-A0h]@18
  void *v64; // [sp+20h] [bp-9Ch]@21
  void *v65; // [sp+24h] [bp-98h]@21
  unsigned int v66; // [sp+28h] [bp-94h]@23
  int v67; // [sp+2Ch] [bp-90h]@23
  unsigned int v68; // [sp+30h] [bp-8Ch]@17
  int v69; // [sp+34h] [bp-88h]@17
  int v70; // [sp+3Ch] [bp-80h]@20
  int v71; // [sp+48h] [bp-74h]@17
  int v72; // [sp+4Ch] [bp-70h]@17
  int v73; // [sp+50h] [bp-6Ch]@17
  int v74; // [sp+54h] [bp-68h]@17
  void *v75; // [sp+58h] [bp-64h]@2
  int v76; // [sp+5Ch] [bp-60h]@17
  int v77; // [sp+60h] [bp-5Ch]@3
  int v78; // [sp+64h] [bp-58h]@3
  int v79; // [sp+68h] [bp-54h]@3
  int v80; // [sp+6Ch] [bp-50h]@3
  int v81; // [sp+70h] [bp-4Ch]@3
  int v82; // [sp+74h] [bp-48h]@3
  int v83; // [sp+78h] [bp-44h]@3
  int v84; // [sp+7Ch] [bp-40h]@3
  int v85; // [sp+80h] [bp-3Ch]@3
  int v86; // [sp+84h] [bp-38h]@3
  int v87; // [sp+88h] [bp-34h]@3
  int v88; // [sp+8Ch] [bp-30h]@3
  int v89; // [sp+90h] [bp-2Ch]@3
  int v90; // [sp+94h] [bp-28h]@3
  int v91; // [sp+98h] [bp-24h]@3
  int v92; // [sp+9Ch] [bp-20h]@3

  if ( !a1 )
    return 0;
  v75 = malloc(0x2ACE0u);
  if ( !v75 )
  {
LABEL_87:
    free(v75);
    return 0;
  }
  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 20);
  v79 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 32);
  v77 = v1;
  v78 = v2;
  v7 = *(_DWORD *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 28);
  v85 = v6;
  v9 = *(_DWORD *)(a1 + 56);
  v80 = v3;
  v81 = v4;
  v10 = *(_DWORD *)(a1 + 36);
  v11 = *(_DWORD *)(a1 + 40);
  v82 = v5;
  v83 = v7;
  v12 = *(_DWORD *)(a1 + 44);
  v13 = *(_DWORD *)(a1 + 48);
  v84 = v8;
  v14 = *(_DWORD *)(a1 + 52);
  v15 = *(_DWORD *)(a1 + 60);
  v86 = v10;
  v87 = v11;
  v88 = v12;
  v89 = v13;
  v90 = v14;
  v91 = v9;
  v92 = v15;
  LOWORD(v77) = 515;
  BYTE2(v77) = 1;
  if ( v9 <= 63 )
  {
    if ( v9 < 0 )
    {
      v91 = 32;
      if ( v90 >= 0 )
        goto LABEL_6;
      goto LABEL_85;
    }
  }
  else
  {
    v91 = 63;
  }
  if ( v90 >= 0 )
    goto LABEL_6;
LABEL_85:
  v90 = 0;
LABEL_6:
  if ( sub_6F816350((int)v75, (int)&v77, 4u) < 0 )
    goto LABEL_87;
  v16 = *((_DWORD *)v75 + 62);
  v17 = 4 * v16;
  *((_DWORD *)v75 + 12893) = calloc(v16, 0x60u);
  *((_DWORD *)v75 + 12894) = calloc(*((_DWORD *)v75 + 54), 2u);
  v18 = malloc(v17);
  v19 = *((_DWORD *)v75 + 12);
  *((_DWORD *)v75 + 12895) = v18;
  v20 = *((_DWORD *)v75 + 31);
  v21 = ((v19 >> 1) ^ 1) & 1;
  *((_DWORD *)v75 + 12938) = 1 << v21;
  *((_DWORD *)v75 + 12939) = malloc(4 * (((unsigned int)(8 * (1 << v21) * 4 * v20) >> ((v19 & 1 ^ 1) + v21))
                                       + 4 * (1 << v21) * 4 * v20));
  *((_DWORD *)v75 + 12940) = sub_6F815010(64, *((_DWORD *)v75 + 30), 4);
  *((_DWORD *)v75 + 12943) = sub_6F815010(64, *((_DWORD *)v75 + 30), 4);
  *((_DWORD *)v75 + 12941) = sub_6F815010(64, *((_DWORD *)v75 + 38), 4);
  *((_DWORD *)v75 + 12944) = sub_6F815010(64, *((_DWORD *)v75 + 38), 4);
  *((_DWORD *)v75 + 12942) = sub_6F815010(64, *((_DWORD *)v75 + 46), 4);
  *((_DWORD *)v75 + 12945) = sub_6F815010(64, *((_DWORD *)v75 + 46), 4);
  sub_6F814630((int)v75);
  v22 = *((_DWORD *)v75 + 15);
  *((_BYTE *)v75 + 794) = 1;
  *((_DWORD *)v75 + 12898) = 1 << v22;
  *((_BYTE *)v75 + 795) = *((_DWORD *)v75 + 14);
  sub_6F80D1F0((int)v75 + 174904, (int)v75);
  sub_6F832710((int)v75 + 51552);
  if ( !*((_DWORD *)v75 + 12893)
    || !*((_DWORD *)v75 + 12894)
    || !*((_DWORD *)v75 + 12895)
    || !*((_DWORD *)v75 + 12939)
    || !*((_DWORD *)v75 + 12940)
    || !*((_DWORD *)v75 + 12941)
    || !*((_DWORD *)v75 + 12942)
    || !*((_DWORD *)v75 + 12943)
    || !*((_DWORD *)v75 + 12944)
    || !*((_DWORD *)v75 + 12945) )
  {
    sub_6F80D840((int)v75 + 174904);
    sub_6F833320((int)v75 + 51552);
    j_free_0(*((void **)v75 + 12945));
    j_free_0(*((void **)v75 + 12942));
    j_free_0(*((void **)v75 + 12944));
    j_free_0(*((void **)v75 + 12941));
    j_free_0(*((void **)v75 + 12943));
    j_free_0(*((void **)v75 + 12940));
    free(*((void **)v75 + 12939));
    free(*((void **)v75 + 12895));
    free(*((void **)v75 + 12894));
    free(*((void **)v75 + 12893));
    sub_6F817E30((int)v75);
    goto LABEL_87;
  }
  sub_6F81FE10((int)v75 + 51632);
  v69 = *((_DWORD *)v75 + 59);
  v76 = *((_DWORD *)v75 + 32);
  v73 = *((_DWORD *)v75 + 12893);
  v71 = *((_DWORD *)v75 + 31);
  v68 = *((_DWORD *)v75 + 61);
  v72 = 0;
  v74 = 0;
  if ( v76 )
  {
    v63 = *((_DWORD *)v75 + 60);
    do
    {
      if ( !v71 )
        goto LABEL_74;
      v70 = 0;
      do
      {
        v23 = 1;
        v64 = &unk_6FB88996;
        v65 = &unk_6FB88986;
        v24 = v73 + 384 * (v70 + v72);
        do
        {
          if ( *(_BYTE *)(v69 + 4 * (v70 + v72) + v23 - 1) == -1 )
            goto LABEL_72;
          v67 = (unsigned __int8)byte_6FB88981[v23];
          v62 = 2 * v70 + ((v23 - 1) >> 1);
          v66 = 2 * v74 + ((v23 >> 1) & 1);
          if ( byte_6FB88981[v23] )
          {
            v25 = v62 + *(_BYTE *)v64;
            if ( v63 > v25 && !(v25 >> 31) )
            {
              v26 = v66 + *(_BYTE *)v65;
              if ( v68 > v26 && !(v26 >> 31) )
              {
                v27 = (unsigned __int8)*(&byte_6FB8E8B0[2 * (v26 & 1)] + (v25 & 1))
                    + 2 * ((v62 + *(_BYTE *)v64) & 0xFFFFFFFE)
                    + v63 * (v26 & 0xFFFFFFFE);
                if ( *(_BYTE *)(v69 + v27) != -1 )
                {
                  v28 = *(_BYTE *)(v24 + 32);
                  *(_BYTE *)(v24 + 32) = v28 + 1;
                  *(_DWORD *)(v24 + 4 * v28) = v27;
                }
              }
            }
            if ( v67 != 1 )
            {
              v29 = v62 + *((_BYTE *)v64 + 1);
              if ( v63 > v29 && !(v29 >> 31) )
              {
                v30 = v66 + *((_BYTE *)v65 + 1);
                if ( v68 > v30 && !(v30 >> 31) )
                {
                  v31 = (unsigned __int8)*(&byte_6FB8E8B0[2 * (v30 & 1)] + (v29 & 1))
                      + 2 * ((v62 + *((_BYTE *)v64 + 1)) & 0xFFFFFFFE)
                      + v63 * (v30 & 0xFFFFFFFE);
                  if ( *(_BYTE *)(v69 + v31) != -1 )
                  {
                    v32 = *(_BYTE *)(v24 + 32);
                    *(_BYTE *)(v24 + 32) = v32 + 1;
                    *(_DWORD *)(v24 + 4 * v32) = v31;
                  }
                }
              }
              if ( v67 != 2 )
              {
                v33 = v62 + *((_BYTE *)v64 + 2);
                if ( v63 > v33 && !(v33 >> 31) )
                {
                  v34 = v66 + *((_BYTE *)v65 + 2);
                  if ( v68 > v34 && !(v34 >> 31) )
                  {
                    v35 = (unsigned __int8)*(&byte_6FB8E8B0[2 * (v34 & 1)] + (v33 & 1))
                        + 2 * ((v62 + *((_BYTE *)v64 + 2)) & 0xFFFFFFFE)
                        + v63 * (v34 & 0xFFFFFFFE);
                    if ( *(_BYTE *)(v69 + v35) != -1 )
                    {
                      v36 = *(_BYTE *)(v24 + 32);
                      *(_BYTE *)(v24 + 32) = v36 + 1;
                      *(_DWORD *)(v24 + 4 * v36) = v35;
                    }
                  }
                }
                if ( v67 != 3 )
                {
                  v37 = v62 + *((_BYTE *)v64 + 3);
                  if ( v63 > v37 && !(v37 >> 31) )
                  {
                    v38 = v66 + *((_BYTE *)v65 + 3);
                    if ( v68 > v38 && !(v38 >> 31) )
                    {
                      v39 = (unsigned __int8)*(&byte_6FB8E8B0[2 * (v38 & 1)] + (v37 & 1))
                          + 2 * ((v62 + *((_BYTE *)v64 + 3)) & 0xFFFFFFFE)
                          + v63 * (v38 & 0xFFFFFFFE);
                      if ( *(_BYTE *)(v69 + v39) != -1 )
                      {
                        v40 = *(_BYTE *)(v24 + 32);
                        *(_BYTE *)(v24 + 32) = v40 + 1;
                        *(_DWORD *)(v24 + 4 * v40) = v39;
                      }
                    }
                  }
                }
              }
            }
          }
          v41 = v62 - 1;
          if ( ((v62 - 1) & 0x80000000) == 0 && v63 > v41 && !(v66 >> 31) && v68 > v66 )
          {
            v42 = (unsigned __int8)*(&byte_6FB8E8B0[2 * (v66 & 1)] + (v41 & 1))
                + 2 * (v41 & 0xFFFFFFFE)
                + v63 * (v66 & 0xFFFFFFFE);
            if ( *(_BYTE *)(v69 + v42) != -1 )
            {
              v43 = *(_BYTE *)(v24 + 33);
              *(_BYTE *)(v24 + 33) = v43 + 1;
              *(_DWORD *)(v24 + 4 * v43 + 16) = v42;
            }
          }
          if ( (v63 <= v62) | (v62 >> 31) )
          {
            v47 = v62 + 1;
            if ( v63 <= v62 + 1 || v47 >> 31 || v66 >> 31 || v68 <= v66 )
              goto LABEL_72;
          }
          else
          {
            v44 = v66 - 1;
            if ( v68 > v66 - 1 && !(v44 >> 31) )
            {
              v45 = v63 * (v44 & 0xFFFFFFFE)
                  + 2 * (v62 & 0xFFFFFFFE)
                  + (unsigned __int8)*(&byte_6FB8E8B0[2 * (v44 & 1)] + (v62 & 1));
              if ( *(_BYTE *)(v69 + v45) != -1 )
              {
                v46 = *(_BYTE *)(v24 + 33);
                *(_BYTE *)(v24 + 33) = v46 + 1;
                *(_DWORD *)(v24 + 4 * v46 + 16) = v45;
              }
            }
            v47 = v62 + 1;
            if ( v63 <= v62 + 1 || v66 >> 31 || v68 <= v66 )
            {
LABEL_68:
              v50 = v66 + 1;
              if ( v68 > v66 + 1 && !(v50 >> 31) )
              {
                v51 = (unsigned __int8)*(&byte_6FB8E8B0[2 * (v50 & 1)] + (v62 & 1))
                    + 2 * (v62 & 0xFFFFFFFE)
                    + (v50 & 0xFFFFFFFE) * v63;
                if ( *(_BYTE *)(v69 + v51) != -1 )
                {
                  v52 = *(_BYTE *)(v24 + 33);
                  *(_BYTE *)(v24 + 33) = v52 + 1;
                  *(_DWORD *)(v24 + 4 * v52 + 16) = v51;
                }
              }
              goto LABEL_72;
            }
          }
          v48 = (unsigned __int8)*(&byte_6FB8E8B0[2 * (v66 & 1)] + (v47 & 1))
              + 2 * (v47 & 0xFFFFFFFE)
              + v63 * (v66 & 0xFFFFFFFE);
          if ( *(_BYTE *)(v69 + v48) != -1 )
          {
            v49 = *(_BYTE *)(v24 + 33);
            *(_BYTE *)(v24 + 33) = v49 + 1;
            *(_DWORD *)(v24 + 4 * v49 + 16) = v48;
          }
          if ( !((v63 <= v62) | (v62 >> 31)) )
            goto LABEL_68;
LABEL_72:
          ++v23;
          v24 += 96;
          v64 = (char *)v64 + 4;
          v65 = (char *)v65 + 4;
        }
        while ( v23 != 5 );
        ++v70;
      }
      while ( v70 != v71 );
LABEL_74:
      ++v74;
      v72 += v71;
    }
    while ( v74 != v76 );
  }
  *(_DWORD *)((char *)v75 + 51615) = 0;
  *(_DWORD *)((char *)v75 + 51619) = 0;
  *((_DWORD *)v75 + 12897) = -3;
  *((_DWORD *)v75 + 12899) = 0;
  *((_DWORD *)v75 + 12900) = 0;
  *((_DWORD *)v75 + 12901) = 0;
  *((_DWORD *)v75 + 12902) = 1;
  *((_BYTE *)v75 + 51612) = 0;
  *((_BYTE *)v75 + 51613) = 0;
  memcpy((char *)v75 + 53168, &unk_6FB89580, 0x5000u);
  v53 = v75;
  v54 = v75;
  v55 = v75;
  qmemcpy((char *)v75 + 73648, &unk_6FB88BC0, 0x188u);
  v56 = 0;
  do
  {
    v56 += 2;
    v54 = (char *)v54 + 48;
    *((_DWORD *)v54 + 188) = (char *)v53 + 2336;
    *((_DWORD *)v54 + 18498) = (char *)v55 + 75576;
    *((_DWORD *)v54 + 189) = (char *)v53 + 2464;
    *((_DWORD *)v54 + 18499) = (char *)v55 + 75832;
    *((_DWORD *)v54 + 190) = (char *)v53 + 2592;
    *((_DWORD *)v54 + 18500) = (char *)v55 + 76088;
    *((_DWORD *)v54 + 191) = (char *)v53 + 2720;
    *((_DWORD *)v54 + 18501) = (char *)v55 + 76344;
    *((_DWORD *)v54 + 192) = (char *)v53 + 2848;
    *((_DWORD *)v54 + 18502) = (char *)v55 + 76600;
    *((_DWORD *)v54 + 193) = (char *)v53 + 2976;
    *((_DWORD *)v54 + 18503) = (char *)v55 + 76856;
    *((_DWORD *)v54 + 194) = (char *)v53 + 3104;
    *((_DWORD *)v54 + 18504) = (char *)v55 + 77112;
    *((_DWORD *)v54 + 195) = (char *)v53 + 3232;
    *((_DWORD *)v54 + 18505) = (char *)v55 + 77368;
    *((_DWORD *)v54 + 196) = (char *)v53 + 3360;
    *((_DWORD *)v54 + 18506) = (char *)v55 + 77624;
    v57 = (int)v53 + 3616;
    *((_DWORD *)v54 + 197) = (char *)v53 + 3488;
    *((_DWORD *)v54 + 18507) = (char *)v55 + 77880;
    v58 = (int)v53 + 3744;
    v53 = (char *)v53 + 1536;
    *((_DWORD *)v54 + 198) = v57;
    v59 = (int)v55 + 78392;
    *((_DWORD *)v54 + 18508) = (char *)v55 + 78136;
    *((_DWORD *)v54 + 199) = v58;
    v55 = (char *)v55 + 3072;
    *((_DWORD *)v54 + 18509) = v59;
  }
  while ( v56 != 64 );
  sub_6F808D20((int)v75 + 800, (int)v75 + 74040, (int)&unk_6FB88BC0);
  *((_DWORD *)v75 + 12872) = 336861470;
  *((_DWORD *)v75 + 12873) = 235802383;
  *((_DWORD *)v75 + 12874) = 202116365;
  *((_DWORD *)v75 + 12875) = 168430347;
  *((_DWORD *)v75 + 12876) = 134744329;
  *((_DWORD *)v75 + 12877) = 117901063;
  *((_DWORD *)v75 + 12878) = 101058054;
  *((_DWORD *)v75 + 12879) = 84215045;
  *((_DWORD *)v75 + 12880) = 67372036;
  *((_DWORD *)v75 + 12881) = 50529027;
  *((_DWORD *)v75 + 12882) = 33686018;
  *((_DWORD *)v75 + 12883) = 33686018;
  *((_DWORD *)v75 + 12884) = 0;
  v60 = *((_DWORD *)v75 + 12);
  *((_DWORD *)v75 + 12885) = 0;
  *((_DWORD *)v75 + 12886) = 0;
  *((_DWORD *)v75 + 12887) = 0;
  sub_6F808FD0((_QWORD *)v75 + 21735, (int)v75 + 800, v60);
  return v75;
}
