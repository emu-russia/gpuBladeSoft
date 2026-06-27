int __cdecl sub_6F7B80C0(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // ebx@1
  int v5; // edi@1
  int v6; // esi@1
  int v7; // ebp@2
  signed int v8; // eax@6
  signed int v9; // edx@6
  int v11; // eax@9
  int v12; // edx@9
  int v13; // ecx@9
  int v14; // eax@10
  int v15; // ebp@11
  int v16; // eax@12
  signed int v17; // eax@15
  signed int v18; // eax@15
  int v19; // eax@16
  int v20; // eax@25
  int v21; // edx@25
  int v22; // eax@25
  signed __int64 v23; // rax@28
  signed __int64 v24; // rax@28
  int v25; // eax@29
  int v26; // ecx@29
  int v27; // eax@31
  int v28; // edi@34
  signed int v29; // eax@34
  signed int v30; // eax@34
  int v31; // eax@34
  signed int v32; // eax@35
  signed int v33; // eax@35
  int v34; // edi@37
  int v35; // ebx@37
  signed __int64 v36; // rax@38
  signed __int64 v37; // rax@38
  signed int v38; // eax@45
  signed int v39; // eax@45
  signed int v40; // eax@45
  int v41; // [sp+34h] [bp-648h]@1
  int *v42; // [sp+34h] [bp-648h]@22
  int v43; // [sp+34h] [bp-648h]@25
  int v44; // [sp+38h] [bp-644h]@7
  int v45; // [sp+3Ch] [bp-640h]@9
  int v46; // [sp+3Ch] [bp-640h]@14
  int v47; // [sp+3Ch] [bp-640h]@26
  int v48; // [sp+40h] [bp-63Ch]@22
  int v49; // [sp+44h] [bp-638h]@14
  int v50; // [sp+44h] [bp-638h]@26
  int v51; // [sp+48h] [bp-634h]@15
  int v52; // [sp+54h] [bp-628h]@10
  int v53; // [sp+58h] [bp-624h]@12
  int v54; // [sp+5Ch] [bp-620h]@25
  int v55; // [sp+60h] [bp-61Ch]@25
  int v56; // [sp+64h] [bp-618h]@14
  int v57; // [sp+68h] [bp-614h]@14
  int v58; // [sp+6Ch] [bp-610h]@14
  int v59; // [sp+70h] [bp-60Ch]@14
  int v60; // [sp+74h] [bp-608h]@29
  int v61; // [sp+78h] [bp-604h]@29
  int v62; // [sp+7Ch] [bp-600h]@29
  int v63; // [sp+80h] [bp-5FCh]@29
  char v64; // [sp+84h] [bp-5F8h]@7
  int v65; // [sp+88h] [bp-5F4h]@9
  int v66; // [sp+94h] [bp-5E8h]@36
  int v67; // [sp+A4h] [bp-5D8h]@34
  int v68; // [sp+ACh] [bp-5D0h]@15
  int v69; // [sp+B0h] [bp-5CCh]@35
  bool v70; // [sp+C9h] [bp-5B3h]@9
  int v71; // [sp+CCh] [bp-5B0h]@27
  int v72; // [sp+5D8h] [bp-A4h]@9
  int v73; // [sp+5DCh] [bp-A0h]@9
  int v74; // [sp+5E0h] [bp-9Ch]@9
  int v75; // [sp+5E4h] [bp-98h]@9
  int v76; // [sp+5E8h] [bp-94h]@9
  int v77; // [sp+5ECh] [bp-90h]@9
  int v78; // [sp+5F0h] [bp-8Ch]@9
  int v79; // [sp+5F4h] [bp-88h]@9
  int v80; // [sp+5F8h] [bp-84h]@9
  int (__cdecl *v81)(char *, int, int); // [sp+650h] [bp-2Ch]@12
  int v82; // [sp+654h] [bp-28h]@9
  int v83; // [sp+658h] [bp-24h]@9

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 4);
  v41 = *(_DWORD *)(*(_DWORD *)(v6 + 488) + 12);
  if ( *(_DWORD *)(v6 + 16) <= a3 )
  {
    v7 = 6;
    if ( !*(_DWORD *)(*(_DWORD *)(v6 + 128) + 48) )
      return v7;
  }
  if ( a4 & 0x400 )
    v5 = a4 | 3;
  if ( a2 )
  {
    v8 = *(_DWORD *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 20);
  }
  else
  {
    v9 = 0x10000;
    v8 = 0x10000;
  }
  *(_DWORD *)(a1 + 172) = v8;
  *(_DWORD *)(a1 + 176) = v9;
  *(_WORD *)(a1 + 110) = 0;
  *(_WORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 72) = &loc_6F75746C;
  v44 = v5 & 3;
  v7 = (*(int (__cdecl **)(char *, int, int, int, _DWORD, _DWORD, _DWORD, int, int (__cdecl *)(int, int)))v41)(
         &v64,
         v6,
         a2,
         a1,
         *(_DWORD *)(v6 + 420),
         *(_DWORD *)(v6 + 528),
         v44 == 0,
         (v5 >> 16) & 0xF,
         sub_6F7BB280);
  if ( v7 )
    return v7;
  v11 = *(_DWORD *)(v6 + 404);
  v70 = (v5 & 0x400) != 0;
  v72 = v11;
  v73 = *(_DWORD *)(v6 + 408);
  v74 = *(_DWORD *)(v6 + 412);
  v82 = *(_DWORD *)(v6 + 544);
  v83 = *(_DWORD *)(v6 + 540);
  v12 = *(_DWORD *)(v65 + 452);
  v45 = *(_DWORD *)(*(_DWORD *)(v65 + 128) + 48);
  v75 = *(_DWORD *)(v65 + 436);
  v76 = *(_DWORD *)(v65 + 440);
  v77 = *(_DWORD *)(v65 + 444);
  v78 = *(_DWORD *)(v65 + 448);
  v13 = *(_DWORD *)(v65 + 456);
  v79 = v12;
  v80 = v13;
  if ( v45 )
  {
    v14 = (**(int (__cdecl ***)(_DWORD, unsigned int, int *))v45)(*(_DWORD *)(v45 + 4), a3, &v52);
    if ( v14 )
      goto LABEL_11;
    v14 = v81(&v64, v52, v53);
    if ( v14 )
      goto LABEL_11;
    if ( !*(_DWORD *)(*(_DWORD *)v45 + 8) )
      goto LABEL_14;
    LOWORD(v38) = sub_6F7C9390(v67);
    v61 = 0;
    v60 = v38 >> 16;
    LOWORD(v39) = sub_6F7C9390(v68);
    v62 = v39 >> 16;
    LOWORD(v40) = sub_6F7C9390(v69);
    v63 = v40 >> 16;
    v14 = (*(int (__cdecl **)(_DWORD, unsigned int, _DWORD, int *))(*(_DWORD *)v45 + 8))(
            *(_DWORD *)(v45 + 4),
            a3,
            0,
            &v60);
    v67 = v60 << 16;
    v68 = v62 << 16;
    v69 = v63 << 16;
  }
  else
  {
    v16 = *(_DWORD *)(*(_DWORD *)(v65 + 428) + 4 * a3);
    v52 = *(_DWORD *)(*(_DWORD *)(v65 + 424) + 4 * a3);
    v53 = v16;
    v14 = v81(&v64, v52, v16);
  }
  if ( v14 )
  {
LABEL_11:
    v15 = v14;
    (*(void (__cdecl **)(char *))(v41 + 4))(&v64);
    return v15;
  }
LABEL_14:
  v56 = v75;
  v57 = v76;
  v58 = v77;
  v59 = v78;
  v49 = v79;
  v46 = v80;
  (*(void (__cdecl **)(char *))(v41 + 4))(&v64);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a1 + 124) & 1 | 4;
  if ( v5 & 0x400 )
  {
    v28 = *(_DWORD *)(a1 + 156);
    LOWORD(v29) = sub_6F7C9390(v67);
    *(_DWORD *)(a1 + 32) = v29 >> 16;
    LOWORD(v30) = sub_6F7C9390(v68);
    *(_DWORD *)(a1 + 40) = v30 >> 16;
    *(_DWORD *)(v28 + 12) = v56;
    *(_DWORD *)(v28 + 16) = v57;
    *(_DWORD *)(v28 + 20) = v58;
    v31 = v59;
    *(_BYTE *)(v28 + 8) = 1;
    *(_DWORD *)(v28 + 24) = v31;
    *(_DWORD *)(v28 + 28) = v49;
    *(_DWORD *)(v28 + 32) = v46;
  }
  else
  {
    LOWORD(v17) = sub_6F7C9390(v68);
    *(_DWORD *)(a1 + 40) = v17 >> 16;
    LOWORD(v18) = sub_6F7C9390(v68);
    *(_DWORD *)(a1 + 56) = v18 >> 16;
    *(_BYTE *)(*(_DWORD *)(a1 + 156) + 8) = 0;
    v51 = v5 & 0x10;
    if ( v5 & 0x10 )
    {
      v19 = (*(_DWORD *)(v6 + 472) - *(_DWORD *)(v6 + 464)) >> 16;
      *(_DWORD *)(a1 + 52) = v19;
      *(_DWORD *)(a1 + 60) = v19;
    }
    else
    {
      LOWORD(v32) = sub_6F7C9390(v69);
      *(_DWORD *)(a1 + 52) = v32 >> 16;
      LOWORD(v33) = sub_6F7C9390(v69);
      *(_DWORD *)(a1 + 60) = v33 >> 16;
    }
    *(_DWORD *)(a1 + 72) = &loc_6F75746C;
    if ( a2 && *(_WORD *)(a2 + 14) <= 0x17u )
      *(_DWORD *)(a1 + 124) |= 0x100u;
    if ( v56 != 0x10000 || v59 != 0x10000 || v57 || v58 )
    {
      v48 = a1 + 108;
      v42 = &v56;
      sub_6F770750(a1 + 108, (int)&v56);
    }
    else
    {
      v48 = a1 + 108;
      v42 = &v56;
    }
    if ( v49 | v46 )
      sub_6F770420(v48, v49, v46);
    v20 = *(_DWORD *)(a1 + 40);
    v55 = 0;
    v54 = v20;
    sub_6F770690((int)&v54, (int)v42);
    v21 = v54 + v49;
    v22 = *(_DWORD *)(a1 + 52);
    v54 = 0;
    *(_DWORD *)(a1 + 40) = v21;
    v55 = v22;
    sub_6F770690((int)&v54, (int)v42);
    v43 = v55 + v46;
    *(_DWORD *)(a1 + 52) = v55 + v46;
    if ( !(v5 & 1) )
    {
      v47 = *(_DWORD *)(a1 + 172);
      v50 = *(_DWORD *)(a1 + 176);
      if ( (v44 || !v71) && (signed int)*(_WORD *)(v66 + 2) > 0 )
      {
        v34 = *(_DWORD *)(v66 + 4);
        v35 = *(_WORD *)(v66 + 2);
        do
        {
          v36 = (unsigned int)(((signed int)((unsigned __int64)(v47 * (signed __int64)*(_DWORD *)v34) >> 32) >> 31)
                             + 0x8000)
              + v47 * (signed __int64)*(_DWORD *)v34;
          *(_DWORD *)v34 = (HIDWORD(v36) << 16) + ((unsigned int)v36 >> 16);
          v37 = (unsigned int)(((signed int)((unsigned __int64)(v50 * (signed __int64)*(_DWORD *)(v34 + 4)) >> 32) >> 31)
                             + 0x8000)
              + v50 * (signed __int64)*(_DWORD *)(v34 + 4);
          *(_DWORD *)(v34 + 4) = (HIDWORD(v37) << 16) + ((unsigned int)v37 >> 16);
          v34 += 8;
          --v35;
        }
        while ( v35 );
        v7 = 0;
        v4 = a1;
      }
      v23 = (unsigned int)(((signed int)((unsigned __int64)(v47 * (signed __int64)*(_DWORD *)(v4 + 40)) >> 32) >> 31)
                         + 0x8000)
          + v47 * (signed __int64)*(_DWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 40) = (HIDWORD(v23) << 16) + ((unsigned int)v23 >> 16);
      v24 = (unsigned int)(((signed int)((unsigned __int64)(v50 * (signed __int64)v43) >> 32) >> 31) + 0x8000)
          + v50 * (signed __int64)v43;
      *(_DWORD *)(v4 + 52) = (HIDWORD(v24) << 16) + ((unsigned int)v24 >> 16);
    }
    sub_6F770380(v48, (int)&v60);
    v25 = v62 - v60;
    *(_DWORD *)(v4 + 32) = v60;
    *(_DWORD *)(v4 + 24) = v25;
    v26 = v63;
    *(_DWORD *)(v4 + 36) = v63;
    *(_DWORD *)(v4 + 28) = v26 - v61;
    if ( v51 )
      sub_6F76C600(v4 + 24, *(_DWORD *)(v4 + 52));
  }
  *(_DWORD *)(v4 + 136) = v52;
  *(_DWORD *)(v4 + 140) = v53;
  v27 = *(_DWORD *)(*(_DWORD *)(v6 + 128) + 48);
  if ( !v27 )
    return v7;
  (*(void (__cdecl **)(_DWORD, int *))(*(_DWORD *)v27 + 4))(*(_DWORD *)(v27 + 4), &v52);
  *(_DWORD *)(v4 + 136) = 0;
  *(_DWORD *)(v4 + 140) = 0;
  return v7;
}
