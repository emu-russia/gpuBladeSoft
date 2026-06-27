signed int __usercall sub_6F7A3280@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // edi@1
  signed int v3; // esi@1
  int v5; // ebp@3
  unsigned __int16 v6; // dx@8
  int v7; // eax@8
  char *v8; // ebp@11
  int v9; // eax@16
  int v10; // edi@17
  unsigned __int16 v11; // ax@21
  unsigned __int16 v12; // cx@21
  int v13; // ebp@22
  int v14; // ebx@26
  int v15; // ecx@28
  unsigned __int16 v16; // si@28
  signed int v17; // eax@29
  signed int v18; // eax@31
  signed int v19; // edx@32
  bool v20; // zf@32
  bool v21; // sf@32
  unsigned __int8 v22; // of@32
  unsigned __int16 v23; // bp@42
  char *v24; // eax@42
  int v25; // edx@44
  char *v26; // esi@44
  int v27; // ebx@44
  size_t v28; // ebp@45
  char *v29; // eax@50
  int v30; // ecx@50
  int v31; // eax@52
  unsigned __int16 v32; // bp@53
  char *v33; // eax@57
  int v34; // edx@57
  int v35; // esi@58
  int v36; // [sp+20h] [bp-4Ch]@3
  int v37; // [sp+20h] [bp-4Ch]@8
  unsigned int v38; // [sp+20h] [bp-4Ch]@44
  int v39; // [sp+24h] [bp-48h]@3
  unsigned __int16 v40; // [sp+24h] [bp-48h]@9
  int v41; // [sp+24h] [bp-48h]@44
  signed int v42; // [sp+28h] [bp-44h]@11
  int v43; // [sp+28h] [bp-44h]@21
  unsigned __int16 v44; // [sp+2Eh] [bp-3Eh]@21
  unsigned __int16 v45; // [sp+30h] [bp-3Ch]@42
  int v46; // [sp+34h] [bp-38h]@26
  char *v47; // [sp+34h] [bp-38h]@38
  char *v48; // [sp+38h] [bp-34h]@23
  int v49; // [sp+48h] [bp-24h]@1
  int v50; // [sp+4Ch] [bp-20h]@8

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 104);
  v3 = (*(int (__cdecl **)(int, signed int, _DWORD, int *))(a1 + 508))(a1, 1886352244, *(_DWORD *)(a1 + 104), &v49);
  if ( v3 )
    return v3;
  v36 = sub_6F7720A0(v2);
  v5 = *(_DWORD *)(v1 + 468);
  v39 = v49;
  v3 = sub_6F772040(v2, 32);
  if ( v3 )
    return v3;
  if ( v5 == 0x20000 )
  {
    v43 = *(_DWORD *)(v2 + 28);
    v11 = sub_6F772620(v2, &v50);
    v12 = v11;
    v44 = v11;
    v7 = v50;
    if ( v50 )
      goto LABEL_37;
    v13 = v12;
    if ( *(_WORD *)(v1 + 264) < v12 )
      goto LABEL_6;
    v48 = sub_6F773B30(v43, 2, 0, v12, 0, &v50);
    if ( v50 || (v50 = sub_6F772380(v2, 2 * v13)) != 0 )
    {
      v47 = 0;
    }
    else if ( v13 )
    {
      v46 = v1;
      v14 = 0;
      do
        *(_WORD *)&v48[2 * v14++] = sub_6F7724C0(v2);
      while ( v13 != v14 );
      v1 = v46;
      sub_6F772460(v2);
      v15 = 0;
      v16 = 0;
      do
      {
        v18 = *(_WORD *)&v48[2 * v15];
        if ( v18 <= 257 )
        {
          v17 = v16;
        }
        else
        {
          v17 = v18 - 257;
          v19 = v16;
          v22 = __OFSUB__(v17, v16);
          v20 = v17 == v16;
          v21 = v17 - v16 < 0;
          if ( v17 > v16 )
            v16 = v17;
          if ( (unsigned __int8)(v21 ^ v22) | v20 )
            v17 = v19;
        }
        ++v15;
      }
      while ( v13 != v15 );
      v23 = v16;
      v45 = v16;
      v3 = 0;
      v24 = sub_6F773B30(v43, 4, 0, v17, 0, &v50);
      v47 = v24;
      if ( !v50 )
      {
        if ( v23 )
        {
          v25 = v39 + v36;
          v41 = v1;
          v26 = v24;
          v38 = v25;
          v27 = 0;
          while ( 1 )
          {
            v32 = v27;
            if ( v38 <= sub_6F7720A0(v2) )
              break;
            v28 = (unsigned __int8)sub_6F7725A0(v2, &v50);
            if ( v50 )
              goto LABEL_68;
            if ( v38 < v28 || sub_6F7720A0(v2) > v38 - v28 )
            {
              v28 = v38 - sub_6F7720A0(v2);
              if ( (v28 & 0x80000000) != 0 )
                v28 = 0;
            }
            v29 = sub_6F773B30(v43, 1, 0, v28 + 1, 0, &v50);
            v30 = v50;
            *(_DWORD *)&v26[4 * v27] = v29;
            if ( v30 || (v50 = sub_6F7720B0(v2, v29, v28)) != 0 )
            {
LABEL_68:
              v1 = v41;
              goto LABEL_58;
            }
            v31 = *(_DWORD *)&v26[4 * v27++];
            *(_BYTE *)(v31 + v28) = 0;
            if ( v45 <= (unsigned __int16)v27 )
            {
              v3 = 0;
              v1 = v41;
              goto LABEL_64;
            }
          }
          v3 = 0;
          v1 = v41;
          if ( v45 <= v32 )
            goto LABEL_64;
          while ( 1 )
          {
            v33 = sub_6F773B30(v43, 1, 0, 1, 0, &v50);
            v34 = v50;
            *(_DWORD *)&v47[4 * v32] = v33;
            if ( v34 )
              break;
            ++v32;
            *v33 = 0;
            if ( v32 == v45 )
              goto LABEL_64;
          }
LABEL_58:
          v35 = 0;
          do
          {
            sub_6F773D90(v43, *(_DWORD *)&v47[4 * v35]);
            *(_DWORD *)&v47[4 * v35++] = 0;
          }
          while ( v45 > (unsigned __int16)v35 );
          goto LABEL_39;
        }
LABEL_64:
        *(_WORD *)(v1 + 616) = v44;
        *(_WORD *)(v1 + 618) = v45;
        *(_DWORD *)(v1 + 620) = v48;
        *(_DWORD *)(v1 + 624) = v47;
        goto LABEL_7;
      }
    }
    else
    {
      sub_6F772460(v2);
      v47 = sub_6F773B30(v43, 4, 0, 0, 0, &v50);
      if ( !v50 )
      {
        v45 = 0;
        goto LABEL_64;
      }
    }
LABEL_39:
    sub_6F773D90(v43, (int)v47);
    sub_6F773D90(v43, (int)v48);
    v3 = v50;
    goto LABEL_7;
  }
  if ( v5 == 163840 )
  {
    v37 = *(_DWORD *)(v2 + 28);
    v6 = sub_6F772620(v2, &v50);
    v7 = v50;
    if ( !v50 )
    {
      v40 = v6;
      if ( *(_WORD *)(v1 + 264) < v6 || (signed int)v6 > 258 )
        goto LABEL_6;
      v42 = v6;
      v8 = sub_6F773B30(v37, 1, 0, v6, 0, &v50);
      if ( !v50 )
      {
        v50 = sub_6F7720B0(v2, v8, v42);
        if ( !v50 )
        {
          if ( !v42 )
          {
LABEL_20:
            *(_WORD *)(v1 + 616) = v40;
            *(_DWORD *)(v1 + 620) = v8;
            goto LABEL_7;
          }
          if ( !(*v8 & 0x80) && v42 >= *v8 )
          {
            v9 = 0;
            while ( v42 != ++v9 )
            {
              v10 = v9 + v8[v9];
              if ( v10 < 0 || v42 < v10 )
                goto LABEL_40;
            }
            goto LABEL_20;
          }
LABEL_40:
          v50 = 3;
        }
      }
      sub_6F773D90(v37, (int)v8);
      v3 = v50;
      goto LABEL_7;
    }
LABEL_37:
    v3 = v7;
    goto LABEL_7;
  }
LABEL_6:
  v3 = 3;
LABEL_7:
  *(_BYTE *)(v1 + 612) = 1;
  return v3;
}
