int __usercall sub_6F780E50@<eax>(int a1@<eax>, signed int a2@<edx>, signed int a3@<ecx>, signed int a4, signed int a5, int a6, int a7)
{
  int v7; // ebx@1
  signed int v8; // eax@1
  int v9; // esi@1
  signed int v10; // edx@1
  char v11; // di@2
  int v12; // ebp@3
  int v13; // edx@7
  signed int v14; // eax@7
  signed __int64 v15; // rax@8
  signed __int64 v16; // rax@8
  int v17; // edx@9
  int v18; // ecx@9
  bool v19; // zf@9
  signed int v20; // esi@9
  int v21; // edx@16
  signed int v22; // eax@16
  signed __int64 v23; // rax@17
  unsigned int v24; // esi@17
  signed __int64 v25; // rax@17
  unsigned int v26; // eax@18
  int v27; // ebp@18
  int v28; // eax@21
  int v29; // edx@21
  int v30; // esi@21
  int result; // eax@23
  int v32; // edx@31
  signed int v33; // eax@31
  signed __int64 v34; // rax@32
  signed __int64 v35; // rax@32
  int v36; // eax@36
  int v37; // edx@36
  int v38; // edx@37
  int v39; // eax@38
  int v40; // edx@38
  int v41; // edx@39
  int v42; // edx@42
  signed int v43; // eax@42
  signed __int64 v44; // rax@43
  signed __int64 v45; // rax@43
  int v46; // ecx@48
  int v47; // eax@51
  int v48; // edi@51
  const void *v49; // esi@52
  int v50; // eax@53
  int v51; // ecx@60
  char v52; // al@68
  signed int v53; // [sp+1Ch] [bp-70h]@1
  int v54; // [sp+1Ch] [bp-70h]@18
  signed int v55; // [sp+20h] [bp-6Ch]@1
  int v56; // [sp+20h] [bp-6Ch]@18
  int v57; // [sp+24h] [bp-68h]@3
  int v58; // [sp+24h] [bp-68h]@18
  int v59; // [sp+28h] [bp-64h]@2
  unsigned int v60; // [sp+28h] [bp-64h]@8
  int v61; // [sp+28h] [bp-64h]@18
  signed int v62; // [sp+2Ch] [bp-60h]@1
  int v63; // [sp+2Ch] [bp-60h]@18
  signed int v64; // [sp+30h] [bp-5Ch]@1
  int v65; // [sp+30h] [bp-5Ch]@18
  int v66; // [sp+34h] [bp-58h]@2
  unsigned int v67; // [sp+34h] [bp-58h]@8
  int v68; // [sp+34h] [bp-58h]@18
  signed int v69; // [sp+38h] [bp-54h]@9
  unsigned int v70; // [sp+38h] [bp-54h]@17
  int v71; // [sp+38h] [bp-54h]@52
  int v72; // [sp+3Ch] [bp-50h]@51
  int v73; // [sp+44h] [bp-48h]@18
  int v74; // [sp+48h] [bp-44h]@18
  int v75; // [sp+4Ch] [bp-40h]@36
  int v76; // [sp+50h] [bp-3Ch]@36
  int v77; // [sp+54h] [bp-38h]@38
  int v78; // [sp+58h] [bp-34h]@38
  int v79; // [sp+6Ch] [bp-20h]@36

  v7 = a1;
  v55 = a3;
  v53 = a2;
  v8 = a3 - *(_DWORD *)(a1 + 11724);
  v62 = *(_DWORD *)(v7 + 11724);
  v9 = *(_DWORD *)v7;
  v10 = a2 - *(_DWORD *)(v7 + 11720);
  v64 = *(_DWORD *)(v7 + 11720);
  if ( !*(_BYTE *)(*(_DWORD *)v7 + 192) )
  {
    if ( !*(_BYTE *)(v7 + 11666) )
    {
      v12 = *(_DWORD *)(v7 + 4);
      v67 = 0;
      v24 = 0;
      v60 = 0;
      v70 = 0;
      v57 = *(_DWORD *)(v12 + 16);
      goto LABEL_18;
    }
    v66 = v8;
    v59 = v10;
LABEL_3:
    v12 = *(_DWORD *)(v7 + 4);
    v57 = *(_DWORD *)(v12 + 16) + (v64 >> 16) * (v8 >> 16) - (v62 >> 16) * (v10 >> 16);
    *(_DWORD *)(v12 + 16) = v57;
    if ( v59 >= 0 )
    {
      if ( v66 >= 0 )
      {
        if ( 2 * v66 >= v59 )
        {
          if ( v66 <= 2 * v59 )
          {
            v13 = *(_DWORD *)(v7 + 11688);
            v14 = 45875;
LABEL_8:
            v15 = (unsigned int)(((signed int)((unsigned __int64)(v13 * (signed __int64)v14) >> 32) >> 31) + 0x8000)
                + v13 * (signed __int64)v14;
            v67 = (HIDWORD(v15) << 16) + ((unsigned int)v15 >> 16);
            v16 = (unsigned int)(((signed int)((unsigned __int64)(19661i64 * *(_DWORD *)(v7 + 11692)) >> 32) >> 31)
                               + 0x8000)
                + 19661i64 * *(_DWORD *)(v7 + 11692);
            v60 = (HIDWORD(v16) << 16) + ((unsigned int)v16 >> 16);
            goto LABEL_9;
          }
          goto LABEL_34;
        }
LABEL_33:
        v60 = 0;
        v67 = 0;
        goto LABEL_9;
      }
      if ( -2 * v66 < v59 )
        goto LABEL_33;
      if ( -v66 <= 2 * v59 )
      {
        v13 = *(_DWORD *)(v7 + 11688);
        v14 = -45874;
        goto LABEL_8;
      }
      goto LABEL_47;
    }
    if ( v66 < 0 )
    {
      if ( -v59 <= -2 * v66 )
      {
        if ( -v66 > -2 * v59 )
        {
LABEL_47:
          v67 = -*(_DWORD *)(v7 + 11688);
          v60 = *(_DWORD *)(v7 + 11692);
          goto LABEL_9;
        }
        v32 = *(_DWORD *)(v7 + 11688);
        v33 = -45874;
LABEL_32:
        v34 = (unsigned int)(((signed int)((unsigned __int64)(v32 * (signed __int64)v33) >> 32) >> 31) + 0x8000)
            + v32 * (signed __int64)v33;
        v67 = (HIDWORD(v34) << 16) + ((unsigned int)v34 >> 16);
        v35 = (unsigned int)(((signed int)((unsigned __int64)(111411i64 * *(_DWORD *)(v7 + 11692)) >> 32) >> 31) + 0x8000)
            + 111411i64 * *(_DWORD *)(v7 + 11692);
        v60 = (HIDWORD(v35) << 16) + ((unsigned int)v35 >> 16);
        goto LABEL_9;
      }
    }
    else if ( -v59 <= 2 * v66 )
    {
      if ( v66 > -2 * v59 )
      {
LABEL_34:
        v67 = *(_DWORD *)(v7 + 11688);
        v60 = *(_DWORD *)(v7 + 11692);
        goto LABEL_9;
      }
      v32 = *(_DWORD *)(v7 + 11688);
      v33 = 45875;
      goto LABEL_32;
    }
    v67 = 0;
    v60 = 2 * *(_DWORD *)(v7 + 11692);
LABEL_9:
    v17 = a6 - a4;
    v18 = a7 - a5;
    v19 = *(_BYTE *)(v9 + 192) == 0;
    v11 = *(_BYTE *)(v7 + 11666);
    v69 = a7 - a5;
    v20 = a6 - a4;
    if ( v19 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v66 = -v8;
  v11 = *(_BYTE *)(v7 + 11666);
  v59 = -v10;
  if ( v11 )
    goto LABEL_3;
  v12 = *(_DWORD *)(v7 + 4);
  v67 = 0;
  v20 = a6 - a4;
  v60 = 0;
  v69 = a7 - a5;
  v18 = a7 - a5;
  v57 = *(_DWORD *)(v12 + 16);
LABEL_10:
  v18 = -v18;
  v17 = -v20;
LABEL_11:
  if ( !v11 )
    goto LABEL_35;
  v57 += (a4 >> 16) * (v69 >> 16) - (a5 >> 16) * (v20 >> 16);
  *(_DWORD *)(v12 + 16) = v57;
  if ( v17 >= 0 )
  {
    if ( v18 >= 0 )
    {
      if ( v17 <= 2 * v18 )
      {
        if ( v18 <= 2 * v17 )
        {
          v21 = *(_DWORD *)(v7 + 11688);
          v22 = 45875;
LABEL_17:
          v23 = (unsigned int)(((signed int)((unsigned __int64)(v21 * (signed __int64)v22) >> 32) >> 31) + 0x8000)
              + v21 * (signed __int64)v22;
          v24 = (HIDWORD(v23) << 16) + ((unsigned int)v23 >> 16);
          v25 = (unsigned int)(((signed int)((unsigned __int64)(19661i64 * *(_DWORD *)(v7 + 11692)) >> 32) >> 31)
                             + 0x8000)
              + 19661i64 * *(_DWORD *)(v7 + 11692);
          v70 = (HIDWORD(v25) << 16) + ((unsigned int)v25 >> 16);
          goto LABEL_18;
        }
        goto LABEL_44;
      }
LABEL_35:
      v70 = 0;
      v24 = 0;
      goto LABEL_18;
    }
    v46 = -v18;
    if ( v17 > 2 * v46 )
      goto LABEL_35;
    if ( v46 <= 2 * v17 )
    {
      v21 = *(_DWORD *)(v7 + 11688);
      v22 = -45874;
      goto LABEL_17;
    }
    goto LABEL_50;
  }
  v41 = -v17;
  if ( v18 < 0 )
  {
    v51 = -v18;
    if ( v41 <= 2 * v51 )
    {
      if ( v51 > 2 * v41 )
      {
LABEL_50:
        v24 = -*(_DWORD *)(v7 + 11688);
        v70 = *(_DWORD *)(v7 + 11692);
        goto LABEL_18;
      }
      v42 = *(_DWORD *)(v7 + 11688);
      v43 = -45874;
LABEL_43:
      v44 = (unsigned int)(((signed int)((unsigned __int64)(v42 * (signed __int64)v43) >> 32) >> 31) + 0x8000)
          + v42 * (signed __int64)v43;
      v24 = (HIDWORD(v44) << 16) + ((unsigned int)v44 >> 16);
      v45 = (unsigned int)(((signed int)((unsigned __int64)(111411i64 * *(_DWORD *)(v7 + 11692)) >> 32) >> 31) + 0x8000)
          + 111411i64 * *(_DWORD *)(v7 + 11692);
      v70 = (HIDWORD(v45) << 16) + ((unsigned int)v45 >> 16);
      goto LABEL_18;
    }
  }
  else if ( v41 <= 2 * v18 )
  {
    if ( v18 > 2 * v41 )
    {
LABEL_44:
      v24 = *(_DWORD *)(v7 + 11688);
      v70 = *(_DWORD *)(v7 + 11692);
      goto LABEL_18;
    }
    v42 = *(_DWORD *)(v7 + 11688);
    v43 = 45875;
    goto LABEL_43;
  }
  v24 = 0;
  v70 = 2 * *(_DWORD *)(v7 + 11692);
LABEL_18:
  v26 = v67;
  v68 = v60 + v62;
  v74 = v60 + v62;
  *(_DWORD *)(v12 + 16) = v57 + (v53 >> 16) * ((a5 - v55) >> 16) - ((a4 - v53) >> 16) * (v55 >> 16);
  v56 = v60 + v55;
  v27 = v26 + v64;
  v73 = v26 + v64;
  v54 = v26 + v53;
  v58 = v24 + a4;
  v63 = a6 + v24;
  v61 = v70 + a5;
  v65 = v70 + a7;
  if ( !*(_BYTE *)(v7 + 11667) )
    goto LABEL_19;
  v19 = *(_BYTE *)(v7 + 20) == 0;
  v36 = *(_DWORD *)(v7 + 11728);
  v37 = *(_DWORD *)(v7 + 11732);
  v79 = 1;
  v75 = v36;
  v76 = v37;
  if ( v19 )
  {
    v47 = *(_DWORD *)(v7 + 11740);
    v48 = *(_DWORD *)(v7 + 11736);
    v72 = *(_DWORD *)(v7 + 11740);
    if ( *(_BYTE *)(v7 + 11664) )
    {
      *(_BYTE *)(v7 + 11665) = 1;
      v49 = (const void *)(v7 + 8);
      sub_6F780120(v7, v48, v47);
      v71 = v7 + 8;
      if ( *(_BYTE *)(v7 + 11744) )
        sub_6F77D960(v7, v7 + 8, v7 + 11704, *(_DWORD *)(v7 + 11712), *(_DWORD *)(v7 + 11716), 1);
      v52 = *(_BYTE *)(v7 + 20);
      *(_DWORD *)(v7 + 11736) = v48;
      *(_DWORD *)(v7 + 11720) = v48;
      *(_BYTE *)(v7 + 11664) = 0;
      *(_BYTE *)(v7 + 11665) = 0;
      *(_BYTE *)(v7 + 11744) = 0;
      *(_BYTE *)(v7 + 11667) = 1;
      *(_DWORD *)(v7 + 11740) = v72;
      *(_DWORD *)(v7 + 11724) = v72;
      if ( v52 )
      {
        v50 = *(_DWORD *)(v7 + 11676);
        if ( !*(_BYTE *)(v50 + 5) )
          goto LABEL_55;
        goto LABEL_54;
      }
    }
    else
    {
      v49 = (const void *)(v7 + 8);
      *(_DWORD *)(v7 + 11720) = v48;
      *(_DWORD *)(v7 + 11724) = v47;
      *(_BYTE *)(v7 + 11667) = 1;
      v71 = v7 + 8;
    }
    v50 = *(_DWORD *)(v7 + 11676);
LABEL_54:
    sub_6F77E350((int)v49, *(_DWORD *)(v7 + 11668), *(_DWORD *)(v7 + 11672), v50, *(_DWORD *)(v7 + 11680), 0);
LABEL_55:
    v38 = v71;
    qmemcpy((void *)(v7 + 3876), v49, 0xF1Cu);
    goto LABEL_38;
  }
  v38 = v7 + 8;
LABEL_38:
  sub_6F77D740(v7, v38, (int)&v77, v27, v68);
  (**(void (__cdecl ***)(_DWORD, int *))(v7 + 4))(*(_DWORD *)(v7 + 4), &v75);
  v39 = v77;
  v40 = v78;
  *(_DWORD *)(v7 + 11704) = v27;
  *(_DWORD *)(v7 + 11708) = v68;
  *(_BYTE *)(v7 + 11667) = 0;
  *(_BYTE *)(v7 + 11664) = 1;
  *(_DWORD *)(v7 + 11728) = v39;
  *(_DWORD *)(v7 + 11732) = v40;
  *(_DWORD *)(v7 + 11712) = v54;
  *(_DWORD *)(v7 + 11716) = v56;
LABEL_19:
  if ( *(_BYTE *)(v7 + 11744) )
    sub_6F77D960(v7, v7 + 8, (signed int)&v73, v54, v56, 0);
  v28 = v73;
  v29 = v74;
  v30 = *(_DWORD *)(v7 + 11676);
  *(_BYTE *)(v7 + 11744) = 1;
  *(_DWORD *)(v7 + 11748) = 4;
  *(_DWORD *)(v7 + 11752) = v28;
  *(_DWORD *)(v7 + 11756) = v29;
  *(_DWORD *)(v7 + 11760) = v54;
  *(_DWORD *)(v7 + 11764) = v56;
  *(_DWORD *)(v7 + 11768) = v58;
  *(_DWORD *)(v7 + 11772) = v61;
  *(_DWORD *)(v7 + 11776) = v63;
  *(_DWORD *)(v7 + 11780) = v65;
  if ( *(_BYTE *)(v30 + 5) )
    sub_6F77E350(v7 + 8, *(_DWORD *)(v7 + 11668), *(_DWORD *)(v7 + 11672), v30, *(_DWORD *)(v7 + 11680), 0);
  *(_DWORD *)(v7 + 11720) = a6;
  result = a7;
  *(_DWORD *)(v7 + 11724) = a7;
  return result;
}
