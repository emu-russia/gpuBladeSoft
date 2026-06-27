int __cdecl sub_6F7B6670(int a1, int a2, unsigned int a3, signed int a4)
{
  int result; // eax@1
  signed int v5; // ebx@1
  int v6; // edx@2
  int v7; // eax@11
  int v8; // esi@13
  int v9; // eax@19
  int v10; // edx@20
  int v11; // eax@20
  int v12; // eax@20
  signed int v13; // eax@24
  int v14; // ebx@29
  int v15; // edx@29
  int v16; // ST24_4@32
  int v17; // eax@33
  int v18; // eax@33
  int v19; // edx@35
  _BYTE *v20; // ecx@36
  int v21; // eax@36
  signed int v22; // eax@40
  int v23; // edx@42
  int v24; // eax@43
  int v25; // eax@45
  int (__cdecl *v26)(_DWORD, unsigned int, signed int, int *); // edx@46
  signed __int64 v27; // rax@50
  signed __int64 v28; // rax@50
  signed int v29; // eax@55
  int v30; // eax@55
  int v31; // eax@59
  int v32; // ecx@59
  int v33; // eax@59
  int v34; // edx@59
  int v35; // ecx@59
  int v36; // edx@59
  int v37; // ecx@59
  int v38; // edx@59
  int v39; // eax@61
  int v40; // edx@63
  int v41; // eax@63
  int v42; // ebx@63
  signed __int64 v43; // rax@65
  signed __int64 v44; // rax@68
  int v45; // eax@72
  __int16 v46; // ax@75
  unsigned int v47; // edx@77
  _BYTE *v48; // eax@78
  int v49; // [sp+20h] [bp-12Ch]@29
  int v50; // [sp+24h] [bp-128h]@33
  unsigned int v51; // [sp+24h] [bp-128h]@43
  int v52; // [sp+24h] [bp-128h]@59
  int v53; // [sp+28h] [bp-124h]@18
  int v54; // [sp+28h] [bp-124h]@59
  int v55; // [sp+2Ch] [bp-120h]@33
  int v56; // [sp+2Ch] [bp-120h]@44
  signed int v57; // [sp+30h] [bp-11Ch]@29
  int v58; // [sp+40h] [bp-10Ch]@32
  int v59; // [sp+44h] [bp-108h]@40
  int v60; // [sp+48h] [bp-104h]@40
  int v61; // [sp+4Ch] [bp-100h]@33
  int v62; // [sp+50h] [bp-FCh]@47
  int v63; // [sp+54h] [bp-F8h]@47
  unsigned int v64; // [sp+58h] [bp-F4h]@47
  int v65; // [sp+60h] [bp-ECh]@17
  int v66; // [sp+64h] [bp-E8h]@29
  int v67; // [sp+68h] [bp-E4h]@29
  int v68; // [sp+6Ch] [bp-E0h]@19
  char v69; // [sp+70h] [bp-DCh]@29
  int v70; // [sp+84h] [bp-C8h]@70
  int v71; // [sp+88h] [bp-C4h]@70
  int v72; // [sp+8Ch] [bp-C0h]@70
  int v73; // [sp+90h] [bp-BCh]@70
  int v74; // [sp+9Ch] [bp-B0h]@33
  int v75; // [sp+A4h] [bp-A8h]@20
  int v76; // [sp+ACh] [bp-A0h]@33
  int v77; // [sp+100h] [bp-4Ch]@23
  int v78; // [sp+114h] [bp-38h]@63
  int v79; // [sp+11Ch] [bp-30h]@75
  int v80; // [sp+124h] [bp-28h]@75

  result = 36;
  v5 = a4;
  if ( !a2 )
    return result;
  v6 = *(_DWORD *)(a1 + 4);
  result = 35;
  if ( !v6 )
    return result;
  if ( *(_DWORD *)(v6 + 16) <= a3 )
  {
    result = 6;
    if ( !*(_DWORD *)(*(_DWORD *)(v6 + 128) + 48) )
      return result;
  }
  if ( a4 & 2 )
  {
    if ( *(_BYTE *)(v6 + 9) & 0x20 )
      v5 = a4 & 0xFFFFFFFD;
    if ( BYTE1(v5) & 0x80 )
      v5 |= 2u;
  }
  if ( v5 & 0x401 )
  {
    v29 = v5;
    v5 |= 0xBu;
    v30 = v29 | 9;
    if ( *(_BYTE *)(v6 + 9) & 0x20 )
      v5 = v30;
  }
  v7 = *(_DWORD *)(a2 + 112);
  if ( v7 != -1
    && !(v5 & 8)
    && !(*(int (__cdecl **)(int, int, unsigned int, signed int, _DWORD, int, int *))(*(_DWORD *)(v6 + 532) + 72))(
          v6,
          v7,
          a3,
          v5,
          *(_DWORD *)(v6 + 104),
          a1 + 76,
          &v65) )
  {
    v31 = HIWORD(v65);
    *(_WORD *)(a1 + 110) = 0;
    v32 = SHIWORD(v66);
    *(_WORD *)(a1 + 108) = 0;
    *(_DWORD *)(a1 + 72) = 1651078259;
    *(_DWORD *)(a1 + 24) = v31 << 6;
    v52 = v32;
    *(_DWORD *)(a1 + 28) = (unsigned __int16)v65 << 6;
    v33 = (signed __int16)v66;
    *(_DWORD *)(a1 + 32) = (signed __int16)v66 << 6;
    v34 = v32;
    v35 = SHIWORD(v67);
    *(_DWORD *)(a1 + 36) = v34 << 6;
    v36 = (unsigned __int16)v67;
    v54 = v35;
    *(_DWORD *)(a1 + 44) = v35 << 6;
    v37 = HIWORD(v68);
    *(_DWORD *)(a1 + 40) = v36 << 6;
    v38 = (signed __int16)v68;
    *(_DWORD *)(a1 + 52) = v37 << 6;
    *(_DWORD *)(a1 + 48) = v38 << 6;
    if ( v5 & 0x10 )
      v33 = v54;
    else
      v38 = v52;
    *(_DWORD *)(a1 + 100) = v33;
    v39 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 104) = v38;
    if ( !(*(_BYTE *)(v39 + 8) & 1) )
      goto LABEL_85;
    sub_6F7B58B0(&v65, a2, a1, v5, 1);
    sub_6F7B41A0((int)&v65, a3, 0, 1);
    v40 = *(_DWORD *)(a1 + 40);
    v41 = v74;
    v42 = v78;
    *(_DWORD *)(a1 + 56) = v74;
    *(_DWORD *)(a1 + 60) = v42;
    if ( !v40 && v41 )
    {
      v43 = *(_DWORD *)(a2 + 16) * (signed __int64)v41;
      *(_DWORD *)(a1 + 40) = (((unsigned __int64)(unsigned int)((SHIDWORD(v43) >> 31) + 0x8000) + v43) >> 32 << 16)
                           + ((unsigned int)((SHIDWORD(v43) >> 31) + 0x8000 + v43) >> 16);
    }
    if ( !*(_DWORD *)(a1 + 52) && v42 )
    {
      v44 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(a2 + 20) * (signed __int64)v42) >> 32) >> 31)
                         + 0x8000)
          + *(_DWORD *)(a2 + 20) * (signed __int64)v42;
      *(_DWORD *)(a1 + 52) = (HIDWORD(v44) << 16) + ((unsigned int)v44 >> 16);
      result = 0;
    }
    else
    {
LABEL_85:
      result = 0;
    }
    return result;
  }
  v8 = v5 & 1;
  if ( !(v5 & 1) )
  {
    result = 36;
    if ( !*(_BYTE *)(a2 + 108) )
      return result;
  }
  result = 6;
  if ( BYTE1(v5) & 0x40 )
    return result;
  result = sub_6F7B58B0(&v65, a2, a1, v5, 0);
  if ( result )
    return result;
  *(_DWORD *)(a1 + 72) = &loc_6F75746C;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  result = sub_6F7B41A0((int)&v65, a3, 0, 0);
  v53 = result;
  if ( result )
    goto LABEL_52;
  v9 = v68;
  if ( *(_DWORD *)(a1 + 72) == 1668246896 )
  {
    v45 = *(_DWORD *)(v68 + 52);
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(v68 + 48);
    *(_DWORD *)(a1 + 132) = v45;
  }
  else
  {
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(v68 + 20);
    *(_DWORD *)(a1 + 112) = *(_DWORD *)(v9 + 24);
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(v9 + 28);
    v10 = *(_DWORD *)(v9 + 32);
    v11 = *(_DWORD *)(v9 + 36);
    *(_DWORD *)(a1 + 120) = v10;
    *(_DWORD *)(a1 + 124) = v11;
    v12 = v75;
    *(_DWORD *)(a1 + 124) &= 0xFFFFFDFF;
    if ( v12 )
      sub_6F770420(a1 + 108, -v12, 0);
  }
  if ( !(v5 & 2) )
  {
    if ( !*(_BYTE *)(v77 + 337) )
      goto LABEL_71;
    v13 = *(_DWORD *)(v77 + 340);
    if ( v13 != 1 )
    {
      if ( v13 <= 1 )
      {
        if ( !v13 )
        {
          *(_DWORD *)(a1 + 124) |= 0x20u;
          goto LABEL_29;
        }
      }
      else
      {
        if ( v13 == 4 )
        {
          *(_DWORD *)(a1 + 124) |= 0x30u;
          goto LABEL_29;
        }
        if ( v13 == 5 )
        {
          *(_DWORD *)(a1 + 124) |= 0x10u;
          goto LABEL_29;
        }
      }
LABEL_71:
      *(_DWORD *)(a1 + 124) |= 8u;
      goto LABEL_29;
    }
  }
LABEL_29:
  v14 = v67;
  v15 = v66;
  v57 = 0x10000;
  v49 = v65;
  if ( !(v69 & 1) )
    v57 = *(_DWORD *)(v66 + 20);
  if ( *(_DWORD *)(v67 + 72) == 1668246896 )
  {
    v58 = v70;
    v59 = v71;
    v60 = v72;
    v61 = v73;
  }
  else
  {
    v16 = v66;
    sub_6F770380(v67 + 108, (int)&v58);
    v15 = v16;
  }
  *(_DWORD *)(v14 + 56) = v74;
  v17 = v58;
  *(_DWORD *)(v14 + 32) = v58;
  v55 = v17;
  v18 = v61;
  *(_DWORD *)(v14 + 36) = v61;
  v50 = v18;
  *(_DWORD *)(v14 + 40) = v76 - v75;
  if ( !*(_DWORD *)(v49 + 480) && !(v69 & 2) )
  {
    v19 = *(_WORD *)(v15 + 12);
    if ( *(_DWORD *)(v49 + 712) )
    {
      v20 = *(_BYTE **)(v49 + 720);
      v21 = 0;
      if ( v19 == *v20 )
      {
LABEL_77:
        v47 = *(_DWORD *)(v49 + 716);
        if ( v47 > a3 + 2 )
        {
          v48 = (_BYTE *)(*(_DWORD *)(v49 + 704) + a3 + v47 * v21 + 10);
          if ( v48 )
            *(_DWORD *)(v14 + 40) = *v48 << 6;
        }
      }
      else
      {
        while ( ++v21 != *(_DWORD *)(v49 + 712) )
        {
          if ( v19 == v20[v21] )
            goto LABEL_77;
        }
      }
    }
  }
  *(_DWORD *)(v14 + 24) = v60 - v55;
  v22 = v50 - v59;
  *(_DWORD *)(v14 + 28) = v50 - v59;
  if ( *(_BYTE *)(v49 + 292) && *(_WORD *)(v49 + 330) )
  {
    v46 = sub_6F7C9760(v79 - v50, v57);
    v51 = 0;
    v56 = v46;
    if ( v79 > v80 )
      v51 = (unsigned __int16)sub_6F7C9760(v79 - v80, v57);
  }
  else
  {
    v23 = (signed __int16)sub_6F7C9760(v22, v57);
    if ( *(_WORD *)(v49 + 364) == -1 )
    {
      v51 = *(_WORD *)(v49 + 220) - *(_WORD *)(v49 + 222);
      v24 = *(_WORD *)(v49 + 220) - *(_WORD *)(v49 + 222);
    }
    else
    {
      v24 = *(_WORD *)(v49 + 434) - *(_WORD *)(v49 + 436);
      v51 = *(_WORD *)(v49 + 434) - *(_WORD *)(v49 + 436);
    }
    v56 = (v24 - v23) / 2;
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v49 + 128) + 48);
  if ( !v25 )
    goto LABEL_49;
  v26 = *(int (__cdecl **)(_DWORD, unsigned int, signed int, int *))(*(_DWORD *)v25 + 8);
  if ( !v26 )
    goto LABEL_49;
  v62 = 0;
  v63 = v56;
  v64 = v51;
  result = v26(*(_DWORD *)(v25 + 4), a3, 1, &v62);
  if ( !result )
  {
    v56 = v63;
    v51 = v64;
LABEL_49:
    *(_DWORD *)(v14 + 60) = v51;
    if ( !(v69 & 1) )
    {
      v27 = (unsigned int)(((signed int)((unsigned __int64)(v57 * (signed __int64)v56) >> 32) >> 31) + 0x8000)
          + v57 * (signed __int64)v56;
      v56 = (HIDWORD(v27) << 16) + ((unsigned int)v27 >> 16);
      v28 = (unsigned int)(((signed int)((unsigned __int64)(v57 * (signed __int64)(signed int)v51) >> 32) >> 31) + 0x8000)
          + v57 * (signed __int64)(signed int)v51;
      v51 = (HIDWORD(v28) << 16) + ((unsigned int)v28 >> 16);
    }
    *(_DWORD *)(v14 + 44) = *(_DWORD *)(v14 + 32) - *(_DWORD *)(v14 + 40) / 2;
    *(_DWORD *)(v14 + 48) = v56;
    *(_DWORD *)(v14 + 52) = v51;
    result = v53;
  }
LABEL_52:
  if ( !v8 && *(_WORD *)(a2 + 14) <= 0x17u )
    *(_DWORD *)(a1 + 124) |= 0x100u;
  return result;
}
