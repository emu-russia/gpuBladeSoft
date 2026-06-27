signed int __cdecl sub_6F7AC070(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // ebp@1
  int v6; // ebx@1
  signed int result; // eax@1
  int v8; // edx@5
  int v9; // eax@7
  int v10; // edi@7
  const char *v11; // ebx@9
  unsigned __int16 v12; // bx@19
  int v13; // edi@20
  int (__cdecl *v14)(int, _DWORD, _DWORD, _DWORD); // ecx@20
  int v15; // eax@24
  int v16; // edx@24
  int v17; // esi@24
  signed int v18; // ebx@25
  char *v19; // esi@26
  int v20; // ebp@26
  char *v21; // ebx@26
  int v22; // eax@29
  int v23; // eax@31
  int v24; // esi@36
  int v25; // eax@48
  unsigned int v26; // eax@51
  signed int v27; // eax@51
  int v28; // eax@52
  unsigned int v29; // ebx@53
  int v30; // ebx@57
  signed int v31; // edi@57
  unsigned __int8 v32; // al@58
  char v33; // cl@58
  int v34; // ST40_4@60
  int v35; // ecx@65
  unsigned __int32 v36; // edi@65
  int v37; // edx@65
  unsigned int v38; // edx@67
  int *v39; // edx@77
  char *v40; // eax@77
  int v41; // esi@78
  signed int v42; // esi@126
  unsigned int v43; // edi@126
  unsigned int v44; // eax@134
  unsigned int v45; // eax@135
  signed int v46; // eax@135
  void *v47; // eax@138
  int *v48; // ebx@138
  int v49; // edx@139
  char *v50; // eax@148
  bool v51; // zf@148
  _BYTE *v52; // ebx@150
  unsigned int v53; // esi@150
  int v54; // eax@151
  unsigned int v55; // eax@154
  unsigned int v56; // eax@158
  char v57; // cl@160
  unsigned int v58; // ebx@161
  unsigned int v59; // esi@161
  void *v60; // edx@165
  char *v61; // eax@165
  int v62; // esi@166
  void *v63; // edx@174
  char *v64; // eax@174
  int v65; // esi@175
  int v66; // edx@185
  unsigned int v67; // ebx@185
  unsigned int v68; // esi@185
  int v69; // edi@185
  int v70; // eax@185
  unsigned int v71; // edi@185
  int v72; // edx@185
  int v73; // ecx@186
  int v74; // eax@200
  unsigned __int16 v75; // [sp+28h] [bp-94h]@20
  int v76; // [sp+28h] [bp-94h]@126
  int (__cdecl *v77)(int, _DWORD, _DWORD, _DWORD); // [sp+2Ch] [bp-90h]@26
  unsigned int v78; // [sp+2Ch] [bp-90h]@51
  unsigned int v79; // [sp+2Ch] [bp-90h]@148
  unsigned int v80; // [sp+2Ch] [bp-90h]@150
  int v81; // [sp+30h] [bp-8Ch]@7
  int *v82; // [sp+34h] [bp-88h]@19
  int v83; // [sp+38h] [bp-84h]@48
  int v84; // [sp+38h] [bp-84h]@51
  unsigned int v85; // [sp+38h] [bp-84h]@148
  signed int v86; // [sp+3Ch] [bp-80h]@8
  int v87; // [sp+40h] [bp-7Ch]@51
  int v88; // [sp+40h] [bp-7Ch]@57
  int v89; // [sp+40h] [bp-7Ch]@148
  char v90; // [sp+45h] [bp-77h]@20
  char v91; // [sp+46h] [bp-76h]@20
  char v92; // [sp+47h] [bp-75h]@20
  char *v93; // [sp+48h] [bp-74h]@57
  char *v94; // [sp+4Ch] [bp-70h]@53
  int v95; // [sp+58h] [bp-64h]@36
  unsigned int v96; // [sp+5Ch] [bp-60h]@19
  int v97; // [sp+60h] [bp-5Ch]@86
  int v98; // [sp+64h] [bp-58h]@87
  int v99; // [sp+68h] [bp-54h]@88
  int v100; // [sp+6Ch] [bp-50h]@89
  int v101; // [sp+70h] [bp-4Ch]@90
  int v102; // [sp+74h] [bp-48h]@91
  int v103; // [sp+78h] [bp-44h]@92
  int v104; // [sp+7Ch] [bp-40h]@93
  int v105; // [sp+80h] [bp-3Ch]@94
  int v106; // [sp+84h] [bp-38h]@95
  int v107; // [sp+88h] [bp-34h]@96
  int v108; // [sp+8Ch] [bp-30h]@97
  int v109; // [sp+90h] [bp-2Ch]@98
  int v110; // [sp+94h] [bp-28h]@99
  int v111; // [sp+98h] [bp-24h]@100
  int v112; // [sp+9Ch] [bp-20h]@101
  char v113; // [sp+A0h] [bp-1Ch]@27
  int v114; // [sp+C4h] [bp+8h]@57

  v5 = a2;
  v6 = sub_6F76F0A0(*(_DWORD *)(*(_DWORD *)(a2 + 96) + 4), "sfnt");
  result = 11;
  if ( !v6 )
    return result;
  result = sub_6F771FF0(a1, 0);
  if ( result )
    return result;
  result = (*(int (__cdecl **)(int, int, int, int, int))(v6 + 4))(a1, a2, a3, a4, a5);
  if ( result )
    return result;
  v8 = *(_DWORD *)(a2 + 148);
  if ( (v8 - 0x10000) & 0xFFFEFFFF )
  {
    result = 2;
    if ( v8 != 1953658213 )
      return result;
  }
  v9 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 8) |= 0x800u;
  v10 = v9;
  v81 = v9;
  result = 0;
  if ( a3 < 0 )
    return result;
  result = (*(int (__cdecl **)(int, int, int, int, int))(v6 + 8))(v10, a2, a3, a4, a5);
  v86 = result;
  if ( result )
    return result;
  v11 = *(const char **)(a2 + 20);
  if ( v11
    && (strstr(v11, "DFKaiSho-SB")
     || strstr(v11, "DFKaiShu")
     || strstr(v11, "DFKai-SB")
     || strstr(v11, "HuaTianKaiTi?")
     || strstr(v11, "HuaTianSongTi?")
     || strstr(v11, "Ming(for ISO10646)")
     || strstr(v11, "MingLiU")
     || strstr(v11, "PMingLiU")
     || strstr(v11, "MingLi43")) )
  {
    v14 = *(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 508);
    v82 = (int *)&v96;
    goto LABEL_35;
  }
  v12 = *(_WORD *)(a2 + 152);
  v82 = (int *)&v96;
  memset(&v96, 0, 0x44u);
  if ( !v12 )
  {
    v14 = *(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 508);
    goto LABEL_138;
  }
  v91 = 0;
  v90 = 0;
  v92 = 0;
  v75 = 0;
  v13 = a2;
  v14 = *(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(a2 + 508);
  do
  {
    v15 = *(_DWORD *)(v13 + 156);
    v16 = 16 * v75;
    v17 = *(_DWORD *)(v15 + v16);
    if ( v17 == 1718642541 )
    {
      v18 = 1;
      v90 = 1;
    }
    else if ( v17 == 1886545264 )
    {
      v18 = 2;
      v91 = 1;
    }
    else
    {
      if ( v17 != 1668707360 )
        goto LABEL_23;
      v18 = 0;
      v92 = 1;
    }
    v19 = (char *)&unk_6FB694C4 + 8 * v18;
    v20 = 0;
    v21 = (char *)&v96;
    v77 = v14;
    while ( 1 )
    {
      v22 = v16 + v15;
      if ( *(_DWORD *)(v22 + 12) == *(_DWORD *)v19 )
      {
        if ( !v20 && v77 )
        {
          v83 = v16;
          v25 = v77(v13, *(_DWORD *)v22, *(_DWORD *)(v13 + 104), 0);
          v16 = v83;
          if ( v25
            || (v87 = v83,
                v26 = *(_DWORD *)(*(_DWORD *)(v13 + 156) + v83 + 12),
                v84 = *(_DWORD *)(v13 + 104),
                v78 = v26,
                v27 = sub_6F772380(v84, v26),
                v16 = v87,
                v27) )
          {
            v77 = *(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(v13 + 508);
          }
          else
          {
            v28 = v78;
            if ( v78 > 3 )
            {
              v94 = v21;
              v29 = v78;
              do
              {
                v29 -= 4;
                v20 += sub_6F772560(v84);
              }
              while ( v29 > 3 );
              v16 = v87;
              v21 = v94;
              v28 = v78 & 3;
            }
            if ( v28 )
            {
              v93 = v21;
              v114 = v13;
              v30 = v28;
              v88 = v16;
              v31 = 24;
              do
              {
                v32 = sub_6F7724A0(v84);
                v33 = v31;
                v31 -= 8;
                v20 += v32 << v33;
                --v30;
              }
              while ( v30 );
              v16 = v88;
              v21 = v93;
              v13 = v114;
            }
            v34 = v16;
            sub_6F772460(v84);
            v16 = v34;
            v77 = *(int (__cdecl **)(int, _DWORD, _DWORD, _DWORD))(v13 + 508);
          }
        }
        v23 = *(_DWORD *)v21;
        if ( *((_DWORD *)v19 - 1) == v20 )
          *(_DWORD *)v21 = ++v23;
        if ( v23 == 3 )
        {
          v14 = v77;
          v5 = v13;
          goto LABEL_35;
        }
      }
      v21 += 4;
      v19 += 24;
      if ( &v113 == v21 )
        break;
      v15 = *(_DWORD *)(v13 + 156);
    }
    v14 = v77;
    v12 = *(_WORD *)(v13 + 152);
LABEL_23:
    ++v75;
  }
  while ( v75 < v12 );
  v5 = v13;
  if ( !v92 )
  {
    if ( v91 )
    {
      if ( v90 )
      {
        if ( v96 == 3 )
          goto LABEL_35;
        if ( v97 == 3 )
          goto LABEL_35;
        if ( v98 == 3 )
          goto LABEL_35;
        if ( v99 == 3 )
          goto LABEL_35;
        if ( v100 == 3 )
          goto LABEL_35;
        if ( ++v101 == 3 )
          goto LABEL_35;
        if ( ++v102 == 3 )
          goto LABEL_35;
        if ( ++v103 == 3 )
          goto LABEL_35;
        if ( ++v104 == 3 )
          goto LABEL_35;
        if ( ++v105 == 3 )
          goto LABEL_35;
        if ( ++v106 == 3 )
          goto LABEL_35;
        if ( ++v107 == 3 )
          goto LABEL_35;
        if ( ++v108 == 3 )
          goto LABEL_35;
        if ( ++v109 == 3 )
          goto LABEL_35;
        if ( ++v110 == 3 )
          goto LABEL_35;
        if ( ++v111 == 3 )
          goto LABEL_35;
        if ( ++v112 == 3 )
          goto LABEL_35;
        goto LABEL_36;
      }
      v60 = &unk_6FB694C4;
      v61 = (char *)&v96;
      while ( 1 )
      {
        if ( *(_DWORD *)v60 )
        {
          v62 = *(_DWORD *)v61;
        }
        else
        {
          v62 = *(_DWORD *)v61 + 1;
          *(_DWORD *)v61 = v62;
        }
        if ( !*((_DWORD *)v60 + 2) )
          *(_DWORD *)v61 = ++v62;
        if ( v62 == 3 )
          break;
        v61 += 4;
        v60 = (char *)v60 + 24;
        if ( &v113 == v61 )
          goto LABEL_36;
      }
LABEL_35:
      *(_DWORD *)(v5 + 8) |= 0x2000u;
      goto LABEL_36;
    }
    if ( v90 )
    {
      v63 = &unk_6FB694C4;
      v64 = (char *)&v96;
      while ( 1 )
      {
        if ( *(_DWORD *)v63 )
        {
          v65 = *(_DWORD *)v64;
        }
        else
        {
          v65 = *(_DWORD *)v64 + 1;
          *(_DWORD *)v64 = v65;
        }
        if ( !*((_DWORD *)v63 + 4) )
          *(_DWORD *)v64 = ++v65;
        if ( v65 == 3 )
          goto LABEL_35;
        v64 += 4;
        v63 = (char *)v63 + 24;
        if ( &v113 == v64 )
          goto LABEL_36;
      }
    }
LABEL_138:
    v47 = &unk_6FB694C4;
    v48 = (int *)&v96;
    while ( 1 )
    {
      if ( *(_DWORD *)v47 )
      {
        v49 = *v48;
      }
      else
      {
        v49 = *v48 + 1;
        *v48 = v49;
      }
      if ( !*((_DWORD *)v47 + 2) )
        *v48 = ++v49;
      if ( !*((_DWORD *)v47 + 4) )
        *v48 = ++v49;
      if ( v49 == 3 )
        goto LABEL_35;
      v47 = (char *)v47 + 24;
      ++v48;
      if ( v47 == &unk_6FB6965C )
        goto LABEL_36;
    }
  }
  if ( !v91 && !v90 )
  {
    v39 = (int *)&v96;
    v40 = (char *)&unk_6FB694CC;
    while ( 1 )
    {
      v41 = *v39;
      if ( !*(_DWORD *)v40 )
        *v39 = ++v41;
      if ( !*((_DWORD *)v40 + 2) )
        *v39 = ++v41;
      if ( v41 == 3 )
        goto LABEL_35;
      v40 += 24;
      ++v39;
      if ( "iSho-SB" == v40 )
        goto LABEL_36;
    }
  }
  if ( v96 == 3
    || v97 == 3
    || v98 == 3
    || v99 == 3
    || v100 == 3
    || v101 == 3
    || v102 == 3
    || v103 == 3
    || v104 == 3
    || v105 == 3
    || v106 == 3
    || v107 == 3
    || v108 == 3
    || v109 == 3
    || v110 == 3
    || v111 == 3
    || v112 == 3 )
  {
    goto LABEL_35;
  }
LABEL_36:
  v24 = *(_DWORD *)(v81 + 28);
  v95 = v14(v5, 1751412088, v81, v82);
  if ( !v95 && v96 > 7 )
  {
    result = sub_6F772240(v81, v96, (int *)(v5 + 704));
    v95 = result;
    if ( result )
      return result;
    v35 = *(_DWORD *)(v5 + 704);
    v36 = _byteswap_ulong(*(_DWORD *)(v35 + 4));
    v37 = (*(_BYTE *)(v35 + 2) << 8) | *(_BYTE *)(v35 + 3);
    if ( v36 > 0xFFFEFFFF )
      v36 = (unsigned __int16)v36;
    v38 = _byteswap_ushort(*(_WORD *)(v35 + 2));
    if ( _byteswap_ushort(*(_WORD *)v35) || v38 > 0xFF || v36 - 4 > 0xFFFD )
    {
      v95 = 3;
    }
    else
    {
      v89 = *(_DWORD *)(v5 + 704);
      v79 = v96;
      v85 = v38;
      v50 = sub_6F773B30(v24, 1, 0, v38, 0, &v95);
      v51 = v95 == 0;
      *(_DWORD *)(v5 + 720) = v50;
      if ( v51 )
      {
        if ( v85 && (v52 = (_BYTE *)(v89 + 8), v80 = v89 + v79, v53 = v89 + 8 + v36, v80 >= v53) )
        {
          v54 = 0;
          do
          {
            *(_BYTE *)(*(_DWORD *)(v5 + 720) + v54++) = *v52;
            if ( v85 == v54 )
              break;
            v53 += v36;
            v52 += v36;
          }
          while ( v80 >= v53 );
        }
        else
        {
          v54 = 0;
        }
        *(_DWORD *)(v5 + 712) = v54;
        v55 = v96;
        *(_DWORD *)(v5 + 716) = v36;
        *(_DWORD *)(v5 + 708) = v55;
LABEL_72:
        result = v95;
        if ( !v95 )
          goto LABEL_38;
        return result;
      }
    }
    sub_6F772340(v81, (_DWORD *)(v5 + 704));
    *(_DWORD *)(v5 + 708) = 0;
    goto LABEL_72;
  }
LABEL_38:
  if ( *(_BYTE *)(v5 + 8) & 1 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v5 + 128) + 48) )
      goto LABEL_40;
    v86 = (*(int (__cdecl **)(int, signed int, int, int))(v5 + 508))(v5, 1735162214, v81, v5 + 668);
    if ( (_BYTE)v86 == -114 )
    {
      *(_DWORD *)(v5 + 668) = 0;
LABEL_157:
      v86 = 144;
      if ( !(*(int (__cdecl **)(int, signed int, int, int *))(v5 + 508))(v5, 1819239265, v81, v82) )
      {
        v56 = v96;
        v86 = 8;
        if ( *(_WORD *)(v5 + 210) )
        {
          if ( v96 > 0x3FFFF )
            goto LABEL_45;
          v57 = 2;
          *(_DWORD *)(v5 + 696) = v96 >> 2;
        }
        else
        {
          if ( v96 > 0x1FFFF )
            goto LABEL_45;
          v57 = 1;
          *(_DWORD *)(v5 + 696) = v96 >> 1;
        }
        v58 = *(_DWORD *)(v5 + 16);
        v59 = *(_DWORD *)(v5 + 696);
        if ( v59 != v58 + 1 && v59 <= v58 )
        {
          v66 = (v58 + 1) << v57;
          v67 = *(_DWORD *)(v5 + 156);
          v68 = v66;
          v69 = 16 * *(_WORD *)(v5 + 152);
          v70 = sub_6F7720A0(v81);
          v71 = v67 + v69;
          v72 = 0x7FFFFFFF;
          while ( v71 > v67 )
          {
            v73 = *(_DWORD *)(v67 + 8) - v70;
            if ( v73 <= 0 || v73 >= v72 )
              v73 = v72;
            v67 += 16;
            v72 = v73;
          }
          if ( v71 == v67 )
            v72 = *(_DWORD *)(v81 + 4) - v70;
          if ( v68 <= v72 )
          {
            v74 = *(_DWORD *)(v5 + 16);
            v96 = v68;
            *(_DWORD *)(v5 + 696) = v74 + 1;
            v56 = v68;
          }
          else
          {
            v56 = v96;
          }
        }
        v86 = sub_6F772240(v81, v56, (int *)(v5 + 700));
        if ( v86 )
          goto LABEL_45;
LABEL_40:
        v86 = sub_6F7ABF60(v5, v81);
        if ( !v86 )
        {
          if ( (*(int (__cdecl **)(int, signed int, int, int *))(v5 + 508))(v5, 1718642541, v81, v82) )
          {
            *(_DWORD *)(v5 + 632) = 0;
            *(_DWORD *)(v5 + 628) = 0;
          }
          else
          {
            v45 = v96;
            *(_DWORD *)(v5 + 628) = v96;
            v46 = sub_6F772240(v81, v45, (int *)(v5 + 632));
            if ( v46 )
            {
              v86 = v46;
              goto LABEL_45;
            }
          }
          if ( (*(int (__cdecl **)(int, signed int, int, int *))(v5 + 508))(v5, 1886545264, v81, v82) )
          {
            *(_DWORD *)(v5 + 640) = 0;
            *(_DWORD *)(v5 + 636) = 0;
          }
          else
          {
            v44 = v96;
            *(_DWORD *)(v5 + 636) = v96;
            v86 = sub_6F772240(v81, v44, (int *)(v5 + 640));
          }
          goto LABEL_45;
        }
      }
    }
    else if ( !v86 )
    {
      goto LABEL_157;
    }
LABEL_45:
    if ( !*(_DWORD *)(*(_DWORD *)(v5 + 128) + 48)
      && *(_DWORD *)(v5 + 28)
      && *(_DWORD *)(v5 + 700)
      && *(_DWORD *)(v5 + 696) )
    {
      v76 = 0;
      v42 = 0;
      v43 = 0;
      do
      {
        sub_6F7A9B80(v5, v43, &v95);
        if ( v95 )
        {
          if ( v42 == 1 )
            goto LABEL_46;
          v76 = v43;
          v42 = 1;
        }
        ++v43;
      }
      while ( v43 < *(_DWORD *)(v5 + 696) );
      if ( v42 == 1
        && (!v76 || !sub_6F76DAA0(v5, v76, v82, 8) && (_BYTE)v96 == 46 && !strncmp((const char *)v82, ".notdef", 8u)) )
      {
        *(_DWORD *)(v5 + 8) &= 0xFFFFFFFE;
      }
    }
  }
LABEL_46:
  *(_DWORD *)(v5 + 512) = sub_6F7AAA30;
  *(_DWORD *)(v5 + 520) = sub_6F7A9C40;
  *(_DWORD *)(v5 + 524) = sub_6F7AB3B0;
  *(_DWORD *)(v5 + 528) = sub_6F7ACDF0;
  *(_DWORD *)(v5 + 516) = sub_6F7AAA90;
  return v86;
}
