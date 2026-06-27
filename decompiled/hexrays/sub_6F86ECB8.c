char __cdecl sub_6F86ECB8(int a1, int a2)
{
  int v2; // eax@1
  _BYTE *v3; // ebx@1
  int v4; // edx@1
  int v5; // esi@4
  int v6; // edi@4
  int v7; // eax@5
  int v8; // edx@5
  int v9; // edx@5
  signed int v10; // eax@5
  signed int v11; // ecx@8
  int v12; // ecx@12
  int v13; // edx@12
  int v14; // edx@15
  signed int v15; // edi@15
  signed int v16; // esi@15
  _BYTE *v17; // eax@15
  int v18; // ebx@18
  int v19; // ecx@31
  _BYTE *v20; // eax@34
  int v21; // edx@38
  int v22; // edi@39
  char v23; // al@39
  char v24; // dl@41
  int v26; // ebx@43
  int v27; // ecx@48
  int v28; // edx@48
  int v29; // edx@51
  signed int v30; // edi@51
  signed int v31; // esi@51
  _BYTE *v32; // eax@51
  int v33; // ebx@54
  int v34; // ebx@59
  int v35; // ST14_4@49
  int v36; // ST28_4@49
  int v37; // ST24_4@49
  signed int v38; // eax@62
  signed int v39; // eax@63
  signed int v40; // edx@64
  int v41; // eax@67
  int v42; // eax@68
  int v43; // ecx@68
  int v44; // esi@70
  int v45; // edx@70
  _BYTE *v46; // eax@71
  int v47; // ebx@71
  int v48; // edi@75
  _BYTE *v49; // eax@81
  int v50; // ebx@81
  int v51; // edi@85
  int v52; // edi@91
  int v53; // edi@93
  int v54; // ST18_4@13
  int v55; // ST28_4@13
  int v56; // eax@11
  int v57; // ST28_4@11
  _BYTE *v58; // eax@97
  signed int v59; // ebx@97
  int v60; // edi@101
  int v61; // edi@106
  int v62; // eax@69
  int v63; // eax@114
  int v64; // eax@114
  int v65; // edi@119
  int v66; // eax@119
  int v67; // ecx@124
  char v68; // al@125
  int v69; // edi@131
  int v70; // eax@136
  _BYTE *v71; // ebx@137
  int v72; // edx@140
  int i; // eax@140
  int v74; // eax@32
  int v75; // esi@144
  char v76; // al@144
  int v77; // esi@146
  char v78; // al@146
  int v79; // [sp+28h] [bp-80h]@19
  int v80; // [sp+28h] [bp-80h]@55
  int v81; // [sp+28h] [bp-80h]@125
  int v82; // [sp+28h] [bp-80h]@133
  signed int v83; // [sp+30h] [bp-78h]@66
  int v84; // [sp+34h] [bp-74h]@5
  signed int v85; // [sp+38h] [bp-70h]@5
  int v86; // [sp+3Ch] [bp-6Ch]@5
  int v87; // [sp+40h] [bp-68h]@4
  _WORD *v88; // [sp+44h] [bp-64h]@5
  signed int v89; // [sp+48h] [bp-60h]@27
  int v90; // [sp+4Ch] [bp-5Ch]@1
  int v91; // [sp+50h] [bp-58h]@7
  signed int v92; // [sp+50h] [bp-58h]@26
  int v93; // [sp+50h] [bp-58h]@118
  int v94; // [sp+54h] [bp-54h]@1
  int v95; // [sp+54h] [bp-54h]@5
  int v96; // [sp+58h] [bp-50h]@1
  signed int v97; // [sp+58h] [bp-50h]@10
  signed int v98; // [sp+58h] [bp-50h]@26
  int v99; // [sp+58h] [bp-50h]@31
  int v100; // [sp+58h] [bp-50h]@68
  int v101; // [sp+5Ch] [bp-4Ch]@1
  int v102; // [sp+5Ch] [bp-4Ch]@119
  char v103; // [sp+74h] [bp-34h]@1
  int v104[11]; // [sp+7Ch] [bp-2Ch]@5

  v90 = *(_DWORD *)(a1 + 404);
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_BYTE **)v2;
  v96 = *(_DWORD *)(v2 + 4);
  qmemcpy(&v103, (const void *)(v90 + 12), 0x18u);
  v101 = *(_DWORD *)(v90 + 12);
  v4 = *(_DWORD *)(v90 + 16);
  v94 = *(_DWORD *)(v90 + 16);
  if ( *(_DWORD *)(a1 + 224) && !*(_DWORD *)(v90 + 36) )
  {
    v93 = *(_DWORD *)(v90 + 40);
    if ( v4 + 7 > 7 )
    {
      v65 = v101 | (127 << (24 - (v4 + 7)));
      v102 = v4 - 1;
      v66 = v96;
      while ( 1 )
      {
        v67 = (v65 >> 16) & 0xFF;
        *v3 = v65 >> 16;
        if ( --v66 )
        {
          ++v3;
        }
        else
        {
          v81 = *(_DWORD *)(a1 + 24);
          v68 = (*(int (__cdecl **)(int))(v81 + 12))(a1);
          v67 = (v65 >> 16) & 0xFF;
          if ( !v68 )
            return 0;
          v3 = *(_BYTE **)v81;
          v66 = *(_DWORD *)(v81 + 4);
        }
        if ( v67 == 255 )
        {
          *v3 = 0;
          if ( --v66 )
          {
            ++v3;
          }
          else
          {
            v82 = *(_DWORD *)(a1 + 24);
            if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v82 + 12))(a1) )
              return 0;
            v3 = *(_BYTE **)v82;
            v66 = *(_DWORD *)(v82 + 4);
          }
        }
        if ( v102 <= 7 )
          break;
        v65 <<= 8;
        v102 -= 8;
      }
      v96 = v66;
    }
    *v3 = -1;
    v70 = v96 - 1;
    if ( v96 == 1 )
    {
      v77 = *(_DWORD *)(a1 + 24);
      v78 = (*(int (__cdecl **)(int))(v77 + 12))(a1);
      v24 = 0;
      if ( !v78 )
        return v24;
      v71 = *(_BYTE **)v77;
      v70 = *(_DWORD *)(v77 + 4);
    }
    else
    {
      v71 = v3 + 1;
    }
    *v71 = v93 - 48;
    v96 = v70 - 1;
    if ( v70 == 1 )
    {
      v75 = *(_DWORD *)(a1 + 24);
      v76 = (*(int (__cdecl **)(int))(v75 + 12))(a1);
      v24 = 0;
      if ( !v76 )
        return v24;
      v3 = *(_BYTE **)v75;
      v96 = *(_DWORD *)(v75 + 4);
    }
    else
    {
      v3 = v71 + 1;
    }
    v72 = *(_DWORD *)(a1 + 272);
    for ( i = 0; i < v72; ++i )
      v104[i] = 0;
    v94 = 0;
    v101 = 0;
  }
  if ( *(_DWORD *)(a1 + 300) > 0 )
  {
    v87 = 0;
    v5 = v94;
    v6 = v96;
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 4 * v87 + 304);
      v86 = v7;
      v8 = *(_DWORD *)(a1 + 4 * v7 + 276);
      v95 = *(_DWORD *)(v90 + 4 * *(_DWORD *)(v8 + 24) + 60);
      v9 = *(_DWORD *)(v90 + 4 * *(_DWORD *)(v8 + 20) + 44);
      v88 = *(_WORD **)(a2 + 4 * v87);
      v85 = *(_DWORD *)(a1 + 368);
      v84 = *(_DWORD *)(a1 + 364);
      v10 = *v88 - v104[v7];
      if ( v10 < 0 )
        break;
      if ( v10 )
      {
        v91 = v10;
LABEL_8:
        v11 = 0;
        do
        {
          ++v11;
          v10 >>= 1;
        }
        while ( v10 );
        v97 = v11;
        if ( v11 > 11 )
        {
          v56 = *(_DWORD *)a1;
          *(_DWORD *)(v56 + 20) = 6;
          v57 = v9;
          (*(void (__cdecl **)(int))v56)(a1);
          v9 = v57;
        }
        goto LABEL_12;
      }
      v91 = 0;
      v97 = 0;
LABEL_12:
      v12 = *(_BYTE *)(v9 + v97 + 1024);
      v13 = *(_DWORD *)(v9 + 4 * v97);
      if ( !v12 )
      {
        v54 = *(_DWORD *)a1;
        *(_DWORD *)(v54 + 20) = 41;
        v55 = v13;
        (*(void (__cdecl **)(int))v54)(a1);
        v12 = 0;
        v13 = v55;
      }
      v5 += v12;
      v101 |= (v13 & ((1 << v12) - 1)) << (24 - v5);
      if ( v5 > 7 )
      {
        v14 = v6;
        v15 = v5;
        v16 = v101;
        v17 = v3;
        while ( 1 )
        {
          v18 = (v16 >> 16) & 0xFF;
          *v17 = v16 >> 16;
          if ( --v14 )
          {
            ++v17;
            if ( v18 != 255 )
              goto LABEL_17;
          }
          else
          {
            v79 = *(_DWORD *)(a1 + 24);
            if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v79 + 12))(a1) )
              return 0;
            v17 = *(_BYTE **)v79;
            v14 = *(_DWORD *)(v79 + 4);
            if ( v18 != 255 )
              goto LABEL_17;
          }
          *v17 = 0;
          if ( --v14 )
          {
            ++v17;
            v16 <<= 8;
            v15 -= 8;
            if ( v15 <= 7 )
            {
LABEL_23:
              v101 = v16;
              v5 = v15;
              v6 = v14;
              v3 = v17;
              break;
            }
          }
          else
          {
            v26 = *(_DWORD *)(a1 + 24);
            if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v26 + 12))(a1) )
              return 0;
            v17 = *(_BYTE **)v26;
            v14 = *(_DWORD *)(v26 + 4);
LABEL_17:
            v16 <<= 8;
            v15 -= 8;
            if ( v15 <= 7 )
              goto LABEL_23;
          }
        }
      }
      if ( v97 )
      {
        v5 += v97;
        v101 |= (v91 & ((1 << v97) - 1)) << (24 - v5);
        if ( v5 > 7 )
        {
          v58 = v3;
          v59 = v101;
          while ( 1 )
          {
            *v58 = v59 >> 16;
            if ( --v6 )
            {
              ++v58;
              if ( ((v59 >> 16) & 0xFF) != 255 )
                goto LABEL_99;
            }
            else
            {
              v60 = *(_DWORD *)(a1 + 24);
              if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v60 + 12))(a1) )
                return 0;
              v58 = *(_BYTE **)v60;
              v6 = *(_DWORD *)(v60 + 4);
              if ( ((v59 >> 16) & 0xFF) != 255 )
                goto LABEL_99;
            }
            *v58 = 0;
            if ( --v6 )
            {
              ++v58;
              v59 <<= 8;
              v5 -= 8;
              if ( v5 <= 7 )
              {
LABEL_105:
                v101 = v59;
                v3 = v58;
                break;
              }
            }
            else
            {
              v61 = *(_DWORD *)(a1 + 24);
              if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v61 + 12))(a1) )
                return 0;
              v58 = *(_BYTE **)v61;
              v6 = *(_DWORD *)(v61 + 4);
LABEL_99:
              v59 <<= 8;
              v5 -= 8;
              if ( v5 <= 7 )
                goto LABEL_105;
            }
          }
        }
      }
      if ( v85 <= 0 )
        goto LABEL_112;
      v98 = 0;
      v92 = 1;
      do
      {
        v89 = v88[*(_DWORD *)(v84 + 4 * v92)];
        if ( !v88[*(_DWORD *)(v84 + 4 * v92)] )
        {
          ++v98;
          goto LABEL_29;
        }
        while ( v98 > 15 )
        {
          v27 = *(_BYTE *)(v95 + 1264);
          v28 = *(_DWORD *)(v95 + 960);
          if ( !*(_BYTE *)(v95 + 1264) )
          {
            v35 = *(_DWORD *)a1;
            *(_DWORD *)(v35 + 20) = 41;
            v36 = v28;
            v37 = v27;
            (*(void (__cdecl **)(int))v35)(a1);
            v27 = v37;
            v28 = v36;
          }
          v5 += v27;
          v101 |= (v28 & ((1 << v27) - 1)) << (24 - v5);
          if ( v5 > 7 )
          {
            v29 = v6;
            v30 = v5;
            v31 = v101;
            v32 = v3;
            while ( 1 )
            {
              v33 = (v31 >> 16) & 0xFF;
              *v32 = v31 >> 16;
              if ( --v29 )
              {
                ++v32;
                if ( v33 == 255 )
                  goto LABEL_57;
              }
              else
              {
                v80 = *(_DWORD *)(a1 + 24);
                if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v80 + 12))(a1) )
                  return 0;
                v32 = *(_BYTE **)v80;
                v29 = *(_DWORD *)(v80 + 4);
                if ( v33 == 255 )
                {
LABEL_57:
                  *v32 = 0;
                  if ( --v29 )
                  {
                    ++v32;
                  }
                  else
                  {
                    v34 = *(_DWORD *)(a1 + 24);
                    if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v34 + 12))(a1) )
                      return 0;
                    v32 = *(_BYTE **)v34;
                    v29 = *(_DWORD *)(v34 + 4);
                  }
                  goto LABEL_53;
                }
              }
LABEL_53:
              v31 <<= 8;
              v30 -= 8;
              if ( v30 <= 7 )
              {
                v101 = v31;
                v5 = v30;
                v6 = v29;
                v3 = v32;
                break;
              }
            }
          }
          v98 -= 16;
        }
        if ( v89 < 0 )
          v38 = -v89--;
        else
          v38 = v89;
        v39 = v38 >> 1;
        if ( v39 )
        {
          v40 = 1;
          do
          {
            ++v40;
            v39 >>= 1;
          }
          while ( v39 );
          v83 = v40;
          if ( v40 > 10 )
          {
            v41 = *(_DWORD *)a1;
            *(_DWORD *)(v41 + 20) = 6;
            (*(void (__cdecl **)(int))v41)(a1);
          }
        }
        else
        {
          v83 = 1;
        }
        v42 = v83 + 16 * v98;
        v43 = *(_BYTE *)(v95 + v42 + 1024);
        v100 = *(_DWORD *)(v95 + 4 * v42);
        if ( !*(_BYTE *)(v95 + v42 + 1024) )
        {
          v62 = *(_DWORD *)a1;
          *(_DWORD *)(v62 + 20) = 41;
          (*(void (__cdecl **)(int))v62)(a1);
          v43 = 0;
        }
        v44 = v43 + v5;
        v45 = v101 | ((v100 & ((1 << v43) - 1)) << (24 - v44));
        if ( v44 > 7 )
        {
          v46 = v3;
          v47 = v101 | ((v100 & ((1 << v43) - 1)) << (24 - v44));
          while ( 1 )
          {
            *v46 = v47 >> 16;
            if ( --v6 )
            {
              ++v46;
              if ( ((v47 >> 16) & 0xFF) != 255 )
                goto LABEL_73;
            }
            else
            {
              v48 = *(_DWORD *)(a1 + 24);
              if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v48 + 12))(a1) )
                return 0;
              v46 = *(_BYTE **)v48;
              v6 = *(_DWORD *)(v48 + 4);
              if ( ((v47 >> 16) & 0xFF) != 255 )
                goto LABEL_73;
            }
            *v46 = 0;
            if ( --v6 )
            {
              ++v46;
              v47 <<= 8;
              v44 -= 8;
              if ( v44 <= 7 )
              {
LABEL_79:
                v45 = v47;
                v3 = v46;
                break;
              }
            }
            else
            {
              v52 = *(_DWORD *)(a1 + 24);
              if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v52 + 12))(a1) )
                return 0;
              v46 = *(_BYTE **)v52;
              v6 = *(_DWORD *)(v52 + 4);
LABEL_73:
              v47 <<= 8;
              v44 -= 8;
              if ( v44 <= 7 )
                goto LABEL_79;
            }
          }
        }
        v5 = v83 + v44;
        v101 = v45 | ((v89 & ((1 << v83) - 1)) << (24 - v5));
        if ( v5 <= 7 )
          goto LABEL_90;
        v49 = v3;
        v50 = v45 | ((v89 & ((1 << v83) - 1)) << (24 - v5));
        do
        {
          while ( 1 )
          {
            *v49 = v50 >> 16;
            if ( --v6 )
            {
              ++v49;
              if ( ((v50 >> 16) & 0xFF) != 255 )
                goto LABEL_83;
            }
            else
            {
              v51 = *(_DWORD *)(a1 + 24);
              if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v51 + 12))(a1) )
                return 0;
              v49 = *(_BYTE **)v51;
              v6 = *(_DWORD *)(v51 + 4);
              if ( ((v50 >> 16) & 0xFF) != 255 )
                goto LABEL_83;
            }
            *v49 = 0;
            if ( --v6 )
              break;
            v53 = *(_DWORD *)(a1 + 24);
            if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v53 + 12))(a1) )
              return 0;
            v49 = *(_BYTE **)v53;
            v6 = *(_DWORD *)(v53 + 4);
LABEL_83:
            v50 <<= 8;
            v5 -= 8;
            if ( v5 <= 7 )
              goto LABEL_89;
          }
          ++v49;
          v50 <<= 8;
          v5 -= 8;
        }
        while ( v5 > 7 );
LABEL_89:
        v101 = v50;
        v3 = v49;
LABEL_90:
        v98 = 0;
LABEL_29:
        ++v92;
      }
      while ( v85 >= v92 );
      if ( v98 )
      {
        v19 = *(_BYTE *)(v95 + 1024);
        v99 = *(_DWORD *)v95;
        if ( !*(_BYTE *)(v95 + 1024) )
        {
          v74 = *(_DWORD *)a1;
          *(_DWORD *)(v74 + 20) = 41;
          (*(void (__cdecl **)(int))v74)(a1);
          v19 = 0;
        }
        v5 += v19;
        v101 |= (v99 & ((1 << v19) - 1)) << (24 - v5);
        if ( v5 > 7 )
        {
          v20 = v3;
          do
          {
            v21 = (v101 >> 16) & 0xFF;
            *v20 = v101 >> 16;
            if ( --v6 )
            {
              ++v20;
            }
            else
            {
              v22 = *(_DWORD *)(a1 + 24);
              v23 = (*(int (__cdecl **)(int))(v22 + 12))(a1);
              v21 = (v101 >> 16) & 0xFF;
              if ( !v23 )
                return 0;
              v20 = *(_BYTE **)v22;
              v6 = *(_DWORD *)(v22 + 4);
            }
            if ( v21 == 255 )
            {
              *v20 = 0;
              if ( --v6 )
              {
                ++v20;
              }
              else
              {
                v69 = *(_DWORD *)(a1 + 24);
                if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v69 + 12))(a1) )
                  return 0;
                v20 = *(_BYTE **)v69;
                v6 = *(_DWORD *)(v69 + 4);
              }
            }
            v101 <<= 8;
            v5 -= 8;
          }
          while ( v5 > 7 );
          v3 = v20;
        }
      }
LABEL_112:
      v104[v86] = **(_WORD **)(a2 + 4 * v87++);
      if ( *(_DWORD *)(a1 + 300) <= v87 )
      {
        v94 = v5;
        v96 = v6;
        goto LABEL_114;
      }
    }
    v91 = v10 - 1;
    v10 = -v10;
    goto LABEL_8;
  }
LABEL_114:
  v63 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)v63 = v3;
  *(_DWORD *)(v63 + 4) = v96;
  qmemcpy((void *)(v90 + 12), &v103, 0x18u);
  *(_DWORD *)(v90 + 12) = v101;
  *(_DWORD *)(v90 + 16) = v94;
  v64 = *(_DWORD *)(a1 + 224);
  v24 = 1;
  if ( v64 )
  {
    if ( !*(_DWORD *)(v90 + 36) )
    {
      *(_DWORD *)(v90 + 36) = v64;
      *(_DWORD *)(v90 + 40) = ((unsigned __int8)*(_DWORD *)(v90 + 40) + 1) & 7;
    }
    --*(_DWORD *)(v90 + 36);
    v24 = 1;
  }
  return v24;
}
