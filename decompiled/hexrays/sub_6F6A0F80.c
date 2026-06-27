int __usercall sub_6F6A0F80@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax@1
  int v3; // edx@2
  int v4; // ebp@3
  int v5; // ebp@4
  int v6; // ecx@8
  int v7; // edx@11
  int v8; // edi@11
  int v9; // esi@11
  int v10; // edx@16
  int v11; // esi@18
  int v12; // eax@20
  int v13; // eax@23
  int v14; // eax@26
  int v15; // eax@29
  int v16; // eax@32
  int v17; // ecx@36
  int v18; // ecx@38
  int v19; // ecx@40
  int v20; // ecx@42
  int v21; // ecx@44
  int v22; // ecx@46
  int v23; // ecx@48
  int v24; // ecx@50
  char v25; // dl@56
  int v26; // eax@56
  int v27; // edi@56
  int v28; // esi@56
  int v29; // ebx@57
  int v30; // ebx@59
  int v31; // ebx@61
  int v32; // ebx@63
  int v33; // ebx@65
  int v34; // ebx@67
  int v35; // ebx@69
  int v36; // ebx@71
  int v37; // eax@76
  size_t v38; // esi@76
  int v39; // edx@76
  int v40; // edx@83
  int v41; // edx@86
  int v42; // edx@89
  int v43; // edx@92
  int v44; // edx@95
  int v45; // edx@98
  int v46; // edx@101
  int v47; // ecx@102
  int v48; // ecx@104
  int v49; // ecx@106
  int v50; // ecx@108
  int v51; // ecx@110
  int v52; // ecx@112
  int v53; // ecx@114
  int v54; // ecx@116
  int v55; // ebx@129
  int v56; // ebx@132
  int v57; // ebx@135
  int v58; // ebx@138
  int v59; // ebx@141
  int v60; // ebx@144
  int v61; // edx@151
  int v62; // edi@151
  int v63; // esi@151
  int v64; // esi@156
  int v65; // edx@156
  bool v66; // sf@158
  char v67; // si@158
  int v68; // eax@158
  char v69; // al@160
  int v70; // eax@163
  int v71; // eax@166
  int v72; // eax@169
  int v73; // eax@172
  int v74; // ecx@176
  int v75; // ecx@178
  int v76; // ecx@180
  int v77; // ecx@182
  int v78; // ecx@184
  int v79; // ecx@186
  int v80; // ecx@188
  int v81; // ecx@190
  int v82; // ecx@194
  int v83; // eax@197
  int v84; // edi@200
  int v85; // ebx@202
  int v86; // esi@203
  char *v87; // ebp@203
  int v88; // ecx@203
  signed int v89; // eax@205
  int v90; // ST34_4@210
  int v91; // ebx@214
  int v92; // esi@215
  char *v93; // ebp@215
  int v94; // ecx@215
  signed int v95; // eax@217
  int v96; // ST34_4@222
  int v97; // [sp+1Ch] [bp-40h]@1
  int v98; // [sp+20h] [bp-3Ch]@10
  int v99; // [sp+20h] [bp-3Ch]@75
  int v100; // [sp+20h] [bp-3Ch]@101
  int v101; // [sp+24h] [bp-38h]@1
  int v102; // [sp+28h] [bp-34h]@1
  size_t v103; // [sp+2Ch] [bp-30h]@1
  int v104; // [sp+30h] [bp-2Ch]@200
  int v105; // [sp+30h] [bp-2Ch]@203
  int v106; // [sp+30h] [bp-2Ch]@215
  int v107; // [sp+34h] [bp-28h]@35
  int v108; // [sp+34h] [bp-28h]@76
  int v109; // [sp+38h] [bp-24h]@203

  v102 = a1;
  v97 = a2;
  result = 4 * dword_70041D4C;
  v103 = 4 * dword_70041D4C;
  v101 = dword_70041D48;
  if ( unk_6FBB979E & 8 )
  {
    v3 = dword_6FBB5304;
    if ( !dword_6FBB5304 )
    {
      v84 = dword_6FBB51E0 * dword_6FBB52F8;
      v104 = dword_6FBB52F8 * dword_6FBBDB74;
      if ( dword_6FBB5308 == 1 )
      {
        v91 = v97;
        if ( v97 >= dword_70041D48 )
          return result;
        v109 = dword_70041D50;
        v92 = v97 + v104;
        v93 = (char *)(dword_70041D50 + v103 * v97);
        v94 = dword_6FBB51E0 * dword_6FBB52F8;
        v106 = v104 - v84;
        while ( 1 )
        {
          v95 = v91 + v106;
          if ( v94 > v92 )
            v95 = v92;
          if ( !v3 && unk_6FBB979E & 8 && (v95 / dword_6FBB52F8 & 1) != (unsigned __int8)byte_6FBB979F >> 7 )
          {
            v96 = v94;
            memset(v93, 0, v103);
            v94 = v96;
          }
          v91 += v102;
          v92 += v102;
          v93 += v103 * v102;
          if ( v91 >= v101 )
            break;
          v3 = dword_6FBB5304;
        }
      }
      else
      {
        if ( dword_6FBB5308 != 2 )
          goto LABEL_3;
        v85 = v97;
        if ( v97 >= dword_70041D48 )
          return result;
        v109 = dword_70041D50;
        v86 = v97 + v104;
        v87 = (char *)(dword_70041D50 + v103 * v97);
        v88 = dword_6FBB51E0 * dword_6FBB52F8;
        v105 = v104 - v84;
        while ( 1 )
        {
          v89 = v85 + v105;
          if ( v88 > v86 )
            v89 = v86;
          if ( !v3 && unk_6FBB979E & 8 && (v89 / dword_6FBB52F8 & 1) != (unsigned __int8)byte_6FBB979F >> 7 )
          {
            v90 = v88;
            memcpy(v87, &v87[v103], v103);
            v88 = v90;
          }
          v85 += v102;
          v86 += v102;
          v87 += v103 * v102;
          if ( v85 >= v101 )
            break;
          v3 = dword_6FBB5304;
        }
      }
      v4 = v109;
      goto LABEL_4;
    }
  }
LABEL_3:
  v4 = dword_70041D50;
  if ( v97 < dword_70041D48 )
  {
LABEL_4:
    v5 = v103 * v97 + v4;
    do
    {
      v6 = v5;
      if ( !dword_6FBB551C )
      {
        if ( dword_6FBB5520 )
        {
          v99 = (char)dword_6FBB5520 + 128;
          if ( v103 )
            goto LABEL_76;
        }
        else if ( dword_6FBB5524 )
        {
          v26 = (char)dword_6FBB5524 + 128;
          if ( v103 )
          {
            v38 = v103;
            goto LABEL_122;
          }
        }
        goto LABEL_7;
      }
      if ( !v103 )
        goto LABEL_7;
      v98 = (char)(127 * (char)dword_6FBB551C / 100);
      if ( (char)dword_6FBB551C <= 0 )
      {
        v61 = v5;
        v62 = v103 + v5;
        v63 = v103 & 4;
        if ( v103 & 4 )
        {
          if ( v63 != 1 )
          {
            if ( v63 != 2 )
            {
              if ( v63 != 3 )
              {
                if ( v63 != 4 )
                {
                  v64 = *(_BYTE *)(v5 + 1);
                  v65 = v98 + *(_BYTE *)v5;
                  if ( v65 < 0 )
                    LOBYTE(v65) = 0;
                  v66 = v98 + v64 < 0;
                  v67 = v98 + v64;
                  v68 = *(_BYTE *)(v5 + 2);
                  if ( v66 )
                    v67 = 0;
                  v66 = v98 + v68 < 0;
                  v69 = v98 + v68;
                  *(_BYTE *)v5 = v65;
                  if ( v66 )
                    v69 = 0;
                  *(_BYTE *)(v5 + 1) = v67;
                  *(_BYTE *)(v5 + 2) = v69;
                  v61 = v5 + 3;
                }
                v70 = v98 + *(_BYTE *)v61;
                if ( v70 < 0 )
                  LOBYTE(v70) = 0;
                *(_BYTE *)(++v61 - 1) = v70;
              }
              v71 = v98 + *(_BYTE *)v61;
              if ( v71 < 0 )
                LOBYTE(v71) = 0;
              *(_BYTE *)(++v61 - 1) = v71;
            }
            v72 = v98 + *(_BYTE *)v61;
            if ( v72 < 0 )
              LOBYTE(v72) = 0;
            *(_BYTE *)(++v61 - 1) = v72;
          }
          v73 = v98 + *(_BYTE *)v61;
          if ( v73 < 0 )
            LOBYTE(v73) = 0;
          *(_BYTE *)(++v61 - 1) = v73;
          if ( v61 == v62 )
            goto LABEL_54;
        }
        v107 = v5;
        do
        {
          v74 = v98 + *(_BYTE *)v61;
          if ( v74 < 0 )
            LOBYTE(v74) = 0;
          *(_BYTE *)v61 = v74;
          v75 = v98 + *(_BYTE *)(v61 + 1);
          if ( v75 < 0 )
            LOBYTE(v75) = 0;
          *(_BYTE *)(v61 + 1) = v75;
          v76 = v98 + *(_BYTE *)(v61 + 2);
          if ( v76 < 0 )
            LOBYTE(v76) = 0;
          *(_BYTE *)(v61 + 2) = v76;
          v77 = v98 + *(_BYTE *)(v61 + 3);
          if ( v77 < 0 )
            LOBYTE(v77) = 0;
          *(_BYTE *)(v61 + 3) = v77;
          v78 = v98 + *(_BYTE *)(v61 + 4);
          if ( v78 < 0 )
            LOBYTE(v78) = 0;
          *(_BYTE *)(v61 + 4) = v78;
          v79 = v98 + *(_BYTE *)(v61 + 5);
          if ( v79 < 0 )
            LOBYTE(v79) = 0;
          *(_BYTE *)(v61 + 5) = v79;
          v80 = v98 + *(_BYTE *)(v61 + 6);
          if ( v80 < 0 )
            LOBYTE(v80) = 0;
          *(_BYTE *)(v61 + 6) = v80;
          v81 = v98 + *(_BYTE *)(v61 + 7);
          if ( v81 < 0 )
            LOBYTE(v81) = 0;
          v61 += 8;
          *(_BYTE *)(v61 - 1) = v81;
        }
        while ( v61 != v62 );
      }
      else
      {
        v7 = v5;
        v8 = v103 + v5;
        v9 = v103 & 4;
        if ( v103 & 4 )
        {
          if ( v9 != 1 )
          {
            if ( v9 != 2 )
            {
              if ( v9 != 3 )
              {
                if ( v9 != 4 )
                {
                  v10 = v98 + *(_BYTE *)v5;
                  if ( v10 > 255 )
                    LOBYTE(v10) = -1;
                  v11 = v98 + *(_BYTE *)(v5 + 1);
                  if ( v11 > 255 )
                    LOBYTE(v11) = -1;
                  v12 = v98 + *(_BYTE *)(v5 + 2);
                  *(_BYTE *)v5 = v10;
                  if ( v12 > 255 )
                    LOBYTE(v12) = -1;
                  *(_BYTE *)(v5 + 1) = v11;
                  *(_BYTE *)(v5 + 2) = v12;
                  v7 = v5 + 3;
                }
                v13 = v98 + *(_BYTE *)v7;
                if ( v13 > 255 )
                  LOBYTE(v13) = -1;
                *(_BYTE *)(++v7 - 1) = v13;
              }
              v14 = v98 + *(_BYTE *)v7;
              if ( v14 > 255 )
                LOBYTE(v14) = -1;
              *(_BYTE *)(++v7 - 1) = v14;
            }
            v15 = v98 + *(_BYTE *)v7;
            if ( v15 > 255 )
              LOBYTE(v15) = -1;
            *(_BYTE *)(++v7 - 1) = v15;
          }
          v16 = v98 + *(_BYTE *)v7;
          if ( v16 > 255 )
            LOBYTE(v16) = -1;
          *(_BYTE *)(++v7 - 1) = v16;
          if ( v7 == v8 )
            goto LABEL_54;
        }
        v107 = v5;
        do
        {
          v17 = v98 + *(_BYTE *)v7;
          if ( v17 > 255 )
            LOBYTE(v17) = -1;
          *(_BYTE *)v7 = v17;
          v18 = v98 + *(_BYTE *)(v7 + 1);
          if ( v18 > 255 )
            LOBYTE(v18) = -1;
          *(_BYTE *)(v7 + 1) = v18;
          v19 = v98 + *(_BYTE *)(v7 + 2);
          if ( v19 > 255 )
            LOBYTE(v19) = -1;
          *(_BYTE *)(v7 + 2) = v19;
          v20 = v98 + *(_BYTE *)(v7 + 3);
          if ( v20 > 255 )
            LOBYTE(v20) = -1;
          *(_BYTE *)(v7 + 3) = v20;
          v21 = v98 + *(_BYTE *)(v7 + 4);
          if ( v21 > 255 )
            LOBYTE(v21) = -1;
          *(_BYTE *)(v7 + 4) = v21;
          v22 = v98 + *(_BYTE *)(v7 + 5);
          if ( v22 > 255 )
            LOBYTE(v22) = -1;
          *(_BYTE *)(v7 + 5) = v22;
          v23 = v98 + *(_BYTE *)(v7 + 6);
          if ( v23 > 255 )
            LOBYTE(v23) = -1;
          *(_BYTE *)(v7 + 6) = v23;
          v24 = v98 + *(_BYTE *)(v7 + 7);
          if ( v24 > 255 )
            LOBYTE(v24) = -1;
          v7 += 8;
          *(_BYTE *)(v7 - 1) = v24;
        }
        while ( v7 != v8 );
      }
      v6 = v107;
LABEL_54:
      if ( dword_6FBB5520 )
      {
        v99 = (char)dword_6FBB5520 + 128;
LABEL_76:
        v37 = v5;
        v38 = v103;
        v108 = v5 + v103;
        v39 = v103 & 7;
        if ( !(v103 & 7) )
          goto LABEL_227;
        if ( v39 != 1 )
        {
          if ( v39 != 2 )
          {
            if ( v39 != 3 )
            {
              if ( v39 != 4 )
              {
                if ( v39 != 5 )
                {
                  if ( v39 != 6 )
                  {
                    v83 = v99 * *(_BYTE *)v5 >> 7;
                    if ( v83 > 255 )
                      LOBYTE(v83) = -1;
                    *(_BYTE *)v5 = v83;
                    v37 = v5 + 1;
                  }
                  v40 = v99 * *(_BYTE *)v37 >> 7;
                  if ( v40 > 255 )
                    LOBYTE(v40) = -1;
                  *(_BYTE *)(++v37 - 1) = v40;
                }
                v41 = v99 * *(_BYTE *)v37 >> 7;
                if ( v41 > 255 )
                  LOBYTE(v41) = -1;
                *(_BYTE *)(++v37 - 1) = v41;
              }
              v42 = v99 * *(_BYTE *)v37 >> 7;
              if ( v42 > 255 )
                LOBYTE(v42) = -1;
              *(_BYTE *)(++v37 - 1) = v42;
            }
            v43 = v99 * *(_BYTE *)v37 >> 7;
            if ( v43 > 255 )
              LOBYTE(v43) = -1;
            *(_BYTE *)(++v37 - 1) = v43;
          }
          v44 = v99 * *(_BYTE *)v37 >> 7;
          if ( v44 > 255 )
            LOBYTE(v44) = -1;
          *(_BYTE *)(++v37 - 1) = v44;
        }
        v45 = v99 * *(_BYTE *)v37 >> 7;
        if ( v45 > 255 )
          LOBYTE(v45) = -1;
        *(_BYTE *)(++v37 - 1) = v45;
        if ( v108 != v37 )
        {
LABEL_227:
          v46 = v99;
          v100 = v6;
          do
          {
            v47 = v46 * *(_BYTE *)v37 >> 7;
            if ( v47 > 255 )
              LOBYTE(v47) = -1;
            *(_BYTE *)v37 = v47;
            v48 = v46 * *(_BYTE *)(v37 + 1) >> 7;
            if ( v48 > 255 )
              LOBYTE(v48) = -1;
            *(_BYTE *)(v37 + 1) = v48;
            v49 = v46 * *(_BYTE *)(v37 + 2) >> 7;
            if ( v49 > 255 )
              LOBYTE(v49) = -1;
            *(_BYTE *)(v37 + 2) = v49;
            v50 = v46 * *(_BYTE *)(v37 + 3) >> 7;
            if ( v50 > 255 )
              LOBYTE(v50) = -1;
            *(_BYTE *)(v37 + 3) = v50;
            v51 = v46 * *(_BYTE *)(v37 + 4) >> 7;
            if ( v51 > 255 )
              LOBYTE(v51) = -1;
            *(_BYTE *)(v37 + 4) = v51;
            v52 = v46 * *(_BYTE *)(v37 + 5) >> 7;
            if ( v52 > 255 )
              LOBYTE(v52) = -1;
            *(_BYTE *)(v37 + 5) = v52;
            v53 = v46 * *(_BYTE *)(v37 + 6) >> 7;
            if ( v53 > 255 )
              LOBYTE(v53) = -1;
            *(_BYTE *)(v37 + 6) = v53;
            v54 = v46 * *(_BYTE *)(v37 + 7) >> 7;
            if ( v54 > 255 )
              LOBYTE(v54) = -1;
            v37 += 8;
            *(_BYTE *)(v37 - 1) = v54;
          }
          while ( v108 != v37 );
          v6 = v100;
        }
        if ( !dword_6FBB5524 )
          goto LABEL_7;
        v26 = (char)dword_6FBB5524 + 128;
LABEL_122:
        v25 = -1;
        v27 = v5 + v38;
        v28 = v38 & 7;
        if ( !v28 )
        {
          do
          {
LABEL_57:
            v29 = v26 * *(_BYTE *)v6 >> 7;
            if ( v29 > 255 )
              LOBYTE(v29) = v25;
            *(_BYTE *)v6 = v29;
            v30 = v26 * *(_BYTE *)(v6 + 1) >> 7;
            if ( v30 > 255 )
              LOBYTE(v30) = v25;
            *(_BYTE *)(v6 + 1) = v30;
            v31 = v26 * *(_BYTE *)(v6 + 2) >> 7;
            if ( v31 > 255 )
              LOBYTE(v31) = v25;
            *(_BYTE *)(v6 + 2) = v31;
            v32 = v26 * *(_BYTE *)(v6 + 3) >> 7;
            if ( v32 > 255 )
              LOBYTE(v32) = v25;
            *(_BYTE *)(v6 + 3) = v32;
            v33 = v26 * *(_BYTE *)(v6 + 4) >> 7;
            if ( v33 > 255 )
              LOBYTE(v33) = v25;
            *(_BYTE *)(v6 + 4) = v33;
            v34 = v26 * *(_BYTE *)(v6 + 5) >> 7;
            if ( v34 > 255 )
              LOBYTE(v34) = v25;
            *(_BYTE *)(v6 + 5) = v34;
            v35 = v26 * *(_BYTE *)(v6 + 6) >> 7;
            if ( v35 > 255 )
              LOBYTE(v35) = v25;
            *(_BYTE *)(v6 + 6) = v35;
            v36 = v26 * *(_BYTE *)(v6 + 7) >> 7;
            if ( v36 > 255 )
              LOBYTE(v36) = v25;
            v6 += 8;
            *(_BYTE *)(v6 - 1) = v36;
          }
          while ( v27 != v6 );
          goto LABEL_7;
        }
LABEL_123:
        if ( v28 != 1 )
        {
          if ( v28 != 2 )
          {
            if ( v28 != 3 )
            {
              if ( v28 != 4 )
              {
                if ( v28 != 5 )
                {
                  if ( v28 != 6 )
                  {
                    v82 = v26 * *(_BYTE *)v5 >> 7;
                    if ( v82 > 255 )
                      LOBYTE(v82) = v25;
                    *(_BYTE *)v5 = v82;
                    v6 = v5 + 1;
                  }
                  v55 = v26 * *(_BYTE *)v6 >> 7;
                  if ( v55 > 255 )
                    LOBYTE(v55) = v25;
                  *(_BYTE *)(++v6 - 1) = v55;
                }
                v56 = v26 * *(_BYTE *)v6 >> 7;
                if ( v56 > 255 )
                  LOBYTE(v56) = v25;
                *(_BYTE *)(++v6 - 1) = v56;
              }
              v57 = v26 * *(_BYTE *)v6 >> 7;
              if ( v57 > 255 )
                LOBYTE(v57) = v25;
              *(_BYTE *)(++v6 - 1) = v57;
            }
            v58 = v26 * *(_BYTE *)v6 >> 7;
            if ( v58 > 255 )
              LOBYTE(v58) = v25;
            *(_BYTE *)(++v6 - 1) = v58;
          }
          v59 = v26 * *(_BYTE *)v6 >> 7;
          if ( v59 > 255 )
            LOBYTE(v59) = v25;
          *(_BYTE *)(++v6 - 1) = v59;
        }
        v60 = v26 * *(_BYTE *)v6 >> 7;
        if ( v60 > 255 )
          LOBYTE(v60) = v25;
        *(_BYTE *)(++v6 - 1) = v60;
        if ( v27 == v6 )
          goto LABEL_7;
        goto LABEL_57;
      }
      if ( dword_6FBB5524 )
      {
        v25 = -1;
        v26 = (char)dword_6FBB5524 + 128;
        v27 = v5 + v103;
        v28 = v103 & 7;
        if ( !(v103 & 7) )
          goto LABEL_57;
        goto LABEL_123;
      }
LABEL_7:
      v5 += v103 * v102;
      v97 += v102;
      result = v97;
    }
    while ( v97 < v101 );
  }
  return result;
}
