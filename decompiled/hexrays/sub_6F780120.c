int __usercall sub_6F780120@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  signed int v4; // edi@3
  int v5; // ebp@3
  int result; // eax@4
  signed int v7; // edx@6
  signed int v8; // ebp@6
  int v9; // esi@7
  int v10; // ecx@7
  int v11; // edx@12
  signed int v12; // eax@12
  signed __int64 v13; // rax@13
  unsigned int v14; // esi@13
  signed __int64 v15; // rax@13
  unsigned int v16; // eax@13
  int v17; // ebp@16
  int v18; // edi@16
  bool v19; // zf@16
  int v20; // eax@19
  int v21; // edx@19
  int v22; // eax@24
  int v23; // edx@24
  int v24; // edx@25
  int v25; // eax@26
  int v26; // edx@26
  int v27; // eax@27
  int v28; // edi@27
  const void *v29; // esi@28
  int v30; // ecx@31
  int v31; // edx@34
  signed int v32; // eax@34
  signed __int64 v33; // rax@35
  signed __int64 v34; // rax@35
  int v35; // esi@37
  int v36; // esi@42
  char v37; // al@47
  int v38; // ecx@47
  int v39; // [sp+1Ch] [bp-70h]@1
  int v40; // [sp+1Ch] [bp-70h]@16
  signed int v41; // [sp+20h] [bp-6Ch]@3
  int v42; // [sp+20h] [bp-6Ch]@16
  int v43; // [sp+24h] [bp-68h]@1
  signed int v44; // [sp+28h] [bp-64h]@3
  int v45; // [sp+2Ch] [bp-60h]@16
  int v46; // [sp+30h] [bp-5Ch]@16
  int v47; // [sp+34h] [bp-58h]@1
  int v48; // [sp+38h] [bp-54h]@28
  int v49; // [sp+3Ch] [bp-50h]@27
  int v50; // [sp+44h] [bp-48h]@16
  int v51; // [sp+48h] [bp-44h]@16
  int v52; // [sp+4Ch] [bp-40h]@24
  int v53; // [sp+50h] [bp-3Ch]@24
  int v54; // [sp+54h] [bp-38h]@26
  int v55; // [sp+58h] [bp-34h]@26
  int v56; // [sp+6Ch] [bp-20h]@24

  v3 = a1;
  v39 = a2;
  v43 = a3;
  v47 = *(_DWORD *)(a1 + 11676);
  if ( !*(_BYTE *)(v47 + 5) || *(_BYTE *)(a1 + 11665) )
  {
    v4 = *(_DWORD *)(a1 + 11720);
    result = *(_DWORD *)(a1 + 11724);
    v41 = *(_DWORD *)(v3 + 11724);
    if ( v4 == a2 && result == a3 )
      return result;
    v5 = a3;
    v44 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 11720);
    v5 = a3;
    v44 = 1;
    v41 = *(_DWORD *)(a1 + 11724);
  }
  v7 = a2 - v4;
  v8 = v5 - v41;
  if ( *(_BYTE *)(*(_DWORD *)v3 + 192) )
  {
    v10 = -v7;
    v9 = -v8;
    if ( !*(_BYTE *)(v3 + 11666) )
      goto LABEL_15;
  }
  else
  {
    v9 = v8;
    v10 = v7;
    if ( !*(_BYTE *)(v3 + 11666) )
      goto LABEL_15;
  }
  *(_DWORD *)(*(_DWORD *)(v3 + 4) + 16) += (v8 >> 16) * (v4 >> 16) - (v41 >> 16) * (v7 >> 16);
  if ( v10 >= 0 )
  {
    if ( v9 >= 0 )
    {
      if ( v10 <= 2 * v9 )
      {
        if ( v9 <= 2 * v10 )
        {
          v11 = *(_DWORD *)(v3 + 11688);
          v12 = 45875;
LABEL_13:
          v13 = (unsigned int)(((signed int)((unsigned __int64)(v11 * (signed __int64)v12) >> 32) >> 31) + 0x8000)
              + v11 * (signed __int64)v12;
          v14 = (HIDWORD(v13) << 16) + ((unsigned int)v13 >> 16);
          v15 = (unsigned int)(((signed int)((unsigned __int64)(19661i64 * *(_DWORD *)(v3 + 11692)) >> 32) >> 31)
                             + 0x8000)
              + 19661i64 * *(_DWORD *)(v3 + 11692);
          v16 = (HIDWORD(v15) << 16) + ((unsigned int)v15 >> 16);
          goto LABEL_16;
        }
        goto LABEL_36;
      }
LABEL_15:
      v16 = 0;
      v14 = 0;
      goto LABEL_16;
    }
    v35 = -v9;
    if ( v10 > 2 * v35 )
      goto LABEL_15;
    if ( v35 <= 2 * v10 )
    {
      v11 = *(_DWORD *)(v3 + 11688);
      v12 = -45874;
      goto LABEL_13;
    }
    goto LABEL_39;
  }
  v30 = -v10;
  if ( v9 < 0 )
  {
    v36 = -v9;
    if ( v30 <= 2 * v36 )
    {
      if ( v36 > 2 * v30 )
      {
LABEL_39:
        v16 = *(_DWORD *)(v3 + 11692);
        v14 = -*(_DWORD *)(v3 + 11688);
        goto LABEL_16;
      }
      v31 = *(_DWORD *)(v3 + 11688);
      v32 = -45874;
LABEL_35:
      v33 = (unsigned int)(((signed int)((unsigned __int64)(v31 * (signed __int64)v32) >> 32) >> 31) + 0x8000)
          + v31 * (signed __int64)v32;
      v14 = (HIDWORD(v33) << 16) + ((unsigned int)v33 >> 16);
      v34 = (unsigned int)(((signed int)((unsigned __int64)(111411i64 * *(_DWORD *)(v3 + 11692)) >> 32) >> 31) + 0x8000)
          + 111411i64 * *(_DWORD *)(v3 + 11692);
      v16 = (HIDWORD(v34) << 16) + ((unsigned int)v34 >> 16);
      goto LABEL_16;
    }
  }
  else if ( v30 <= 2 * v9 )
  {
    if ( v9 > 2 * v30 )
    {
LABEL_36:
      v14 = *(_DWORD *)(v3 + 11688);
      v16 = *(_DWORD *)(v3 + 11692);
      goto LABEL_16;
    }
    v31 = *(_DWORD *)(v3 + 11688);
    v32 = 45875;
    goto LABEL_35;
  }
  v14 = 0;
  v16 = 2 * *(_DWORD *)(v3 + 11692);
LABEL_16:
  v17 = v39;
  v45 = v14 + v4;
  v50 = v14 + v4;
  v18 = v16 + v41;
  v19 = *(_BYTE *)(v3 + 11667) == 0;
  v46 = v16 + v41;
  v51 = v16 + v41;
  v40 = v39 + v14;
  v42 = v43 + v16;
  if ( !v19 )
  {
    v19 = *(_BYTE *)(v3 + 20) == 0;
    v22 = *(_DWORD *)(v3 + 11728);
    v23 = *(_DWORD *)(v3 + 11732);
    v56 = 1;
    v52 = v22;
    v53 = v23;
    if ( !v19 )
    {
      v24 = v3 + 8;
LABEL_26:
      sub_6F77D740(v3, v24, (int)&v54, v45, v18);
      (**(void (__cdecl ***)(_DWORD, int *))(v3 + 4))(*(_DWORD *)(v3 + 4), &v52);
      v25 = v54;
      v26 = v55;
      *(_DWORD *)(v3 + 11708) = v18;
      *(_BYTE *)(v3 + 11667) = 0;
      *(_BYTE *)(v3 + 11664) = 1;
      *(_DWORD *)(v3 + 11728) = v25;
      *(_DWORD *)(v3 + 11732) = v26;
      *(_DWORD *)(v3 + 11704) = v45;
      *(_DWORD *)(v3 + 11712) = v40;
      *(_DWORD *)(v3 + 11716) = v42;
      goto LABEL_17;
    }
    v27 = *(_DWORD *)(v3 + 11736);
    v28 = *(_DWORD *)(v3 + 11740);
    v49 = *(_DWORD *)(v3 + 11736);
    if ( *(_BYTE *)(v3 + 11664) )
    {
      *(_BYTE *)(v3 + 11665) = 1;
      v29 = (const void *)(v3 + 8);
      sub_6F780120(v3, v27, v28);
      v48 = v3 + 8;
      if ( *(_BYTE *)(v3 + 11744) )
        sub_6F77D960(v3, v3 + 8, v3 + 11704, *(_DWORD *)(v3 + 11712), *(_DWORD *)(v3 + 11716), 1);
      v37 = *(_BYTE *)(v3 + 20);
      v38 = *(_DWORD *)(v3 + 11676);
      *(_BYTE *)(v3 + 11664) = 0;
      *(_BYTE *)(v3 + 11665) = 0;
      *(_BYTE *)(v3 + 11744) = 0;
      *(_DWORD *)(v3 + 11736) = v49;
      *(_DWORD *)(v3 + 11720) = v49;
      v47 = v38;
      *(_DWORD *)(v3 + 11740) = v28;
      *(_DWORD *)(v3 + 11724) = v28;
      *(_BYTE *)(v3 + 11667) = 1;
      if ( v37 && !*(_BYTE *)(v38 + 5) )
        goto LABEL_30;
    }
    else
    {
      v29 = (const void *)(v3 + 8);
      *(_DWORD *)(v3 + 11720) = v27;
      *(_DWORD *)(v3 + 11724) = v28;
      *(_BYTE *)(v3 + 11667) = 1;
      v48 = v3 + 8;
    }
    sub_6F77E350((int)v29, *(_DWORD *)(v3 + 11668), *(_DWORD *)(v3 + 11672), v47, *(_DWORD *)(v3 + 11680), 0);
LABEL_30:
    v24 = v48;
    qmemcpy((void *)(v3 + 3876), v29, 0xF1Cu);
    v18 = v46;
    goto LABEL_26;
  }
LABEL_17:
  if ( *(_BYTE *)(v3 + 11744) )
    sub_6F77D960(v3, v3 + 8, (signed int)&v50, v40, v42, 0);
  v20 = v50;
  v21 = v51;
  *(_BYTE *)(v3 + 11744) = 1;
  *(_DWORD *)(v3 + 11748) = 2;
  *(_DWORD *)(v3 + 11752) = v20;
  *(_DWORD *)(v3 + 11756) = v21;
  *(_DWORD *)(v3 + 11760) = v40;
  *(_DWORD *)(v3 + 11764) = v42;
  if ( v44 )
    sub_6F77E350(
      v3 + 8,
      *(_DWORD *)(v3 + 11668),
      *(_DWORD *)(v3 + 11672),
      *(_DWORD *)(v3 + 11676),
      *(_DWORD *)(v3 + 11680),
      0);
  result = v43;
  *(_DWORD *)(v3 + 11720) = v17;
  *(_DWORD *)(v3 + 11724) = v43;
  return result;
}
