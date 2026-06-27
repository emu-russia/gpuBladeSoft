int sub_6F72F800()
{
  int v0; // ebx@4
  int v1; // edx@4
  int v2; // ecx@4
  signed int v3; // ST40_4@6
  signed int v4; // ST44_4@6
  int v5; // esi@6
  signed int v6; // ST40_4@6
  int v7; // ST04_4@6
  int v8; // ST00_4@6
  double v9; // st7@6
  double v10; // st6@6
  int result; // eax@8
  int v12; // edx@8
  int v13; // ecx@8
  int v14; // ecx@9
  int v15; // ecx@10
  double v16; // st7@13
  int v17; // edx@15
  int v18; // ecx@15
  int v19; // eax@15
  double v20; // st6@15
  int v21; // edx@15
  double v22; // st5@15
  int v23; // ST04_4@15
  int v24; // ST00_4@15
  int v25; // edx@16
  int v26; // ecx@16
  signed int v27; // ebx@16
  unsigned int v28; // ebp@16
  double v29; // st7@16
  double v30; // st6@16
  signed int v31; // ST40_4@16
  signed int v32; // ST44_4@16
  double v33; // st5@16
  double v34; // rt0@16
  double v35; // st5@16
  double v36; // rt2@16
  double v37; // st5@16
  double v38; // st4@16
  int v39; // ST04_4@16
  int v40; // ST00_4@16
  __int16 *v41; // ebp@17
  signed int v42; // esi@17
  int v43; // edx@17
  int v44; // ecx@17
  int v45; // ebx@18
  int v46; // ST04_4@18
  int v47; // eax@20
  int v48; // edi@21
  signed int v49; // ebx@28
  signed int v50; // ebx@30
  signed int v51; // ebp@30
  double v52; // st3@32
  double v53; // st4@34
  const char *v54; // ecx@34
  double v55; // rt1@35
  unsigned __int64 v56; // st4@35
  double v57; // st7@35
  double v58; // rt2@38
  float v59; // ST0C_4@39
  float v60; // ST08_4@39
  int v61; // ebx@40
  __int16 *v62; // ecx@42
  int v63; // edx@43
  int v64; // eax@43
  int v65; // ebp@44
  unsigned int v66; // edx@44
  const char *v67; // ST04_4@47
  int v68; // ebp@47
  int v69; // edx@47
  int v70; // ecx@47
  FILE *v71; // ebp@47
  int v72; // edx@51
  int *v73; // edi@51
  int v74; // ebx@53
  int v75; // esi@55
  double v76; // st7@55
  float v77; // ST40_4@57
  float v78; // ST08_4@57
  char *v79; // eax@59
  FILE *v80; // eax@60
  void *v81; // ST00_4@62
  int v82; // edi@64
  int v83; // ecx@66
  signed int v84; // ebx@66
  int v85; // edi@68
  int *v86; // esi@68
  int v87; // ebp@70
  int v88; // ebx@72
  double v89; // st7@72
  signed int v90; // edx@73
  float v91; // ST0C_4@74
  void *v92; // ST00_4@75
  int v93; // esi@77
  int v94; // edx@80
  int v95; // edx@83
  int v96; // ecx@83
  signed int v97; // esi@83
  double v98; // st5@83
  double v99; // rtt@83
  double v100; // st5@83
  double v101; // rt1@83
  double v102; // st5@83
  double v103; // st4@83
  int v104; // ST04_4@83
  int v105; // ST00_4@83
  int v106; // eax@50
  double v107; // st6@50
  float v108; // ST4C_4@50
  double v109; // st5@50
  double v110; // st4@50
  float v111; // ST48_4@50
  double v112; // rtt@50
  double v113; // st5@50
  int v114; // ecx@50
  int v115; // ST40_4@50
  int v116; // ST00_4@50
  double v117; // st5@50
  double v118; // rtt@50
  double v119; // st5@50
  int v120; // edx@50
  int v121; // ecx@50
  int v122; // ST40_4@50
  int v123; // ST00_4@50
  int v124; // edx@50
  int v125; // ecx@50
  float v126; // ST40_4@50
  float v127; // ST48_4@50
  int v128; // eax@50
  double v129; // st7@50
  float v130; // ST08_4@50
  int v131; // [sp+0h] [bp-1CCh]@19
  int v132; // [sp+4h] [bp-1C8h]@19
  int v133; // [sp+8h] [bp-1C4h]@19
  int v134; // [sp+40h] [bp-18Ch]@68
  float v135; // [sp+44h] [bp-188h]@68
  char v136; // [sp+60h] [bp-16Ch]@50
  float v137; // [sp+70h] [bp-15Ch]@17
  float v138; // [sp+74h] [bp-158h]@17
  float v139; // [sp+78h] [bp-154h]@17
  float v140; // [sp+7Ch] [bp-150h]@17
  float v141; // [sp+80h] [bp-14Ch]@17
  float v142; // [sp+84h] [bp-148h]@17
  float v143; // [sp+88h] [bp-144h]@17
  float v144; // [sp+8Ch] [bp-140h]@17
  float v145; // [sp+90h] [bp-13Ch]@6
  float v146; // [sp+94h] [bp-138h]@6
  float v147; // [sp+98h] [bp-134h]@6
  float v148; // [sp+9Ch] [bp-130h]@6
  float v149; // [sp+A0h] [bp-12Ch]@6
  float v150; // [sp+A4h] [bp-128h]@6
  float v151; // [sp+A8h] [bp-124h]@6
  float v152; // [sp+ACh] [bp-120h]@6
  float v153; // [sp+B0h] [bp-11Ch]@6
  signed int v154; // [sp+B4h] [bp-118h]@6
  signed int v155; // [sp+B8h] [bp-114h]@6
  signed int v156; // [sp+BCh] [bp-110h]@6
  signed int v157; // [sp+C0h] [bp-10Ch]@6
  signed int v158; // [sp+C4h] [bp-108h]@6
  signed int v159; // [sp+C8h] [bp-104h]@6
  signed int v160; // [sp+CCh] [bp-100h]@6
  int v161; // [sp+D0h] [bp-FCh]@21
  int v162; // [sp+D4h] [bp-F8h]@21
  int v163; // [sp+D8h] [bp-F4h]@21
  int v164; // [sp+DCh] [bp-F0h]@21
  int v165; // [sp+E0h] [bp-ECh]@21
  int v166; // [sp+E4h] [bp-E8h]@21

  if ( dword_6FBB84D4 )
  {
    v61 = 0;
    dbl_70057FA8 = sub_6F761A30(dword_70057F18);
    do
    {
      while ( 1 )
      {
        strcpy((char *)&word_70056F00, (const char *)&unk_70055F00);
        v62 = &word_70056F00;
        do
        {
          v63 = *(_DWORD *)v62;
          v62 += 2;
          v64 = ~v63 & (v63 - 16843009);
        }
        while ( !(v64 & 0x80808080) );
        v65 = (int)(v62 + 1);
        v66 = (v64 & 0x80808080) >> 16;
        if ( v64 & 0x8080 )
        {
          LOBYTE(v66) = v64 & 0x80;
          if ( v64 & 0x8080 )
            v65 = (int)v62;
        }
        v67 = off_6FB53820[v61];
        v68 = v65 - ((_DWORD)&unk_70056F03 + __CFADD__((_BYTE)v66, (_BYTE)v66));
        *(__int16 *)((char *)&word_70056F00 + v68) = 47;
        strcpy((char *)&word_70056F00 + v68 + 1, v67);
        v71 = fopen((const char *)&word_70056F00, "rt");
        if ( v71 )
          break;
        if ( ++v61 == 10 )
          goto LABEL_49;
      }
      while ( 1 )
      {
        v79 = fgets((char *)&v153, 256, v71);
        if ( !v79 )
          break;
        sub_6F72F480(v79);
      }
      fclose(v71);
      v80 = fopen((const char *)&word_70056F00, "wt+");
      if ( v80 )
        fclose(v80);
      ++v61;
    }
    while ( v61 != 10 );
LABEL_49:
    if ( dword_6FBBFD78 )
    {
      glPushAttrib(v70, v69, 0xFFFFF);
      glEnable(3553);
      v106 = sub_6F696040();
      v144 = 1.01;
      v137 = 0.0;
      v138 = 0.0;
      v139 = 0.0;
      v140 = 1.0;
      v141 = 1.0;
      v142 = 0.0;
      v143 = 1.0;
      v145 = 0.0;
      v146 = 0.0;
      v107 = (double)(signed int)(v106 * dword_6FBBFD74 / (unsigned int)dword_6FBBFD70);
      v108 = v107;
      v147 = 0.0;
      v109 = v107 * flt_6FBB9574;
      v148 = v109;
      v110 = (double)v106;
      v111 = v110;
      v112 = v109;
      v113 = flt_6FBB9574 * v110;
      v149 = v113;
      v150 = 0.0;
      v151 = v113;
      v152 = v112;
      glPushMatrix(v114, v106 * dword_6FBBFD74 % (unsigned int)dword_6FBBFD70);
      glLoadIdentity();
      v115 = sub_6F696040();
      *(float *)&v116 = (double)v115 - (double)sub_6F696040() * flt_6FBB9574;
      glTranslatef(v116, COERCE_INT(0.0), COERCE_INT(0.0));
      glBindTexture(3553, dword_6FBBFD78);
      glTexEnvi(8960, 8704, 8448);
      glColor4ub(255, 255, 255, 255);
      glVertexPointer(2, 5126, 0, (int)&v145);
      glEnableClientState(32884);
      glTexCoordPointer(2, 5126, 0, (int)&v137);
      glEnableClientState(32888);
      glDrawArrays(5, 0, 4);
      glDisableClientState(32888);
      glDisableClientState(32884);
      glPopMatrix();
      v153 = 0.0;
      *(float *)&v154 = 0.0;
      *(float *)&v155 = 0.0;
      v117 = v108 * flt_6FBB9574;
      *(float *)&v156 = v117;
      v118 = v117;
      v119 = flt_6FBB9574 * v111;
      *(float *)&v157 = v119;
      *(float *)&v158 = v118;
      *(float *)&v159 = v119;
      *(float *)&v160 = 0.0;
      glPushMatrix(v121, v120);
      glLoadIdentity();
      glDisable(3553);
      v122 = sub_6F696040();
      *(float *)&v123 = (double)v122 - (double)sub_6F696040() * flt_6FBB9574;
      glTranslatef(v123, COERCE_INT(0.0), COERCE_INT(0.0));
      glColor4ub(0, 255, 0, 255);
      glVertexPointer(2, 5126, 0, (int)&v153);
      glEnableClientState(32884);
      glDrawArrays(2, 0, 4);
      glDisableClientState(32884);
      glPopMatrix();
      glPushMatrix(v125, v124);
      glLoadIdentity();
      v126 = (double)sub_6F696040() * 0.003125;
      sub_6F751530((int)&v136, 16, "%.2i", dword_6F96D020);
      GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      v127 = (double)dword_6FD400C8 - (double)dword_6FBB957C * v126;
      v128 = sub_6F696040();
      v129 = (double)dword_6FBB957C * v126;
      v130 = (double)v128 - v129 * 1.5;
      sub_6F72CCC0(-1, (signed __int64)v129, v130, v127, (int)&v136);
      glPopMatrix();
      glPopAttrib();
    }
    v72 = dword_6FBBFDB8;
    v73 = &dword_6FBBFDB8;
    if ( (int *)dword_6FBBFDB8 != &dword_6FBBFDB8 )
    {
      do
      {
        v74 = v73[1];
        v75 = *(_DWORD *)(v74 + 8);
        v76 = *(double *)(v75 + 16);
        if ( v76 > 0.0 )
        {
          if ( dword_6FBB84D4 )
          {
            GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
            v77 = (double)dword_6FD400C8 * *(float *)(v75 + 4);
            GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
            v78 = (double)dword_6FD400C4 * *(float *)v75;
            sub_6F72CCC0(*(_DWORD *)(v75 + 8), dword_6FBB957C, v78, v77, v75 + 24);
            v72 = dword_6FBBFDB8;
            v76 = *(double *)(v75 + 16);
          }
          *(double *)(v75 + 16) = v76 - dbl_70057FA8;
          v74 = v73[1];
        }
        v73 = (int *)v74;
      }
      while ( v72 != v74 );
      while ( (int *)v74 != &dword_6FBBFDB8 )
      {
        v82 = *(_DWORD *)v74;
        if ( *(double *)(*(_DWORD *)(v74 + 8) + 16) <= 0.0 )
        {
          free(*(void **)(v74 + 8));
          --dword_6FBBFDC0;
          sub_6F9549C0(v74);
          v81 = (void *)v74;
          v74 = v82;
          j_free_1(v81);
        }
        else
        {
          v74 = *(_DWORD *)v74;
        }
      }
    }
    v83 = dword_6FBBFDAC;
    v84 = dword_6FBB957C + 3;
    if ( dword_6FBB957C >= 0 )
      v84 = dword_6FBB957C;
    v85 = 0;
    v86 = &dword_6FBBFDAC;
    v134 = dword_6FBB957C / 2;
    v135 = (double)(v84 >> 2);
    if ( (int *)dword_6FBBFDAC != &dword_6FBBFDAC )
    {
      do
      {
        v87 = v86[1];
        v88 = *(_DWORD *)(v87 + 8);
        v89 = *(double *)(v88 + 16);
        if ( v89 > 0.0 )
        {
          v90 = dword_6FBB957C;
          if ( dword_6FBB84D4 )
          {
            v91 = (double)v134;
            sub_6F72CCC0(*(_BYTE *)(v88 + 8), dword_6FBB957C, v135, v91, v88 + 24);
            v90 = dword_6FBB957C;
            v89 = *(double *)(v88 + 16);
            v83 = dword_6FBBFDAC;
          }
          ++v85;
          v134 += v90 / 2 + v90;
          *(double *)(v88 + 16) = v89 - dbl_70057FA8;
          v87 = v86[1];
        }
        v86 = (int *)v87;
      }
      while ( v83 != v87 );
      while ( (int *)v87 != &dword_6FBBFDAC )
      {
        v93 = *(_DWORD *)v87;
        if ( *(double *)(*(_DWORD *)(v87 + 8) + 16) <= 0.0 )
        {
          free(*(void **)(v87 + 8));
          --dword_6FBBFDB4;
          sub_6F9549C0(v87);
          v92 = (void *)v87;
          v87 = v93;
          j_free_1(v92);
        }
        else
        {
          v87 = *(_DWORD *)v87;
        }
      }
    }
    if ( !byte_70057F10 && sub_6F9624B0((int)&byte_70057F10) )
    {
      dword_70057F00 = 0;
      dword_70057F04 = 0;
      dword_70057F08 = 0;
      dword_70057F0C = 0;
      sub_6F962670((int)&byte_70057F10);
    }
    v94 = dword_70057FC0;
    if ( dword_70057FC0 )
    {
      if ( !dword_70057F0C )
        sub_6F69AA00((char *)&dword_70057F00, (int)&dword_6FBBFDE0, 0);
      glPushMatrix(v83, v94);
      glPushAttrib(v96, v95, 0xFFFFF);
      glEnable(3553);
      glBindTexture(3553, dword_70057F08);
      glTexEnvi(8960, 8704, 8448);
      glColor4ub(255, 255, 255, 255);
      GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      v97 = dword_6FD400C4;
      GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
      v145 = 0.0;
      v146 = 1.0;
      v147 = 0.0;
      v148 = 0.0;
      v149 = 1.0;
      v150 = 1.0;
      v151 = 1.0;
      v152 = 0.0;
      v98 = (double)(v97 / -2);
      v153 = v98;
      v99 = v98;
      v100 = (double)(dword_6FD400C8 / -2);
      *(float *)&v154 = v100;
      *(float *)&v155 = v99;
      v101 = v100;
      v102 = (double)(dword_6FD400C8 / 2);
      *(float *)&v156 = v102;
      v103 = (double)(v97 / 2);
      *(float *)&v157 = v103;
      *(float *)&v158 = v101;
      *(float *)&v159 = v103;
      *(float *)&v160 = v102;
      *(float *)&v104 = v102;
      *(float *)&v105 = v103;
      glTranslatef(v105, v104, COERCE_INT(0.0));
      glVertexPointer(2, 5126, 0, (int)&v153);
      glEnableClientState(32884);
      glTexCoordPointer(2, 5126, 0, (int)&v145);
      glEnableClientState(32888);
      glDrawArrays(5, 0, 4);
      glDisableClientState(32888);
      glDisableClientState(32884);
      glPopAttrib();
      glPopMatrix();
    }
    else if ( dword_70057F0C )
    {
      glDeleteTextures(1, (int)&dword_70057F08);
      dword_70057F00 = 0;
      dword_70057F04 = 0;
      dword_70057F08 = 0;
      dword_70057F0C = 0;
    }
  }
  if ( dword_6FBB84D0 )
  {
    v49 = dword_6FBB957C + 3;
    if ( dword_6FBB957C >= 0 )
      v49 = dword_6FBB957C;
    GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
    v50 = v49 >> 2;
    v51 = dword_6FBB957C + 3;
    if ( dword_6FBB957C >= 0 )
      v51 = dword_6FBB957C;
    v52 = 50.0;
    if ( !(unk_6FBB979E & 0x10) )
      v52 = 59.94;
    v53 = dbl_70057F38 * 100.0 / v52;
    v54 = "d";
    if ( dword_6FBB52EC )
    {
      v55 = v53;
      *(double *)&v56 = dbl_70057F28;
      v57 = v55;
      v54 = "a";
      if ( dword_6FBB52EC != 1 )
        v54 = "m";
    }
    else
    {
      v58 = v53;
      *(double *)&v56 = dbl_70057F28;
      v57 = v58;
    }
    v59 = (double)(dword_6FD400C8 - dword_6FBB957C - (v51 >> 2));
    v60 = (double)v50;
    sub_6F72CCC0(
      -1,
      dword_6FBB957C,
      v60,
      v59,
      (int)"FPS(%s): %.2f (%.0f%%) (%.4f, %.4f, %i)\n",
      v54,
      dbl_70057F38,
      LODWORD(v57),
      (_DWORD)(*(unsigned __int64 *)&v57 >> 32),
      dbl_70057F30,
      (_DWORD)v56,
      (_DWORD)(v56 >> 32),
      qword_70057F20,
      v50);
    dword_70041E54 = 0;
    dword_70041E50 = 0;
    dword_70041E4C = 0;
    dword_70041E48 = 0;
    dword_70041E44 = 0;
    dword_70041E40 = 0;
    dword_70041E3C = 0;
    dword_70041E38 = 0;
    dword_70041E34 = 0;
    dword_70041E30 = 0;
    dword_70041E2C = 0;
    dword_70041E24 = 0;
    dword_70041E20 = 0;
    dword_70041E28 = 0;
    dword_70057F40 = 0;
  }
  if ( !byte_70057FA0 && sub_6F9624B0((int)&byte_70057FA0) )
  {
    memset(&dword_70057F64, 0, 0x38u);
    *(float *)&dword_70057F60 = 1.0;
    *(float *)&dword_70057F74 = 1.0;
    *(float *)&dword_70057F88 = 1.0;
    *(float *)&dword_70057F9C = 1.0;
    sub_6F962670((int)&byte_70057FA0);
  }
  dword_70057F60 = LODWORD(flt_6FBBD800);
  dword_70057F64 = dword_6FBBD804;
  dword_70057F68 = dword_6FBBD808;
  dword_70057F6C = dword_6FBBD80C;
  dword_70057F70 = dword_6FBBD810;
  dword_70057F74 = LODWORD(flt_6FBBD814);
  dword_70057F78 = dword_6FBBD818;
  dword_70057F7C = dword_6FBBD81C;
  dword_70057F80 = dword_6FBBD820;
  dword_70057F8C = dword_6FBBD82C;
  dword_70057F90 = dword_6FBBD830;
  dword_70057F98 = dword_6FBBD838;
  dword_70057F84 = dword_6FBBD824;
  dword_70057F88 = LODWORD(flt_6FBBD828);
  v0 = 0;
  dword_70057F94 = dword_6FBBD834;
  dword_70057F9C = LODWORD(flt_6FBBD83C);
  glPushMatrix(dword_6FBBD82C, dword_6FBBD838);
  glPushAttrib(v2, v1, 0xFFFFF);
  glEnable(3553);
  glEnable(3042);
  glBlendFunc(770, 771);
  do
  {
    if ( dword_70058460[v0] > 0 )
    {
      v3 = dword_6FCFFF94;
      v4 = dword_6FCFFF98;
      glBindTexture(3553, dword_6FBBFCE8[4 * dword_6FBB84DC[v0]]);
      glTexEnvi(8960, 8704, 8448);
      v5 = (signed int)((double)v3 * flt_6FBB8500[v0]) / 40;
      glLoadIdentity();
      glMultMatrixf((int)&dword_70057F60);
      dword_70058480[2 * v0] = (signed int)((double)dword_70058480[2 * v0] * ((double)v3 * 0.001953125));
      v6 = (signed int)((double)v4 * 0.00390625 * (double)dword_70058484[2 * v0]);
      dword_70058484[2 * v0] = v6;
      *(float *)&v7 = (double)v6;
      *(float *)&v8 = (double)dword_70058480[2 * v0];
      glTranslatef(v8, v7, COERCE_INT(0.0));
      glColor4ub(80, 255, 80, 255);
      glColor4ubv((int)&unk_6FB53860 + 4 * v0);
      v145 = 0.0;
      v146 = 1.0;
      v147 = 0.0;
      v148 = 0.0;
      v149 = 1.0;
      v150 = 1.0;
      v151 = 1.0;
      v152 = 0.0;
      v9 = (double)-v5;
      v153 = v9;
      *(float *)&v154 = v9;
      *(float *)&v155 = v9;
      v10 = (double)v5;
      *(float *)&v156 = v10;
      *(float *)&v157 = v10;
      *(float *)&v158 = v9;
      *(float *)&v159 = v10;
      *(float *)&v160 = v10;
      glVertexPointer(2, 5126, 0, (int)&v153);
      glEnableClientState(32884);
      glTexCoordPointer(2, 5126, 0, (int)&v145);
      glEnableClientState(32888);
      glDrawArrays(5, 0, 4);
      glDisableClientState(32888);
      glDisableClientState(32884);
      --dword_70058460[v0];
    }
    ++v0;
  }
  while ( v0 != 8 );
  glPopAttrib();
  result = glPopMatrix();
  if ( !(dword_6FD400DC | dword_6FBB5094 | dword_6FBB5078 | dword_6FD400E0) || !dword_6FBB84D4 )
  {
LABEL_9:
    v14 = dword_6FBB9544;
    if ( dword_6FBB9544 )
      goto LABEL_16;
    goto LABEL_10;
  }
  v16 = flt_70057FB0 + dbl_70057FA8;
  flt_70057FB0 = v16;
  if ( v16 > 1.0 )
  {
    LODWORD(flt_70057FB0) = 0;
    goto LABEL_9;
  }
  if ( v16 > 0.5 )
    goto LABEL_9;
  glPushMatrix(v13, v12);
  glPushAttrib(v18, v17, 0xFFFFF);
  glEnable(3553);
  glEnable(3042);
  glEnable(3008);
  glAlphaFunc(516, 1056964608);
  glBindTexture(3553, dword_6FBBFD98);
  glTexEnvi(8960, 8704, 8448);
  glColor4ub(255, 0, 0, 128);
  v19 = sub_6F696040();
  v145 = 0.0;
  v146 = 1.0;
  v147 = 0.0;
  v148 = 0.0;
  v149 = 1.0;
  v150 = 1.0;
  v151 = 1.0;
  v152 = 0.0;
  v20 = (double)(v19 / -80);
  v21 = 2 * (v19 / 80);
  v153 = v20;
  *(float *)&v154 = v20;
  *(float *)&v155 = v20;
  v22 = (double)(v19 / 80);
  *(float *)&v156 = v22;
  *(float *)&v157 = v22;
  *(float *)&v158 = v20;
  *(float *)&v159 = v22;
  *(float *)&v160 = v22;
  *(float *)&v23 = (double)v21;
  *(float *)&v24 = (double)(v19 - v21);
  glTranslatef(v24, v23, COERCE_INT(0.0));
  glVertexPointer(2, 5126, 0, (int)&v153);
  glEnableClientState(32884);
  glTexCoordPointer(2, 5126, 0, (int)&v145);
  glEnableClientState(32888);
  glDrawArrays(5, 0, 4);
  glDisableClientState(32888);
  glDisableClientState(32884);
  glPopAttrib();
  result = glPopMatrix();
  v14 = dword_6FBB9544;
  if ( dword_6FBB9544 )
  {
LABEL_16:
    glPushMatrix(v14, v12);
    glPushAttrib(v26, v25, 0xFFFFF);
    glEnable(3553);
    glEnable(3042);
    glBlendFunc(770, 771);
    glBindTexture(3553, dword_6FBBFD88);
    glTexEnvi(8960, 8704, 8448);
    glColor4ub(255, 255, 255, 42);
    GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
    v27 = dword_6FD400C4;
    v28 = (unsigned int)dword_6FD400C4 >> 31;
    GetClientRect((HWND)dword_6FD400CC, (LPRECT)&dword_6FD400BC);
    v29 = (double)dword_6FBBFD80;
    v30 = (double)v27 / v29 * 0.16666667;
    v31 = (signed int)(v29 * v30);
    v32 = (signed int)(v30 * (double)dword_6FBBFD84);
    v145 = 0.0;
    v146 = 0.0;
    v147 = 0.0;
    v148 = 1.0;
    v149 = 1.0;
    v150 = 0.0;
    v151 = 1.0;
    v152 = 1.0;
    v33 = (double)-v31;
    v153 = v33;
    v34 = v33;
    v35 = (double)-v32;
    *(float *)&v154 = v35;
    *(float *)&v155 = v34;
    v36 = v35;
    v37 = (double)v32;
    *(float *)&v156 = v37;
    v38 = (double)v31;
    *(float *)&v157 = v38;
    *(float *)&v158 = v36;
    *(float *)&v159 = v38;
    *(float *)&v160 = v37;
    *(float *)&v39 = (double)(dword_6FD400C8 / 2);
    *(float *)&v40 = (double)((signed int)(v27 + v28) >> 1);
    glTranslatef(v40, v39, COERCE_INT(0.0));
    glVertexPointer(2, 5126, 0, (int)&v153);
    glEnableClientState(32884);
    glTexCoordPointer(2, 5126, 0, (int)&v145);
    glEnableClientState(32888);
    glDrawArrays(5, 0, 4);
    glDisableClientState(32888);
    glDisableClientState(32884);
    glPopAttrib();
    result = glPopMatrix();
    v15 = dword_70057FBC;
    if ( !dword_70057FBC )
      return result;
    goto LABEL_17;
  }
LABEL_10:
  v15 = dword_70057FBC;
  if ( !dword_70057FBC )
    return result;
LABEL_17:
  glPushMatrix(v15, v12);
  v41 = word_6FB45B90;
  v42 = 32;
  glPushAttrib(v44, v43, 0xFFFFF);
  glEnable(3553);
  v137 = 0.0;
  v138 = 1.0;
  v139 = 0.0;
  v140 = 0.0;
  v141 = 1.0;
  v142 = 1.0;
  v143 = 1.0;
  v144 = 0.0;
  v145 = -16.0;
  v146 = 16.0;
  v147 = -16.0;
  v148 = -16.0;
  v149 = 16.0;
  v150 = 16.0;
  v151 = 16.0;
  v152 = -16.0;
  glVertexPointer(2, 5126, 0, (int)&v145);
  glEnableClientState(32884);
  glTexCoordPointer(2, 5126, 0, (int)&v137);
  glEnableClientState(32888);
  do
  {
    glLoadIdentity();
    v45 = 0;
    *(float *)&v46 = (double)v42;
    glTranslatef(1098907648, v46, 0);
    do
    {
      v153 = 0.0;
      v48 = (unsigned __int16)*v41;
      v154 = 3;
      v155 = 4;
      v156 = 5;
      v157 = 6;
      v158 = 7;
      v159 = 8;
      v160 = 9;
      v161 = 10;
      v162 = 11;
      v163 = 12;
      v164 = 13;
      v165 = 14;
      v166 = 15;
      if ( _bittest(&v48, *((_DWORD *)&v153 + v45)) )
      {
        v133 = 64;
        v132 = 64;
        v131 = 64;
      }
      else
      {
        v133 = 255;
        v132 = 255;
        v131 = 255;
      }
      glColor4ub(v131, v132, v133, 255);
      v47 = v45++;
      glBindTexture(3553, dword_6FBBFC08[4 * v47]);
      glTexEnvi(8960, 8704, 8448);
      glDrawArrays(5, 0, 4);
      glTranslatef(1107296256, COERCE_INT(0.0), COERCE_INT(0.0));
    }
    while ( v45 != 14 );
    v42 += 34;
    ++v41;
  }
  while ( v42 != 100 );
  glDisableClientState(32888);
  glDisableClientState(32884);
  glPopAttrib();
  return glPopMatrix();
}
