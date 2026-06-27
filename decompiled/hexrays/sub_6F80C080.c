int __usercall sub_6F80C080@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  signed int v2; // ecx@1
  unsigned int v3; // eax@1
  int v4; // edi@1
  int v5; // esi@1
  __int64 v6; // rax@1
  signed __int64 v7; // rax@1
  unsigned int v8; // ecx@4
  signed __int64 v9; // rax@4
  unsigned int v10; // esi@4
  unsigned int v11; // ebp@4
  unsigned int v12; // edi@4
  int v13; // ecx@4
  unsigned __int64 v14; // rax@4
  unsigned int v15; // kr00_4@4
  unsigned __int64 v16; // rax@4
  __int64 v17; // kr18_8@4
  int v18; // edx@4
  signed __int64 v19; // rax@4
  signed __int64 v20; // rdi@4
  __int64 v21; // rax@6
  int v22; // eax@8
  int v23; // ebp@8
  signed int v24; // eax@8
  int v25; // edx@8
  signed int v26; // ecx@8
  signed int v27; // edx@8
  signed int v28; // eax@8
  signed int v29; // ecx@8
  unsigned int v30; // edx@8
  signed int v31; // eax@9
  int v32; // esi@9
  unsigned int v33; // kr04_4@9
  unsigned int v34; // edi@9
  signed int v35; // edx@9
  unsigned __int64 v36; // kr20_8@9
  unsigned int v37; // esi@10
  int v38; // edi@10
  unsigned int v39; // esi@11
  unsigned int v40; // ebp@12
  unsigned int v41; // eax@12
  signed int v42; // eax@12
  signed int v43; // ecx@12
  signed int v44; // edx@12
  signed int v45; // eax@12
  signed int v46; // ecx@12
  unsigned int v47; // edx@12
  signed int v48; // eax@13
  int v49; // esi@13
  unsigned int v50; // kr08_4@13
  unsigned int v51; // ebp@13
  signed int v52; // edx@13
  unsigned __int64 v53; // kr30_8@13
  unsigned int v54; // esi@14
  __int64 v55; // rdi@14
  signed int v56; // ebp@15
  int result; // eax@16
  __int64 v58; // rax@25
  signed __int64 v59; // rax@42
  signed int v60; // [sp+0h] [bp-4Ch]@7
  signed int v61; // [sp+0h] [bp-4Ch]@24
  signed __int64 v62; // [sp+18h] [bp-34h]@1
  signed __int64 v63; // [sp+20h] [bp-2Ch]@3
  unsigned int v64; // [sp+20h] [bp-2Ch]@8
  unsigned int v65; // [sp+20h] [bp-2Ch]@12

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 52);
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(_DWORD *)(v1 + 28);
  v5 = v3 * (v2 >> 31);
  v6 = (unsigned int)v2 * (unsigned __int64)v3;
  HIDWORD(v6) += v5;
  v7 = sub_6F8A13E0(v5, v6, *(_DWORD *)(v1 + 28));
  v62 = v7;
  if ( SHIDWORD(v7) >= 0x4000 && (SHIDWORD(v7) > 0x4000 || (_DWORD)v7) )
  {
    *(_DWORD *)(v1 + 174904) = 0;
    *(_DWORD *)(v1 + 174908) = 0x4000;
    v63 = 0x100000000000i64;
    v62 = 0x400000000000i64;
  }
  else if ( SHIDWORD(v7) >= 0 && (SHIDWORD(v7) > 0 || (unsigned int)v7 > 0x1F) )
  {
    *(_QWORD *)(v1 + 174904) = v7;
    v63 = (v7 + 2) >> 2;
  }
  else
  {
    *(_DWORD *)(v1 + 174904) = 32;
    *(_DWORD *)(v1 + 174908) = 0;
    v63 = 8i64;
    v62 = 32i64;
  }
  v8 = *(_DWORD *)(v1 + 174952) - (*(_DWORD *)(v1 + 174952) <= 11 ? *(_DWORD *)(v1 + 174952) - 12 : 0);
  *(_DWORD *)(v1 + 174952) = v8;
  v9 = v62 * (signed int)v8;
  *(_DWORD *)(v1 + 174928) = v9;
  v10 = *(_DWORD *)(v1 + 51592);
  *(_DWORD *)(v1 + 174932) = HIDWORD(v9);
  v11 = (unsigned __int64)((v9 + 1) >> 1) >> 32;
  v12 = (v9 + 1) >> 1;
  LODWORD(v9) = (v8 < v10 ? v8 - v10 : 0) + v10;
  v13 = v9 * HIDWORD(v63);
  v14 = (unsigned int)v63 * (unsigned __int64)(unsigned int)v9;
  v15 = v14;
  LODWORD(v14) = v12 + v14;
  *(_DWORD *)(v1 + 174920) = v14;
  *(_DWORD *)(v1 + 174912) = v14;
  v16 = __PAIR__(v13 + HIDWORD(v14), v12) + __PAIR__(v11, v15);
  LODWORD(v16) = *(_DWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 174924) = HIDWORD(v16);
  *(_DWORD *)(v1 + 174916) = HIDWORD(v16);
  v17 = *(_DWORD *)(v1 + 4) * (unsigned __int64)(unsigned int)v16;
  *(_DWORD *)(v1 + 174936) = sub_6F80A640(v17, HIDWORD(v17));
  *(_DWORD *)(v1 + 174940) = v18;
  v19 = sub_6F8A13E0(v10, v17, *(_QWORD *)(v1 + 174904));
  v20 = v19;
  if ( SHIDWORD(v19) <= 0 && (SHIDWORD(v19) < 0 || !(_DWORD)v19) )
  {
    *(_DWORD *)(v1 + 174944) = 59;
    v61 = 1997;
    goto LABEL_25;
  }
  if ( v19 == 1 )
  {
    *(_DWORD *)(v1 + 174944) = 55;
    v61 = 1604;
LABEL_25:
    LODWORD(v58) = sub_6F80A640(v61, 0);
    *(_QWORD *)(v1 + 174968) = v58 - 0x1000000000000000i64;
LABEL_26:
    *(_DWORD *)(v1 + 174948) = 100;
    v60 = 2249;
    goto LABEL_8;
  }
  *(_DWORD *)(v1 + 174944) = 48;
  LODWORD(v21) = sub_6F80A640(834, 0);
  *(_QWORD *)(v1 + 174968) = v21 - 0x1000000000000000i64;
  if ( SHIDWORD(v20) <= 0 )
  {
    if ( SHIDWORD(v20) < 0 || (unsigned int)v20 <= 3 )
      goto LABEL_26;
    if ( v20 <= 7 )
    {
      *(_DWORD *)(v1 + 174948) = 95;
      v60 = 1751;
      goto LABEL_8;
    }
  }
  *(_DWORD *)(v1 + 174948) = 73;
  v60 = 1260;
LABEL_8:
  v22 = sub_6F80A640(v60, 0);
  v23 = *(_DWORD *)(v1 + 174968);
  *(_DWORD *)(v1 + 174956) = 0;
  *(_DWORD *)(v1 + 174976) = v22;
  v24 = *(_DWORD *)(v1 + 174972);
  *(_DWORD *)(v1 + 174980) = v25 - 0x10000000;
  *(_DWORD *)(v1 + 174960) = 0;
  *(_DWORD *)(v1 + 174964) = 0;
  v26 = ++v24;
  v27 = v24;
  v28 = 1;
  v29 = v26 >> 31;
  v30 = v27 >> 1;
  v64 = v30;
  if ( v29 <= 0 && (v29 < 0 || v30 <= 0x7FFFFFFF) )
    v28 = 0;
  v31 = -v28;
  v32 = v31 & (0x7FFFFFFF - v30);
  v33 = v30;
  v34 = (v31 >> 31) & ((0x7FFFFFFF - __PAIR__((unsigned int)v29, v30)) >> 32);
  v35 = 1;
  v36 = __PAIR__(v34, v33) + __PAIR__(v29, v32);
  if ( (signed int)((__PAIR__(v34, v33) + __PAIR__(v29, v32)) >> 32) <= -1
    && (SHIDWORD(v36) < -1 || (unsigned int)v36 < 0x80000001) )
  {
    v35 = 0;
  }
  v37 = 2147483648 - (-v35 & (2147483648 - v64 - ((0x7FFFFFFF - v64) & v31)));
  sub_6F80C060(v1 + 175000);
  v38 = *(_DWORD *)(v1 + 175112);
  *(_DWORD *)(v1 + 175016) = v37;
  *(_DWORD *)(v1 + 175020) = v37;
  *(_DWORD *)(v1 + 175024) = v37;
  *(_DWORD *)(v1 + 175028) = v37;
  if ( v38 )
    v39 = (*(_DWORD *)(v1 + 51592) - ((*(_DWORD *)(v1 + 51592) - 12) & (unsigned int)-(*(_DWORD *)(v1 + 51592) <= 0xBu))) >> 1;
  else
    v39 = *(_DWORD *)(v1 + 174952) >> 1;
  v40 = *(_DWORD *)(v1 + 174976);
  v41 = *(_DWORD *)(v1 + 174980);
  *(_DWORD *)(v1 + 175064) = 0;
  *(_DWORD *)(v1 + 175068) = 10;
  *(_DWORD *)(v1 + 175072) = v39;
  v42 = (__PAIR__(v41, v40) + 0x100000000i64) >> 32;
  v43 = v42;
  v44 = v42;
  v45 = 1;
  v46 = v43 >> 31;
  v47 = v44 >> 1;
  v65 = v47;
  if ( v46 <= 0 && (v46 < 0 || v47 <= 0x7FFFFFFF) )
    v45 = 0;
  v48 = -v45;
  v49 = v48 & (0x7FFFFFFF - v47);
  v50 = v47;
  v51 = (v48 >> 31) & ((0x7FFFFFFF - __PAIR__((unsigned int)v46, v47)) >> 32);
  v52 = 1;
  v53 = __PAIR__(v51, v50) + __PAIR__(v46, v49);
  if ( (signed int)((__PAIR__(v51, v50) + __PAIR__(v46, v49)) >> 32) <= -1
    && (SHIDWORD(v53) < -1 || (unsigned int)v53 < 0x80000001) )
  {
    v52 = 0;
  }
  v54 = 2147483648 - (-v52 & (2147483648 - v65 - ((0x7FFFFFFF - v65) & v48)));
  sub_6F80BEB0(v1 + 175032, 10);
  *(_DWORD *)(v1 + 175048) = v54;
  *(_DWORD *)(v1 + 175052) = v54;
  *(_DWORD *)(v1 + 175056) = v54;
  *(_DWORD *)(v1 + 175060) = v54;
  v55 = *(_QWORD *)(v1 + 174960);
  if ( SHIDWORD(v55) > 0xFFFFFFF || (v59 = sub_6F809680(v55 + 3458764513820540928i64), v59 > 2147483646) )
    v56 = 0x7FFFFFFF;
  else
    v56 = v59;
  result = sub_6F80C060(v1 + 175080);
  *(_DWORD *)(v1 + 175096) = v56;
  *(_DWORD *)(v1 + 175100) = v56;
  *(_DWORD *)(v1 + 175104) = v56;
  *(_DWORD *)(v1 + 175108) = v56;
  return result;
}
