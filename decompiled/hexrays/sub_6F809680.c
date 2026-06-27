signed __int64 __cdecl sub_6F809680(__int64 a1)
{
  signed int v1; // edi@1
  signed __int64 result; // rax@2
  unsigned __int64 v3; // rcx@5
  signed __int64 v4; // kr10_8@5
  unsigned __int64 v5; // ST20_8@5
  unsigned __int64 v6; // ST10_8@5
  signed __int64 v7; // ST20_8@5
  unsigned __int64 v8; // ST18_8@5
  unsigned __int64 v9; // kr18_8@5
  signed int v10; // edx@5
  signed int v11; // esi@5
  int v12; // edi@5
  __int64 v13; // rax@5
  unsigned __int64 v14; // ST18_8@5
  unsigned __int64 v15; // ST20_8@5
  unsigned int v16; // ebp@5
  unsigned __int64 v17; // ST18_8@5
  int v18; // ebp@5
  int v19; // edi@5
  __int64 v20; // ST10_8@5
  unsigned __int64 v21; // ST20_8@5
  unsigned __int64 v22; // ST18_8@5
  unsigned __int64 v23; // ST20_8@5
  unsigned int v24; // ebp@5
  unsigned __int64 v25; // rax@5
  unsigned __int64 v26; // ST18_8@5
  unsigned __int64 v27; // ST20_8@5
  int v28; // esi@5
  unsigned __int64 v29; // ST20_8@5
  signed __int64 v30; // kr48_8@5
  unsigned __int64 v31; // rt0@5
  signed int v32; // ebp@5
  unsigned __int64 v33; // ST18_8@5
  unsigned __int64 v34; // rt0@5
  signed int v35; // ebp@5
  unsigned __int64 v36; // rax@5
  unsigned __int64 v37; // ST10_8@5
  int v38; // kr60_4@5
  signed int v39; // ebp@5
  int v40; // esi@5
  unsigned int v41; // ebx@6
  unsigned int v42; // edi@6
  signed __int64 v43; // rax@6
  unsigned int v44; // edx@10
  unsigned int v45; // kr70_4@10
  int v46; // ST08_4@10
  unsigned int v47; // ebx@10
  signed __int64 v48; // rax@10
  unsigned int v49; // edi@10
  signed __int64 v50; // rax@14
  __int64 v51; // ST00_8@14
  unsigned __int64 v52; // rdi@14
  signed int v53; // ebx@14
  signed __int64 v54; // rax@14
  signed int v55; // esi@14
  signed int v56; // edi@14
  signed int v57; // edx@18
  unsigned int v58; // kr90_4@18
  unsigned int v59; // eax@18
  int v60; // esi@18
  signed int v61; // ebp@18
  signed int v62; // eax@18
  signed int v63; // esi@18
  __int64 v64; // rax@18
  unsigned int v65; // edi@18
  signed int v66; // ebp@18
  unsigned __int64 v67; // ST00_8@22
  unsigned int v68; // ecx@22
  signed int v69; // edi@23
  signed int v70; // ebp@23
  signed int v71; // ebx@24
  signed int v72; // ST3C_4@24
  unsigned __int64 v73; // rcx@24
  signed int v74; // ST38_4@24
  unsigned __int64 v75; // rcx@24
  signed int v76; // edi@24
  signed int v77; // ST14_4@24
  signed int v78; // ST34_4@24
  unsigned __int64 v79; // krB0_8@24
  signed int v80; // ebp@24
  __int64 v81; // rax@24
  unsigned __int64 v82; // rcx@24
  unsigned __int64 v83; // rcx@24
  signed int v84; // edi@24
  __int64 v85; // ST10_8@24
  int v86; // ST20_4@24
  unsigned __int64 v87; // rax@24
  signed int v88; // edi@24
  signed int v89; // ebp@24
  unsigned int v90; // ebx@25
  int v91; // esi@25
  char v92; // cl@25
  int v93; // ebp@27
  int v94; // edx@27
  int v95; // esi@27
  int v96; // ebx@27
  int v97; // ebp@29
  __int64 v98; // ST00_8@29
  int v99; // esi@29
  int v100; // ebx@29
  int v101; // ebp@31
  __int64 v102; // ST00_8@31
  int v103; // esi@31
  int v104; // ebx@31
  int v105; // ebp@33
  __int64 v106; // ST00_8@33
  signed int v107; // esi@33
  signed int v108; // esi@33
  int v109; // ebx@33
  __int64 v110; // ST00_8@35
  int v111; // edx@35
  signed __int64 v112; // rax@39
  unsigned __int64 v113; // [sp+8h] [bp-54h]@24
  __int64 v114; // [sp+8h] [bp-54h]@27
  __int64 v115; // [sp+8h] [bp-54h]@29
  __int64 v116; // [sp+8h] [bp-54h]@31
  __int64 v117; // [sp+8h] [bp-54h]@33
  signed int v118; // [sp+10h] [bp-4Ch]@5
  __int64 v119; // [sp+10h] [bp-4Ch]@33
  unsigned __int64 v120; // [sp+18h] [bp-44h]@5
  unsigned __int64 v121; // [sp+18h] [bp-44h]@10
  signed __int64 v122; // [sp+18h] [bp-44h]@14
  unsigned __int64 v123; // [sp+18h] [bp-44h]@18
  __int64 v124; // [sp+20h] [bp-3Ch]@5
  __int64 v125; // [sp+20h] [bp-3Ch]@10
  __int64 v126; // [sp+20h] [bp-3Ch]@14
  __int64 v127; // [sp+20h] [bp-3Ch]@18
  signed int v128; // [sp+2Ch] [bp-30h]@1

  v1 = SHIDWORD(a1) >> 25;
  v128 = SHIDWORD(a1) >> 25;
  if ( SHIDWORD(a1) >> 25 < 0 )
  {
    result = 0i64;
  }
  else
  {
    result = 0x7FFFFFFFFFFFFFFFi64;
    if ( v1 <= 62 )
    {
      result = 0x4000000000000000i64;
      if ( a1 != __PAIR__(v1 << 25, 0) )
      {
        v3 = 32 * (a1 - __PAIR__(v1 << 25, 0));
        v4 = __PAIR__(
               ((unsigned __int64)(SHIDWORD(v3) >> 31) >> 32) ^ (__CFADD__(SHIDWORD(v3) >> 31, 15647286)
                                                               + ((unsigned __int64)(SHIDWORD(v3) >> 31) >> 32)
                                                               + 324135026),
               (SHIDWORD(v3) >> 31) ^ (unsigned int)((SHIDWORD(v3) >> 31) + 15647286))
           + 2784298672347513965i64;
        v5 = 2
           * (v3
            - __PAIR__(
                ((unsigned __int64)(SHIDWORD(v3) >> 31) >> 32) ^ (((unsigned __int64)((SHIDWORD(v3) >> 31)
                                                                                    + 1065013492i64) >> 32)
                                                                + 850920263),
                (unsigned int)((SHIDWORD(v3) >> 31) + 1065013492) ^ (SHIDWORD(v3) >> 31)));
        v6 = v4 + ((SHIDWORD(v5) >> 31) ^ (unsigned __int64)((SHIDWORD(v5) >> 31) + (v4 >> 2)));
        v7 = 2 * (v5 - (((SHIDWORD(v5) >> 31) + 3398653926678325526i64) ^ (SHIDWORD(v5) >> 31)));
        v8 = v6 + ((SHIDWORD(v7) >> 31) ^ ((SHIDWORD(v7) >> 31) + __PAIR__(SHIDWORD(v6) >> 3, (unsigned int)(v6 >> 3))));
        HIDWORD(v3) = (v6
                     + ((SHIDWORD(v7) >> 31) ^ ((SHIDWORD(v7) >> 31)
                                              + __PAIR__(SHIDWORD(v6) >> 3, (unsigned int)(v6 >> 3))))) >> 32;
        v9 = v7 - (((SHIDWORD(v7) >> 31) + 3344118731597134342i64) ^ (SHIDWORD(v7) >> 31));
        v10 = v9 >> 31;
        v11 = v10 >> 31;
        v12 = __PAIR__(HIDWORD(v3), (unsigned int)v8) >> 4;
        v13 = v10 >> 31;
        HIDWORD(v6) = HIDWORD(v13);
        LODWORD(v13) = v11 ^ (v11 + v12);
        HIDWORD(v13) ^= HIDWORD(v13) + __CFADD__(v11, v12) + (SHIDWORD(v3) >> 4);
        v14 = v8 + v13;
        v15 = 2 * v9
            - __PAIR__(
                (unsigned int)(((__PAIR__(HIDWORD(v6), v11) - 1731304732) >> 32) + 775551889) ^ HIDWORD(v6),
                (v11 - 1731304732) ^ (unsigned int)v11);
        v16 = SHIDWORD(v15) >> 31;
        LODWORD(v3) = v14 >> 4;
        HIDWORD(v6) = (unsigned __int64)(SHIDWORD(v15) >> 31) >> 32;
        LODWORD(v13) = (SHIDWORD(v15) >> 31) ^ ((SHIDWORD(v15) >> 31) + v3);
        HIDWORD(v13) = HIDWORD(v6) ^ (HIDWORD(v6) + __CFADD__(SHIDWORD(v15) >> 31, (_DWORD)v3) + (SHIDWORD(v14) >> 4));
        v17 = v14 + v13;
        HIDWORD(v13) = (v15
                      - __PAIR__(
                          ((unsigned int)__CFADD__(v16, -1731304732) + HIDWORD(v6) + 775551889) ^ HIDWORD(v6),
                          (v16 - 1731304732) ^ v16)) >> 31;
        LODWORD(v15) = 2 * (v15 - ((v16 - 1731304732) ^ v16));
        HIDWORD(v15) = HIDWORD(v13);
        v18 = SHIDWORD(v13) >> 31;
        v19 = v17 >> 5;
        v20 = SHIDWORD(v13) >> 31;
        LODWORD(v13) = (SHIDWORD(v13) >> 31) ^ ((SHIDWORD(v13) >> 31) + v19);
        HIDWORD(v13) = HIDWORD(v20) ^ (HIDWORD(v20) + __CFADD__(SHIDWORD(v13) >> 31, v19) + (SHIDWORD(v17) >> 5));
        v21 = 2
            * (v15
             - __PAIR__(
                 ((unsigned int)__CFADD__((_DWORD)v20, 1750490255) + HIDWORD(v20) + 774793279) ^ HIDWORD(v20),
                 (v20 + 1750490255) ^ v18));
        v22 = v17
            + v13
            + ((SHIDWORD(v21) >> 31) ^ ((SHIDWORD(v21) >> 31)
                                      + __PAIR__((signed int)((v17 + v13) >> 32) >> 6, (unsigned int)((v17 + v13) >> 6))));
        v23 = 2
            * (v21
             - __PAIR__(
                 (((unsigned __int64)((SHIDWORD(v21) >> 31) - 502825023i64) >> 32) + 774604043) ^ ((unsigned __int64)(SHIDWORD(v21) >> 31) >> 32),
                 (unsigned int)((SHIDWORD(v21) >> 31) - 502825023) ^ (SHIDWORD(v21) >> 31)));
        v24 = SHIDWORD(v23) >> 31;
        v25 = (SHIDWORD(v23) >> 31) ^ ((SHIDWORD(v23) >> 31) + __PAIR__(SHIDWORD(v22) >> 7, (unsigned int)(v22 >> 7)));
        HIDWORD(v3) = (v23
                     - __PAIR__(
                         (((unsigned __int64)((SHIDWORD(v23) >> 31) - 25462565i64) >> 32) + 774556760) ^ ((unsigned __int64)(SHIDWORD(v23) >> 31) >> 32),
                         (v24 - 25462565) ^ v24)) >> 31;
        LODWORD(v23) = 2 * (v23 - ((v24 - 25462565) ^ v24));
        HIDWORD(v23) = HIDWORD(v3);
        v26 = v22
            + v25
            + ((SHIDWORD(v3) >> 31) ^ (unsigned __int64)((SHIDWORD(v3) >> 31) + ((signed __int64)(v22 + v25) >> 8)));
        v27 = 2
            * (v23
             - __PAIR__(
                 (((unsigned __int64)((SHIDWORD(v3) >> 31) - 449849870i64) >> 32) + 774544941) ^ ((unsigned __int64)(SHIDWORD(v3) >> 31) >> 32),
                 (unsigned int)((SHIDWORD(v3) >> 31) - 449849870) ^ (SHIDWORD(v3) >> 31)));
        v28 = v26 >> 9;
        HIDWORD(v20) = (unsigned __int64)(SHIDWORD(v27) >> 31) >> 32;
        LODWORD(v25) = (SHIDWORD(v27) >> 31) ^ ((SHIDWORD(v27) >> 31) + v28);
        HIDWORD(v25) = HIDWORD(v20) ^ (HIDWORD(v20) + __CFADD__(SHIDWORD(v27) >> 31, v28) + (SHIDWORD(v26) >> 9));
        v29 = 2
            * (v27
             - __PAIR__(
                 (unsigned int)(((unsigned __int64)((SHIDWORD(v27) >> 31) + 953499372i64) >> 32) + 774541987) ^ HIDWORD(v20),
                 (unsigned int)((SHIDWORD(v27) >> 31) + 953499372) ^ (SHIDWORD(v27) >> 31)));
        v30 = v26
            + v25
            + ((SHIDWORD(v29) >> 31) ^ ((SHIDWORD(v29) >> 31)
                                      + __PAIR__(
                                          (signed int)((v26 + v25) >> 32) >> 10,
                                          (unsigned int)((v26 + v25) >> 10))));
        HIDWORD(v31) = (v29 - (((SHIDWORD(v29) >> 31) + 3326629331968334262i64) ^ (SHIDWORD(v29) >> 31))) >> 32;
        LODWORD(v31) = v29 - (((SHIDWORD(v29) >> 31) - 1889658442) ^ (SHIDWORD(v29) >> 31));
        v32 = (signed int)(v31 >> 31) >> 31;
        LODWORD(v3) = (v32 - 451262370) ^ v32;
        v33 = v30 + (v32 ^ (unsigned __int64)(v32 + (v30 >> 11)));
        LODWORD(v29) = 2 * (2 * v31 - v3);
        v34 = 2 * v31
            - __PAIR__(
                ((unsigned __int64)(v32 + 3326628538837780574i64) >> 32) ^ ((unsigned __int64)v32 >> 32),
                (unsigned int)v3);
        v35 = (signed int)(v34 >> 31) >> 31;
        v36 = v35 ^ (v35 + __PAIR__(SHIDWORD(v33) >> 12, (unsigned int)(v33 >> 12)));
        v37 = v33 + v36;
        v38 = v29 - ((v35 - 1165298808) ^ v35);
        v39 = (__PAIR__(v34 >> 31, (unsigned int)v29)
             - __PAIR__(
                 ((unsigned __int64)v35 >> 32) ^ (((unsigned __int64)(v35 - 1165298808i64) >> 32) + 774541017),
                 (v35 - 1165298808) ^ (unsigned int)v35)) >> 31;
        LODWORD(v29) = 2 * v38;
        HIDWORD(v29) = v39;
        v39 >>= 31;
        LODWORD(v3) = v39;
        v40 = v39 + ((v33 + v36) >> 13);
        HIDWORD(v36) = (v39
                      + __PAIR__(
                          (unsigned int)((signed int)((v33 + v36) >> 32) >> 13),
                          (unsigned int)((v33 + v36) >> 13))) >> 32;
        HIDWORD(v3) = (unsigned __int64)v39 >> 32;
        LODWORD(v36) = v39 ^ v40;
        HIDWORD(v36) ^= HIDWORD(v3);
        v120 = v36 + v37;
        v118 = 12;
        HIDWORD(v3) = (v29
                     - __PAIR__(
                         (unsigned int)(((v3 + 803682378) >> 32) + 774541006) ^ HIDWORD(v3),
                         (v39 + 803682378) ^ (unsigned int)v39)) >> 32;
        LODWORD(v124) = 2 * v38 - ((v39 + 803682378) ^ v39);
        HIDWORD(v124) = HIDWORD(v3);
        do
        {
          v41 = SHIDWORD(v124) >> 31;
          v42 = SHIDWORD(v124) >> 62;
          v43 = (signed __int64)v120 >> ((v118 + 1) & 0x1F);
          if ( ((_BYTE)v118 + 1) & 0x20 )
            LODWORD(v43) = (unsigned __int64)((signed __int64)v120 >> ((v118 + 1) & 0x1F)) >> 32;
          if ( ((_BYTE)v118 + 1) & 0x20 )
            HIDWORD(v43) = SHIDWORD(v120) >> (v118 + 1) >> 31;
          v45 = (v41 ^ (v41 + v43)) + v120;
          v44 = (__PAIR__(v42 ^ ((__PAIR__(v42, v41) + v43) >> 32), v41 ^ (v41 + v43)) + v120) >> 32;
          v121 = __PAIR__(v44, v45);
          v46 = (dword_6FB8E578[2 * (v118 + 1)] + (SHIDWORD(v124) >> 31)) ^ v41;
          HIDWORD(v124) = (v124
                         - __PAIR__(
                             v42 ^ ((__PAIR__(dword_6FB8E57C[2 * (v118 + 1)], dword_6FB8E578[2 * (v118 + 1)])
                                   + __PAIR__(v42, SHIDWORD(v124) >> 31)) >> 32),
                             v46)) >> 31;
          v47 = SHIDWORD(v124) >> 31;
          LODWORD(v124) = 2 * (v124 - v46);
          v48 = (signed __int64)__PAIR__(v44, v45) >> ((v118 + 2) & 0x1F);
          v49 = SHIDWORD(v124) >> 62;
          if ( ((_BYTE)v118 + 2) & 0x20 )
            LODWORD(v48) = HIDWORD(v48);
          if ( ((_BYTE)v118 + 2) & 0x20 )
            SHIDWORD(v48) >>= 31;
          v50 = (signed int)v47 + v48;
          LODWORD(v51) = v47 ^ v50;
          HIDWORD(v51) = v49 ^ HIDWORD(v50);
          v122 = v51 + v121;
          v52 = v125
              - __PAIR__(
                  v49 ^ ((__PAIR__(dword_6FB8E57C[2 * (v118 + 2)], dword_6FB8E578[2 * (v118 + 2)]) + __PAIR__(v49, v47)) >> 32),
                  (dword_6FB8E578[2 * (v118 + 2)] + v47) ^ v47);
          HIDWORD(v52) = v52 >> 31;
          LODWORD(v126) = 2 * v52;
          HIDWORD(v126) = HIDWORD(v52);
          v54 = v122 >> ((v118 + 3) & 0x1F);
          v55 = SHIDWORD(v52) >> 31;
          v53 = v55;
          v56 = v55 >> 31;
          if ( ((_BYTE)v118 + 3) & 0x20 )
            LODWORD(v54) = (unsigned __int64)(v122 >> ((v118 + 3) & 0x1F)) >> 32;
          if ( ((_BYTE)v118 + 3) & 0x20 )
            SHIDWORD(v54) >>= 31;
          v58 = (v55 ^ (v55 + v54)) + v122;
          v57 = (__PAIR__(v56 ^ (unsigned int)((unsigned __int64)(v55 + v54) >> 32), v55 ^ (unsigned int)(v55 + v54))
               + v122) >> 32;
          v59 = (__PAIR__(dword_6FB8E57C[2 * (v118 + 3)], dword_6FB8E578[2 * (v118 + 3)]) + v55) >> 32;
          v60 = dword_6FB8E578[2 * (v118 + 3)] + v55;
          v123 = __PAIR__(v57, v58);
          v118 += 4;
          v61 = v57;
          v62 = (v126 - __PAIR__(v56 ^ v59, v60 ^ (unsigned int)v53)) >> 31;
          LODWORD(v127) = 2 * (v126 - (v60 ^ v53));
          HIDWORD(v127) = v62;
          v63 = v62 >> 31;
          v64 = v62 >> 31;
          v65 = __PAIR__((unsigned int)v61, (unsigned int)v123) >> v118;
          v66 = v61 >> v118;
          if ( v118 & 0x20 )
            v65 = v66;
          if ( v118 & 0x20 )
            v66 >>= 31;
          v67 = (v64 + __PAIR__(v66, v65)) ^ v64;
          v68 = (__PAIR__(dword_6FB8E57C[2 * v118], dword_6FB8E578[2 * v118]) + v64) >> 32;
          LODWORD(v64) = dword_6FB8E578[2 * v118] + v64;
          v120 = v67 + v123;
          HIDWORD(v64) = (v127 - __PAIR__(HIDWORD(v64) ^ v68, (unsigned int)v64 ^ v63)) >> 31;
          LODWORD(v124) = 2 * (v127 - (v64 ^ v63));
          HIDWORD(v124) = HIDWORD(v64);
        }
        while ( v118 != 32 );
        v69 = 0;
        v70 = 0;
        if ( v128 > 30 )
        {
          v71 = (signed int)((v124
                            - __PAIR__(
                                (SHIDWORD(v124) >> 62) ^ ((unsigned int)__CFADD__(SHIDWORD(v124) >> 31, 1460010031)
                                                        + (SHIDWORD(v124) >> 62)
                                                        + 774541002),
                                (SHIDWORD(v124) >> 31) ^ (unsigned int)((SHIDWORD(v124) >> 31) + 1460010031))) >> 31) >> 31;
          v72 = (signed int)((v124
                            - __PAIR__(
                                (SHIDWORD(v124) >> 62) ^ ((unsigned int)__CFADD__(SHIDWORD(v124) >> 31, 1460010031)
                                                        + (SHIDWORD(v124) >> 62)
                                                        + 774541002),
                                (SHIDWORD(v124) >> 31) ^ (unsigned int)((SHIDWORD(v124) >> 31) + 1460010031))) >> 31) >> 31;
          v73 = 2
              * (v124
               - __PAIR__(
                   (SHIDWORD(v124) >> 62) ^ ((unsigned int)__CFADD__(SHIDWORD(v124) >> 31, 1460010031)
                                           + (SHIDWORD(v124) >> 62)
                                           + 774541002),
                   (SHIDWORD(v124) >> 31) ^ (unsigned int)((SHIDWORD(v124) >> 31) + 1460010031)))
              - __PAIR__(
                  ((signed int)((v124
                               - __PAIR__(
                                   (SHIDWORD(v124) >> 62) ^ ((unsigned int)__CFADD__(SHIDWORD(v124) >> 31, 1460010031)
                                                           + (SHIDWORD(v124) >> 62)
                                                           + 774541002),
                                   (SHIDWORD(v124) >> 31) ^ (unsigned int)((SHIDWORD(v124) >> 31) + 1460010031))) >> 31) >> 62) ^ ((unsigned int)__CFADD__(v71, 1460010031) + ((signed int)((v124 - __PAIR__((SHIDWORD(v124) >> 62) ^ ((unsigned int)__CFADD__(SHIDWORD(v124) >> 31, 1460010031) + (SHIDWORD(v124) >> 62) + 774541002), (SHIDWORD(v124) >> 31) ^ (unsigned int)((SHIDWORD(v124) >> 31) + 1460010031))) >> 31) >> 62) + 774541002),
                  v71 ^ (unsigned int)(v71 + 1460010031));
          v74 = (signed int)(v73 >> 31) >> 31;
          v75 = 2 * v73
              - __PAIR__(
                  ((signed int)(v73 >> 31) >> 62) ^ ((unsigned int)__CFADD__(v74, 1460010031)
                                                   + ((signed int)(v73 >> 31) >> 62)
                                                   + 774541002),
                  v74 ^ (unsigned int)(v74 + 1460010031));
          v76 = v75 >> 31;
          v77 = v76;
          v76 >>= 31;
          v78 = v76;
          v79 = __PAIR__(v77, 2 * (signed int)v75)
              - __PAIR__(
                  (v76 >> 31) ^ (unsigned int)(((unsigned __int64)(v76 + 1460010031i64) >> 32) + 774541002),
                  v76 ^ (unsigned int)(v76 + 1460010031));
          LODWORD(v75) = 2 * v75 - (v76 ^ (v76 + 1460010031));
          HIDWORD(v75) = (signed int)(__PAIR__(HIDWORD(v79), (unsigned int)v75) >> 31) >> 31;
          v80 = (signed int)(__PAIR__(HIDWORD(v79), (unsigned int)v75) >> 31) >> 31;
          HIDWORD(v81) = ((signed int)(__PAIR__(HIDWORD(v79), (unsigned int)v75) >> 31) >> 62) ^ ((__PAIR__(
                                                                                                     (unsigned int)((signed int)(__PAIR__(HIDWORD(v79), (unsigned int)v75) >> 31) >> 62),
                                                                                                     HIDWORD(v75))
                                                                                                 + 3326628274461080623i64) >> 32);
          LODWORD(v81) = v80 ^ (HIDWORD(v75) + 1460010031);
          v82 = 2 * __PAIR__(HIDWORD(v79), (unsigned int)v75) - v81;
          LODWORD(v124) = (signed int)(v82 >> 31) >> 31;
          v83 = 2 * v82
              - __PAIR__(
                  ((signed int)(v82 >> 31) >> 62) ^ ((unsigned int)__CFADD__((_DWORD)v124, 1460010031)
                                                   + ((signed int)(v82 >> 31) >> 62)
                                                   + 774541002),
                  v124 ^ (v124 + 1460010031));
          v84 = v83 >> 31;
          HIDWORD(v81) = (2 * v83
                        - __PAIR__(
                            ((unsigned __int64)(v84 >> 31) >> 32) ^ (((unsigned __int64)((v84 >> 31) + 1460010031i64) >> 32)
                                                                   + 774541002),
                            (v84 >> 31) ^ (unsigned int)((v84 >> 31) + 1460010031))) >> 31;
          LODWORD(v85) = 2 * (2 * v83 - ((v84 >> 31) ^ ((v84 >> 31) + 1460010031)));
          HIDWORD(v85) = HIDWORD(v81);
          SHIDWORD(v81) >>= 31;
          v86 = ((v84 >> 31) ^ ((v84 >> 31) + (SHIDWORD(v120) >> 6)))
              + ((v124 + (SHIDWORD(v120) >> 5)) ^ v124)
              + (v80 ^ (v80 + (SHIDWORD(v120) >> 4)))
              + (v78 ^ (v78 + (SHIDWORD(v120) >> 3)))
              + (v74 ^ (v74 + (SHIDWORD(v120) >> 2)))
              + (v72 ^ (v72 + (SHIDWORD(v120) >> 1)))
              + ((SHIDWORD(v124) >> 31) ^ ((SHIDWORD(v124) >> 31) + HIDWORD(v120)))
              + (HIDWORD(v81) ^ (HIDWORD(v81) + (SHIDWORD(v120) >> 7)));
          HIDWORD(v83) = (v85
                        - __PAIR__(
                            (unsigned int)(((unsigned __int64)(SHIDWORD(v81) + 1460010031i64) >> 32) + 774541002) ^ (SHIDWORD(v81) >> 31),
                            (unsigned int)(HIDWORD(v81) + 1460010031) ^ HIDWORD(v81))) >> 32;
          v87 = 2
              * (v85
               - __PAIR__(
                   (unsigned int)(((unsigned __int64)(SHIDWORD(v81) + 1460010031i64) >> 32) + 774541002) ^ (SHIDWORD(v81) >> 31),
                   (unsigned int)(HIDWORD(v81) + 1460010031) ^ HIDWORD(v81))
               - (((SHIDWORD(v83) >> 31) + 3326628274461080623i64) ^ (SHIDWORD(v83) >> 31)));
          v88 = 41;
          v89 = ((SHIDWORD(v83) >> 31) ^ ((SHIDWORD(v83) >> 31) + (SHIDWORD(v120) >> 7)))
              + v86
              + ((SHIDWORD(v87) >> 31) ^ ((SHIDWORD(v87) >> 31) + (SHIDWORD(v120) >> 8)));
          v113 = 2
               * (v87
                - __PAIR__(
                    (unsigned int)((unsigned __int64)((SHIDWORD(v87) >> 31) + 3326628274461080623i64) >> 32) ^ (SHIDWORD(v87) >> 62),
                    (unsigned int)((SHIDWORD(v87) >> 31) + 1460010031) ^ (SHIDWORD(v87) >> 31)));
          do
          {
            v90 = SHIDWORD(v113) >> 31;
            v91 = v120 >> v88;
            v92 = v88 + 1;
            if ( v88 & 0x20 )
              v91 = SHIDWORD(v120) >> v88;
            v93 = (v90 ^ (v90 + v91)) + v89;
            v94 = (SHIDWORD(v113) >> 31) + 1460010031;
            HIDWORD(v113) = (v113
                           - __PAIR__(
                               (unsigned int)((__PAIR__(SHIDWORD(v113) >> 62, SHIDWORD(v113) >> 31)
                                             + 3326628274461080623i64) >> 32) ^ (SHIDWORD(v113) >> 62),
                               v94 ^ v90)) >> 31;
            v95 = SHIDWORD(v113) >> 31;
            LODWORD(v114) = 2 * (v113 - (v94 ^ v90));
            v96 = v120 >> v92;
            if ( v92 & 0x20 )
              v96 = SHIDWORD(v120) >> v92;
            v97 = (v95 ^ (v95 + v96)) + v93;
            LODWORD(v98) = (v95 + 1460010031) ^ v95;
            HIDWORD(v98) = ((unsigned __int64)v95 >> 32) ^ (((unsigned __int64)(v95 + 1460010031i64) >> 32) + 774541002);
            HIDWORD(v114) = (unsigned __int64)(v114 - v98) >> 31;
            v99 = SHIDWORD(v114) >> 31;
            LODWORD(v115) = 2 * (v114 - v98);
            v100 = v120 >> ((unsigned __int8)v88 + 2);
            if ( ((_BYTE)v88 + 2) & 0x20 )
              v100 = SHIDWORD(v120) >> (v88 + 2);
            v101 = (v99 ^ (v99 + v100)) + v97;
            LODWORD(v102) = (v99 + 1460010031) ^ v99;
            HIDWORD(v102) = ((unsigned __int64)v99 >> 32) ^ (((unsigned __int64)(v99 + 1460010031i64) >> 32) + 774541002);
            HIDWORD(v115) = (unsigned __int64)(v115 - v102) >> 31;
            v103 = SHIDWORD(v115) >> 31;
            LODWORD(v116) = 2 * (v115 - v102);
            v104 = v120 >> ((unsigned __int8)v88 + 3);
            if ( ((_BYTE)v88 + 3) & 0x20 )
              v104 = SHIDWORD(v120) >> (v88 + 3);
            v105 = (v103 ^ (v103 + v104)) + v101;
            LODWORD(v106) = (v103 + 1460010031) ^ v103;
            HIDWORD(v106) = ((unsigned __int64)v103 >> 32) ^ (((unsigned __int64)(v103 + 1460010031i64) >> 32)
                                                            + 774541002);
            v107 = (unsigned __int64)(v116 - v106) >> 31;
            HIDWORD(v116) = v107;
            v108 = v107 >> 31;
            LODWORD(v117) = 2 * (v116 - v106);
            LODWORD(v119) = v108;
            v109 = v120 >> ((unsigned __int8)v88 + 4);
            if ( ((_BYTE)v88 + 4) & 0x20 )
              v109 = SHIDWORD(v120) >> (v88 + 4);
            v89 = (v108 ^ (v108 + v109)) + v105;
            LODWORD(v110) = (v108 + 1460010031) ^ v108;
            HIDWORD(v119) = (unsigned __int64)v108 >> 32;
            HIDWORD(v110) = HIDWORD(v119) ^ (((unsigned __int64)(v119 + 1460010031) >> 32) + 774541002);
            v88 += 5;
            v111 = (unsigned __int64)(v117 - v110) >> 31;
            LODWORD(v113) = 2 * (v117 - v110);
            HIDWORD(v113) = v111;
          }
          while ( v88 != 61 );
          v69 = v89;
          v70 = v89 >> 31;
        }
        result = __PAIR__(v70, v69) + 2 * v120;
      }
      if ( v128 != 62 )
      {
        v112 = result >> ((61 - v128) & 0x1F);
        if ( (61 - (_BYTE)v128) & 0x20 )
          LODWORD(v112) = HIDWORD(v112);
        if ( (61 - (_BYTE)v128) & 0x20 )
          SHIDWORD(v112) >>= 31;
        result = (v112 + 1) >> 1;
      }
    }
  }
  return result;
}
