int __usercall sub_6F761BC0@<eax>(int a1@<eax>)
{
  int v1; // ebp@1
  int v2; // ebx@1
  int result; // eax@1
  int v4; // eax@2
  unsigned int v5; // esi@2
  unsigned int v6; // edx@2
  int v7; // ecx@2
  int v8; // esi@2
  int v9; // edx@2
  int v10; // ecx@2
  int v11; // esi@2
  int *v12; // edx@2
  int v13; // esi@2
  int v14; // eax@4
  int v15; // ebx@4
  bool v16; // zf@4
  int v17; // ecx@6
  int v18; // ebp@6
  bool v19; // zf@6
  int v20; // ecx@8
  int v21; // ebp@8
  bool v22; // zf@8
  int v23; // ecx@10
  int v24; // ebp@10
  bool v25; // zf@10
  int v26; // ecx@12
  int v27; // ebp@12
  bool v28; // zf@12
  int v29; // ecx@14
  int v30; // ebp@14
  bool v31; // zf@14
  int v32; // ecx@16
  int v33; // ebp@16
  bool v34; // zf@16
  int v35; // ecx@20
  int v36; // esi@37
  char v37; // cl@37
  char v38; // bl@37
  int v39; // eax@37
  unsigned int v40; // ebp@37
  unsigned int v41; // edi@37
  int *v42; // edx@39
  char v43; // al@39
  char v44; // bl@39
  char v45; // al@43
  char v46; // bl@43
  int v47; // esi@45
  unsigned int v48; // edi@45
  unsigned int v49; // ebp@45
  char v50; // al@47
  char v51; // bl@47
  bool v52; // cf@49
  int v53; // ebp@49
  char v54; // al@51
  char v55; // bl@51
  unsigned int v56; // esi@55
  bool v57; // bl@55
  unsigned int v58; // ebp@55
  char v59; // al@55
  char v60; // bl@55
  char v61; // al@57
  char v62; // al@59
  int v63; // ebp@61
  unsigned int v64; // eax@61
  unsigned int v65; // edi@61
  unsigned int v66; // ebp@63
  char v67; // bl@63
  char v68; // al@63
  char v69; // bl@67
  int v70; // [sp+1Ch] [bp-1B0h]@1
  int v71; // [sp+1Ch] [bp-1B0h]@39
  char *v72; // [sp+20h] [bp-1ACh]@2
  char *v73; // [sp+24h] [bp-1A8h]@2
  char *v74; // [sp+28h] [bp-1A4h]@2
  char *v75; // [sp+2Ch] [bp-1A0h]@2
  char *v76; // [sp+30h] [bp-19Ch]@2
  char *v77; // [sp+34h] [bp-198h]@2
  char *v78; // [sp+38h] [bp-194h]@2
  char *v79; // [sp+3Ch] [bp-190h]@2
  char *v80; // [sp+40h] [bp-18Ch]@2
  char *v81; // [sp+44h] [bp-188h]@2
  char *v82; // [sp+48h] [bp-184h]@2
  char *v83; // [sp+4Ch] [bp-180h]@2
  char *v84; // [sp+50h] [bp-17Ch]@2
  char *v85; // [sp+54h] [bp-178h]@2
  char *v86; // [sp+58h] [bp-174h]@2
  char *v87; // [sp+5Ch] [bp-170h]@2
  char *v88; // [sp+60h] [bp-16Ch]@2
  char *v89; // [sp+64h] [bp-168h]@2
  char *v90; // [sp+68h] [bp-164h]@2
  char *v91; // [sp+6Ch] [bp-160h]@2
  char *v92; // [sp+70h] [bp-15Ch]@2
  char *v93; // [sp+74h] [bp-158h]@2
  char *v94; // [sp+78h] [bp-154h]@2
  char *v95; // [sp+7Ch] [bp-150h]@2
  char *v96; // [sp+80h] [bp-14Ch]@2
  char *v97; // [sp+84h] [bp-148h]@2
  char *v98; // [sp+88h] [bp-144h]@2
  char *v99; // [sp+8Ch] [bp-140h]@2
  char *v100; // [sp+90h] [bp-13Ch]@2
  char *v101; // [sp+94h] [bp-138h]@2
  char *v102; // [sp+98h] [bp-134h]@2
  char *v103; // [sp+9Ch] [bp-130h]@2
  char v104; // [sp+A0h] [bp-12Ch]@1
  char v105; // [sp+A4h] [bp-128h]@2
  char v106; // [sp+A8h] [bp-124h]@2
  char v107; // [sp+ACh] [bp-120h]@2
  char v108; // [sp+B0h] [bp-11Ch]@2
  char v109; // [sp+B4h] [bp-118h]@2
  char v110; // [sp+B8h] [bp-114h]@2
  char v111; // [sp+BCh] [bp-110h]@2
  int v112; // [sp+C0h] [bp-10Ch]@37
  int v113; // [sp+C4h] [bp-108h]@45
  int v114; // [sp+C8h] [bp-104h]@49
  int v115; // [sp+CCh] [bp-100h]@61
  int v116; // [sp+D0h] [bp-FCh]@2
  int v117; // [sp+D4h] [bp-F8h]@2
  int v118; // [sp+D8h] [bp-F4h]@2
  int v119; // [sp+DCh] [bp-F0h]@2
  int v120; // [sp+E0h] [bp-ECh]@2
  int v121; // [sp+E4h] [bp-E8h]@2
  int v122; // [sp+E8h] [bp-E4h]@2
  int v123; // [sp+ECh] [bp-E0h]@2
  char v124; // [sp+150h] [bp-7Ch]@2
  char v125; // [sp+154h] [bp-78h]@2
  char v126; // [sp+158h] [bp-74h]@2
  char v127; // [sp+15Ch] [bp-70h]@2
  char v128; // [sp+160h] [bp-6Ch]@2
  char v129; // [sp+164h] [bp-68h]@2
  char v130; // [sp+168h] [bp-64h]@2
  char v131; // [sp+16Ch] [bp-60h]@2
  char v132; // [sp+170h] [bp-5Ch]@2
  char v133; // [sp+174h] [bp-58h]@2
  char v134; // [sp+178h] [bp-54h]@2
  char v135; // [sp+17Ch] [bp-50h]@2
  char v136; // [sp+180h] [bp-4Ch]@2
  char v137; // [sp+184h] [bp-48h]@2
  char v138; // [sp+188h] [bp-44h]@2
  char v139; // [sp+18Ch] [bp-40h]@2
  char v140; // [sp+190h] [bp-3Ch]@2
  char v141; // [sp+194h] [bp-38h]@2
  char v142; // [sp+198h] [bp-34h]@2
  char v143; // [sp+19Ch] [bp-30h]@2
  char v144; // [sp+1A0h] [bp-2Ch]@2
  char v145; // [sp+1A4h] [bp-28h]@2
  char v146; // [sp+1A8h] [bp-24h]@2
  char v147; // [sp+1ACh] [bp-20h]@2

  v1 = 50 * a1;
  v2 = a1;
  v70 = a1;
  result = (*(int (__stdcall **)(int, signed int, char *))(*(_DWORD *)dword_7036E7C4[50 * a1] + 36))(
             dword_7036E7C4[50 * a1],
             272,
             &v104);
  if ( result < 0 )
    return result;
  v4 = v1 * 4;
  v72 = &v104;
  v5 = v117 & 0x80808080;
  v74 = &v106;
  v6 = v118 & 0x80808080;
  dword_7036E700[v1] = v116 & 0x80808080;
  v7 = v119;
  dword_7036E704[v1] = v5;
  v8 = v120;
  dword_7036E708[v1] = v6;
  v9 = v121;
  dword_7036E70C[v1] = v7 & 0x80808080;
  v10 = v122;
  dword_7036E710[v1] = v8 & 0x80808080;
  v11 = v123;
  dword_7036E714[v1] = v9 & 0x80808080;
  dword_7036E718[v1] = v10 & 0x80808080;
  dword_7036E71C[v1] = v11 & 0x80808080;
  v73 = &v105;
  v75 = &v107;
  v76 = &v108;
  v77 = &v109;
  v78 = &v110;
  v79 = &v111;
  v80 = &v124;
  v81 = &v125;
  v82 = &v126;
  v83 = &v127;
  v84 = &v128;
  v85 = &v129;
  v86 = &v130;
  v87 = &v131;
  v88 = &v132;
  v89 = &v133;
  v90 = &v134;
  v91 = &v135;
  v92 = &v136;
  v93 = &v137;
  v94 = &v138;
  v95 = &v139;
  v96 = &v140;
  v97 = &v141;
  v98 = &v142;
  v100 = &v144;
  v12 = (int *)&(&v72)[-400 * v2];
  v102 = &v146;
  v13 = v1 * 4 + 64;
  v99 = &v143;
  v101 = &v145;
  v103 = &v147;
  do
  {
    v35 = **(_DWORD **)((char *)v12 + 2 * v4);
    if ( v35 >= 0 )
    {
      byte_7036E720[v4] = 0;
      if ( v35 )
      {
        byte_7036E721[v4] = v35;
        v14 = v4 + 2;
        v15 = **(_DWORD **)((char *)v12 + 2 * v14);
        v16 = v15 == 0;
        if ( v15 < 0 )
          goto LABEL_23;
        goto LABEL_5;
      }
    }
    else
    {
      byte_7036E720[v4] = -(char)v35;
    }
    byte_7036E721[v4] = 0;
    v14 = v4 + 2;
    v15 = **(_DWORD **)((char *)v12 + 2 * v14);
    v16 = v15 == 0;
    if ( v15 < 0 )
    {
LABEL_23:
      byte_7036E720[v14] = -(char)v15;
      goto LABEL_24;
    }
LABEL_5:
    byte_7036E720[v14] = 0;
    if ( !v16 )
    {
      v17 = v14 + 2;
      byte_7036E721[v14] = v15;
      v18 = **(_DWORD **)((char *)v12 + 2 * (v14 + 2));
      v19 = v18 == 0;
      if ( v18 < 0 )
        goto LABEL_25;
      goto LABEL_7;
    }
LABEL_24:
    v17 = v14 + 2;
    byte_7036E721[v14] = 0;
    v18 = **(_DWORD **)((char *)v12 + 2 * (v14 + 2));
    v19 = v18 == 0;
    if ( v18 < 0 )
    {
LABEL_25:
      byte_7036E720[v17] = -(char)v18;
      goto LABEL_26;
    }
LABEL_7:
    byte_7036E720[v17] = 0;
    if ( !v19 )
    {
      byte_7036E721[v17] = v18;
      v20 = v14 + 4;
      v21 = **(_DWORD **)((char *)v12 + 2 * (v14 + 4));
      v22 = v21 == 0;
      if ( v21 < 0 )
        goto LABEL_27;
      goto LABEL_9;
    }
LABEL_26:
    byte_7036E721[v17] = 0;
    v20 = v14 + 4;
    v21 = **(_DWORD **)((char *)v12 + 2 * (v14 + 4));
    v22 = v21 == 0;
    if ( v21 < 0 )
    {
LABEL_27:
      byte_7036E720[v20] = -(char)v21;
      goto LABEL_28;
    }
LABEL_9:
    byte_7036E720[v20] = 0;
    if ( !v22 )
    {
      byte_7036E721[v20] = v21;
      v23 = v14 + 6;
      v24 = **(_DWORD **)((char *)v12 + 2 * (v14 + 6));
      v25 = v24 == 0;
      if ( v24 < 0 )
        goto LABEL_29;
      goto LABEL_11;
    }
LABEL_28:
    byte_7036E721[v20] = 0;
    v23 = v14 + 6;
    v24 = **(_DWORD **)((char *)v12 + 2 * (v14 + 6));
    v25 = v24 == 0;
    if ( v24 < 0 )
    {
LABEL_29:
      byte_7036E720[v23] = -(char)v24;
      goto LABEL_30;
    }
LABEL_11:
    byte_7036E720[v23] = 0;
    if ( !v25 )
    {
      byte_7036E721[v23] = v24;
      v26 = v14 + 8;
      v27 = **(_DWORD **)((char *)v12 + 2 * (v14 + 8));
      v28 = v27 == 0;
      if ( v27 < 0 )
        goto LABEL_31;
      goto LABEL_13;
    }
LABEL_30:
    byte_7036E721[v23] = 0;
    v26 = v14 + 8;
    v27 = **(_DWORD **)((char *)v12 + 2 * (v14 + 8));
    v28 = v27 == 0;
    if ( v27 < 0 )
    {
LABEL_31:
      byte_7036E720[v26] = -(char)v27;
      goto LABEL_32;
    }
LABEL_13:
    byte_7036E720[v26] = 0;
    if ( !v28 )
    {
      byte_7036E721[v26] = v27;
      v29 = v14 + 10;
      v30 = **(_DWORD **)((char *)v12 + 2 * (v14 + 10));
      v31 = v30 == 0;
      if ( v30 < 0 )
        goto LABEL_33;
      goto LABEL_15;
    }
LABEL_32:
    byte_7036E721[v26] = 0;
    v29 = v14 + 10;
    v30 = **(_DWORD **)((char *)v12 + 2 * (v14 + 10));
    v31 = v30 == 0;
    if ( v30 < 0 )
    {
LABEL_33:
      byte_7036E720[v29] = -(char)v30;
      goto LABEL_34;
    }
LABEL_15:
    byte_7036E720[v29] = 0;
    if ( !v31 )
    {
      byte_7036E721[v29] = v30;
      v32 = v14 + 12;
      v33 = **(_DWORD **)((char *)v12 + 2 * (v14 + 12));
      v34 = v33 == 0;
      if ( v33 < 0 )
        goto LABEL_35;
      goto LABEL_17;
    }
LABEL_34:
    byte_7036E721[v29] = 0;
    v32 = v14 + 12;
    v33 = **(_DWORD **)((char *)v12 + 2 * (v14 + 12));
    v34 = v33 == 0;
    if ( v33 < 0 )
    {
LABEL_35:
      byte_7036E720[v32] = -(char)v33;
      goto LABEL_36;
    }
LABEL_17:
    byte_7036E720[v32] = 0;
    if ( !v34 )
    {
      byte_7036E721[v32] = v33;
      goto LABEL_19;
    }
LABEL_36:
    byte_7036E721[v32] = 0;
LABEL_19:
    v4 = v14 + 14;
  }
  while ( v4 != v13 );
  v36 = v112;
  v37 = 127;
  v38 = 0;
  v39 = 50 * v70;
  v40 = v112 - 4501;
  v41 = v112 - 4500;
  if ( (unsigned int)(v112 - 13500) <= 0x2328 )
    v38 = 127;
  v42 = &dword_7036E700[v39];
  v71 = 50 * v70;
  dword_7036E740[v39] = 0;
  *((_BYTE *)v42 + 64) = v38;
  v43 = BYTE1(dword_7036E700[v39 + 16]);
  v44 = *((_BYTE *)v42 + 66);
  if ( v36 != -1 && v40 > 0x6976 )
    v43 = 127;
  if ( v41 <= 0x2328 )
    v44 = 127;
  *((_BYTE *)v42 + 65) = v43;
  v45 = *((_BYTE *)v42 + 67);
  *((_BYTE *)v42 + 66) = v44;
  v46 = 0;
  if ( (unsigned int)(v36 - 22500) <= 0x2328 )
    v45 = 127;
  *((_BYTE *)v42 + 67) = v45;
  dword_7036E744[v71] = 0;
  v47 = v113;
  v48 = v113 - 4501;
  v49 = v113 - 4500;
  if ( (unsigned int)(v113 - 13500) <= 0x2328 )
    v46 = 127;
  *((_BYTE *)v42 + 68) = v46;
  v50 = *((_BYTE *)v42 + 69);
  v51 = *((_BYTE *)v42 + 70);
  if ( v47 != -1 && v48 > 0x6976 )
    v50 = 127;
  v52 = v49 < 0x2328;
  v16 = v49 == 9000;
  v53 = v114;
  if ( v52 || v16 )
    v51 = 127;
  *((_BYTE *)v42 + 69) = v50;
  v54 = *((_BYTE *)v42 + 71);
  *((_BYTE *)v42 + 70) = v51;
  v55 = 0;
  if ( (unsigned int)(v47 - 22500) <= 0x2328 )
    v54 = 127;
  if ( (unsigned int)(v53 - 13500) <= 0x2328 )
    v55 = 127;
  *((_BYTE *)v42 + 71) = v54;
  dword_7036E748[v71] = 0;
  *((_BYTE *)v42 + 72) = v55;
  v56 = v53 - 4500;
  v57 = (unsigned int)(v53 - 4501) > 0x6976;
  v16 = v53 == -1;
  v58 = v53 - 22500;
  v16 = (!v16 && v57) == 0;
  v59 = *((_BYTE *)v42 + 73);
  v60 = 0;
  if ( !v16 )
    v59 = 127;
  *((_BYTE *)v42 + 73) = v59;
  v61 = *((_BYTE *)v42 + 74);
  if ( v56 <= 0x2328 )
    v61 = 127;
  *((_BYTE *)v42 + 74) = v61;
  v62 = *((_BYTE *)v42 + 75);
  if ( v58 <= 0x2328 )
    v62 = 127;
  *((_BYTE *)v42 + 75) = v62;
  dword_7036E74C[v71] = 0;
  v63 = v115;
  v64 = v115 - 4501;
  v65 = v115 - 4500;
  if ( (unsigned int)(v115 - 13500) <= 0x2328 )
    v60 = 127;
  *((_BYTE *)v42 + 76) = v60;
  v16 = v63 == -1;
  v66 = v63 - 22500;
  v16 = (!v16 && v64 > 0x6976) == 0;
  v67 = *((_BYTE *)v42 + 77);
  v68 = *((_BYTE *)v42 + 78);
  if ( !v16 )
    v67 = 127;
  if ( v65 <= 0x2328 )
    v68 = 127;
  *((_BYTE *)v42 + 77) = v67;
  v69 = *((_BYTE *)v42 + 79);
  *((_BYTE *)v42 + 78) = v68;
  if ( v66 > 0x2328 )
    v37 = v69;
  result = 0;
  *((_BYTE *)v42 + 79) = v37;
  return result;
}
