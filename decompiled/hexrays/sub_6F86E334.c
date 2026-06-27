char __cdecl sub_6F86E334(int a1, int *a2)
{
  unsigned int v2; // ebx@1
  int v3; // eax@1
  int v4; // ecx@4
  int v5; // eax@5
  signed int v6; // edx@7
  int v7; // edx@9
  int v8; // eax@19
  int v9; // eax@20
  int v10; // ecx@20
  int v11; // edi@20
  int v12; // edx@20
  int v13; // edx@21
  int v14; // esi@21
  signed int v15; // edi@22
  _BYTE *v16; // eax@25
  int v17; // eax@25
  _BYTE *v18; // eax@27
  int v19; // eax@27
  int v20; // edx@36
  unsigned int v21; // eax@36
  int v22; // eax@39
  int v23; // eax@39
  int *v25; // esi@44
  int v26; // eax@44
  int v27; // ST20_4@44
  int v28; // ST1C_4@44
  int v29; // eax@47
  int v30; // edx@47
  _DWORD *v31; // eax@48
  signed int v32; // esi@50
  int v33; // edi@51
  _BYTE *v34; // eax@54
  int v35; // eax@54
  _BYTE *v36; // eax@56
  int v37; // eax@56
  int v38; // edx@61
  int v39; // edi@61
  int v40; // esi@62
  int v41; // edi@62
  int v42; // esi@62
  _BYTE *v43; // eax@66
  int v44; // eax@66
  _BYTE *v45; // eax@68
  int v46; // eax@68
  int *v47; // edx@72
  int v48; // eax@72
  int v49; // [sp+24h] [bp-144h]@4
  int v50; // [sp+28h] [bp-140h]@4
  int v51; // [sp+2Ch] [bp-13Ch]@5
  int v52; // [sp+30h] [bp-138h]@4
  signed int v53; // [sp+34h] [bp-134h]@11
  int v54; // [sp+38h] [bp-130h]@12
  int v55; // [sp+3Ch] [bp-12Ch]@4
  int v56; // [sp+40h] [bp-128h]@21
  int v57; // [sp+40h] [bp-128h]@48
  int v58; // [sp+40h] [bp-128h]@61
  int v59; // [sp+44h] [bp-124h]@11
  int v60; // [sp+48h] [bp-120h]@11
  signed int v61; // [sp+4Ch] [bp-11Ch]@15
  int v62; // [sp+4Ch] [bp-11Ch]@50
  int v63; // [sp+4Ch] [bp-11Ch]@61
  int v64[70]; // [sp+50h] [bp-118h]@9

  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v2 + 112) = *(_DWORD *)v3;
  *(_DWORD *)(v2 + 116) = *(_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(a1 + 224) && !*(_DWORD *)(v2 + 36) )
    sub_6F86D854(v2, *(_DWORD *)(v2 + 40));
  v52 = *(_DWORD *)(a1 + 348);
  v4 = *(_DWORD *)(a1 + 356);
  v50 = *(_DWORD *)(a1 + 364);
  v49 = *a2;
  v55 = *(_DWORD *)(a1 + 344);
  if ( v52 >= v55 )
  {
    v5 = *(_DWORD *)(a1 + 344);
    v51 = 0;
    do
    {
      while ( 1 )
      {
        v6 = *(_WORD *)(v49 + 2 * *(_DWORD *)(v50 + 4 * v5));
        if ( v6 < 0 )
          v6 = -v6;
        v7 = v6 >> v4;
        v64[v5] = v7;
        if ( v7 == 1 )
          break;
        if ( v52 < ++v5 )
          goto LABEL_11;
      }
      v51 = v5++;
    }
    while ( v52 >= v5 );
LABEL_11:
    v59 = *(_DWORD *)(v2 + 132) + *(_DWORD *)(v2 + 136);
    v60 = 0;
    v53 = 0;
LABEL_12:
    v54 = v64[v55];
    if ( !v54 )
    {
      ++v53;
      goto LABEL_34;
    }
    if ( v53 > 15 && v55 <= v51 )
    {
      v61 = v53;
      while ( 1 )
      {
        sub_6F86D5EC(v2);
        v8 = *(_DWORD *)(v2 + 124);
        if ( *(_BYTE *)(v2 + 108) )
        {
          ++*(_DWORD *)(*(_DWORD *)(v2 + 4 * v8 + 92) + 960);
          goto LABEL_17;
        }
        v9 = *(_DWORD *)(v2 + 4 * v8 + 60);
        v10 = *(_BYTE *)(v9 + 1264);
        v11 = *(_DWORD *)(v9 + 960);
        v12 = *(_DWORD *)(v2 + 16);
        if ( *(_BYTE *)(v9 + 1264) )
          break;
        v25 = *(int **)(v2 + 120);
        v26 = *v25;
        *(_DWORD *)(v26 + 20) = 41;
        v27 = v12;
        v28 = v10;
        (*(void (__cdecl **)(int *))v26)(v25);
        v12 = v27;
        v10 = v28;
        if ( !*(_BYTE *)(v2 + 108) )
          break;
LABEL_17:
        v61 -= 16;
        sub_6F86D4D4(v2, v59, v60);
        v59 = *(_DWORD *)(v2 + 136);
        if ( v61 <= 15 )
        {
          v53 &= 0xFu;
          v60 = 0;
          goto LABEL_32;
        }
        v60 = 0;
      }
      v13 = v10 + v12;
      v56 = v13;
      v14 = *(_DWORD *)(v2 + 12) | ((v11 & ((1 << v10) - 1)) << (24 - v13));
      if ( v13 <= 7 )
        goto LABEL_30;
      v15 = v13;
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = *(_BYTE **)(v2 + 112);
          *v16 = v14 >> 16;
          *(_DWORD *)(v2 + 112) = v16 + 1;
          v17 = *(_DWORD *)(v2 + 116) - 1;
          *(_DWORD *)(v2 + 116) = v17;
          if ( !v17 )
            break;
          if ( ((v14 >> 16) & 0xFF) == 255 )
            goto LABEL_27;
LABEL_24:
          v14 <<= 8;
          v15 -= 8;
          if ( v15 <= 7 )
            goto LABEL_29;
        }
        sub_6F86CA70(v2);
        if ( ((v14 >> 16) & 0xFF) != 255 )
          goto LABEL_24;
LABEL_27:
        v18 = *(_BYTE **)(v2 + 112);
        *v18 = 0;
        *(_DWORD *)(v2 + 112) = v18 + 1;
        v19 = *(_DWORD *)(v2 + 116) - 1;
        *(_DWORD *)(v2 + 116) = v19;
        if ( v19 )
          goto LABEL_24;
        sub_6F86CA70(v2);
        v14 <<= 8;
        v15 -= 8;
        if ( v15 <= 7 )
        {
LABEL_29:
          v56 &= 7u;
LABEL_30:
          *(_DWORD *)(v2 + 12) = v14;
          *(_DWORD *)(v2 + 16) = v56;
          goto LABEL_17;
        }
      }
    }
LABEL_32:
    if ( v54 > 1 )
    {
      *(_BYTE *)(v59 + v60++) = v54 & 1;
      goto LABEL_34;
    }
    sub_6F86D5EC(v2);
    v29 = 16 * v53 + 1;
    v30 = *(_DWORD *)(v2 + 124);
    if ( *(_BYTE *)(v2 + 108) )
    {
      v31 = (_DWORD *)(*(_DWORD *)(v2 + 4 * v30 + 92) + 4 * v29);
      ++*v31;
      v57 = *(_DWORD *)(v2 + 16);
LABEL_49:
      if ( *(_BYTE *)(v2 + 108) )
        goto LABEL_60;
      v62 = v57 + 1;
      v32 = *(_DWORD *)(v2 + 12) | ((unsigned int)~*(_WORD *)(v49 + 2 * *(_DWORD *)(v50 + 4 * v55)) >> 31 << (24 - (v57 + 1)));
      if ( v57 + 1 <= 7 )
        goto LABEL_59;
      v33 = v57 + 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v34 = *(_BYTE **)(v2 + 112);
          *v34 = v32 >> 16;
          *(_DWORD *)(v2 + 112) = v34 + 1;
          v35 = *(_DWORD *)(v2 + 116) - 1;
          *(_DWORD *)(v2 + 116) = v35;
          if ( !v35 )
            break;
          if ( ((v32 >> 16) & 0xFF) == 255 )
            goto LABEL_56;
LABEL_53:
          v32 <<= 8;
          v33 -= 8;
          if ( v33 <= 7 )
            goto LABEL_58;
        }
        sub_6F86CA70(v2);
        if ( ((v32 >> 16) & 0xFF) != 255 )
          goto LABEL_53;
LABEL_56:
        v36 = *(_BYTE **)(v2 + 112);
        *v36 = 0;
        *(_DWORD *)(v2 + 112) = v36 + 1;
        v37 = *(_DWORD *)(v2 + 116) - 1;
        *(_DWORD *)(v2 + 116) = v37;
        if ( v37 )
          goto LABEL_53;
        sub_6F86CA70(v2);
        v32 <<= 8;
        v33 -= 8;
        if ( v33 <= 7 )
        {
LABEL_58:
          v62 = v62 - ((v57 - 7) & 0xFFFFFFF8) - 8;
LABEL_59:
          *(_DWORD *)(v2 + 12) = v32;
          *(_DWORD *)(v2 + 16) = v62;
LABEL_60:
          sub_6F86D4D4(v2, v59, v60);
          v59 = *(_DWORD *)(v2 + 136);
          v60 = 0;
          v53 = 0;
LABEL_34:
          if ( v52 < ++v55 )
          {
            if ( v53 || v60 )
            {
              v20 = *(_DWORD *)(v2 + 128) + 1;
              *(_DWORD *)(v2 + 128) = v20;
              v21 = *(_DWORD *)(v2 + 132) + v60;
              *(_DWORD *)(v2 + 132) = v21;
              if ( v20 == 0x7FFF || v21 > 0x3A9 )
                sub_6F86D5EC(v2);
            }
            goto LABEL_39;
          }
          goto LABEL_12;
        }
      }
    }
    v38 = *(_DWORD *)(v2 + 4 * v30 + 60);
    v39 = *(_BYTE *)(v38 + v29 + 1024);
    v63 = *(_DWORD *)(v38 + 4 * v29);
    v58 = *(_DWORD *)(v2 + 16);
    if ( !*(_BYTE *)(v38 + v29 + 1024) )
    {
      v47 = *(int **)(v2 + 120);
      v48 = *v47;
      *(_DWORD *)(v48 + 20) = 41;
      (*(void (__cdecl **)(int *))v48)(v47);
      if ( *(_BYTE *)(v2 + 108) )
        goto LABEL_60;
    }
    v40 = v63 & ((1 << v39) - 1);
    v41 = v58 + v39;
    v57 = v41;
    v42 = *(_DWORD *)(v2 + 12) | (v40 << (24 - v41));
    if ( v41 <= 7 )
    {
LABEL_71:
      *(_DWORD *)(v2 + 12) = v42;
      *(_DWORD *)(v2 + 16) = v57;
      goto LABEL_49;
    }
    while ( 1 )
    {
      v43 = *(_BYTE **)(v2 + 112);
      *v43 = v42 >> 16;
      *(_DWORD *)(v2 + 112) = v43 + 1;
      v44 = *(_DWORD *)(v2 + 116) - 1;
      *(_DWORD *)(v2 + 116) = v44;
      if ( v44 )
      {
        if ( ((v42 >> 16) & 0xFF) == 255 )
          goto LABEL_68;
      }
      else
      {
        sub_6F86CA70(v2);
        if ( ((v42 >> 16) & 0xFF) == 255 )
        {
LABEL_68:
          v45 = *(_BYTE **)(v2 + 112);
          *v45 = 0;
          *(_DWORD *)(v2 + 112) = v45 + 1;
          v46 = *(_DWORD *)(v2 + 116) - 1;
          *(_DWORD *)(v2 + 116) = v46;
          if ( !v46 )
            sub_6F86CA70(v2);
          goto LABEL_65;
        }
      }
LABEL_65:
      v42 <<= 8;
      v41 -= 8;
      if ( v41 <= 7 )
      {
        v57 &= 7u;
        goto LABEL_71;
      }
    }
  }
LABEL_39:
  v22 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)v22 = *(_DWORD *)(v2 + 112);
  *(_DWORD *)(v22 + 4) = *(_DWORD *)(v2 + 116);
  v23 = *(_DWORD *)(a1 + 224);
  if ( v23 )
  {
    if ( !*(_DWORD *)(v2 + 36) )
    {
      *(_DWORD *)(v2 + 36) = v23;
      *(_DWORD *)(v2 + 40) = ((unsigned __int8)*(_DWORD *)(v2 + 40) + 1) & 7;
    }
    --*(_DWORD *)(v2 + 36);
  }
  return 1;
}
