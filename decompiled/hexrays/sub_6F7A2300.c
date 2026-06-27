int __cdecl sub_6F7A2300(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // eax@2
  char v6; // bl@2
  char v7; // bp@2
  _DWORD *v8; // ecx@2
  int result; // eax@11
  int (__cdecl *v10)(int, int); // eax@15
  int (__cdecl *v11)(int, int); // eax@18
  int v12; // eax@23
  bool v13; // zf@23
  int v14; // eax@23
  int v15; // eax@29
  int v16; // ecx@29
  int v17; // ecx@33
  int v18; // eax@34
  unsigned int v19; // edx@40
  unsigned int v20; // ebx@42
  unsigned int v21; // eax@43
  unsigned int v22; // eax@47
  signed int v23; // eax@57
  int v24; // edx@59
  int v25; // eax@60
  int v26; // ebp@60
  signed int v27; // ebx@62
  int v28; // edx@64
  int v29; // edi@64
  int v30; // ecx@64
  int v31; // eax@69
  int v32; // eax@73
  _DWORD *v33; // ecx@76
  unsigned int v34; // ecx@79
  unsigned int v35; // edx@79
  unsigned int v36; // eax@80
  int v37; // eax@92
  int v38; // eax@92
  int (__cdecl *v39)(int, int); // eax@101
  signed int v40; // ebp@116
  unsigned __int16 v41; // bx@117
  signed __int16 v42; // di@118
  char *v43; // eax@123
  char *v44; // edx@123
  int v45; // edi@124
  char *v46; // eax@124
  int v47; // ebx@126
  int v48; // ecx@127
  int v49; // eax@127
  int v50; // eax@128
  int v51; // eax@128
  unsigned __int16 v52; // cx@132
  unsigned __int16 v53; // dx@132
  int v54; // eax@132
  __int16 v55; // ax@132
  __int16 v56; // ax@134
  __int16 v57; // dx@134
  __int16 v58; // ax@136
  __int16 v59; // dx@136
  __int16 v60; // cx@136
  signed __int16 v61; // dx@139
  __int16 v62; // di@139
  __int16 v63; // dx@147
  int v64; // eax@158
  int v65; // eax@158
  __int16 v66; // ax@171
  int v67; // [sp+20h] [bp-4Ch]@1
  char v68; // [sp+24h] [bp-48h]@9
  bool v69; // [sp+24h] [bp-48h]@100
  int v70; // [sp+24h] [bp-48h]@124
  bool v71; // [sp+28h] [bp-44h]@10
  int v72; // [sp+28h] [bp-44h]@122
  int v73; // [sp+2Ch] [bp-40h]@17
  signed int v74; // [sp+2Ch] [bp-40h]@124
  int v75; // [sp+30h] [bp-3Ch]@11
  unsigned __int16 v76; // [sp+34h] [bp-38h]@126
  unsigned __int16 v77; // [sp+36h] [bp-36h]@127
  int v78; // [sp+48h] [bp-24h]@127

  v67 = *(_DWORD *)(a2 + 532);
  if ( a4 <= 0 )
  {
    v6 = 0;
    v7 = 0;
  }
  else
  {
    v5 = a5;
    v6 = 0;
    v7 = 0;
    v8 = &a5[2 * a4];
    do
    {
      while ( *v5 == 1768386662 )
      {
        v5 += 2;
        v7 = 1;
        if ( v5 == v8 )
          goto LABEL_8;
      }
      if ( *v5 == 1768386675 )
        v6 = 1;
      v5 += 2;
    }
    while ( v5 != v8 );
  }
LABEL_8:
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 128) + 48) )
  {
LABEL_9:
    v68 = 1;
    if ( (*(int (__cdecl **)(int, signed int, int, _DWORD))(a2 + 508))(a2, 1935829368, a1, 0) )
    {
LABEL_10:
      v71 = 0;
      goto LABEL_11;
    }
    goto LABEL_15;
  }
  v34 = *(_DWORD *)(a2 + 156);
  v35 = v34 + 16 * *(_WORD *)(a2 + 152);
  if ( v35 > v34 )
  {
    v36 = *(_DWORD *)(a2 + 156);
    do
    {
      if ( *(_DWORD *)v36 == 1735162214 && *(_DWORD *)(v36 + 12) )
        goto LABEL_9;
      v36 += 16;
    }
    while ( v35 > v36 );
    do
    {
      if ( *(_DWORD *)v34 == 1128678944 && *(_DWORD *)(v34 + 12) )
        goto LABEL_9;
      v34 += 16;
    }
    while ( v35 > v34 );
    v69 = (*(int (__cdecl **)(int, signed int, int, _DWORD))(a2 + 508))(a2, 1935829368, a1, 0) == 0;
    goto LABEL_101;
  }
  if ( (*(int (__cdecl **)(int, signed int, int, _DWORD))(a2 + 508))(a2, 1935829368, a1, 0) )
  {
    v69 = 0;
LABEL_101:
    v39 = *(int (__cdecl **)(int, int))(v67 + 68);
    if ( !v39 )
      goto LABEL_16;
    v75 = v39(a2, a1);
    v71 = v75 == 0;
    if ( !v75 && !v69 )
    {
      v68 = 0;
      goto LABEL_12;
    }
    v68 = 0;
    goto LABEL_11;
  }
LABEL_15:
  v10 = *(int (__cdecl **)(int, int))(v67 + 68);
  if ( !v10 )
  {
LABEL_16:
    v68 = 0;
    goto LABEL_10;
  }
  v75 = v10(a2, a1);
  v68 = 0;
  v71 = v75 == 0;
LABEL_11:
  result = (*(int (__cdecl **)(int, int))(v67 + 24))(a2, a1);
  v75 = result;
  if ( result )
    return result;
LABEL_12:
  result = 8;
  if ( !*(_WORD *)(a2 + 178) )
    return result;
  v75 = (*(int (__cdecl **)(int, int))(v67 + 36))(a2, a1);
  v75 = (*(int (__cdecl **)(int, int))(v67 + 32))(a2, a1);
  v75 = (*(int (__cdecl **)(int, int))(v67 + 48))(a2, a1);
  v73 = (*(int (__cdecl **)(int, int))(v67 + 44))(a2, a1);
  v75 = v73;
  if ( v71 )
    goto LABEL_18;
  result = (*(int (__cdecl **)(int, int, _DWORD))(v67 + 28))(a2, a1, 0);
  v75 = result;
  if ( !result )
  {
    result = (*(int (__cdecl **)(int, int, _DWORD))(v67 + 92))(a2, a1, 0);
    v75 = result;
    if ( (_BYTE)result != -114 )
    {
      if ( result )
        return result;
      goto LABEL_95;
    }
    v64 = *(_DWORD *)(a2 + 128);
    v75 = 147;
    v65 = *(_DWORD *)(v64 + 48);
    if ( !v65 || !*(_DWORD *)(*(_DWORD *)v65 + 8) )
      return 147;
    goto LABEL_94;
  }
  if ( (_BYTE)result != -114 )
    return result;
  if ( *(_DWORD *)(a2 + 148) != 1953658213 )
  {
    v37 = *(_DWORD *)(a2 + 128);
    v75 = 143;
    v38 = *(_DWORD *)(v37 + 48);
    if ( !v38 || !*(_DWORD *)(*(_DWORD *)v38 + 8) )
      return 143;
LABEL_94:
    v75 = 0;
    *(_WORD *)(a2 + 250) = 0;
    goto LABEL_95;
  }
  v75 = 0;
  v68 = 0;
LABEL_95:
  result = (*(int (__cdecl **)(int, int, signed int))(v67 + 28))(a2, a1, 1);
  v75 = result;
  if ( result || (result = (*(int (__cdecl **)(int, int, signed int))(v67 + 92))(a2, a1, 1), (v75 = result) != 0) )
  {
    if ( (_BYTE)result != -114 )
      return result;
  }
  else
  {
    *(_BYTE *)(a2 + 292) = 1;
  }
  v75 = (*(int (__cdecl **)(int, int))(v67 + 40))(a2, a1);
  if ( v75 )
    *(_WORD *)(a2 + 364) = -1;
LABEL_18:
  v11 = *(int (__cdecl **)(int, int))(v67 + 96);
  if ( v11 )
  {
    result = v11(a2, a1);
    v75 = result;
    if ( result )
    {
      if ( (_BYTE)result != -114 )
        return result;
      v75 = 0;
    }
  }
  result = (*(int (__cdecl **)(int, int))(v67 + 64))(a2, a1);
  v75 = result;
  if ( result )
  {
    if ( (_BYTE)result != -114 )
      return result;
    *(_DWORD *)(a2 + 548) = 0;
  }
  v75 = (*(int (__cdecl **)(int, int))(v67 + 60))(a2, a1);
  v12 = (*(int (__cdecl **)(int, int))(v67 + 56))(a2, a1);
  v13 = *(_WORD *)(a2 + 364) == -1;
  v75 = v12;
  v14 = *(_WORD *)(a2 + 264);
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 16) = v14;
  if ( !v13 && *(_BYTE *)(a2 + 429) & 1 )
  {
    if ( v7 )
      goto LABEL_181;
    result = sub_6F7A0D80(a2, 16, (_DWORD *)(a2 + 20));
    v75 = result;
    if ( result )
      return result;
    if ( !*(_DWORD *)(a2 + 20) )
    {
LABEL_181:
      result = sub_6F7A0D80(a2, 1, (_DWORD *)(a2 + 20));
      v75 = result;
      if ( result )
        return result;
    }
    if ( !v6 )
    {
      result = sub_6F7A0D80(a2, 17, (_DWORD *)(a2 + 24));
      v75 = result;
      if ( result )
        return result;
    }
    if ( *(_DWORD *)(a2 + 24) )
      goto LABEL_29;
    v33 = (_DWORD *)(a2 + 24);
    goto LABEL_77;
  }
  result = sub_6F7A0D80(a2, 21, (_DWORD *)(a2 + 20));
  v75 = result;
  if ( result )
    return result;
  v31 = *(_DWORD *)(a2 + 20);
  if ( !v7 && !v31 )
  {
    result = sub_6F7A0D80(a2, 16, (_DWORD *)(a2 + 20));
    v75 = result;
    if ( result )
      return result;
    v31 = *(_DWORD *)(a2 + 20);
  }
  if ( v31 || (result = sub_6F7A0D80(a2, 1, (_DWORD *)(a2 + 20)), (v75 = result) == 0) )
  {
    result = sub_6F7A0D80(a2, 22, (_DWORD *)(a2 + 24));
    v75 = result;
    if ( !result )
    {
      v32 = *(_DWORD *)(a2 + 24);
      if ( !(v6 & 1) && !v32 )
      {
        result = sub_6F7A0D80(a2, 17, (_DWORD *)(a2 + 24));
        v75 = result;
        if ( result )
          return result;
        v32 = *(_DWORD *)(a2 + 24);
      }
      if ( v32 )
      {
LABEL_29:
        v15 = *(_DWORD *)(a2 + 8);
        v16 = *(_DWORD *)(a2 + 8);
        BYTE1(v16) |= 0x40u;
        if ( (unsigned int)(*(_DWORD *)(a2 + 732) - 2) <= 1 )
          v15 = v16;
        if ( v68 == 1 )
          v15 |= 1u;
        v17 = v15 | 0x18;
        if ( !v73 )
        {
          v18 = v15 | 0x218;
          if ( *(_DWORD *)(a2 + 468) != 196608 )
            v17 = v18;
        }
        if ( *(_DWORD *)(a2 + 480) )
          v17 |= 4u;
        if ( *(_BYTE *)(a2 + 292) )
          v17 |= 0x20u;
        v19 = *(_DWORD *)(a2 + 156);
        if ( *(_DWORD *)(a2 + 752) )
          v17 |= 0x40u;
        v20 = v19 + 16 * *(_WORD *)(a2 + 152);
        if ( v19 < v20 )
        {
          v21 = *(_DWORD *)(a2 + 156);
          while ( *(_DWORD *)v21 != 1735162214 || !*(_DWORD *)(v21 + 12) )
          {
            v21 += 16;
            if ( v20 <= v21 )
              goto LABEL_56;
          }
          v22 = *(_DWORD *)(a2 + 156);
          while ( *(_DWORD *)v22 != 1719034226 || !*(_DWORD *)(v22 + 12) )
          {
            v22 += 16;
            if ( v20 <= v22 )
              goto LABEL_56;
          }
          while ( *(_DWORD *)v19 != 1735811442 || !*(_DWORD *)(v19 + 12) )
          {
            v19 += 16;
            if ( v20 <= v19 )
              goto LABEL_56;
          }
          BYTE1(v17) |= 1u;
        }
LABEL_56:
        *(_DWORD *)(a2 + 8) = v17;
        if ( v68 != 1 || *(_WORD *)(a2 + 364) == -1 )
        {
          v23 = (*(_WORD *)(a2 + 204) & 1u) < 1 ? 1 : 3;
          if ( !(*(_WORD *)(a2 + 204) & 2) )
            v23 = ((*(_WORD *)(a2 + 204) & 1) << 31 >> 31) & 2;
        }
        else
        {
          v63 = *(_WORD *)(a2 + 428);
          v23 = (v63 & 0x201) != 0;
          if ( v63 & 0x20 )
            v23 = ((v63 & 0x201) != 0) | 2;
        }
        *(_DWORD *)(a2 + 12) = v23;
        sub_6F7A1FD0(a2);
        v24 = *(_DWORD *)(a2 + 36);
        if ( v24 <= 0 )
        {
LABEL_116:
          v40 = *(_DWORD *)(a2 + 736);
          if ( v40 )
          {
            v41 = *(_WORD *)(a2 + 178);
            if ( v41 )
            {
              v42 = 1;
              if ( *(_WORD *)(a2 + 364) != -1 )
                v42 = *(_WORD *)(a2 + 366);
              if ( *(_WORD *)(a2 + 364) == -1 )
                v41 = 1;
              LOWORD(v72) = v42;
            }
            else
            {
              v41 = 1;
              LOWORD(v72) = 1;
            }
            v43 = sub_6F773B30(*(_DWORD *)(*(_DWORD *)(a2 + 104) + 28), 16, 0, v40, 0, &v75);
            v44 = v43;
            *(_DWORD *)(a2 + 32) = v43;
            result = v75;
            if ( !v75 )
            {
              v45 = 0;
              v70 = v41 >> 1;
              v46 = v44;
              v72 = (signed __int16)v72;
              v74 = v41;
              while ( 1 )
              {
                v47 = (int)&v46[16 * v45];
                result = (*(int (__cdecl **)(int, int, __int16 *))(v67 + 108))(a2, v45, (__int16 *)&v76);
                v75 = result;
                if ( result )
                  break;
                v48 = v76;
                ++v45;
                *(_WORD *)v47 = v78 >> 6;
                *(_DWORD *)(v47 + 8) = v48 << 6;
                *(_WORD *)(v47 + 2) = (v70 + v48 * v72) / v74;
                v49 = v77 << 6;
                *(_DWORD *)(v47 + 12) = v49;
                *(_DWORD *)(v47 + 4) = v49;
                if ( v40 == v45 )
                {
                  v50 = *(_DWORD *)(a2 + 8);
                  *(_DWORD *)(a2 + 28) = v40;
                  v51 = v50 | 2;
                  *(_DWORD *)(a2 + 8) = v51;
                  goto LABEL_129;
                }
                v46 = *(char **)(a2 + 32);
              }
            }
          }
          else
          {
            v51 = *(_DWORD *)(a2 + 8);
LABEL_129:
            if ( !(*(_BYTE *)(a2 + 8) & 3) )
            {
              v51 |= 1u;
              *(_DWORD *)(a2 + 8) = v51;
            }
            if ( v51 & 1 )
            {
              v52 = *(_WORD *)(a2 + 220);
              v53 = *(_WORD *)(a2 + 222);
              *(_DWORD *)(a2 + 52) = *(_WORD *)(a2 + 196);
              v54 = *(_WORD *)(a2 + 198);
              *(_WORD *)(a2 + 70) = v52;
              *(_WORD *)(a2 + 72) = v53;
              *(_DWORD *)(a2 + 56) = v54;
              *(_DWORD *)(a2 + 60) = *(_WORD *)(a2 + 200);
              *(_DWORD *)(a2 + 64) = *(_WORD *)(a2 + 202);
              *(_WORD *)(a2 + 68) = *(_WORD *)(a2 + 178);
              v55 = *(_WORD *)(a2 + 224) + v52 - v53;
              *(_WORD *)(a2 + 74) = v55;
              if ( !(v53 | v52) && *(_WORD *)(a2 + 364) != -1 )
              {
                v56 = *(_WORD *)(a2 + 434);
                v57 = *(_WORD *)(a2 + 436);
                if ( v56 || v57 )
                {
                  *(_WORD *)(a2 + 70) = v56;
                  v66 = *(_WORD *)(a2 + 438) + v56;
                  *(_WORD *)(a2 + 72) = v57;
                  v55 = v66 - v57;
                  *(_WORD *)(a2 + 74) = v55;
                }
                else
                {
                  v58 = *(_WORD *)(a2 + 442);
                  v59 = *(_WORD *)(a2 + 440);
                  v60 = v58;
                  v55 = v59 + v58;
                  *(_WORD *)(a2 + 70) = v59;
                  *(_WORD *)(a2 + 74) = v55;
                  *(_WORD *)(a2 + 72) = -v60;
                }
              }
              v13 = *(_BYTE *)(a2 + 292) == 0;
              *(_WORD *)(a2 + 76) = *(_WORD *)(a2 + 226);
              if ( !v13 )
                v55 = *(_WORD *)(a2 + 306);
              v61 = *(_WORD *)(a2 + 478);
              *(_WORD *)(a2 + 78) = v55;
              v62 = *(_WORD *)(a2 + 476);
              *(_WORD *)(a2 + 82) = v61;
              *(_WORD *)(a2 + 80) = v62 - v61 / 2;
            }
            result = v75;
          }
          return result;
        }
        v25 = *(_DWORD *)(a2 + 40);
        v26 = v25 + 4 * v24;
        while ( 1 )
        {
          v28 = *(_DWORD *)v25;
          v29 = *(_WORD *)(*(_DWORD *)v25 + 8);
          v30 = *(_WORD *)(*(_DWORD *)v25 + 10);
          if ( !(v29 & 0xFFFD) )
            goto LABEL_65;
          if ( v29 == 1 )
          {
            if ( *(_WORD *)(*(_DWORD *)v25 + 10) )
              v27 = 0;
            else
              v27 = 1634889070;
            goto LABEL_63;
          }
          v27 = 0;
          if ( v29 == 3 )
            break;
LABEL_63:
          v25 += 4;
          *(_DWORD *)(v28 + 4) = v27;
          if ( v25 == v26 )
            goto LABEL_116;
        }
        if ( !*(_WORD *)(*(_DWORD *)v25 + 10) )
        {
          v27 = 1937337698;
          goto LABEL_63;
        }
        if ( v30 != 10 && v30 != 1 )
        {
          switch ( v30 )
          {
            case 2:
              v27 = 1936353651;
              break;
            case 3:
              v27 = 1734484000;
              break;
            case 4:
              v27 = 1651074869;
              break;
            case 5:
              v27 = 2002873971;
              break;
            case 6:
              v27 = 1785686113;
              break;
          }
          goto LABEL_63;
        }
LABEL_65:
        v27 = 1970170211;
        goto LABEL_63;
      }
      v33 = (_DWORD *)(a2 + 24);
LABEL_77:
      result = sub_6F7A0D80(a2, 2, v33);
      v75 = result;
      if ( result )
        return result;
      goto LABEL_29;
    }
  }
  return result;
}
