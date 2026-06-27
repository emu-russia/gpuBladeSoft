signed int __cdecl sub_6F830C00(int a1, int a2)
{
  int v2; // ebx@1
  signed int v3; // ebp@3
  int v4; // eax@3
  int v5; // edx@6
  _BYTE *v7; // ecx@19
  signed int v8; // eax@19
  signed int v9; // edi@19
  signed int v10; // ebp@19
  int v11; // esi@20
  int v12; // esi@20
  int v13; // esi@24
  char v14; // dl@28
  char v15; // di@28
  int v16; // eax@31
  char v17; // al@39
  char v18; // dl@45
  unsigned __int64 v19; // ST18_8@45
  signed int v20; // eax@45
  signed int v21; // edx@45
  signed int v22; // eax@45
  int v23; // edx@45
  signed int v24; // edx@47
  char v25; // al@47
  int v26; // edi@47
  int v27; // eax@48
  int v28; // edx@49
  int v29; // eax@50
  unsigned int v30; // edx@50
  int v31; // ebx@50
  int v32; // esi@50
  unsigned int v33; // eax@50
  _BYTE *v34; // edx@51
  int v35; // ebx@51
  int v36; // edi@52
  unsigned int v37; // ecx@52
  int v38; // edi@54
  int v39; // ebx@54
  _BYTE *v40; // edx@55
  int v41; // ebx@55
  int v42; // edi@56
  unsigned int v43; // ecx@56
  unsigned __int64 v44; // [sp+18h] [bp-44h]@19
  signed int v45; // [sp+24h] [bp-38h]@3
  int v46; // [sp+28h] [bp-34h]@2
  int v47; // [sp+2Ch] [bp-30h]@9
  int v48; // [sp+30h] [bp-2Ch]@27
  signed int v49; // [sp+34h] [bp-28h]@9
  int v50; // [sp+34h] [bp-28h]@28
  int v51; // [sp+38h] [bp-24h]@28
  int v52; // [sp+3Ch] [bp-20h]@28

  v2 = a1;
  if ( !a1 )
    return 0;
  v46 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    return 0;
  v3 = *(_DWORD *)(a1 + 328);
  v4 = *(_DWORD *)(a1 + 28);
  v45 = *(_DWORD *)(a1 + 28);
  if ( v3 )
  {
    if ( !v4 )
      return 0;
  }
  else
  {
    if ( !v4 )
      return v3;
    if ( *(_DWORD *)(a1 + 332) )
    {
      v5 = 255;
      if ( v45 <= 255 )
        v5 = *(_DWORD *)(a1 + 28);
      if ( !v5 )
        return v3;
      v49 = 0;
      v47 = *(_DWORD *)(a1 + 332);
      if ( v5 <= 0 )
        return v3;
      goto LABEL_19;
    }
  }
  v5 = 255;
  if ( v45 <= 255 )
    v5 = *(_DWORD *)(a1 + 28);
  if ( !v5 )
    return 0;
  v47 = *(_DWORD *)(a1 + 332);
  if ( !*(_DWORD *)(a1 + 332) )
  {
    if ( v5 <= 0 )
    {
      v44 = 0i64;
      v7 = *(_BYTE **)(a1 + 16);
      v12 = 0;
      goto LABEL_38;
    }
    v7 = *(_BYTE **)(a1 + 16);
    if ( *v7 == -1 )
    {
      v16 = 0;
      do
      {
        if ( ++v16 == v5 )
          goto LABEL_34;
      }
      while ( v7[4 * v16] == -1 );
      v5 = v16 + 1;
    }
    else
    {
      v5 = 1;
    }
LABEL_34:
    v44 = 0i64;
LABEL_35:
    v12 = v5;
LABEL_38:
    *(_DWORD *)(v2 + 40) = 1399285583;
    *(_BYTE *)(v2 + 44) = 0;
    *(_BYTE *)(v2 + 45) = 0;
    v15 = v12;
    v48 = v2 + 40;
    v50 = v12 + 27;
    v51 = 4 * v12;
    v52 = 8 * v12;
    if ( !(*(_DWORD *)v7 & 0x100) )
      goto LABEL_60;
    v17 = 2;
    v14 = 0;
LABEL_40:
    if ( !v47 )
    {
      *(_BYTE *)(v2 + 45) = v17;
      v14 = v17;
    }
LABEL_42:
    if ( v12 == v45 && v3 )
      *(_BYTE *)(v2 + 45) = v14 | 4;
    *(_DWORD *)(v2 + 332) = 1;
    *(_BYTE *)(v2 + 46) = v44;
    *(_BYTE *)(v2 + 47) = BYTE1(v44);
    *(_BYTE *)(v2 + 48) = v44 >> 16;
    v18 = BYTE4(v44);
    *(_BYTE *)(v2 + 49) = v44 >> 24;
    v19 = SHIDWORD(v44);
    *(_BYTE *)(v2 + 50) = v18;
    *(_BYTE *)(v2 + 51) = BYTE1(v19);
    *(_BYTE *)(v2 + 52) = v19 >> 16;
    *(_BYTE *)(v2 + 53) = v19 >> 24;
    v20 = *(_DWORD *)(v2 + 336);
    *(_BYTE *)(v2 + 54) = v20;
    *(_BYTE *)(v2 + 55) = BYTE1(v20);
    v21 = v20;
    *(_BYTE *)(v2 + 57) = BYTE3(v20);
    v22 = *(_DWORD *)(v2 + 340);
    *(_BYTE *)(v2 + 56) = v21 >> 16;
    v23 = v22 + 1;
    if ( v22 == -1 )
    {
      v23 = 1;
      v22 = 0;
    }
    *(_DWORD *)(v2 + 340) = v23;
    *(_BYTE *)(v2 + 58) = v22;
    *(_BYTE *)(v2 + 62) = 0;
    *(_BYTE *)(v2 + 63) = 0;
    *(_BYTE *)(v2 + 59) = BYTE1(v22);
    v24 = v22 >> 16;
    *(_BYTE *)(v2 + 61) = BYTE3(v22);
    v25 = v15;
    v26 = 0;
    *(_BYTE *)(v2 + 60) = v24;
    *(_BYTE *)(v2 + 64) = 0;
    *(_BYTE *)(v2 + 65) = 0;
    *(_BYTE *)(v2 + 66) = v25;
    if ( v12 > 0 )
    {
      v27 = 0;
      do
      {
        v28 = *(_DWORD *)&v7[4 * v27];
        *(_BYTE *)(v2 + v27++ + 67) = v28;
        v26 += (unsigned __int8)v28;
      }
      while ( v27 != v12 );
    }
    *(_DWORD *)a2 = v48;
    *(_DWORD *)(v2 + 324) = v50;
    *(_DWORD *)(a2 + 4) = v50;
    v29 = *(_DWORD *)(v2 + 12) + v46;
    *(_DWORD *)(a2 + 12) = v26;
    *(_DWORD *)(a2 + 8) = v29;
    *(_DWORD *)(v2 + 28) = v45 - v12;
    memmove(v7, &v7[v51], 4 * (v45 - v12));
    memmove(*(void **)(v2 + 20), (const void *)(*(_DWORD *)(v2 + 20) + v52), 8 * *(_DWORD *)(v2 + 28));
    *(_DWORD *)(v2 + 12) += v26;
    LOBYTE(v30) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 22) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 23) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 24) = 0;
    *(_BYTE *)(*(_DWORD *)a2 + 25) = 0;
    v31 = *(_DWORD *)(a2 + 4);
    v32 = *(_DWORD *)a2;
    v33 = 0;
    if ( v31 > 0 )
    {
      v34 = *(_BYTE **)a2;
      v35 = v32 + v31;
      v33 = 0;
      do
      {
        v36 = *v34++;
        v37 = dword_6FB97F40[v36 ^ (v33 >> 24)] ^ (v33 << 8);
        v33 = dword_6FB97F40[v36 ^ (v33 >> 24)] ^ (v33 << 8);
      }
      while ( v34 != (_BYTE *)v35 );
      v30 = v37 >> 24;
    }
    v38 = a2;
    v39 = *(_DWORD *)(a2 + 12);
    if ( v39 > 0 )
    {
      v40 = *(_BYTE **)(a2 + 8);
      v41 = (int)&v40[v39];
      do
      {
        v42 = *v40++;
        v43 = dword_6FB97F40[v42 ^ (v33 >> 24)] ^ (v33 << 8);
        v33 = dword_6FB97F40[v42 ^ (v33 >> 24)] ^ (v33 << 8);
      }
      while ( v40 != (_BYTE *)v41 );
      v38 = a2;
      v30 = v43 >> 24;
    }
    *(_BYTE *)(v32 + 22) = v33;
    v3 = 1;
    *(_BYTE *)(*(_DWORD *)v38 + 23) = BYTE1(v33);
    *(_BYTE *)(*(_DWORD *)v38 + 24) = v33 >> 16;
    *(_BYTE *)(*(_DWORD *)v38 + 25) = v30;
    return v3;
  }
  v49 = 1;
  if ( v5 <= 0 )
  {
    v44 = -1i64;
    v5 = 0;
    v7 = *(_BYTE **)(a1 + 16);
    goto LABEL_35;
  }
LABEL_19:
  v7 = *(_BYTE **)(a1 + 16);
  v8 = 1;
  v44 = -1i64;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v13 = v7[4 * v8 - 4];
    v9 += v13;
    if ( v13 == 255 )
      break;
    ++v10;
    v11 = *(_DWORD *)(a1 + 20);
    LODWORD(v44) = *(_DWORD *)(v11 + 8 * v8 - 8);
    HIDWORD(v44) = *(_DWORD *)(v11 + 8 * v8 - 4);
    v12 = v8;
    if ( v5 <= v8 )
      goto LABEL_26;
    if ( v9 > 4096 && v10 > 3 )
    {
      v3 = *(_DWORD *)(a1 + 328);
      v2 = a1;
      goto LABEL_38;
    }
LABEL_23:
    ++v8;
  }
  v12 = v8;
  if ( v5 > v8 )
    goto LABEL_23;
LABEL_26:
  v3 = *(_DWORD *)(a1 + 328);
  v2 = a1;
  if ( v8 == 255 )
  {
    *(_DWORD *)(a1 + 40) = 1399285583;
    *(_BYTE *)(a1 + 44) = 0;
    *(_BYTE *)(a1 + 45) = 0;
    v48 = a1 + 40;
    if ( *(_DWORD *)v7 & 0x100 )
    {
      v14 = 0;
      v52 = 2040;
      v51 = 1020;
      v50 = 282;
      v15 = -1;
      goto LABEL_42;
    }
    v52 = 2040;
    v51 = 1020;
    v15 = -1;
    v50 = 282;
LABEL_60:
    *(_BYTE *)(v2 + 45) = 1;
    v17 = 3;
    v14 = 1;
    goto LABEL_40;
  }
  if ( v49 )
  {
    v12 = v8;
    goto LABEL_38;
  }
  return 0;
}
