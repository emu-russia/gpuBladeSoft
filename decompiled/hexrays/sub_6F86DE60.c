char __cdecl sub_6F86DE60(int a1, int *a2)
{
  unsigned int v2; // ebx@1
  int v3; // eax@1
  signed int v4; // eax@6
  int v5; // eax@16
  int v6; // eax@17
  int v7; // ecx@17
  int v8; // edi@17
  int v9; // eax@17
  int v10; // eax@18
  int v11; // esi@18
  signed int v12; // edi@19
  _BYTE *v13; // eax@22
  int v14; // eax@22
  _BYTE *v15; // eax@24
  int v16; // eax@24
  signed int v17; // eax@29
  signed int v18; // edi@30
  int v19; // eax@34
  int v20; // edx@34
  _DWORD *v21; // eax@35
  int v22; // esi@37
  int v23; // edi@37
  int v24; // esi@37
  _BYTE *v25; // eax@41
  int v26; // eax@41
  _BYTE *v27; // eax@43
  int v28; // eax@43
  int v29; // eax@48
  int v30; // eax@50
  int v31; // eax@50
  int v32; // edx@51
  int *v34; // esi@58
  int v35; // edx@58
  int v36; // ST14_4@58
  int *v37; // esi@61
  int v38; // eax@61
  int v39; // ST14_4@61
  int v40; // edx@61
  int v41; // ecx@61
  int v42; // edx@63
  int v43; // esi@64
  signed int v44; // edi@65
  _BYTE *v45; // eax@68
  int v46; // eax@68
  _BYTE *v47; // eax@70
  int v48; // eax@70
  int v49; // eax@33
  int v50; // [sp+18h] [bp-40h]@4
  int v51; // [sp+1Ch] [bp-3Ch]@8
  int v52; // [sp+20h] [bp-38h]@4
  int v53; // [sp+24h] [bp-34h]@4
  int v54; // [sp+28h] [bp-30h]@4
  int v55; // [sp+2Ch] [bp-2Ch]@8
  signed int v56; // [sp+30h] [bp-28h]@5
  int v57; // [sp+34h] [bp-24h]@18
  signed int v58; // [sp+34h] [bp-24h]@65
  int v59; // [sp+38h] [bp-20h]@4
  signed int v60; // [sp+3Ch] [bp-1Ch]@13
  int v61; // [sp+3Ch] [bp-1Ch]@35
  int v62; // [sp+3Ch] [bp-1Ch]@37
  int v63; // [sp+3Ch] [bp-1Ch]@63

  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v2 + 112) = *(_DWORD *)v3;
  *(_DWORD *)(v2 + 116) = *(_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(a1 + 224) && !*(_DWORD *)(v2 + 36) )
    sub_6F86D854(v2, *(_DWORD *)(v2 + 40));
  v54 = *(_DWORD *)(a1 + 348);
  v50 = *(_DWORD *)(a1 + 356);
  v53 = *(_DWORD *)(a1 + 364);
  v52 = *a2;
  v59 = *(_DWORD *)(a1 + 344);
  if ( v54 < v59 )
    goto LABEL_50;
  v56 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v4 = *(_WORD *)(v52 + 2 * *(_DWORD *)(v53 + 4 * v59));
      if ( !*(_WORD *)(v52 + 2 * *(_DWORD *)(v53 + 4 * v59))
        || (v4 < 0 ? (v55 = -v4 >> v50, v51 = ~v55) : (v55 = v4 >> v50, v51 = v4 >> v50), !v55) )
      {
        ++v56;
        goto LABEL_56;
      }
      if ( *(_DWORD *)(v2 + 128) )
        sub_6F86D5EC(v2);
      if ( v56 > 15 )
      {
        v60 = v56;
        while ( 1 )
        {
          while ( 1 )
          {
            v5 = *(_DWORD *)(v2 + 124);
            if ( !*(_BYTE *)(v2 + 108) )
              break;
            ++*(_DWORD *)(*(_DWORD *)(v2 + 4 * v5 + 92) + 960);
LABEL_15:
            v60 -= 16;
            if ( v60 <= 15 )
              goto LABEL_28;
          }
          v6 = *(_DWORD *)(v2 + 4 * v5 + 60);
          v7 = *(_BYTE *)(v6 + 1264);
          v8 = *(_DWORD *)(v6 + 960);
          v9 = *(_DWORD *)(v2 + 16);
          if ( !v7 )
          {
            v34 = *(int **)(v2 + 120);
            v35 = *v34;
            *(_DWORD *)(v35 + 20) = 41;
            v36 = v9;
            (*(void (__cdecl **)(int *))v35)(v34);
            v9 = v36;
            v7 = 0;
            if ( *(_BYTE *)(v2 + 108) )
              goto LABEL_15;
          }
          v10 = v7 + v9;
          v57 = v10;
          v11 = *(_DWORD *)(v2 + 12) | ((v8 & ((1 << v7) - 1)) << (24 - v10));
          if ( v10 <= 7 )
            goto LABEL_27;
          v12 = v10;
          do
          {
            while ( 1 )
            {
              v13 = *(_BYTE **)(v2 + 112);
              *v13 = v11 >> 16;
              *(_DWORD *)(v2 + 112) = v13 + 1;
              v14 = *(_DWORD *)(v2 + 116) - 1;
              *(_DWORD *)(v2 + 116) = v14;
              if ( !v14 )
                break;
              if ( ((v11 >> 16) & 0xFF) == 255 )
                goto LABEL_24;
LABEL_21:
              v11 <<= 8;
              v12 -= 8;
              if ( v12 <= 7 )
                goto LABEL_26;
            }
            sub_6F86CA70(v2);
            if ( ((v11 >> 16) & 0xFF) != 255 )
              goto LABEL_21;
LABEL_24:
            v15 = *(_BYTE **)(v2 + 112);
            *v15 = 0;
            *(_DWORD *)(v2 + 112) = v15 + 1;
            v16 = *(_DWORD *)(v2 + 116) - 1;
            *(_DWORD *)(v2 + 116) = v16;
            if ( v16 )
              goto LABEL_21;
            sub_6F86CA70(v2);
            v11 <<= 8;
            v12 -= 8;
          }
          while ( v12 > 7 );
LABEL_26:
          v57 &= 7u;
LABEL_27:
          *(_DWORD *)(v2 + 12) = v11;
          *(_DWORD *)(v2 + 16) = v57;
          v60 -= 16;
          if ( v60 <= 15 )
          {
LABEL_28:
            v56 &= 0xFu;
            break;
          }
        }
      }
      v17 = v55 >> 1;
      if ( v55 >> 1 )
      {
        v18 = 1;
        do
        {
          ++v18;
          v17 >>= 1;
        }
        while ( v17 );
        if ( v18 > 10 )
        {
          v49 = *(_DWORD *)a1;
          *(_DWORD *)(v49 + 20) = 6;
          (*(void (__cdecl **)(int))v49)(a1);
        }
      }
      else
      {
        v18 = 1;
      }
      v19 = v18 + 16 * v56;
      v20 = *(_DWORD *)(v2 + 124);
      if ( *(_BYTE *)(v2 + 108) )
      {
        v21 = (_DWORD *)(*(_DWORD *)(v2 + 4 * v20 + 92) + 4 * v19);
        ++*v21;
        v61 = *(_DWORD *)(v2 + 16);
        goto LABEL_36;
      }
      v42 = *(_DWORD *)(v2 + 4 * v20 + 60);
      v41 = *(_BYTE *)(v42 + v19 + 1024);
      v40 = *(_DWORD *)(v42 + 4 * v19);
      v63 = *(_DWORD *)(v2 + 16);
      if ( !v41 )
      {
        v37 = *(int **)(v2 + 120);
        v38 = *v37;
        *(_DWORD *)(v38 + 20) = 41;
        v39 = v40;
        (*(void (__cdecl **)(int *))v38)(v37);
        v40 = v39;
        v41 = 0;
        if ( *(_BYTE *)(v2 + 108) )
          break;
      }
      v61 = v63 + v41;
      v43 = *(_DWORD *)(v2 + 12) | ((v40 & ((1 << v41) - 1)) << (24 - v61));
      if ( v61 <= 7 )
        goto LABEL_73;
      v58 = v18;
      v44 = v61;
      do
      {
        while ( 1 )
        {
          v45 = *(_BYTE **)(v2 + 112);
          *v45 = v43 >> 16;
          *(_DWORD *)(v2 + 112) = v45 + 1;
          v46 = *(_DWORD *)(v2 + 116) - 1;
          *(_DWORD *)(v2 + 116) = v46;
          if ( !v46 )
            break;
          if ( ((v43 >> 16) & 0xFF) == 255 )
            goto LABEL_70;
LABEL_67:
          v43 <<= 8;
          v44 -= 8;
          if ( v44 <= 7 )
            goto LABEL_72;
        }
        sub_6F86CA70(v2);
        if ( ((v43 >> 16) & 0xFF) != 255 )
          goto LABEL_67;
LABEL_70:
        v47 = *(_BYTE **)(v2 + 112);
        *v47 = 0;
        *(_DWORD *)(v2 + 112) = v47 + 1;
        v48 = *(_DWORD *)(v2 + 116) - 1;
        *(_DWORD *)(v2 + 116) = v48;
        if ( v48 )
          goto LABEL_67;
        sub_6F86CA70(v2);
        v43 <<= 8;
        v44 -= 8;
      }
      while ( v44 > 7 );
LABEL_72:
      v18 = v58;
      v61 &= 7u;
LABEL_73:
      *(_DWORD *)(v2 + 12) = v43;
      *(_DWORD *)(v2 + 16) = v61;
LABEL_36:
      if ( !*(_BYTE *)(v2 + 108) )
      {
        v22 = v51 & ((1 << v18) - 1);
        v23 = v61 + v18;
        v62 = v23;
        v24 = *(_DWORD *)(v2 + 12) | (v22 << (24 - v23));
        if ( v23 <= 7 )
        {
LABEL_46:
          *(_DWORD *)(v2 + 12) = v24;
          *(_DWORD *)(v2 + 16) = v62;
          v56 = 0;
          if ( v54 < ++v59 )
            goto LABEL_47;
          continue;
        }
        while ( 1 )
        {
          v25 = *(_BYTE **)(v2 + 112);
          *v25 = v24 >> 16;
          *(_DWORD *)(v2 + 112) = v25 + 1;
          v26 = *(_DWORD *)(v2 + 116) - 1;
          *(_DWORD *)(v2 + 116) = v26;
          if ( v26 )
          {
            if ( ((v24 >> 16) & 0xFF) != 255 )
              goto LABEL_40;
          }
          else
          {
            sub_6F86CA70(v2);
            if ( ((v24 >> 16) & 0xFF) != 255 )
              goto LABEL_40;
          }
          v27 = *(_BYTE **)(v2 + 112);
          *v27 = 0;
          *(_DWORD *)(v2 + 112) = v27 + 1;
          v28 = *(_DWORD *)(v2 + 116) - 1;
          *(_DWORD *)(v2 + 116) = v28;
          if ( v28 )
          {
LABEL_40:
            v24 <<= 8;
            v23 -= 8;
            if ( v23 <= 7 )
              goto LABEL_45;
            continue;
          }
          sub_6F86CA70(v2);
          v24 <<= 8;
          v23 -= 8;
          if ( v23 <= 7 )
          {
LABEL_45:
            v62 &= 7u;
            goto LABEL_46;
          }
        }
      }
      break;
    }
    v56 = 0;
LABEL_56:
    if ( v54 >= ++v59 )
      continue;
    break;
  }
LABEL_47:
  if ( v56 )
  {
    v29 = *(_DWORD *)(v2 + 128) + 1;
    *(_DWORD *)(v2 + 128) = v29;
    if ( v29 == 0x7FFF )
      sub_6F86D5EC(v2);
  }
LABEL_50:
  v30 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)v30 = *(_DWORD *)(v2 + 112);
  *(_DWORD *)(v30 + 4) = *(_DWORD *)(v2 + 116);
  v31 = *(_DWORD *)(a1 + 224);
  if ( v31 )
  {
    v32 = *(_DWORD *)(v2 + 36);
    if ( !v32 )
    {
      *(_DWORD *)(v2 + 40) = ((unsigned __int8)*(_DWORD *)(v2 + 40) + 1) & 7;
      v32 = v31;
    }
    *(_DWORD *)(v2 + 36) = v32 - 1;
  }
  return 1;
}
