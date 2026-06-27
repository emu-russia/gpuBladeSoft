signed int __cdecl sub_6F80F790(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx@3
  int v7; // esi@7
  __int64 v8; // rax@8
  unsigned int v9; // esi@8
  unsigned int v10; // edi@8
  signed int v11; // eax@8
  unsigned __int64 v12; // rcx@8
  unsigned __int64 v13; // rax@9
  int v14; // edi@9
  unsigned __int64 v15; // rcx@9
  signed int v16; // esi@11
  __int64 v17; // rax@11
  int v18; // esi@12
  signed __int64 v19; // rax@12
  signed int v20; // ecx@12
  unsigned int v21; // ebx@13
  int v22; // edi@15
  int v23; // esi@15
  signed int result; // eax@15
  int v25; // ebx@23
  unsigned int v26; // edi@23
  bool v27; // zf@23
  int v28; // edx@24
  unsigned int v29; // ecx@24
  bool v30; // cf@28
  int v31; // edi@30
  int v32; // ecx@34
  int v33; // esi@34
  unsigned __int8 v34; // al@34
  int v35; // ecx@34
  int v36; // esi@34
  int v37; // edi@34
  int v38; // ebx@34
  signed __int64 v39; // rax@34
  signed int v40; // ecx@34
  int v41; // esi@35
  int v42; // edi@36
  bool v43; // sf@36
  unsigned __int8 v44; // of@36
  int v45; // edx@38
  signed int v46; // eax@41
  signed int v47; // edi@41
  signed int v48; // eax@42
  signed int v49; // ecx@42
  unsigned __int64 v50; // kr10_8@42
  int v51; // edx@44
  int v52; // edi@48
  int v53; // ST28_4@48
  __int64 v54; // ST30_8@48
  signed __int64 v55; // rax@48
  int v56; // ST38_4@48
  unsigned __int64 v57; // ST30_8@48
  signed __int64 v58; // ST30_8@48
  int v59; // ecx@48
  signed __int64 v60; // rax@48
  int v61; // ecx@48
  __int64 v62; // kr18_8@49
  signed int v63; // edi@54
  __int64 v64; // rcx@54
  signed int v65; // edi@55
  unsigned int v66; // eax@55
  int v67; // ecx@57
  char v68; // al@57
  unsigned int v69; // ecx@57
  signed int v70; // edi@60
  __int64 v71; // rax@60
  signed __int64 v72; // rax@61
  signed int v73; // ecx@61
  unsigned int v74; // ebx@69
  signed int v75; // esi@70
  signed __int64 v76; // rax@71
  unsigned __int64 v77; // rax@71
  int v78; // edi@71
  unsigned __int64 v79; // rax@71
  signed __int64 v80; // rax@71
  int v81; // edi@71
  int v82; // eax@71
  int v83; // edx@71
  int v84; // edi@74
  unsigned int v85; // ecx@79
  int v86; // edi@79
  unsigned int v87; // ebx@79
  int v88; // edi@79
  int v89; // eax@80
  int v90; // ebx@80
  int v91; // esi@80
  char v92; // dl@80
  int v93; // edi@80
  signed int v94; // edx@47
  __int64 v95; // [sp+18h] [bp-64h]@7
  __int64 v96; // [sp+20h] [bp-5Ch]@8
  signed __int64 v97; // [sp+28h] [bp-54h]@8
  signed __int64 v98; // [sp+28h] [bp-54h]@9
  __int64 v99; // [sp+28h] [bp-54h]@41
  signed int v100; // [sp+28h] [bp-54h]@70
  __int64 v101; // [sp+30h] [bp-4Ch]@8
  int v102; // [sp+30h] [bp-4Ch]@34
  unsigned __int64 v103; // [sp+38h] [bp-44h]@8
  int v104; // [sp+38h] [bp-44h]@35
  __int64 v105; // [sp+38h] [bp-44h]@54
  int v106; // [sp+5Ch] [bp-20h]@80

  if ( *(_BYTE *)(a1 + 174992) )
  {
    if ( !*(_DWORD *)(a1 + 175112) )
    {
      v7 = *(_DWORD *)(a1 + 51596);
      v95 = (unsigned int)(v7 + 1) * *(_QWORD *)(a1 + 174904);
      if ( a2 <= 0 )
        goto LABEL_20;
      goto LABEL_8;
    }
    v6 = 0;
    if ( *(_DWORD *)(a1 + 175192) )
      v6 = a6;
    a6 = v6;
  }
  else
  {
    a6 = 0;
  }
  v7 = *(_DWORD *)(a1 + 51596);
  v95 = (unsigned int)(v7 + 1) * *(_QWORD *)(a1 + 174904);
  if ( a2 <= 0 )
  {
    v31 = *(_DWORD *)(a1 + 175112);
    if ( v31 != 1 )
    {
      if ( v31 == 2 )
      {
        v96 = 0i64;
        v98 = 0x8000000000000000i64;
        a2 = 0;
        goto LABEL_33;
      }
LABEL_20:
      result = 0;
      a2 = 0;
      *(_DWORD *)(a1 + 174956) += v7 + 1;
      goto LABEL_21;
    }
    v96 = 0i64;
    v21 = -1073741824;
    v98 = 0x8000000000000000i64;
    a2 = 0;
LABEL_57:
    v67 = *(_DWORD *)(a1 + 175188);
    v68 = *(_BYTE *)(a1 + 792);
    *(_DWORD *)(a1 + 175184) = v21;
    *(_DWORD *)(a1 + 175164) = 0;
    v69 = v7 & 0x7FFFFFFF | v67 & 0x80000000;
    *(_DWORD *)(a1 + 175188) = v69;
    *(_BYTE *)(a1 + 175191) = (v68 << 7) | BYTE3(v69) & 0x7F;
    if ( a2 )
      goto LABEL_14;
    goto LABEL_20;
  }
LABEL_8:
  v96 = a2;
  LODWORD(v8) = sub_6F80A640(a2, (unsigned __int64)a2 >> 32);
  v101 = v8;
  v9 = *(_DWORD *)(a1 + 174936);
  v10 = *(_DWORD *)(a1 + 174940);
  v97 = *(_DWORD *)(a1 + 4 * a3 + 174944)
      * __PAIR__(
          (signed int)((unsigned __int64)(*(_QWORD *)(a1 + 174984) - 0x400000000000000i64) >> 32) >> 6,
          (unsigned int)((unsigned __int64)(*(_QWORD *)(a1 + 174984) - 0x400000000000000i64) >> 6));
  v11 = 1;
  v12 = v97 + v101 - __PAIR__(v10, v9);
  v103 = v12;
  if ( SHIDWORD(v12) <= 0x20000000 && (SHIDWORD(v12) < 0x20000000 || !(_DWORD)v12) )
    v11 = 0;
  v13 = (__PAIR__(v10, v9) - v101 - v97 + 0x2000000000000000i64) & -v11;
  v14 = *(_DWORD *)(a1 + 175112);
  v15 = v13 + v12;
  v98 = v13 + v103;
  if ( v14 == 1 )
  {
    v7 = *(_DWORD *)(a1 + 51596);
    v63 = 1;
    v64 = HIDWORD(v15) + 1;
    LODWORD(v64) = (signed int)v64 >> 1;
    v105 = v64;
    if ( SHIDWORD(v64) <= 0 && (SHIDWORD(v64) < 0 || (unsigned int)v64 <= 0x7FFFFFFF) )
      v63 = 0;
    v65 = -v63;
    v66 = ((unsigned __int64)(0x7FFFFFFF - v64) >> 32) & (v65 >> 31);
    HIDWORD(v64) = 1;
    if ( (signed int)((__PAIR__(v66, (0x7FFFFFFF - v105) & v65) + v105) >> 32) <= -1
      && ((signed int)((__PAIR__(v66, (0x7FFFFFFF - v105) & v65) + v105) >> 32) < -1
       || ((0x7FFFFFFF - (_DWORD)v105) & v65) + (unsigned int)v105 < 0x80000001) )
    {
      HIDWORD(v64) = 0;
    }
    v21 = 2147483648 - (-HIDWORD(v64) & (2147483648 - v64 - (v65 & (0x7FFFFFFF - v64))));
    goto LABEL_57;
  }
  if ( v14 != 2 )
  {
    v16 = 1;
    HIDWORD(v17) = (signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 31;
    LODWORD(v17) = (signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 1;
    if ( SHIDWORD(v17) <= 0 && (SHIDWORD(v17) < 0 || (unsigned int)v17 <= 0x7FFFFFFF) )
      v16 = 0;
    v18 = -v16;
    v19 = ((0x7FFFFFFF - v17) & v18) + v17;
    v20 = 1;
    if ( SHIDWORD(v19) <= -1 && (SHIDWORD(v19) < -1 || (unsigned int)v19 < 0x80000001) )
      v20 = 0;
    v21 = 2147483648
        - (-v20 & (2147483648
                 - ((signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 1)
                 - (v18 & (0x7FFFFFFF - ((signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 1)))));
LABEL_14:
    if ( a5 )
      goto LABEL_15;
LABEL_44:
    v51 = *(_DWORD *)(a1 + 175068);
    if ( v51 < *(_DWORD *)(a1 + 175072) && a3 == 1 && v51 <= *(_DWORD *)(a1 + 175064) )
    {
      v94 = v51 + 1;
      *(_DWORD *)(a1 + 175068) = v94;
      sub_6F80BEB0(a1 + 175032, v94);
    }
    v52 = a1 + 32 * a3;
    v53 = *(_DWORD *)(v52 + 175024);
    v54 = *(_DWORD *)(v52 + 175020);
    v55 = v54 + (signed int)v21 + 2i64 * *(_DWORD *)(v52 + 175016);
    LODWORD(v54) = v54 + v21 + 2 * *(_DWORD *)(v52 + 175016);
    v56 = HIDWORD(v55) * *(_DWORD *)(a1 + 32 * (a3 + 3) + 174912) + *(_DWORD *)(a1 + 32 * (a3 + 3) + 174916) * v54;
    v57 = *(_DWORD *)(a1 + 32 * (a3 + 3) + 174912) * (unsigned __int64)(unsigned int)v54;
    HIDWORD(v57) += v56;
    v58 = v57 + *(_DWORD *)(a1 + 32 * (a3 + 3) + 174904) * (signed __int64)v53;
    v59 = *(_DWORD *)(v52 + 175016);
    v60 = *(_DWORD *)(v52 + 175028) * (signed __int64)*(_DWORD *)(v52 + 175004);
    *(_DWORD *)(v52 + 175016) = v21;
    *(_DWORD *)(v52 + 175020) = v59;
    *(_DWORD *)(v52 + 175028) = v53;
    LODWORD(v60) = (unsigned __int64)(v58 + v60 + 0x800000) >> 24;
    *(_DWORD *)(v52 + 175024) = v60;
    v61 = a3 + 21870;
    *(_DWORD *)(a1 + 8 * v61 + 8) = 0;
    *(_DWORD *)(a1 + 8 * v61 + 12) = 2 * v60;
    if ( a6
      && (v62 = *(_QWORD *)(a1 + 174912) + v95, SHIDWORD(v62) <= SHIDWORD(v96))
      && (SHIDWORD(v62) < SHIDWORD(v96) || (unsigned int)v62 < (unsigned int)v96) )
    {
      result = 1;
      v96 = 0i64;
      a2 = 0;
      *(_DWORD *)(a1 + 174956) += *(_DWORD *)(a1 + 51596) + 1;
    }
    else
    {
      v74 = *(_DWORD *)(a1 + 174956) + 1;
      if ( v74 > 0x7F )
      {
        v75 = 0x7FFFFFFF;
        v100 = 0x7FFFFFFF;
      }
      else
      {
        v100 = v74 << 24;
        v75 = v74 << 24;
      }
      v76 = (unsigned int)v75 + 2i64 * *(_DWORD *)(a1 + 175096);
      v77 = __PAIR__(HIDWORD(v76), *(_DWORD *)(a1 + 175100)) + (signed int)v76;
      v78 = v77 * *(_DWORD *)(a1 + 175092) + HIDWORD(v77) * *(_DWORD *)(a1 + 175088);
      v79 = *(_DWORD *)(a1 + 175088) * (unsigned __int64)(unsigned int)v77;
      v80 = *(_DWORD *)(a1 + 175104) * (signed __int64)*(_DWORD *)(a1 + 175080)
          + __PAIR__(v78 + HIDWORD(v79), (unsigned int)v79)
          + *(_DWORD *)(a1 + 175108) * (signed __int64)*(_DWORD *)(a1 + 175084)
          + 0x800000;
      *(_DWORD *)(a1 + 175100) = *(_DWORD *)(a1 + 175096);
      v80 >>= 24;
      *(_DWORD *)(a1 + 175096) = v100;
      v81 = *(_DWORD *)(a1 + 175104);
      *(_DWORD *)(a1 + 175104) = v80;
      *(_DWORD *)(a1 + 175108) = v81;
      *(_DWORD *)(a1 + 174960) = sub_6F80A640(v80, HIDWORD(v80));
      v82 = *(_DWORD *)(a1 + 51596);
      *(_DWORD *)(a1 + 174964) = v83 - 805306368;
      *(_DWORD *)(a1 + 174956) = v82;
      result = 0;
    }
    v23 = *(_DWORD *)(a1 + 175064);
    if ( v23 == 0x7FFFFFFF )
      goto LABEL_23;
    goto LABEL_16;
  }
LABEL_33:
  if ( !a5 )
  {
    v32 = *(_DWORD *)(a1 + 51596);
    v33 = *(_DWORD *)(a1 + 175184);
    *(_DWORD *)(a1 + 175180) = *(_DWORD *)(a1 + 175188);
    v102 = v32;
    v34 = *(_BYTE *)(a1 + 175183);
    v35 = *(_DWORD *)(a1 + 776) + v32;
    *(_DWORD *)(a1 + 175176) = v33;
    v36 = v34 >> 7;
    v37 = v35 + 1;
    LODWORD(v39) = -1;
    HIDWORD(v39) = a1 + 4 * v36;
    --*(_DWORD *)(HIDWORD(v39) + 175220);
    v38 = *(_DWORD *)(a1 + 175180) & 0x7FFFFFFF;
    *(_DWORD *)(a1 + 175228) -= v38;
    --*(_DWORD *)(HIDWORD(v39) + 175256);
    HIDWORD(v39) = 0x7FFF;
    v40 = *(_DWORD *)(a1 + 175176);
    *(_DWORD *)(a1 + 175264) -= v38;
    if ( v40 <= 385875967 )
    {
      v39 = sub_6F809680(__PAIR__((__PAIR__((unsigned int)(2 * v40), 0) + 3458764513820540928i64) >> 32, 0));
      if ( SHIDWORD(v39) > 0x7FFF )
        v39 = 0x7FFFFFFFFFFFi64;
      v102 = *(_DWORD *)(a1 + 51596);
    }
    v30 = *(_DWORD *)(a1 + 8 * v36 + 175232) < (unsigned int)v39;
    *(_DWORD *)(a1 + 8 * v36 + 175232) -= v39;
    v104 = v37;
    *(_DWORD *)(a1 + 8 * v36 + 175236) -= v30 + HIDWORD(v39);
    *(_DWORD *)(a1 + 175248) = v37;
    v41 = *(_DWORD *)(a1 + 175192);
    if ( v41 )
    {
      v42 = *(_DWORD *)(a1 + 175204);
      --*(_DWORD *)(a1 + 175196);
      v44 = __OFSUB__(++v42, *(_DWORD *)(a1 + 175200));
      v43 = v42 - *(_DWORD *)(a1 + 175200) < 0;
      *(_DWORD *)(a1 + 175204) = v42;
      if ( !(v43 ^ v44) )
        *(_DWORD *)(a1 + 175204) = 0;
    }
    v45 = *(_DWORD *)(a1 + 175112);
    *(_DWORD *)(a1 + 175164) = 0;
    *(_DWORD *)(a1 + 51604) = v102;
    if ( v45 )
    {
      v84 = *(_DWORD *)(a1 + 175208);
      if ( v84
        && (*(_DWORD *)(a1 + 780) < 0 || (*(_DWORD *)(a1 + 175180) & 0x7FFFFFFF) == v102)
        && *(_QWORD *)(a1 + 776) + (unsigned int)(v102 + 1) < (signed __int64)(v84
                                                                             + *(_DWORD *)(a1 + 175216)
                                                                             + *(_DWORD *)(a1 + 175212)) )
      {
        if ( v41 )
        {
          v85 = *(_DWORD *)(a1 + 175224)
              + *(_DWORD *)(a1 + 175220)
              - *(_DWORD *)(a1 + 175256)
              - *(_DWORD *)(a1 + 175260);
          v86 = *(_DWORD *)(a1 + 175252);
          v87 = v104 - v86 + *(_DWORD *)(a1 + 174952);
          v88 = v85 < v87 ? v85 + v86 - v104 - *(_DWORD *)(a1 + 174952) : 0;
          if ( ((v87 + v88 != 0 ? -(v87 + v88) : 0) & 0x80000000) == 0 )
          {
            v89 = *(_DWORD *)(a1 + 175204);
            v90 = *(_DWORD *)(v41 + 8 * v89 + 4);
            v91 = *(_DWORD *)(v41 + 8 * v89);
            *(_DWORD *)(a1 + 175188) = v90;
            v92 = *(_BYTE *)(a1 + 175191);
            v93 = *(_DWORD *)(a1 + 175188);
            *(_DWORD *)(a1 + 175184) = v91;
            v106 = v93 & 0x7FFFFFFF;
            *(_BYTE *)(a1 + 175172) = (unsigned __int8)~v92 >> 7;
            sub_6F8069F0(a1, 18, &v106, 4);
            *(_DWORD *)(a1 + 175164) = 1;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 175112) = 2;
      *(_DWORD *)(a1 + 175168) = 0;
      *(_DWORD *)(a1 + 175208) = 0;
      *(_DWORD *)(a1 + 175196) = 0;
      *(_DWORD *)(a1 + 175200) = 0;
      *(_DWORD *)(a1 + 175204) = 0;
      *(_DWORD *)(a1 + 175248) = 0;
      *(_DWORD *)(a1 + 175252) = 0;
    }
    if ( a2 )
    {
      v46 = 1;
      v47 = (signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 31;
      LODWORD(v99) = (signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 1;
      HIDWORD(v99) = v47;
      if ( v47 <= 0 && (v47 < 0 || (unsigned int)v99 <= 0x7FFFFFFF) )
        v46 = 0;
      v48 = -v46;
      v49 = 1;
      v50 = v99 + __PAIR__(((unsigned __int64)(0x7FFFFFFF - v99) >> 32) & (v48 >> 31), (0x7FFFFFFF - v99) & v48);
      if ( (signed int)((v99
                       + __PAIR__(((unsigned __int64)(0x7FFFFFFF - v99) >> 32) & (v48 >> 31), (0x7FFFFFFF - v99) & v48)) >> 32) <= -1
        && (SHIDWORD(v50) < -1 || (unsigned int)v50 < 0x80000001) )
      {
        v49 = 0;
      }
      v21 = 2147483648 - (-v49 & (2147483648 - v99 - (v48 & (0x7FFFFFFF - v99))));
      goto LABEL_44;
    }
    goto LABEL_81;
  }
  if ( !a2 )
  {
LABEL_81:
    v7 = *(_DWORD *)(a1 + 51596);
    goto LABEL_20;
  }
  v70 = 1;
  LODWORD(v71) = (signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 1;
  HIDWORD(v71) = (signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 31;
  if ( SHIDWORD(v71) <= 0 && (SHIDWORD(v71) < 0 || (unsigned int)v71 <= 0x7FFFFFFF) )
    v70 = 0;
  v72 = ((0x7FFFFFFF - v71) & -v70) + v71;
  v73 = 1;
  if ( SHIDWORD(v72) <= -1 && (SHIDWORD(v72) < -1 || (unsigned int)v72 < 0x80000001) )
    v73 = 0;
  v21 = 2147483648
      - (-v73 & (2147483648
               - ((signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 1)
               - (-v70 & (0x7FFFFFFF - ((signed int)((unsigned __int64)(v98 + 0x100000000i64) >> 32) >> 1)))));
LABEL_15:
  v22 = a1 + 32 * a3;
  *(_DWORD *)(v22 + 175016) = v21;
  *(_DWORD *)(v22 + 175020) = v21;
  *(_DWORD *)(v22 + 175024) = v21;
  *(_DWORD *)(v22 + 175028) = v21;
  v23 = *(_DWORD *)(a1 + 175064);
  *(_DWORD *)(a1 + 8 * a3 + 174968) = v98;
  result = 0;
  *(_DWORD *)(a1 + 8 * a3 + 174972) = HIDWORD(v98);
  if ( v23 == 0x7FFFFFFF )
    return result;
LABEL_16:
  *(_DWORD *)(a1 + 175064) = a3 + v23;
LABEL_21:
  if ( a5 )
    return result;
  v96 = a2;
LABEL_23:
  v25 = (unsigned __int64)(*(_QWORD *)(a1 + 174912) + v95 - v96) >> 32;
  v26 = *(_DWORD *)(a1 + 174912) + v95 - v96;
  v27 = *(_BYTE *)(a1 + 174993) == 0;
  *(_DWORD *)(a1 + 174912) = v26;
  *(_DWORD *)(a1 + 174916) = v25;
  if ( !v27 )
  {
    v28 = *(_DWORD *)(a1 + 174932);
    v29 = *(_DWORD *)(a1 + 174928);
    if ( v25 >= v28 && (v25 > v28 || v26 > v29) )
    {
      *(_DWORD *)(a1 + 174912) = v29;
      *(_DWORD *)(a1 + 174916) = v28;
      v25 = v28;
    }
  }
  if ( *(_BYTE *)(a1 + 174994) )
  {
    if ( v25 < 0 )
    {
      *(_DWORD *)(a1 + 174912) = 0;
      *(_DWORD *)(a1 + 174916) = 0;
    }
  }
  v30 = *(_DWORD *)(a1 + 175272) < (unsigned int)v96;
  *(_DWORD *)(a1 + 175272) -= v96;
  *(_DWORD *)(a1 + 175276) -= v30 + HIDWORD(v96);
  return result;
}
