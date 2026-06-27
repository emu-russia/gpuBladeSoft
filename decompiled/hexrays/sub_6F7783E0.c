signed int __cdecl sub_6F7783E0(int a1, int a2, int a3, signed int (__cdecl **a4)(int a1, int a2, int a3, int a4, int a5), int a5)
{
  signed int v5; // ecx@1
  const char *v6; // edi@1
  bool v7; // zf@1
  _BYTE *v8; // esi@1
  char v9; // al@5
  unsigned __int8 v10; // al@6
  _BYTE *v11; // esi@7
  const char *v12; // edi@7
  signed int v13; // ecx@7
  char v14; // al@11
  unsigned __int8 v15; // al@12
  _BYTE *v16; // esi@13
  const char *v17; // edi@13
  signed int v18; // ecx@13
  char *v19; // eax@17
  char v20; // cl@17
  int v21; // ebp@17
  signed int v22; // eax@21
  _BYTE *v23; // ebx@25
  int v24; // edx@25
  unsigned int v25; // esi@25
  unsigned int v26; // edi@25
  unsigned int v27; // eax@25
  int *v28; // ebx@27
  int v29; // ebp@27
  int v30; // esi@30
  char v31; // ST1C_1@32
  int v32; // eax@32
  unsigned int v33; // eax@33
  _BYTE *v34; // eax@34
  signed int result; // eax@38
  unsigned int v36; // edi@39
  char **v37; // edx@39
  char *v38; // ebp@39
  int v39; // ecx@41
  signed int v40; // eax@41
  char *v41; // ebx@43
  unsigned int v42; // edi@44
  unsigned int v43; // esi@44
  void **v44; // edx@44
  int v45; // eax@44
  char *v46; // ecx@44
  char *v47; // ebx@45
  char v48; // dl@45
  int v49; // ebx@46
  int v50; // eax@54
  char *v51; // ebx@56
  int v52; // eax@56
  int v53; // eax@57
  int v54; // ecx@57
  int v55; // eax@58
  char v56; // al@60
  int v57; // ecx@62
  char *v58; // edx@62
  int v59; // eax@66
  signed int v60; // ecx@66
  const char *v61; // ebx@66
  unsigned int v62; // esi@66
  unsigned int v63; // ebp@66
  unsigned int v64; // edx@66
  int *v65; // eax@68
  int v66; // edx@71
  _BYTE *v67; // esi@72
  bool v68; // cf@72
  bool v69; // zf@72
  signed int v70; // ecx@73
  const char *v71; // edi@73
  signed int v72; // edx@78
  const char *v73; // ebx@78
  int v74; // eax@78
  unsigned int v75; // ecx@78
  unsigned int v76; // ebp@78
  unsigned int v77; // esi@78
  int *v78; // eax@80
  int v79; // edx@83
  _BYTE *v80; // esi@84
  bool v81; // cf@84
  bool v82; // zf@84
  signed int v83; // ecx@85
  const char *v84; // edi@85
  unsigned int v85; // eax@98
  _BYTE *v86; // ecx@98
  char v87; // dl@99
  char v88; // bl@107
  int v89; // edx@109
  char v90; // bl@110
  int v91; // [sp+1Ch] [bp-B0h]@68
  int v92; // [sp+1Ch] [bp-B0h]@80
  int v93; // [sp+20h] [bp-ACh]@17
  int v94; // [sp+20h] [bp-ACh]@54
  signed int v95; // [sp+24h] [bp-A8h]@24
  int v96; // [sp+28h] [bp-A4h]@27
  char v97; // [sp+2Fh] [bp-9Dh]@27
  char v98; // [sp+30h] [bp-9Ch]@56

  v5 = 13;
  v6 = "ENDPROPERTIES";
  v7 = 0;
  v8 = (_BYTE *)a1;
  do
  {
    if ( !v5 )
      break;
    v7 = *v8++ == *v6++;
    --v5;
  }
  while ( v7 );
  if ( !v7 || (v9 = *(_BYTE *)(a1 + 13), v9 != 13 && (v9 & 0xDF) != 0) && (v10 = v9 - 9, v7 = v10 == 1, v10 > 1u) )
  {
    v11 = (_BYTE *)a1;
    v12 = "_XFREE86_GLYPH_RANGES";
    v13 = 21;
    do
    {
      if ( !v13 )
        break;
      v7 = *v11++ == *v12++;
      --v13;
    }
    while ( v7 );
    if ( v7 )
    {
      v14 = *(_BYTE *)(a1 + 21);
      if ( v14 == 13 || (v14 & 0xDF) == 0 )
        return 0;
      v15 = v14 - 9;
      v7 = v15 == 1;
      if ( v15 <= 1u )
        return 0;
    }
    v16 = (_BYTE *)a1;
    v17 = "COMMENT";
    v18 = 7;
    do
    {
      if ( !v18 )
        break;
      v7 = *v16++ == *v17++;
      --v18;
    }
    while ( v7 );
    if ( v7 )
    {
      v56 = *(_BYTE *)(a1 + 7);
      if ( v56 == 13 || (v56 & 0xDF) == 0 || (unsigned __int8)(v56 - 9) <= 1u )
      {
        v57 = a1 + 7;
        v58 = (char *)a1;
        if ( v56 )
        {
          v57 = a1 + 8;
          *(_BYTE *)(a1 + 7) = 0;
          v58 = (char *)a1;
        }
        return sub_6F777890(*(_DWORD *)(a5 + 32), v58, v57);
      }
    }
    v93 = *(_DWORD *)(a5 + 32);
    v19 = (char *)a1;
    v20 = *(_BYTE *)a1;
    v21 = a1;
    if ( *(_BYTE *)a1 & 0xDF )
    {
      if ( v20 == 9 )
      {
LABEL_95:
        *(_BYTE *)v21 = 0;
        v20 = *v19;
        v95 = 9;
        if ( !*v19 )
        {
          v34 = 0;
          goto LABEL_97;
        }
        goto LABEL_25;
      }
      while ( 1 )
      {
        v22 = *(_BYTE *)++v21;
        if ( !(v22 & 0xDF) )
          break;
        if ( (_BYTE)v22 == 9 )
        {
          v19 = (char *)a1;
          goto LABEL_95;
        }
      }
    }
    else
    {
      v22 = v20;
    }
    if ( (_BYTE)v22 )
    {
      v95 = v22;
      *(_BYTE *)v21 = 0;
      v20 = *(_BYTE *)a1;
      if ( !*(_BYTE *)a1 )
      {
        v34 = 0;
LABEL_97:
        v97 = v95;
        *(_BYTE *)v21 = v95;
        if ( !v34 )
          goto LABEL_98;
LABEL_37:
        if ( *((_DWORD *)v34 + 1) == 1 )
        {
LABEL_98:
          v85 = a2 + a1;
          v86 = (_BYTE *)v21;
          if ( v97 )
          {
            v87 = *(_BYTE *)(v21 + 1);
            v86 = (_BYTE *)(v21 + 1);
            *(_BYTE *)v21 = 0;
            if ( v87 )
            {
              if ( v87 != 9 && v87 != 32 )
              {
LABEL_105:
                v86 += v87 == 34;
              }
              else
              {
                while ( 1 )
                {
                  v87 = *++v86;
                  if ( !*v86 )
                    break;
                  if ( v87 != 32 && v87 != 9 )
                    goto LABEL_105;
                }
              }
            }
          }
          goto LABEL_106;
        }
        result = sub_6F774CA0(a5 + 139304, (int)" +", (_BYTE *)a1, a2);
        if ( result )
          return result;
        v36 = *(_DWORD *)(a5 + 139312);
        v37 = *(char ***)(a5 + 139304);
        v38 = *v37;
        if ( v36 )
        {
          if ( v36 > 1 )
          {
            v39 = 0;
            v40 = 1;
            while ( 1 )
            {
              v41 = v37[v40++];
              v37[v39] = v41;
              ++v39;
              if ( v36 == v40 )
                break;
              v37 = *(char ***)(a5 + 139304);
            }
            v42 = v36 - 1;
            v43 = 0;
            v44 = *(void ***)(a5 + 139304);
            *(_DWORD *)(a5 + 139312) = v42;
            v45 = 0;
            v46 = (char *)*v44;
            while ( 1 )
            {
              v47 = (char *)v44[v43];
              v48 = *v47;
              if ( *v47 )
              {
                v49 = (int)&v47[-v45];
                do
                {
                  v46[++v45 - 1] = v48;
                  v48 = *(_BYTE *)(v49 + v45);
                }
                while ( v48 );
                v42 = *(_DWORD *)(a5 + 139312);
              }
              if ( ++v43 >= v42 )
                break;
              v46[v45] = 32;
              v42 = *(_DWORD *)(a5 + 139312);
              ++v45;
              if ( v43 >= v42 )
                break;
              v44 = *(void ***)(a5 + 139304);
            }
            if ( (_UNKNOWN *)v46 == &unk_6FB55C20 )
              v46 = (char *)&unk_6FB55C20;
            else
              v46[v45] = 0;
            return sub_6F777890(*(_DWORD *)(a5 + 32), v38, (int)v46);
          }
          *(_DWORD *)(a5 + 139312) = 0;
        }
        v46 = 0;
        return sub_6F777890(*(_DWORD *)(a5 + 32), v38, (int)v46);
      }
    }
    else
    {
      if ( !v20 )
      {
LABEL_118:
        v86 = (_BYTE *)v21;
        v85 = a2 + a1;
LABEL_106:
        if ( (unsigned int)v86 < v85 )
        {
          v88 = *(_BYTE *)(v85 - 1);
          if ( v88 != 9 && v88 != 32 )
          {
            v89 = v85;
LABEL_114:
            if ( v88 == 34 )
              *(_BYTE *)(v89 - 1) = 0;
          }
          else
          {
            while ( 1 )
            {
              v89 = v85 - 1;
              *(_BYTE *)(v85 - 1) = 0;
              if ( v86 == (_BYTE *)(v85 - 1) )
                break;
              v90 = *(_BYTE *)(v85 - 2);
              if ( v90 != 32 && v90 != 9 )
              {
                v88 = *(_BYTE *)(v85 - 2);
                goto LABEL_114;
              }
              --v85;
            }
          }
        }
        return sub_6F777890(*(_DWORD *)(a5 + 32), (char *)a1, (int)v86);
      }
      v95 = -1;
    }
LABEL_25:
    v23 = (_BYTE *)a1;
    v24 = v20;
    v25 = *(_DWORD *)(v93 + 278680);
    v26 = *(_DWORD *)(v93 + 278688);
    v27 = 0;
    do
    {
      ++v23;
      v27 = v24 + 31 * v27;
      v24 = *v23;
    }
    while ( (_BYTE)v24 );
    v97 = 0;
    v96 = v21;
    v28 = (int *)(v26 + 4 * (v27 % v25));
    v29 = v26 + 4 * v25 - 4;
    while ( 1 )
    {
      v30 = *v28;
      if ( !*v28 )
      {
        v34 = 0;
        v21 = v96;
        if ( v95 != -1 )
          goto LABEL_97;
        goto LABEL_118;
      }
      if ( **(_BYTE **)v30 == v20 )
      {
        v31 = v20;
        v32 = strcmp(*(const char **)v30, (const char *)a1);
        v20 = v31;
        if ( !v32 )
          break;
      }
      --v28;
      if ( v26 > (unsigned int)v28 )
        v28 = (int *)v29;
    }
    v33 = *(_DWORD *)(v30 + 4);
    v21 = v96;
    if ( v33 > 0x52 )
      v34 = (_BYTE *)(*(_DWORD *)(v93 + 278668) + 16 * (v33 + 268435373));
    else
      v34 = &off_6FB56020[16 * v33];
    if ( v95 != -1 )
      goto LABEL_97;
    if ( !v34 )
      goto LABEL_118;
    goto LABEL_37;
  }
  v50 = *(_DWORD *)(a5 + 32);
  v94 = *(_DWORD *)(a5 + 32);
  if ( v50 && *(_DWORD *)(v50 + 72) )
  {
    v59 = *(_DWORD *)(v50 + 128);
    v60 = 70;
    v61 = "FONT_ASCENT";
    v62 = *(_DWORD *)(v59 + 4);
    v63 = *(_DWORD *)(v59 + 12);
    v64 = 0;
    do
    {
      ++v61;
      v64 = v60 + 31 * v64;
      v60 = *v61;
    }
    while ( (_BYTE)v60 );
    v91 = v63 + 4 * v62 - 4;
    v65 = (int *)(v63 + 4 * (v64 % v62));
    while ( 1 )
    {
      v66 = *v65;
      if ( !*v65 )
        break;
      v67 = *(_BYTE **)v66;
      v68 = **(_BYTE **)v66 < 0x46u;
      v69 = **(_BYTE **)v66 == 70;
      if ( **(_BYTE **)v66 == 70 )
      {
        v70 = 12;
        v71 = "FONT_ASCENT";
        do
        {
          if ( !v70 )
            break;
          v68 = *v67 < (const unsigned __int8)*v71;
          v69 = *v67++ == *v71++;
          --v70;
        }
        while ( v69 );
        if ( (!v68 && !v69) == v68 )
        {
          if ( !(*(_DWORD *)(v94 + 80) + 16 * *(_DWORD *)(v66 + 4)) )
            break;
          goto LABEL_78;
        }
      }
      --v65;
      if ( v63 > (unsigned int)v65 )
        v65 = (int *)v91;
    }
  }
  v51 = &v98;
  v52 = *(_WORD *)(v94 + 12);
  *(_DWORD *)(v94 + 40) = v52;
  sprintf(&v98, "%hd", v52);
  result = sub_6F777890(*(_DWORD *)(a5 + 32), "FONT_ASCENT", (int)&v98);
  if ( !result )
  {
    v53 = *(_DWORD *)(a5 + 32);
    v54 = *(_DWORD *)(v53 + 72);
    v94 = *(_DWORD *)(a5 + 32);
    *(_WORD *)(v53 + 278660) = 1;
    if ( v54 )
    {
LABEL_78:
      v72 = 70;
      v73 = "FONT_DESCENT";
      v74 = *(_DWORD *)(v94 + 128);
      v75 = *(_DWORD *)(v74 + 4);
      v76 = *(_DWORD *)(v74 + 12);
      v77 = 0;
      do
      {
        ++v73;
        v77 = v72 + 31 * v77;
        v72 = *v73;
      }
      while ( (_BYTE)v72 );
      v92 = v76 + 4 * v75 - 4;
      v78 = (int *)(v76 + 4 * (v77 % v75));
      while ( 1 )
      {
        v79 = *v78;
        if ( !*v78 )
          break;
        v80 = *(_BYTE **)v79;
        v81 = **(_BYTE **)v79 < 0x46u;
        v82 = **(_BYTE **)v79 == 70;
        if ( **(_BYTE **)v79 == 70 )
        {
          v83 = 13;
          v84 = "FONT_DESCENT";
          do
          {
            if ( !v83 )
              break;
            v81 = *v80 < (const unsigned __int8)*v84;
            v82 = *v80++ == *v84++;
            --v83;
          }
          while ( v82 );
          if ( (!v81 && !v82) == v81 )
          {
            if ( *(_DWORD *)(v94 + 80) + 16 * *(_DWORD *)(v79 + 4) )
              goto LABEL_90;
            break;
          }
        }
        --v78;
        if ( v76 > (unsigned int)v78 )
          v78 = (int *)v92;
      }
      v51 = &v98;
    }
    v55 = *(_WORD *)(v94 + 14);
    *(_DWORD *)(v94 + 44) = v55;
    sprintf(v51, "%hd", v55);
    result = sub_6F777890(*(_DWORD *)(a5 + 32), "FONT_DESCENT", (int)v51);
    if ( !result )
    {
      *(_WORD *)(*(_DWORD *)(a5 + 32) + 278660) = 1;
LABEL_90:
      *(_DWORD *)a5 &= 0xFFFFFFEF;
      *a4 = sub_6F776980;
      result = 0;
    }
  }
  return result;
}
