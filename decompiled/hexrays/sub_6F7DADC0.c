bool sub_6F7DADC0()
{
  PROC v0; // esi@1
  PROC v1; // edi@1
  PROC v2; // ebp@1
  bool v3; // al@2
  PROC v4; // esi@4
  PROC v5; // esi@6
  PROC v6; // esi@8
  PROC v7; // esi@10
  PROC v8; // esi@12
  PROC v9; // esi@14
  PROC v10; // esi@16
  PROC v11; // esi@18
  PROC v12; // esi@20
  PROC v13; // esi@22
  PROC v14; // esi@24
  PROC v15; // esi@26
  PROC v16; // esi@28
  PROC v17; // esi@30
  PROC v18; // esi@32
  PROC v19; // esi@34
  PROC v20; // esi@36
  PROC v21; // esi@38
  PROC v22; // esi@40
  PROC v23; // esi@42
  PROC v24; // esi@44
  PROC v25; // esi@46
  PROC v26; // esi@48
  PROC v27; // esi@50
  PROC v28; // esi@52
  PROC v29; // esi@54
  PROC v30; // esi@56
  PROC v31; // esi@58
  PROC v32; // esi@60
  PROC v33; // esi@62
  PROC v34; // esi@64
  PROC v35; // esi@66
  PROC v36; // esi@68
  PROC v37; // esi@70
  PROC v38; // esi@72
  PROC v39; // esi@74
  PROC v40; // esi@76
  PROC v41; // esi@78
  PROC v42; // esi@80
  PROC v43; // esi@82
  PROC v44; // esi@84
  PROC v45; // esi@86
  PROC v46; // esi@88
  PROC v47; // esi@90
  PROC v48; // esi@92
  PROC v49; // esi@94
  PROC v50; // esi@96
  PROC v51; // esi@98
  PROC v52; // esi@100
  PROC v53; // esi@102
  PROC v54; // esi@104
  PROC v55; // esi@106
  PROC v56; // esi@108
  PROC v57; // esi@110
  PROC v58; // esi@112
  PROC v59; // esi@114
  PROC v60; // esi@116
  PROC v61; // esi@118
  PROC v62; // esi@120
  PROC v63; // esi@122
  PROC v64; // esi@124
  PROC v65; // esi@126
  PROC v66; // esi@128
  PROC v67; // esi@130
  PROC v68; // esi@132
  PROC v69; // esi@134
  PROC v70; // esi@136
  PROC v71; // esi@138
  PROC v72; // esi@140
  PROC v73; // eax@142
  PROC v74; // esi@142
  PROC v75; // eax@142
  int v77; // [sp+1Ch] [bp-130h]@1
  int v78; // [sp+20h] [bp-12Ch]@1
  int v79; // [sp+24h] [bp-128h]@1
  int v80; // [sp+28h] [bp-124h]@1
  int v81; // [sp+2Ch] [bp-120h]@1
  int v82; // [sp+30h] [bp-11Ch]@1
  int v83; // [sp+34h] [bp-118h]@1
  int v84; // [sp+38h] [bp-114h]@1
  int v85; // [sp+3Ch] [bp-110h]@1
  int v86; // [sp+40h] [bp-10Ch]@1
  int v87; // [sp+44h] [bp-108h]@1
  int v88; // [sp+48h] [bp-104h]@1
  int v89; // [sp+4Ch] [bp-100h]@1
  int v90; // [sp+50h] [bp-FCh]@1
  int v91; // [sp+54h] [bp-F8h]@1
  int v92; // [sp+58h] [bp-F4h]@1
  int v93; // [sp+5Ch] [bp-F0h]@1
  int v94; // [sp+60h] [bp-ECh]@1
  int v95; // [sp+64h] [bp-E8h]@1
  int v96; // [sp+68h] [bp-E4h]@1
  int v97; // [sp+6Ch] [bp-E0h]@1
  int v98; // [sp+70h] [bp-DCh]@1
  int v99; // [sp+74h] [bp-D8h]@1
  int v100; // [sp+78h] [bp-D4h]@1
  int v101; // [sp+7Ch] [bp-D0h]@1
  int v102; // [sp+80h] [bp-CCh]@1
  int v103; // [sp+84h] [bp-C8h]@1
  int v104; // [sp+88h] [bp-C4h]@1
  int v105; // [sp+8Ch] [bp-C0h]@1
  int v106; // [sp+90h] [bp-BCh]@1
  int v107; // [sp+94h] [bp-B8h]@1
  int v108; // [sp+98h] [bp-B4h]@1
  int v109; // [sp+9Ch] [bp-B0h]@1
  int v110; // [sp+A0h] [bp-ACh]@1
  int v111; // [sp+A4h] [bp-A8h]@1
  int v112; // [sp+A8h] [bp-A4h]@1
  int v113; // [sp+ACh] [bp-A0h]@1
  int v114; // [sp+B0h] [bp-9Ch]@1
  int v115; // [sp+B4h] [bp-98h]@1
  int v116; // [sp+B8h] [bp-94h]@1
  int v117; // [sp+BCh] [bp-90h]@1
  int v118; // [sp+C0h] [bp-8Ch]@1
  int v119; // [sp+C4h] [bp-88h]@1
  int v120; // [sp+C8h] [bp-84h]@1
  int v121; // [sp+CCh] [bp-80h]@1
  int v122; // [sp+D0h] [bp-7Ch]@1
  int v123; // [sp+D4h] [bp-78h]@1
  int v124; // [sp+D8h] [bp-74h]@1
  int v125; // [sp+DCh] [bp-70h]@1
  int v126; // [sp+E0h] [bp-6Ch]@1
  int v127; // [sp+E4h] [bp-68h]@1
  int v128; // [sp+E8h] [bp-64h]@1
  int v129; // [sp+ECh] [bp-60h]@1
  int v130; // [sp+F0h] [bp-5Ch]@1
  int v131; // [sp+F4h] [bp-58h]@1
  int v132; // [sp+F8h] [bp-54h]@1
  int v133; // [sp+FCh] [bp-50h]@1
  int v134; // [sp+100h] [bp-4Ch]@1
  int v135; // [sp+104h] [bp-48h]@1
  int v136; // [sp+108h] [bp-44h]@1
  int v137; // [sp+10Ch] [bp-40h]@1
  int v138; // [sp+110h] [bp-3Ch]@1
  int v139; // [sp+114h] [bp-38h]@1
  int v140; // [sp+118h] [bp-34h]@1
  int v141; // [sp+11Ch] [bp-30h]@1
  int v142; // [sp+120h] [bp-2Ch]@1
  int v143; // [sp+124h] [bp-28h]@1
  int v144; // [sp+128h] [bp-24h]@1
  int v145; // [sp+12Ch] [bp-20h]@1

  dword_7037101C = (int)wglGetProcAddress("glBindMultiTextureEXT");
  v145 = dword_7037101C;
  dword_70371018 = (int)wglGetProcAddress("glCheckNamedFramebufferStatusEXT");
  v77 = dword_70371018;
  dword_70371014 = (int)wglGetProcAddress("glClientAttribDefaultEXT");
  v78 = dword_70371014;
  dword_70371010 = (int)wglGetProcAddress("glCompressedMultiTexImage1DEXT");
  v79 = dword_70371010;
  dword_7037100C = (int)wglGetProcAddress("glCompressedMultiTexImage2DEXT");
  v80 = dword_7037100C;
  dword_70371008 = (int)wglGetProcAddress("glCompressedMultiTexImage3DEXT");
  v81 = dword_70371008;
  dword_70371004 = (int)wglGetProcAddress("glCompressedMultiTexSubImage1DEXT");
  v82 = dword_70371004;
  dword_70371000 = (int)wglGetProcAddress("glCompressedMultiTexSubImage2DEXT");
  v83 = dword_70371000;
  dword_70370FFC = (int)wglGetProcAddress("glCompressedMultiTexSubImage3DEXT");
  v84 = dword_70370FFC;
  dword_70370FF8 = (int)wglGetProcAddress("glCompressedTextureImage1DEXT");
  v85 = dword_70370FF8;
  dword_70370FF4 = (int)wglGetProcAddress("glCompressedTextureImage2DEXT");
  v86 = dword_70370FF4;
  dword_70370FF0 = (int)wglGetProcAddress("glCompressedTextureImage3DEXT");
  v87 = dword_70370FF0;
  dword_70370FEC = (int)wglGetProcAddress("glCompressedTextureSubImage1DEXT");
  v88 = dword_70370FEC;
  dword_70370FE8 = (int)wglGetProcAddress("glCompressedTextureSubImage2DEXT");
  v89 = dword_70370FE8;
  dword_70370FE4 = (int)wglGetProcAddress("glCompressedTextureSubImage3DEXT");
  v90 = dword_70370FE4;
  dword_70370FE0 = (int)wglGetProcAddress("glCopyMultiTexImage1DEXT");
  v91 = dword_70370FE0;
  dword_70370FDC = (int)wglGetProcAddress("glCopyMultiTexImage2DEXT");
  v92 = dword_70370FDC;
  dword_70370FD8 = (int)wglGetProcAddress("glCopyMultiTexSubImage1DEXT");
  v93 = dword_70370FD8;
  dword_70370FD4 = (int)wglGetProcAddress("glCopyMultiTexSubImage2DEXT");
  v94 = dword_70370FD4;
  dword_70370FD0 = (int)wglGetProcAddress("glCopyMultiTexSubImage3DEXT");
  v95 = dword_70370FD0;
  dword_70370FCC = (int)wglGetProcAddress("glCopyTextureImage1DEXT");
  v96 = dword_70370FCC;
  dword_70370FC8 = (int)wglGetProcAddress("glCopyTextureImage2DEXT");
  v97 = dword_70370FC8;
  dword_70370FC4 = (int)wglGetProcAddress("glCopyTextureSubImage1DEXT");
  v98 = dword_70370FC4;
  dword_70370FC0 = (int)wglGetProcAddress("glCopyTextureSubImage2DEXT");
  v99 = dword_70370FC0;
  dword_70370FBC = (int)wglGetProcAddress("glCopyTextureSubImage3DEXT");
  v100 = dword_70370FBC;
  dword_70370FB8 = (int)wglGetProcAddress("glDisableClientStateIndexedEXT");
  v101 = dword_70370FB8;
  dword_70370FB4 = (int)wglGetProcAddress("glDisableClientStateiEXT");
  v102 = dword_70370FB4;
  dword_70370FB0 = (int)wglGetProcAddress("glDisableVertexArrayAttribEXT");
  v103 = dword_70370FB0;
  dword_70370FAC = (int)wglGetProcAddress("glDisableVertexArrayEXT");
  v104 = dword_70370FAC;
  dword_70370FA8 = (int)wglGetProcAddress("glEnableClientStateIndexedEXT");
  v105 = dword_70370FA8;
  dword_70370FA4 = (int)wglGetProcAddress("glEnableClientStateiEXT");
  v106 = dword_70370FA4;
  dword_70370FA0 = (int)wglGetProcAddress("glEnableVertexArrayAttribEXT");
  v107 = dword_70370FA0;
  dword_70370F9C = (int)wglGetProcAddress("glEnableVertexArrayEXT");
  v108 = dword_70370F9C;
  dword_70370F98 = (int)wglGetProcAddress("glFlushMappedNamedBufferRangeEXT");
  v109 = dword_70370F98;
  dword_70370F94 = (int)wglGetProcAddress("glFramebufferDrawBufferEXT");
  v110 = dword_70370F94;
  dword_70370F90 = (int)wglGetProcAddress("glFramebufferDrawBuffersEXT");
  v111 = dword_70370F90;
  dword_70370F8C = (int)wglGetProcAddress("glFramebufferReadBufferEXT");
  v112 = dword_70370F8C;
  dword_70370F88 = (int)wglGetProcAddress("glGenerateMultiTexMipmapEXT");
  v113 = dword_70370F88;
  dword_70370F84 = (int)wglGetProcAddress("glGenerateTextureMipmapEXT");
  v114 = dword_70370F84;
  dword_70370F80 = (int)wglGetProcAddress("glGetCompressedMultiTexImageEXT");
  v115 = dword_70370F80;
  dword_70370F7C = (int)wglGetProcAddress("glGetCompressedTextureImageEXT");
  v116 = dword_70370F7C;
  dword_70370F78 = (int)wglGetProcAddress("glGetDoubleIndexedvEXT");
  v117 = dword_70370F78;
  dword_70370F74 = (int)wglGetProcAddress("glGetDoublei_vEXT");
  v118 = dword_70370F74;
  dword_70370F70 = (int)wglGetProcAddress("glGetFloatIndexedvEXT");
  v119 = dword_70370F70;
  dword_70370F6C = (int)wglGetProcAddress("glGetFloati_vEXT");
  v120 = dword_70370F6C;
  dword_70370F68 = (int)wglGetProcAddress("glGetFramebufferParameterivEXT");
  v121 = dword_70370F68;
  dword_70370F64 = (int)wglGetProcAddress("glGetMultiTexEnvfvEXT");
  v122 = dword_70370F64;
  dword_70370F60 = (int)wglGetProcAddress("glGetMultiTexEnvivEXT");
  v123 = dword_70370F60;
  dword_70370F5C = (int)wglGetProcAddress("glGetMultiTexGendvEXT");
  v124 = dword_70370F5C;
  dword_70370F58 = (int)wglGetProcAddress("glGetMultiTexGenfvEXT");
  v125 = dword_70370F58;
  dword_70370F54 = (int)wglGetProcAddress("glGetMultiTexGenivEXT");
  v126 = dword_70370F54;
  dword_70370F50 = (int)wglGetProcAddress("glGetMultiTexImageEXT");
  v127 = dword_70370F50;
  dword_70370F4C = (int)wglGetProcAddress("glGetMultiTexLevelParameterfvEXT");
  v128 = dword_70370F4C;
  dword_70370F48 = (int)wglGetProcAddress("glGetMultiTexLevelParameterivEXT");
  v129 = dword_70370F48;
  dword_70370F44 = (int)wglGetProcAddress("glGetMultiTexParameterIivEXT");
  v130 = dword_70370F44;
  dword_70370F40 = (int)wglGetProcAddress("glGetMultiTexParameterIuivEXT");
  v131 = dword_70370F40;
  dword_70370F3C = (int)wglGetProcAddress("glGetMultiTexParameterfvEXT");
  v132 = dword_70370F3C;
  dword_70370F38 = (int)wglGetProcAddress("glGetMultiTexParameterivEXT");
  v133 = dword_70370F38;
  dword_70370F34 = (int)wglGetProcAddress("glGetNamedBufferParameterivEXT");
  v134 = dword_70370F34;
  dword_70370F30 = (int)wglGetProcAddress("glGetNamedBufferPointervEXT");
  v135 = dword_70370F30;
  dword_70370F2C = (int)wglGetProcAddress("glGetNamedBufferSubDataEXT");
  v136 = dword_70370F2C;
  dword_70370F28 = (int)wglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT");
  v137 = dword_70370F28;
  dword_70370F24 = (int)wglGetProcAddress("glGetNamedProgramLocalParameterIivEXT");
  v138 = dword_70370F24;
  dword_70370F20 = (int)wglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT");
  v139 = dword_70370F20;
  dword_70370F1C = (int)wglGetProcAddress("glGetNamedProgramLocalParameterdvEXT");
  v140 = dword_70370F1C;
  dword_70370F18 = (int)wglGetProcAddress("glGetNamedProgramLocalParameterfvEXT");
  v141 = dword_70370F18;
  dword_70370F14 = (int)wglGetProcAddress("glGetNamedProgramStringEXT");
  v142 = dword_70370F14;
  v0 = wglGetProcAddress("glGetNamedProgramivEXT");
  dword_70370F10 = (int)v0;
  v1 = wglGetProcAddress("glGetNamedRenderbufferParameterivEXT");
  dword_70370F0C = (int)v1;
  v2 = wglGetProcAddress("glGetPointerIndexedvEXT");
  dword_70370F08 = (int)v2;
  dword_70370F04 = (int)wglGetProcAddress("glGetPointeri_vEXT");
  v144 = dword_70370F04;
  dword_70370F00 = (int)wglGetProcAddress("glGetTextureImageEXT");
  v143 = dword_70370F00;
  dword_70370EFC = (int)wglGetProcAddress("glGetTextureLevelParameterfvEXT");
  if ( !dword_70370EFC
    || (v3 = v84 == 0
          || v85 == 0
          || v86 == 0
          || v87 == 0
          || v88 == 0
          || v89 == 0
          || v90 == 0
          || v91 == 0
          || v92 == 0
          || v93 == 0
          || v94 == 0
          || v95 == 0
          || v96 == 0
          || v97 == 0
          || v98 == 0
          || v99 == 0
          || v100 == 0
          || v101 == 0
          || v102 == 0
          || v103 == 0
          || v104 == 0
          || v105 == 0
          || v106 == 0
          || v107 == 0
          || v108 == 0
          || v109 == 0
          || v110 == 0
          || v111 == 0
          || v112 == 0
          || v113 == 0
          || v114 == 0
          || v115 == 0
          || v116 == 0
          || v117 == 0
          || v118 == 0
          || v119 == 0
          || v120 == 0
          || v121 == 0
          || v122 == 0
          || v123 == 0
          || v124 == 0
          || v125 == 0
          || v126 == 0
          || v127 == 0
          || v128 == 0
          || v129 == 0
          || v130 == 0
          || v131 == 0
          || v132 == 0
          || v133 == 0
          || v134 == 0
          || v135 == 0
          || v136 == 0
          || v137 == 0
          || v138 == 0
          || v139 == 0
          || v140 == 0
          || v141 == 0
          || v142 == 0
          || v0 == 0
          || v1 == 0
          || v2 == 0
          || v144 == 0
          || v143 == 0,
        v77 == 0 || v78 == 0 || v79 == 0 || v80 == 0 || v82 == 0 || v83 == 0 || v3 || v81 == 0)
    || !v145 )
  {
    dword_70370EF8 = (int)wglGetProcAddress("glGetTextureLevelParameterivEXT");
    dword_70370EF4 = (int)wglGetProcAddress("glGetTextureParameterIivEXT");
LABEL_146:
    dword_70370EF0 = (int)wglGetProcAddress("glGetTextureParameterIuivEXT");
    dword_70370EEC = (int)wglGetProcAddress("glGetTextureParameterfvEXT");
LABEL_147:
    dword_70370EE8 = (int)wglGetProcAddress("glGetTextureParameterivEXT");
    dword_70370EE4 = (int)wglGetProcAddress("glGetVertexArrayIntegeri_vEXT");
LABEL_148:
    dword_70370EE0 = (int)wglGetProcAddress("glGetVertexArrayIntegervEXT");
    dword_70370EDC = (int)wglGetProcAddress("glGetVertexArrayPointeri_vEXT");
LABEL_149:
    dword_70370ED8 = (int)wglGetProcAddress("glGetVertexArrayPointervEXT");
    dword_70370ED4 = (int)wglGetProcAddress("glMapNamedBufferEXT");
LABEL_150:
    dword_70370ED0 = (int)wglGetProcAddress("glMapNamedBufferRangeEXT");
    dword_70370ECC = (int)wglGetProcAddress("glMatrixFrustumEXT");
LABEL_151:
    dword_70370EC8 = (int)wglGetProcAddress("glMatrixLoadIdentityEXT");
    dword_70370EC4 = (int)wglGetProcAddress("glMatrixLoadTransposedEXT");
LABEL_152:
    dword_70370EC0 = (int)wglGetProcAddress("glMatrixLoadTransposefEXT");
    dword_70370EBC = (int)wglGetProcAddress("glMatrixLoaddEXT");
LABEL_153:
    dword_70370EB8 = (int)wglGetProcAddress("glMatrixLoadfEXT");
    dword_70370EB4 = (int)wglGetProcAddress("glMatrixMultTransposedEXT");
LABEL_154:
    dword_70370EB0 = (int)wglGetProcAddress("glMatrixMultTransposefEXT");
    dword_70370EAC = (int)wglGetProcAddress("glMatrixMultdEXT");
LABEL_155:
    dword_70370EA8 = (int)wglGetProcAddress("glMatrixMultfEXT");
    dword_70370EA4 = (int)wglGetProcAddress("glMatrixOrthoEXT");
LABEL_156:
    dword_70370EA0 = (int)wglGetProcAddress("glMatrixPopEXT");
    dword_70370E9C = (int)wglGetProcAddress("glMatrixPushEXT");
LABEL_157:
    dword_70370E98 = (int)wglGetProcAddress("glMatrixRotatedEXT");
    dword_70370E94 = (int)wglGetProcAddress("glMatrixRotatefEXT");
LABEL_158:
    dword_70370E90 = (int)wglGetProcAddress("glMatrixScaledEXT");
    dword_70370E8C = (int)wglGetProcAddress("glMatrixScalefEXT");
LABEL_159:
    dword_70370E88 = (int)wglGetProcAddress("glMatrixTranslatedEXT");
    dword_70370E84 = (int)wglGetProcAddress("glMatrixTranslatefEXT");
LABEL_160:
    dword_70370E80 = (int)wglGetProcAddress("glMultiTexBufferEXT");
    dword_70370E7C = (int)wglGetProcAddress("glMultiTexCoordPointerEXT");
LABEL_161:
    dword_70370E78 = (int)wglGetProcAddress("glMultiTexEnvfEXT");
    dword_70370E74 = (int)wglGetProcAddress("glMultiTexEnvfvEXT");
LABEL_162:
    dword_70370E70 = (int)wglGetProcAddress("glMultiTexEnviEXT");
    dword_70370E6C = (int)wglGetProcAddress("glMultiTexEnvivEXT");
LABEL_163:
    dword_70370E68 = (int)wglGetProcAddress("glMultiTexGendEXT");
    dword_70370E64 = (int)wglGetProcAddress("glMultiTexGendvEXT");
LABEL_164:
    dword_70370E60 = (int)wglGetProcAddress("glMultiTexGenfEXT");
    dword_70370E5C = (int)wglGetProcAddress("glMultiTexGenfvEXT");
LABEL_165:
    dword_70370E58 = (int)wglGetProcAddress("glMultiTexGeniEXT");
    dword_70370E54 = (int)wglGetProcAddress("glMultiTexGenivEXT");
LABEL_166:
    dword_70370E50 = (int)wglGetProcAddress("glMultiTexImage1DEXT");
    dword_70370E4C = (int)wglGetProcAddress("glMultiTexImage2DEXT");
LABEL_167:
    dword_70370E48 = (int)wglGetProcAddress("glMultiTexImage3DEXT");
    dword_70370E44 = (int)wglGetProcAddress("glMultiTexParameterIivEXT");
LABEL_168:
    dword_70370E40 = (int)wglGetProcAddress("glMultiTexParameterIuivEXT");
    dword_70370E3C = (int)wglGetProcAddress("glMultiTexParameterfEXT");
LABEL_169:
    dword_70370E38 = (int)wglGetProcAddress("glMultiTexParameterfvEXT");
    dword_70370E34 = (int)wglGetProcAddress("glMultiTexParameteriEXT");
LABEL_170:
    dword_70370E30 = (int)wglGetProcAddress("glMultiTexParameterivEXT");
    dword_70370E2C = (int)wglGetProcAddress("glMultiTexRenderbufferEXT");
LABEL_171:
    dword_70370E28 = (int)wglGetProcAddress("glMultiTexSubImage1DEXT");
    dword_70370E24 = (int)wglGetProcAddress("glMultiTexSubImage2DEXT");
LABEL_172:
    dword_70370E20 = (int)wglGetProcAddress("glMultiTexSubImage3DEXT");
    dword_70370E1C = (int)wglGetProcAddress("glNamedBufferDataEXT");
LABEL_173:
    dword_70370E18 = (int)wglGetProcAddress("glNamedBufferSubDataEXT");
    dword_70370E14 = (int)wglGetProcAddress("glNamedCopyBufferSubDataEXT");
LABEL_174:
    dword_70370E10 = (int)wglGetProcAddress("glNamedFramebufferRenderbufferEXT");
    dword_70370E0C = (int)wglGetProcAddress("glNamedFramebufferTexture1DEXT");
LABEL_175:
    dword_70370E08 = (int)wglGetProcAddress("glNamedFramebufferTexture2DEXT");
    dword_70370E04 = (int)wglGetProcAddress("glNamedFramebufferTexture3DEXT");
LABEL_176:
    dword_70370E00 = (int)wglGetProcAddress("glNamedFramebufferTextureEXT");
    dword_70370DFC = (int)wglGetProcAddress("glNamedFramebufferTextureFaceEXT");
LABEL_177:
    dword_70370DF8 = (int)wglGetProcAddress("glNamedFramebufferTextureLayerEXT");
    dword_70370DF4 = (int)wglGetProcAddress("glNamedProgramLocalParameter4dEXT");
LABEL_178:
    dword_70370DF0 = (int)wglGetProcAddress("glNamedProgramLocalParameter4dvEXT");
    dword_70370DEC = (int)wglGetProcAddress("glNamedProgramLocalParameter4fEXT");
LABEL_179:
    dword_70370DE8 = (int)wglGetProcAddress("glNamedProgramLocalParameter4fvEXT");
    dword_70370DE4 = (int)wglGetProcAddress("glNamedProgramLocalParameterI4iEXT");
LABEL_180:
    dword_70370DE0 = (int)wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
    dword_70370DDC = (int)wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
LABEL_181:
    dword_70370DD8 = (int)wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
    dword_70370DD4 = (int)wglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
LABEL_182:
    dword_70370DD0 = (int)wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
    dword_70370DCC = (int)wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
LABEL_183:
    dword_70370DC8 = (int)wglGetProcAddress("glNamedProgramStringEXT");
    dword_70370DC4 = (int)wglGetProcAddress("glNamedRenderbufferStorageEXT");
LABEL_184:
    dword_70370DC0 = (int)wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
    dword_70370DBC = (int)wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
LABEL_185:
    dword_70370DB8 = (int)wglGetProcAddress("glProgramUniform1fEXT");
    dword_70370DB4 = (int)wglGetProcAddress("glProgramUniform1fvEXT");
LABEL_186:
    dword_70370DB0 = (int)wglGetProcAddress("glProgramUniform1iEXT");
    dword_70370DAC = (int)wglGetProcAddress("glProgramUniform1ivEXT");
LABEL_187:
    dword_70370DA8 = (int)wglGetProcAddress("glProgramUniform1uiEXT");
    dword_70370DA4 = (int)wglGetProcAddress("glProgramUniform1uivEXT");
LABEL_188:
    dword_70370DA0 = (int)wglGetProcAddress("glProgramUniform2fEXT");
    dword_70370D9C = (int)wglGetProcAddress("glProgramUniform2fvEXT");
LABEL_189:
    dword_70370D98 = (int)wglGetProcAddress("glProgramUniform2iEXT");
    dword_70370D94 = (int)wglGetProcAddress("glProgramUniform2ivEXT");
LABEL_190:
    dword_70370D90 = (int)wglGetProcAddress("glProgramUniform2uiEXT");
    dword_70370D8C = (int)wglGetProcAddress("glProgramUniform2uivEXT");
LABEL_191:
    dword_70370D88 = (int)wglGetProcAddress("glProgramUniform3fEXT");
    dword_70370D84 = (int)wglGetProcAddress("glProgramUniform3fvEXT");
LABEL_192:
    dword_70370D80 = (int)wglGetProcAddress("glProgramUniform3iEXT");
    dword_70370D7C = (int)wglGetProcAddress("glProgramUniform3ivEXT");
LABEL_193:
    dword_70370D78 = (int)wglGetProcAddress("glProgramUniform3uiEXT");
    dword_70370D74 = (int)wglGetProcAddress("glProgramUniform3uivEXT");
LABEL_194:
    dword_70370D70 = (int)wglGetProcAddress("glProgramUniform4fEXT");
    dword_70370D6C = (int)wglGetProcAddress("glProgramUniform4fvEXT");
LABEL_195:
    dword_70370D68 = (int)wglGetProcAddress("glProgramUniform4iEXT");
    dword_70370D64 = (int)wglGetProcAddress("glProgramUniform4ivEXT");
LABEL_196:
    dword_70370D60 = (int)wglGetProcAddress("glProgramUniform4uiEXT");
    dword_70370D5C = (int)wglGetProcAddress("glProgramUniform4uivEXT");
LABEL_197:
    dword_70370D58 = (int)wglGetProcAddress("glProgramUniformMatrix2fvEXT");
    dword_70370D54 = (int)wglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
LABEL_198:
    dword_70370D50 = (int)wglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
    dword_70370D4C = (int)wglGetProcAddress("glProgramUniformMatrix3fvEXT");
LABEL_199:
    dword_70370D48 = (int)wglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
    dword_70370D44 = (int)wglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
LABEL_200:
    dword_70370D40 = (int)wglGetProcAddress("glProgramUniformMatrix4fvEXT");
    dword_70370D3C = (int)wglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
LABEL_201:
    dword_70370D38 = (int)wglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
    dword_70370D34 = (int)wglGetProcAddress("glPushClientAttribDefaultEXT");
LABEL_202:
    dword_70370D30 = (int)wglGetProcAddress("glTextureBufferEXT");
    dword_70370D2C = (int)wglGetProcAddress("glTextureImage1DEXT");
LABEL_203:
    dword_70370D28 = (int)wglGetProcAddress("glTextureImage2DEXT");
    dword_70370D24 = (int)wglGetProcAddress("glTextureImage3DEXT");
LABEL_204:
    dword_70370D20 = (int)wglGetProcAddress("glTextureParameterIivEXT");
    dword_70370D1C = (int)wglGetProcAddress("glTextureParameterIuivEXT");
LABEL_205:
    dword_70370D18 = (int)wglGetProcAddress("glTextureParameterfEXT");
    dword_70370D14 = (int)wglGetProcAddress("glTextureParameterfvEXT");
LABEL_206:
    dword_70370D10 = (int)wglGetProcAddress("glTextureParameteriEXT");
    dword_70370D0C = (int)wglGetProcAddress("glTextureParameterivEXT");
LABEL_207:
    dword_70370D08 = (int)wglGetProcAddress("glTextureRenderbufferEXT");
    dword_70370D04 = (int)wglGetProcAddress("glTextureSubImage1DEXT");
LABEL_208:
    dword_70370D00 = (int)wglGetProcAddress("glTextureSubImage2DEXT");
    dword_70370CFC = (int)wglGetProcAddress("glTextureSubImage3DEXT");
LABEL_209:
    dword_70370CF8 = (int)wglGetProcAddress("glUnmapNamedBufferEXT");
    dword_70370CF4 = (int)wglGetProcAddress("glVertexArrayColorOffsetEXT");
LABEL_210:
    dword_70370CF0 = (int)wglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT");
    dword_70370CEC = (int)wglGetProcAddress("glVertexArrayFogCoordOffsetEXT");
LABEL_211:
    dword_70370CE8 = (int)wglGetProcAddress("glVertexArrayIndexOffsetEXT");
    dword_70370CE4 = (int)wglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT");
LABEL_212:
    dword_70370CE0 = (int)wglGetProcAddress("glVertexArrayNormalOffsetEXT");
    dword_70370CDC = (int)wglGetProcAddress("glVertexArraySecondaryColorOffsetEXT");
LABEL_213:
    dword_70370CD8 = (int)wglGetProcAddress("glVertexArrayTexCoordOffsetEXT");
    dword_70370CD4 = (int)wglGetProcAddress("glVertexArrayVertexAttribDivisorEXT");
LABEL_214:
    dword_70370CD0 = (int)wglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT");
    dword_70370CCC = (int)wglGetProcAddress("glVertexArrayVertexAttribOffsetEXT");
    goto LABEL_215;
  }
  v4 = wglGetProcAddress("glGetTextureLevelParameterivEXT");
  dword_70370EF8 = (int)v4;
  dword_70370EF4 = (int)wglGetProcAddress("glGetTextureParameterIivEXT");
  if ( !dword_70370EF4 || !v4 )
    goto LABEL_146;
  v5 = wglGetProcAddress("glGetTextureParameterIuivEXT");
  dword_70370EF0 = (int)v5;
  dword_70370EEC = (int)wglGetProcAddress("glGetTextureParameterfvEXT");
  if ( !dword_70370EEC || !v5 )
    goto LABEL_147;
  v6 = wglGetProcAddress("glGetTextureParameterivEXT");
  dword_70370EE8 = (int)v6;
  dword_70370EE4 = (int)wglGetProcAddress("glGetVertexArrayIntegeri_vEXT");
  if ( !dword_70370EE4 || !v6 )
    goto LABEL_148;
  v7 = wglGetProcAddress("glGetVertexArrayIntegervEXT");
  dword_70370EE0 = (int)v7;
  dword_70370EDC = (int)wglGetProcAddress("glGetVertexArrayPointeri_vEXT");
  if ( !dword_70370EDC || !v7 )
    goto LABEL_149;
  v8 = wglGetProcAddress("glGetVertexArrayPointervEXT");
  dword_70370ED8 = (int)v8;
  dword_70370ED4 = (int)wglGetProcAddress("glMapNamedBufferEXT");
  if ( !dword_70370ED4 || !v8 )
    goto LABEL_150;
  v9 = wglGetProcAddress("glMapNamedBufferRangeEXT");
  dword_70370ED0 = (int)v9;
  dword_70370ECC = (int)wglGetProcAddress("glMatrixFrustumEXT");
  if ( !dword_70370ECC || !v9 )
    goto LABEL_151;
  v10 = wglGetProcAddress("glMatrixLoadIdentityEXT");
  dword_70370EC8 = (int)v10;
  dword_70370EC4 = (int)wglGetProcAddress("glMatrixLoadTransposedEXT");
  if ( !dword_70370EC4 || !v10 )
    goto LABEL_152;
  v11 = wglGetProcAddress("glMatrixLoadTransposefEXT");
  dword_70370EC0 = (int)v11;
  dword_70370EBC = (int)wglGetProcAddress("glMatrixLoaddEXT");
  if ( !dword_70370EBC || !v11 )
    goto LABEL_153;
  v12 = wglGetProcAddress("glMatrixLoadfEXT");
  dword_70370EB8 = (int)v12;
  dword_70370EB4 = (int)wglGetProcAddress("glMatrixMultTransposedEXT");
  if ( !dword_70370EB4 || !v12 )
    goto LABEL_154;
  v13 = wglGetProcAddress("glMatrixMultTransposefEXT");
  dword_70370EB0 = (int)v13;
  dword_70370EAC = (int)wglGetProcAddress("glMatrixMultdEXT");
  if ( !dword_70370EAC || !v13 )
    goto LABEL_155;
  v14 = wglGetProcAddress("glMatrixMultfEXT");
  dword_70370EA8 = (int)v14;
  dword_70370EA4 = (int)wglGetProcAddress("glMatrixOrthoEXT");
  if ( !dword_70370EA4 || !v14 )
    goto LABEL_156;
  v15 = wglGetProcAddress("glMatrixPopEXT");
  dword_70370EA0 = (int)v15;
  dword_70370E9C = (int)wglGetProcAddress("glMatrixPushEXT");
  if ( !dword_70370E9C || !v15 )
    goto LABEL_157;
  v16 = wglGetProcAddress("glMatrixRotatedEXT");
  dword_70370E98 = (int)v16;
  dword_70370E94 = (int)wglGetProcAddress("glMatrixRotatefEXT");
  if ( !dword_70370E94 || !v16 )
    goto LABEL_158;
  v17 = wglGetProcAddress("glMatrixScaledEXT");
  dword_70370E90 = (int)v17;
  dword_70370E8C = (int)wglGetProcAddress("glMatrixScalefEXT");
  if ( !dword_70370E8C || !v17 )
    goto LABEL_159;
  v18 = wglGetProcAddress("glMatrixTranslatedEXT");
  dword_70370E88 = (int)v18;
  dword_70370E84 = (int)wglGetProcAddress("glMatrixTranslatefEXT");
  if ( !dword_70370E84 || !v18 )
    goto LABEL_160;
  v19 = wglGetProcAddress("glMultiTexBufferEXT");
  dword_70370E80 = (int)v19;
  dword_70370E7C = (int)wglGetProcAddress("glMultiTexCoordPointerEXT");
  if ( !dword_70370E7C || !v19 )
    goto LABEL_161;
  v20 = wglGetProcAddress("glMultiTexEnvfEXT");
  dword_70370E78 = (int)v20;
  dword_70370E74 = (int)wglGetProcAddress("glMultiTexEnvfvEXT");
  if ( !dword_70370E74 || !v20 )
    goto LABEL_162;
  v21 = wglGetProcAddress("glMultiTexEnviEXT");
  dword_70370E70 = (int)v21;
  dword_70370E6C = (int)wglGetProcAddress("glMultiTexEnvivEXT");
  if ( !dword_70370E6C || !v21 )
    goto LABEL_163;
  v22 = wglGetProcAddress("glMultiTexGendEXT");
  dword_70370E68 = (int)v22;
  dword_70370E64 = (int)wglGetProcAddress("glMultiTexGendvEXT");
  if ( !dword_70370E64 || !v22 )
    goto LABEL_164;
  v23 = wglGetProcAddress("glMultiTexGenfEXT");
  dword_70370E60 = (int)v23;
  dword_70370E5C = (int)wglGetProcAddress("glMultiTexGenfvEXT");
  if ( !dword_70370E5C || !v23 )
    goto LABEL_165;
  v24 = wglGetProcAddress("glMultiTexGeniEXT");
  dword_70370E58 = (int)v24;
  dword_70370E54 = (int)wglGetProcAddress("glMultiTexGenivEXT");
  if ( !dword_70370E54 || !v24 )
    goto LABEL_166;
  v25 = wglGetProcAddress("glMultiTexImage1DEXT");
  dword_70370E50 = (int)v25;
  dword_70370E4C = (int)wglGetProcAddress("glMultiTexImage2DEXT");
  if ( !dword_70370E4C || !v25 )
    goto LABEL_167;
  v26 = wglGetProcAddress("glMultiTexImage3DEXT");
  dword_70370E48 = (int)v26;
  dword_70370E44 = (int)wglGetProcAddress("glMultiTexParameterIivEXT");
  if ( !dword_70370E44 || !v26 )
    goto LABEL_168;
  v27 = wglGetProcAddress("glMultiTexParameterIuivEXT");
  dword_70370E40 = (int)v27;
  dword_70370E3C = (int)wglGetProcAddress("glMultiTexParameterfEXT");
  if ( !dword_70370E3C || !v27 )
    goto LABEL_169;
  v28 = wglGetProcAddress("glMultiTexParameterfvEXT");
  dword_70370E38 = (int)v28;
  dword_70370E34 = (int)wglGetProcAddress("glMultiTexParameteriEXT");
  if ( !dword_70370E34 || !v28 )
    goto LABEL_170;
  v29 = wglGetProcAddress("glMultiTexParameterivEXT");
  dword_70370E30 = (int)v29;
  dword_70370E2C = (int)wglGetProcAddress("glMultiTexRenderbufferEXT");
  if ( !dword_70370E2C || !v29 )
    goto LABEL_171;
  v30 = wglGetProcAddress("glMultiTexSubImage1DEXT");
  dword_70370E28 = (int)v30;
  dword_70370E24 = (int)wglGetProcAddress("glMultiTexSubImage2DEXT");
  if ( !dword_70370E24 || !v30 )
    goto LABEL_172;
  v31 = wglGetProcAddress("glMultiTexSubImage3DEXT");
  dword_70370E20 = (int)v31;
  dword_70370E1C = (int)wglGetProcAddress("glNamedBufferDataEXT");
  if ( !dword_70370E1C || !v31 )
    goto LABEL_173;
  v32 = wglGetProcAddress("glNamedBufferSubDataEXT");
  dword_70370E18 = (int)v32;
  dword_70370E14 = (int)wglGetProcAddress("glNamedCopyBufferSubDataEXT");
  if ( !dword_70370E14 || !v32 )
    goto LABEL_174;
  v33 = wglGetProcAddress("glNamedFramebufferRenderbufferEXT");
  dword_70370E10 = (int)v33;
  dword_70370E0C = (int)wglGetProcAddress("glNamedFramebufferTexture1DEXT");
  if ( !dword_70370E0C || !v33 )
    goto LABEL_175;
  v34 = wglGetProcAddress("glNamedFramebufferTexture2DEXT");
  dword_70370E08 = (int)v34;
  dword_70370E04 = (int)wglGetProcAddress("glNamedFramebufferTexture3DEXT");
  if ( !dword_70370E04 || !v34 )
    goto LABEL_176;
  v35 = wglGetProcAddress("glNamedFramebufferTextureEXT");
  dword_70370E00 = (int)v35;
  dword_70370DFC = (int)wglGetProcAddress("glNamedFramebufferTextureFaceEXT");
  if ( !dword_70370DFC || !v35 )
    goto LABEL_177;
  v36 = wglGetProcAddress("glNamedFramebufferTextureLayerEXT");
  dword_70370DF8 = (int)v36;
  dword_70370DF4 = (int)wglGetProcAddress("glNamedProgramLocalParameter4dEXT");
  if ( !dword_70370DF4 || !v36 )
    goto LABEL_178;
  v37 = wglGetProcAddress("glNamedProgramLocalParameter4dvEXT");
  dword_70370DF0 = (int)v37;
  dword_70370DEC = (int)wglGetProcAddress("glNamedProgramLocalParameter4fEXT");
  if ( !dword_70370DEC || !v37 )
    goto LABEL_179;
  v38 = wglGetProcAddress("glNamedProgramLocalParameter4fvEXT");
  dword_70370DE8 = (int)v38;
  dword_70370DE4 = (int)wglGetProcAddress("glNamedProgramLocalParameterI4iEXT");
  if ( !dword_70370DE4 || !v38 )
    goto LABEL_180;
  v39 = wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
  dword_70370DE0 = (int)v39;
  dword_70370DDC = (int)wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
  if ( !dword_70370DDC || !v39 )
    goto LABEL_181;
  v40 = wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
  dword_70370DD8 = (int)v40;
  dword_70370DD4 = (int)wglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
  if ( !dword_70370DD4 || !v40 )
    goto LABEL_182;
  v41 = wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
  dword_70370DD0 = (int)v41;
  dword_70370DCC = (int)wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
  if ( !dword_70370DCC || !v41 )
    goto LABEL_183;
  v42 = wglGetProcAddress("glNamedProgramStringEXT");
  dword_70370DC8 = (int)v42;
  dword_70370DC4 = (int)wglGetProcAddress("glNamedRenderbufferStorageEXT");
  if ( !dword_70370DC4 || !v42 )
    goto LABEL_184;
  v43 = wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
  dword_70370DC0 = (int)v43;
  dword_70370DBC = (int)wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
  if ( !dword_70370DBC || !v43 )
    goto LABEL_185;
  v44 = wglGetProcAddress("glProgramUniform1fEXT");
  dword_70370DB8 = (int)v44;
  dword_70370DB4 = (int)wglGetProcAddress("glProgramUniform1fvEXT");
  if ( !dword_70370DB4 || !v44 )
    goto LABEL_186;
  v45 = wglGetProcAddress("glProgramUniform1iEXT");
  dword_70370DB0 = (int)v45;
  dword_70370DAC = (int)wglGetProcAddress("glProgramUniform1ivEXT");
  if ( !dword_70370DAC || !v45 )
    goto LABEL_187;
  v46 = wglGetProcAddress("glProgramUniform1uiEXT");
  dword_70370DA8 = (int)v46;
  dword_70370DA4 = (int)wglGetProcAddress("glProgramUniform1uivEXT");
  if ( !dword_70370DA4 || !v46 )
    goto LABEL_188;
  v47 = wglGetProcAddress("glProgramUniform2fEXT");
  dword_70370DA0 = (int)v47;
  dword_70370D9C = (int)wglGetProcAddress("glProgramUniform2fvEXT");
  if ( !dword_70370D9C || !v47 )
    goto LABEL_189;
  v48 = wglGetProcAddress("glProgramUniform2iEXT");
  dword_70370D98 = (int)v48;
  dword_70370D94 = (int)wglGetProcAddress("glProgramUniform2ivEXT");
  if ( !dword_70370D94 || !v48 )
    goto LABEL_190;
  v49 = wglGetProcAddress("glProgramUniform2uiEXT");
  dword_70370D90 = (int)v49;
  dword_70370D8C = (int)wglGetProcAddress("glProgramUniform2uivEXT");
  if ( !dword_70370D8C || !v49 )
    goto LABEL_191;
  v50 = wglGetProcAddress("glProgramUniform3fEXT");
  dword_70370D88 = (int)v50;
  dword_70370D84 = (int)wglGetProcAddress("glProgramUniform3fvEXT");
  if ( !dword_70370D84 || !v50 )
    goto LABEL_192;
  v51 = wglGetProcAddress("glProgramUniform3iEXT");
  dword_70370D80 = (int)v51;
  dword_70370D7C = (int)wglGetProcAddress("glProgramUniform3ivEXT");
  if ( !dword_70370D7C || !v51 )
    goto LABEL_193;
  v52 = wglGetProcAddress("glProgramUniform3uiEXT");
  dword_70370D78 = (int)v52;
  dword_70370D74 = (int)wglGetProcAddress("glProgramUniform3uivEXT");
  if ( !dword_70370D74 || !v52 )
    goto LABEL_194;
  v53 = wglGetProcAddress("glProgramUniform4fEXT");
  dword_70370D70 = (int)v53;
  dword_70370D6C = (int)wglGetProcAddress("glProgramUniform4fvEXT");
  if ( !dword_70370D6C || !v53 )
    goto LABEL_195;
  v54 = wglGetProcAddress("glProgramUniform4iEXT");
  dword_70370D68 = (int)v54;
  dword_70370D64 = (int)wglGetProcAddress("glProgramUniform4ivEXT");
  if ( !dword_70370D64 || !v54 )
    goto LABEL_196;
  v55 = wglGetProcAddress("glProgramUniform4uiEXT");
  dword_70370D60 = (int)v55;
  dword_70370D5C = (int)wglGetProcAddress("glProgramUniform4uivEXT");
  if ( !dword_70370D5C || !v55 )
    goto LABEL_197;
  v56 = wglGetProcAddress("glProgramUniformMatrix2fvEXT");
  dword_70370D58 = (int)v56;
  dword_70370D54 = (int)wglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
  if ( !dword_70370D54 || !v56 )
    goto LABEL_198;
  v57 = wglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
  dword_70370D50 = (int)v57;
  dword_70370D4C = (int)wglGetProcAddress("glProgramUniformMatrix3fvEXT");
  if ( !dword_70370D4C || !v57 )
    goto LABEL_199;
  v58 = wglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
  dword_70370D48 = (int)v58;
  dword_70370D44 = (int)wglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
  if ( !dword_70370D44 || !v58 )
    goto LABEL_200;
  v59 = wglGetProcAddress("glProgramUniformMatrix4fvEXT");
  dword_70370D40 = (int)v59;
  dword_70370D3C = (int)wglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
  if ( !dword_70370D3C || !v59 )
    goto LABEL_201;
  v60 = wglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
  dword_70370D38 = (int)v60;
  dword_70370D34 = (int)wglGetProcAddress("glPushClientAttribDefaultEXT");
  if ( !dword_70370D34 || !v60 )
    goto LABEL_202;
  v61 = wglGetProcAddress("glTextureBufferEXT");
  dword_70370D30 = (int)v61;
  dword_70370D2C = (int)wglGetProcAddress("glTextureImage1DEXT");
  if ( !dword_70370D2C || !v61 )
    goto LABEL_203;
  v62 = wglGetProcAddress("glTextureImage2DEXT");
  dword_70370D28 = (int)v62;
  dword_70370D24 = (int)wglGetProcAddress("glTextureImage3DEXT");
  if ( !dword_70370D24 || !v62 )
    goto LABEL_204;
  v63 = wglGetProcAddress("glTextureParameterIivEXT");
  dword_70370D20 = (int)v63;
  dword_70370D1C = (int)wglGetProcAddress("glTextureParameterIuivEXT");
  if ( !dword_70370D1C || !v63 )
    goto LABEL_205;
  v64 = wglGetProcAddress("glTextureParameterfEXT");
  dword_70370D18 = (int)v64;
  dword_70370D14 = (int)wglGetProcAddress("glTextureParameterfvEXT");
  if ( !dword_70370D14 || !v64 )
    goto LABEL_206;
  v65 = wglGetProcAddress("glTextureParameteriEXT");
  dword_70370D10 = (int)v65;
  dword_70370D0C = (int)wglGetProcAddress("glTextureParameterivEXT");
  if ( !dword_70370D0C || !v65 )
    goto LABEL_207;
  v66 = wglGetProcAddress("glTextureRenderbufferEXT");
  dword_70370D08 = (int)v66;
  dword_70370D04 = (int)wglGetProcAddress("glTextureSubImage1DEXT");
  if ( !dword_70370D04 || !v66 )
    goto LABEL_208;
  v67 = wglGetProcAddress("glTextureSubImage2DEXT");
  dword_70370D00 = (int)v67;
  dword_70370CFC = (int)wglGetProcAddress("glTextureSubImage3DEXT");
  if ( !dword_70370CFC || !v67 )
    goto LABEL_209;
  v68 = wglGetProcAddress("glUnmapNamedBufferEXT");
  dword_70370CF8 = (int)v68;
  dword_70370CF4 = (int)wglGetProcAddress("glVertexArrayColorOffsetEXT");
  if ( !dword_70370CF4 || !v68 )
    goto LABEL_210;
  v69 = wglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT");
  dword_70370CF0 = (int)v69;
  dword_70370CEC = (int)wglGetProcAddress("glVertexArrayFogCoordOffsetEXT");
  if ( !dword_70370CEC || !v69 )
    goto LABEL_211;
  v70 = wglGetProcAddress("glVertexArrayIndexOffsetEXT");
  dword_70370CE8 = (int)v70;
  dword_70370CE4 = (int)wglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT");
  if ( !dword_70370CE4 || !v70 )
    goto LABEL_212;
  v71 = wglGetProcAddress("glVertexArrayNormalOffsetEXT");
  dword_70370CE0 = (int)v71;
  dword_70370CDC = (int)wglGetProcAddress("glVertexArraySecondaryColorOffsetEXT");
  if ( !dword_70370CDC || !v71 )
    goto LABEL_213;
  v72 = wglGetProcAddress("glVertexArrayTexCoordOffsetEXT");
  dword_70370CD8 = (int)v72;
  dword_70370CD4 = (int)wglGetProcAddress("glVertexArrayVertexAttribDivisorEXT");
  if ( !dword_70370CD4 || !v72 )
    goto LABEL_214;
  v73 = wglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT");
  v74 = v73;
  dword_70370CD0 = (int)v73;
  v75 = wglGetProcAddress("glVertexArrayVertexAttribOffsetEXT");
  dword_70370CCC = (int)v75;
  if ( v74 && v75 )
  {
    dword_70370CC8 = (int)wglGetProcAddress("glVertexArrayVertexOffsetEXT");
    return dword_70370CC8 == 0;
  }
LABEL_215:
  dword_70370CC8 = (int)wglGetProcAddress("glVertexArrayVertexOffsetEXT");
  return 1;
}
