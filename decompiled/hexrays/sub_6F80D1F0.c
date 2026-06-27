int __cdecl sub_6F80D1F0(int a1, int a2)
{
  int result; // eax@1
  int v3; // edx@1
  signed int v4; // edx@2
  signed int v5; // ecx@4
  unsigned int v6; // eax@4
  int v7; // esi@4
  __int64 v8; // rax@4
  signed __int64 v9; // rax@4
  unsigned int v10; // ecx@11
  signed __int64 v11; // rax@11
  unsigned int v12; // esi@11
  unsigned int v13; // ebp@11
  unsigned int v14; // edi@11
  int v15; // ecx@11
  unsigned __int64 v16; // rax@11
  unsigned int v17; // kr00_4@11
  unsigned __int64 v18; // rax@11
  __int64 v19; // kr18_8@11
  int v20; // edx@11
  signed __int64 v21; // rax@11
  signed __int64 v22; // rdi@11
  __int64 v23; // rax@13
  int v24; // eax@15
  int v25; // edx@15
  unsigned int v26; // eax@15
  unsigned int v27; // edx@15
  signed int v28; // eax@15
  signed int v29; // ecx@15
  signed int v30; // edx@15
  signed int v31; // eax@15
  signed int v32; // ecx@15
  unsigned int v33; // edx@15
  signed int v34; // eax@16
  int v35; // esi@16
  unsigned int v36; // kr04_4@16
  unsigned int v37; // edi@16
  signed int v38; // edx@16
  unsigned __int64 v39; // kr28_8@16
  unsigned int v40; // esi@17
  int v41; // edi@17
  unsigned int v42; // esi@18
  unsigned int v43; // ebp@19
  unsigned int v44; // eax@19
  signed int v45; // eax@19
  signed int v46; // ecx@19
  signed int v47; // edx@19
  signed int v48; // eax@19
  signed int v49; // ecx@19
  unsigned int v50; // edx@19
  signed int v51; // eax@20
  int v52; // esi@20
  unsigned int v53; // kr08_4@20
  unsigned int v54; // ebp@20
  signed int v55; // edx@20
  unsigned __int64 v56; // kr38_8@20
  unsigned int v57; // esi@21
  __int64 v58; // rdi@21
  signed int v59; // ebp@22
  __int64 v60; // rax@29
  signed __int64 v61; // rax@46
  signed int v62; // [sp+0h] [bp-4Ch]@14
  signed int v63; // [sp+0h] [bp-4Ch]@28
  signed __int64 v64; // [sp+18h] [bp-34h]@4
  signed __int64 v65; // [sp+20h] [bp-2Ch]@7
  unsigned int v66; // [sp+20h] [bp-2Ch]@15
  unsigned int v67; // [sp+20h] [bp-2Ch]@19

  result = a1;
  *(_BYTE *)(a1 + 268) = 0;
  v3 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 260) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 372) = 0;
  if ( v3 <= 0 )
    return result;
  v4 = 256;
  if ( *(_DWORD *)(a2 + 51592) <= 0x100u )
    v4 = *(_DWORD *)(a2 + 51592);
  *(_BYTE *)(a1 + 88) = 1;
  *(_BYTE *)(a1 + 89) = 1;
  *(_BYTE *)(a1 + 90) = 0;
  v5 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 48) = v4;
  v6 = *(_DWORD *)(a2 + 32);
  v7 = v6 * (v5 >> 31);
  v8 = (unsigned int)v5 * (unsigned __int64)v6;
  HIDWORD(v8) += v7;
  v9 = sub_6F8A13E0(v7, v8, *(_DWORD *)(a2 + 28));
  v64 = v9;
  if ( SHIDWORD(v9) >= 0x4000 && (SHIDWORD(v9) > 0x4000 || (_DWORD)v9) )
  {
    *(_DWORD *)(a2 + 174904) = 0;
    *(_DWORD *)(a2 + 174908) = 0x4000;
    v65 = 0x100000000000i64;
    v64 = 0x400000000000i64;
  }
  else if ( SHIDWORD(v9) >= 0 && (SHIDWORD(v9) > 0 || (unsigned int)v9 > 0x1F) )
  {
    *(_QWORD *)(a2 + 174904) = v9;
    v65 = (v9 + 2) >> 2;
  }
  else
  {
    *(_DWORD *)(a2 + 174904) = 32;
    *(_DWORD *)(a2 + 174908) = 0;
    v65 = 8i64;
    v64 = 32i64;
  }
  v10 = *(_DWORD *)(a2 + 174952) - (*(_DWORD *)(a2 + 174952) <= 11 ? *(_DWORD *)(a2 + 174952) - 12 : 0);
  *(_DWORD *)(a2 + 174952) = v10;
  v11 = v64 * (signed int)v10;
  *(_DWORD *)(a2 + 174928) = v11;
  v12 = *(_DWORD *)(a2 + 51592);
  *(_DWORD *)(a2 + 174932) = HIDWORD(v11);
  v13 = (unsigned __int64)((v11 + 1) >> 1) >> 32;
  v14 = (v11 + 1) >> 1;
  LODWORD(v11) = (v10 < v12 ? v10 - v12 : 0) + v12;
  v15 = v11 * HIDWORD(v65);
  v16 = (unsigned int)v65 * (unsigned __int64)(unsigned int)v11;
  v17 = v16;
  LODWORD(v16) = v14 + v16;
  *(_DWORD *)(a2 + 174920) = v16;
  *(_DWORD *)(a2 + 174912) = v16;
  v18 = __PAIR__(v15 + HIDWORD(v16), v14) + __PAIR__(v13, v17);
  LODWORD(v18) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 174924) = HIDWORD(v18);
  *(_DWORD *)(a2 + 174916) = HIDWORD(v18);
  v19 = *(_DWORD *)(a2 + 4) * (unsigned __int64)(unsigned int)v18;
  *(_DWORD *)(a2 + 174936) = sub_6F80A640(v19, HIDWORD(v19));
  *(_DWORD *)(a2 + 174940) = v20;
  v21 = sub_6F8A13E0(v12, v19, *(_QWORD *)(a2 + 174904));
  v22 = v21;
  if ( SHIDWORD(v21) <= 0 && (SHIDWORD(v21) < 0 || !(_DWORD)v21) )
  {
    *(_DWORD *)(a2 + 174944) = 59;
    v63 = 1997;
    goto LABEL_29;
  }
  if ( v21 == 1 )
  {
    *(_DWORD *)(a2 + 174944) = 55;
    v63 = 1604;
LABEL_29:
    LODWORD(v60) = sub_6F80A640(v63, 0);
    *(_QWORD *)(a2 + 174968) = v60 - 0x1000000000000000i64;
LABEL_30:
    *(_DWORD *)(a2 + 174948) = 100;
    v62 = 2249;
    goto LABEL_15;
  }
  *(_DWORD *)(a2 + 174944) = 48;
  LODWORD(v23) = sub_6F80A640(834, 0);
  *(_QWORD *)(a2 + 174968) = v23 - 0x1000000000000000i64;
  if ( SHIDWORD(v22) > 0 )
    goto LABEL_54;
  if ( SHIDWORD(v22) < 0 || (unsigned int)v22 <= 3 )
    goto LABEL_30;
  if ( v22 > 7 )
  {
LABEL_54:
    *(_DWORD *)(a2 + 174948) = 73;
    v62 = 1260;
    goto LABEL_15;
  }
  *(_DWORD *)(a2 + 174948) = 95;
  v62 = 1751;
LABEL_15:
  v24 = sub_6F80A640(v62, 0);
  *(_DWORD *)(a2 + 174956) = 0;
  *(_DWORD *)(a2 + 174960) = 0;
  *(_DWORD *)(a2 + 174976) = v24;
  v26 = *(_DWORD *)(a2 + 174972);
  *(_DWORD *)(a2 + 174980) = v25 - 0x10000000;
  v27 = *(_DWORD *)(a2 + 174968);
  *(_DWORD *)(a2 + 174964) = 0;
  v28 = (__PAIR__(v26, v27) + 0x100000000i64) >> 32;
  v29 = v28;
  v30 = v28;
  v31 = 1;
  v32 = v29 >> 31;
  v33 = v30 >> 1;
  v66 = v33;
  if ( v32 <= 0 && (v32 < 0 || v33 <= 0x7FFFFFFF) )
    v31 = 0;
  v34 = -v31;
  v35 = v34 & (0x7FFFFFFF - v33);
  v36 = v33;
  v37 = (v34 >> 31) & ((0x7FFFFFFF - __PAIR__((unsigned int)v32, v33)) >> 32);
  v38 = 1;
  v39 = __PAIR__(v37, v36) + __PAIR__(v32, v35);
  if ( (signed int)((__PAIR__(v37, v36) + __PAIR__(v32, v35)) >> 32) <= -1
    && (SHIDWORD(v39) < -1 || (unsigned int)v39 < 0x80000001) )
  {
    v38 = 0;
  }
  v40 = 2147483648 - (-v38 & (2147483648 - v66 - ((0x7FFFFFFF - v66) & v34)));
  sub_6F80C060(a2 + 175000);
  v41 = *(_DWORD *)(a2 + 175112);
  *(_DWORD *)(a2 + 175016) = v40;
  *(_DWORD *)(a2 + 175020) = v40;
  *(_DWORD *)(a2 + 175024) = v40;
  *(_DWORD *)(a2 + 175028) = v40;
  if ( v41 )
    v42 = (*(_DWORD *)(a2 + 51592) - ((*(_DWORD *)(a2 + 51592) - 12) & (unsigned int)-(*(_DWORD *)(a2 + 51592) <= 0xBu))) >> 1;
  else
    v42 = *(_DWORD *)(a2 + 174952) >> 1;
  v43 = *(_DWORD *)(a2 + 174976);
  v44 = *(_DWORD *)(a2 + 174980);
  *(_DWORD *)(a2 + 175064) = 0;
  *(_DWORD *)(a2 + 175068) = 10;
  *(_DWORD *)(a2 + 175072) = v42;
  v45 = (__PAIR__(v44, v43) + 0x100000000i64) >> 32;
  v46 = v45;
  v47 = v45;
  v48 = 1;
  v49 = v46 >> 31;
  v50 = v47 >> 1;
  v67 = v50;
  if ( v49 <= 0 && (v49 < 0 || v50 <= 0x7FFFFFFF) )
    v48 = 0;
  v51 = -v48;
  v52 = v51 & (0x7FFFFFFF - v50);
  v53 = v50;
  v54 = (v51 >> 31) & ((0x7FFFFFFF - __PAIR__((unsigned int)v49, v50)) >> 32);
  v55 = 1;
  v56 = __PAIR__(v54, v53) + __PAIR__(v49, v52);
  if ( (signed int)((__PAIR__(v54, v53) + __PAIR__(v49, v52)) >> 32) <= -1
    && (SHIDWORD(v56) < -1 || (unsigned int)v56 < 0x80000001) )
  {
    v55 = 0;
  }
  v57 = 2147483648 - (-v55 & (2147483648 - v67 - ((0x7FFFFFFF - v67) & v51)));
  sub_6F80BEB0(a2 + 175032, 10);
  *(_DWORD *)(a2 + 175048) = v57;
  *(_DWORD *)(a2 + 175052) = v57;
  *(_DWORD *)(a2 + 175056) = v57;
  *(_DWORD *)(a2 + 175060) = v57;
  v58 = *(_QWORD *)(a2 + 174960);
  if ( SHIDWORD(v58) > 0xFFFFFFF || (v61 = sub_6F809680(v58 + 3458764513820540928i64), v61 > 2147483646) )
    v59 = 0x7FFFFFFF;
  else
    v59 = v61;
  result = sub_6F80C060(a2 + 175080);
  *(_DWORD *)(a2 + 175096) = v59;
  *(_DWORD *)(a2 + 175100) = v59;
  *(_DWORD *)(a2 + 175104) = v59;
  *(_DWORD *)(a2 + 175108) = v59;
  return result;
}
