__int64 *__cdecl sub_6F8A2BE0(const char *a1, double *a2)
{
  const char *v2; // edi@1
  size_t v3; // eax@1
  int v4; // esi@1
  unsigned int v5; // eax@1
  char v6; // ST00_1@1
  void *v7; // esp@1
  int v8; // esi@1
  char v9; // bl@3
  int v10; // eax@3
  _BYTE *v11; // edx@4
  int v12; // esi@4
  char *v13; // eax@8
  char v14; // al@8
  __int64 *v15; // esi@11
  __int64 *v16; // ebx@12
  __int64 *v18; // edx@16
  char v19; // al@16
  __int64 *v20; // edi@19
  int v21; // edx@25
  char *v22; // ebx@28
  int v23; // ecx@28
  __int16 v24; // ax@31
  __int16 *v25; // ebx@34
  int v26; // ecx@34
  __int16 i; // ax@34
  __int16 v28; // ax@38
  int v29; // ecx@41
  __int16 v30; // ax@44
  __int64 *v31; // esi@47
  __int64 *v32; // esi@48
  int v33; // eax@48
  int v34; // eax@54
  signed int v35; // ecx@55
  int v36; // edx@59
  int v37; // edx@69
  int v38; // ecx@69
  __int16 j; // ax@69
  __int16 v40; // ax@73
  int v41; // ecx@76
  int v42; // edx@76
  __int16 v43; // ax@79
  int v44; // ecx@82
  int v45; // edx@82
  __int16 v46; // ax@85
  bool v47; // zf@89
  signed int v48; // eax@91
  char *v49; // ebx@93
  signed int v50; // edi@93
  const char *v51; // eax@93
  int v52; // esi@93
  int v53; // ST00_4@96
  char *v54; // edi@97
  int v55; // ebx@98
  double v56; // st6@101
  __int16 v57; // fps@101
  signed int v62; // eax@109
  int v63; // ebx@112
  signed int v64; // eax@117
  int v65; // ebx@121
  signed int v66; // [sp+24h] [bp-94h]@18
  int v67; // [sp+24h] [bp-94h]@53
  int v68; // [sp+24h] [bp-94h]@52
  int v69; // [sp+24h] [bp-94h]@105
  int v70; // [sp+24h] [bp-94h]@114
  __int64 *v71; // [sp+28h] [bp-90h]@34
  __int16 *v72; // [sp+2Ch] [bp-8Ch]@34
  int v73; // [sp+30h] [bp-88h]@4
  int v74; // [sp+34h] [bp-84h]@4
  int v75; // [sp+38h] [bp-80h]@19
  int v76; // [sp+3Ch] [bp-7Ch]@19
  char *v77; // [sp+40h] [bp-78h]@19
  __int16 v78; // [sp+46h] [bp-72h]@9
  int v79; // [sp+48h] [bp-70h]@19
  int v80; // [sp+4Ch] [bp-6Ch]@1
  __int64 *v81; // [sp+50h] [bp-68h]@9
  unsigned int v82; // [sp+54h] [bp-64h]@1
  char *v83; // [sp+58h] [bp-60h]@19
  int v84; // [sp+5Ch] [bp-5Ch]@1
  char v85[18]; // [sp+6Ah] [bp-4Eh]@12
  __int64 v86; // [sp+7Ch] [bp-3Ch]@34
  __int64 v87; // [sp+84h] [bp-34h]@34
  __int16 v88; // [sp+8Ch] [bp-2Ch]@34
  char v89; // [sp+8Eh] [bp-2Ah]@92
  unsigned __int16 v90; // [sp+90h] [bp-28h]@98

  v2 = a1;
  LOBYTE(v80) = **(_BYTE **)localeconv();
  v3 = strlen(a1);
  v4 = v3 + 2;
  v5 = 16 * ((v3 + 29) >> 4);
  sub_6F8A13B0(v5, v6);
  v7 = alloca(v5);
  v84 = v4;
  v82 = ((unsigned int)&v66 + 3) & 0xFFFFFFF0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *v2;
    v10 = isspace(*v2);
    if ( !v10 )
      break;
    ++v8;
    ++v2;
  }
  v73 = v8;
  v11 = (_BYTE *)v82;
  v74 = 0;
  v12 = v84;
  while ( 1 )
  {
    *(++v11 - 1) = v9;
    if ( !v9 )
      break;
    if ( v12 <= ++v10 )
      break;
    v9 = v2[v10];
  }
  v13 = (char *)v82;
  *v11 = 0;
  v14 = *v13;
  if ( v14 == 45 )
  {
    v78 = -1;
    v81 = (__int64 *)(v82 + 1);
  }
  else
  {
    v78 = 0;
    v81 = (__int64 *)(v82 + (v14 == 43));
  }
  if ( !strnicmp((const char *)&unk_6FBA6400, (const char *)v81, 3u) )
  {
    v32 = v81;
    v16 = (__int64 *)((char *)v81 + 3);
    v33 = strnicmp("INITY", (const char *)v81 + 3, 5u);
    *(_WORD *)&v85[2] = 0x7FFF;
    *(_DWORD *)&v85[4] = 0;
    if ( !v33 )
      v16 = v32 + 1;
    *(_WORD *)&v85[16] = 0;
    *(_DWORD *)&v85[8] = 0;
    *(_WORD *)v85 = v78;
    *(_DWORD *)&v85[12] = 0;
    sub_6F8AA3E0((int)v85, (int)a2);
    return (__int64 *)((char *)v16 + v73 - v82);
  }
  v15 = v81;
  if ( !strnicmp("NAN", (const char *)v81, 3u) )
  {
    *(_DWORD *)&v85[2] = 0x7FFF;
    *(_DWORD *)&v85[6] = 49152;
    v16 = (__int64 *)((char *)v15 + 3);
    *(_DWORD *)&v85[10] = 0;
    *(_DWORD *)&v85[14] = 0;
LABEL_13:
    *(_WORD *)v85 = v78;
    sub_6F8AA3E0((int)v85, (int)a2);
    return (__int64 *)((char *)v16 + v73 - v82);
  }
  v18 = v81;
  *(_DWORD *)v85 = 0;
  *(_DWORD *)&v85[4] = 0;
  v19 = *(_BYTE *)v81;
  *(_DWORD *)&v85[8] = 0;
  *(_DWORD *)&v85[12] = 0;
  *(_WORD *)&v85[16] = 0;
  if ( v19 == 48 )
  {
    do
    {
      v18 = (__int64 *)((char *)v18 + 1);
      v19 = *(_BYTE *)v18;
    }
    while ( *(_BYTE *)v18 == 48 );
    v81 = v18;
    v66 = 1;
  }
  else
  {
    v70 = 0;
  }
  v76 = 0;
  v20 = v81;
  v79 = 0;
  v75 = 0;
  v77 = 0;
  v83 = 0;
  while ( 1 )
  {
    v84 = v19 - 48;
    if ( (unsigned int)v84 <= 9 )
    {
      v21 = *(unsigned __int16 *)&v85[4];
      if ( *(_WORD *)&v85[4] )
      {
        v75 |= v84;
        v77 -= (unsigned int)v83 < 1;
      }
      else
      {
        v22 = &v85[16];
        v77 += -((unsigned int)v83 < 1) + 1;
        v23 = 0;
        do
        {
          if ( *(_WORD *)v22 < 0 )
            v23 |= 1u;
          v24 = 2 * *(_WORD *)v22;
          if ( v23 & 2 )
            v24 |= 1u;
          v22 -= 2;
          v23 *= 2;
          *((_WORD *)v22 + 1) = v24;
        }
        while ( v22 != &v85[2] );
        v71 = v20;
        v81 = &v86;
        v25 = &v88;
        v88 = 0;
        v26 = 0;
        v86 = *(_QWORD *)v85;
        v72 = &v88;
        v87 = *(_QWORD *)&v85[8];
        for ( i = 0; ; i = *v25 )
        {
          if ( i < 0 )
            v26 |= 1u;
          v28 = 2 * i;
          if ( v26 & 2 )
            v28 |= 1u;
          --v25;
          v26 *= 2;
          v25[1] = v28;
          if ( v25 == (__int16 *)((char *)&v86 + 2) )
            break;
        }
        v20 = v71;
        v29 = (int)v72;
        do
        {
          if ( *(_WORD *)v29 < 0 )
            v21 |= 1u;
          v30 = 2 * *(_WORD *)v29;
          if ( v21 & 2 )
            v30 |= 1u;
          v29 -= 2;
          v21 *= 2;
          *(_WORD *)(v29 + 2) = v30;
        }
        while ( (__int64 *)v29 != (__int64 *)((char *)&v86 + 2) );
        v31 = v81;
        sub_6F8AA020((int)v81, (int)v85);
        *(_DWORD *)v31 = 0;
        *((_WORD *)v31 + 8) = 0;
        *((_DWORD *)v31 + 1) = 0;
        *((_DWORD *)v31 + 2) = 0;
        *((_DWORD *)v31 + 3) = 0;
        WORD3(v87) = v84;
        sub_6F8AA020((int)v31, (int)v85);
      }
      ++v76;
      v79 |= v84;
      goto LABEL_23;
    }
    if ( (_BYTE)v80 != v19 )
      break;
    if ( v83 )
    {
      v81 = v20;
      v80 = v69 | v76;
      goto LABEL_66;
    }
    v83 = (char *)1;
LABEL_23:
    v20 = (__int64 *)((char *)v20 + 1);
    v19 = *(_BYTE *)v20;
  }
  v81 = v20;
  v80 = v68 | v76;
  if ( (v19 & 0xDF) == 69 )
  {
    if ( v67 | v76 )
    {
      v34 = *((_BYTE *)v20 + 1);
      if ( (_BYTE)v34 == 45 )
      {
        v35 = -1;
        v16 = (__int64 *)((char *)v81 + 2);
        v34 = *((_BYTE *)v81 + 2);
      }
      else
      {
        v16 = (__int64 *)((char *)v20 + 1);
        v35 = 1;
      }
      if ( (_BYTE)v34 == 43 )
      {
        v34 = *((_BYTE *)v16 + 1);
        v16 = (__int64 *)((char *)v16 + 1);
      }
      if ( (unsigned __int8)(v34 - 48) <= 9u )
      {
        v36 = v74;
        do
        {
          if ( v36 <= 4977 )
            v36 = v34 + 10 * v36 - 48;
          v16 = (__int64 *)((char *)v16 + 1);
          v34 = *(_BYTE *)v16;
        }
        while ( (unsigned __int8)(v34 - 48) <= 9u );
        v74 = v36;
        if ( v35 == -1 )
        {
          if ( v36 > 4977 )
          {
            *(_DWORD *)&v85[2] = 0;
            *(_DWORD *)&v85[6] = 0;
            *(_WORD *)v85 = v78;
            *(_DWORD *)&v85[10] = 0;
            *(_DWORD *)&v85[14] = 0;
            sub_6F8AA3E0((int)v85, (int)a2);
            if ( !v79 )
              return (__int64 *)((char *)v16 + v73 - v82);
            v81 = v16;
            goto LABEL_101;
          }
          v81 = v16;
          v74 = -v36;
        }
        else
        {
          if ( v74 > 4977 )
          {
            *(_DWORD *)v85 = 0;
            *(_WORD *)&v85[16] = 0;
            *(_DWORD *)&v85[4] = 0;
            *(_DWORD *)&v85[8] = 0;
            *(_DWORD *)&v85[12] = 0;
            if ( !v79 )
              goto LABEL_13;
            *(_WORD *)&v85[2] = 0x7FFF;
            *(_WORD *)v85 = v78;
            sub_6F8AA3E0((int)v85, (int)a2);
            v81 = v16;
            goto LABEL_101;
          }
          v81 = v16;
        }
      }
    }
    else
    {
      v74 = 0;
    }
  }
LABEL_66:
  v83 = (char *)(v74 - (_DWORD)v77);
  if ( v74 - (signed int)v77 <= 0 )
  {
    v64 = sub_6F8AA650((int)v85);
    if ( v64 > 80 )
      goto LABEL_108;
    sub_6F8AA800((int)v85, v75, 0, 16462 - v64, 64, 80);
    v76 = *(unsigned __int16 *)&v85[2];
    if ( v83 )
    {
      if ( (signed int)v83 < -4096 )
      {
        v77 = &v89;
        sub_6F8A9F60((const char *)&unk_6FBA6420, &v89);
        v65 = v76 - v90;
        sub_6F8AA0A0((int)&v89, (int)v85);
        v75 = -1;
        v76 = v65 + 0x3FFF;
        v83 = (char *)(-4096 - (_DWORD)v83);
      }
      else
      {
        v75 = -1;
        v83 = &v77[-v74];
        v77 = &v89;
      }
      goto LABEL_93;
    }
LABEL_99:
    sub_6F8AA800((int)v85, (signed int)v83, 0, v76, 64, 64);
  }
  else
  {
    if ( !*(_WORD *)&v85[4] )
    {
      v84 = (int)&v88;
      do
      {
        v37 = 0;
        v38 = v84;
        v86 = *(_QWORD *)v85;
        v87 = *(_QWORD *)&v85[8];
        v88 = 0;
        for ( j = 0; ; j = *(_WORD *)v38 )
        {
          if ( j < 0 )
            v37 |= 1u;
          v40 = 2 * j;
          if ( v37 & 2 )
            v40 |= 1u;
          v38 -= 2;
          v37 *= 2;
          *(_WORD *)(v38 + 2) = v40;
          if ( (__int64 *)v38 == (__int64 *)((char *)&v86 + 2) )
            break;
        }
        v41 = v84;
        v42 = 0;
        do
        {
          if ( *(_WORD *)v41 < 0 )
            v42 |= 1u;
          v43 = 2 * *(_WORD *)v41;
          if ( v42 & 2 )
            v43 |= 1u;
          v41 -= 2;
          v42 *= 2;
          *(_WORD *)(v41 + 2) = v43;
        }
        while ( (__int64 *)v41 != (__int64 *)((char *)&v86 + 2) );
        sub_6F8AA020((int)v85, (int)&v86);
        v44 = v84;
        v45 = 0;
        do
        {
          if ( *(_WORD *)v44 < 0 )
            v45 |= 1u;
          v46 = 2 * *(_WORD *)v44;
          if ( v45 & 2 )
            v46 |= 1u;
          v44 -= 2;
          v45 *= 2;
          *(_WORD *)(v44 + 2) = v46;
        }
        while ( (__int64 *)v44 != (__int64 *)((char *)&v86 + 2) );
        if ( WORD2(v86) )
          break;
        v47 = v83-- == (char *)1;
        *(_WORD *)&v85[16] = 0;
        *(_QWORD *)v85 = v86;
        *(_QWORD *)&v85[8] = v87;
        if ( v47 )
        {
          v62 = sub_6F8AA650((int)v85);
          if ( v62 > 80 )
            goto LABEL_108;
          sub_6F8AA800((int)v85, v75, 0, 16462 - v62, 64, 80);
          v76 = *(unsigned __int16 *)&v85[2];
          goto LABEL_99;
        }
      }
      while ( !*(_WORD *)&v85[4] );
    }
    v48 = sub_6F8AA650((int)v85);
    if ( v48 <= 80 )
    {
      sub_6F8AA800((int)v85, v75, 0, 16462 - v48, 64, 80);
      v75 = 1;
      v76 = *(unsigned __int16 *)&v85[2];
      v77 = &v89;
LABEL_93:
      v49 = (char *)&unk_6FBA64B0;
      v50 = 1;
      v86 = 0i64;
      LODWORD(v87) = 1073709056;
      v51 = (const char *)&v86;
      v52 = (int)v83;
      do
      {
        while ( !(v50 & v52) )
        {
          v49 -= 12;
          v50 *= 2;
          if ( (_UNKNOWN *)v49 == &unk_6FBA6414 )
            goto LABEL_97;
        }
        v50 *= 2;
        v53 = (int)v49;
        v49 -= 12;
        v84 = (int)v51;
        sub_6F8AAC10(v53, (int)v51, (int)v51);
        v51 = (const char *)v84;
      }
      while ( (_UNKNOWN *)v49 != &unk_6FBA6414 );
LABEL_97:
      v54 = v77;
      sub_6F8A9F60(v51, v77);
      if ( v75 == -1 )
      {
        v63 = v76 - v90;
        v83 = (char *)sub_6F8AA0A0((int)v54, (int)v85);
        v76 = v63 + 0x3FFF;
      }
      else
      {
        v55 = v76 + v90;
        v83 = (char *)sub_6F8AA2F0((int)v77, (int *)v85);
        v76 = v55 - 16382;
      }
      goto LABEL_99;
    }
LABEL_108:
    *(_DWORD *)&v85[2] = 0;
    *(_DWORD *)&v85[6] = 0;
    *(_DWORD *)&v85[10] = 0;
    *(_DWORD *)&v85[14] = 0;
  }
  *(_WORD *)v85 = v78;
  sub_6F8AA3E0((int)v85, (int)a2);
  if ( !v79 )
    goto LABEL_103;
LABEL_101:
  v56 = *a2;
  _ST7 = v56;
  if ( v56 == 0.0 )
    goto LABEL_128;
  __asm { fxam }
  if ( (v57 & 0x4500) == 1280 )
LABEL_128:
    *errno() = 34;
LABEL_103:
  if ( !v80 )
    return (__int64 *)v80;
  v16 = v81;
  return (__int64 *)((char *)v16 + v73 - v82);
}
