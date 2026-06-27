signed int __usercall sub_6F73AB30@<eax>(signed int a1@<eax>, int a2@<edx>)
{
  int v2; // eax@1
  int v3; // edx@1
  _DWORD *v4; // ebp@1
  unsigned __int8 v5; // bl@1
  int v6; // ST70_4@1
  signed int result; // eax@1
  int v8; // edi@3
  int v9; // ebp@3
  bool v10; // cl@5
  int v11; // ecx@14
  int v12; // edi@15
  int v13; // edi@22
  int v14; // ebx@37
  int v15; // ebx@41
  int v16; // eax@44
  int v17; // ebp@51
  double v18; // st6@57
  int v19; // esi@59
  int v20; // edi@59
  int v21; // ebx@59
  int v22; // esi@61
  signed int v23; // ebp@61
  int v24; // ecx@61
  int v25; // edi@61
  int v26; // ebx@62
  signed int v27; // ebp@63
  signed int v28; // ebx@83
  int v29; // edi@84
  int v30; // edx@84
  signed int v31; // ebx@100
  int v32; // ebx@116
  int v33; // ebx@116
  signed int v34; // edi@118
  int v35; // esi@118
  int v36; // ebp@118
  int v37; // ebx@119
  int v38; // esi@120
  int v39; // ebx@138
  int v40; // esi@147
  signed int v41; // edi@147
  int v42; // ebx@148
  int v43; // esi@149
  int v44; // ebx@167
  int v45; // esi@169
  signed int v46; // ebp@169
  int v47; // ecx@169
  int v48; // edi@169
  int v49; // ebx@177
  signed int v50; // ebp@178
  int v51; // [sp+34h] [bp-3Ch]@14
  int v52; // [sp+34h] [bp-3Ch]@37
  int v53; // [sp+34h] [bp-3Ch]@169
  int v54; // [sp+34h] [bp-3Ch]@206
  signed int v55; // [sp+38h] [bp-38h]@14
  int v56; // [sp+38h] [bp-38h]@67
  int v57; // [sp+38h] [bp-38h]@76
  int v58; // [sp+38h] [bp-38h]@174
  int v59; // [sp+38h] [bp-38h]@182
  int v60; // [sp+38h] [bp-38h]@198
  int v61; // [sp+38h] [bp-38h]@214
  int v62; // [sp+3Ch] [bp-34h]@1
  signed int v63; // [sp+40h] [bp-30h]@22
  int v64; // [sp+40h] [bp-30h]@60
  signed int v65; // [sp+40h] [bp-30h]@116
  int v66; // [sp+40h] [bp-30h]@138
  int v67; // [sp+40h] [bp-30h]@167
  int v68; // [sp+44h] [bp-2Ch]@1
  signed int v69; // [sp+48h] [bp-28h]@1
  int v70; // [sp+4Ch] [bp-24h]@1
  int v71; // [sp+50h] [bp-20h]@14
  int v72; // [sp+50h] [bp-20h]@59
  int v73; // [sp+50h] [bp-20h]@117
  int v74; // [sp+50h] [bp-20h]@139
  int v75; // [sp+50h] [bp-20h]@167
  int v76; // [sp+54h] [bp-1Ch]@14
  int v77; // [sp+54h] [bp-1Ch]@22
  int v78; // [sp+54h] [bp-1Ch]@116
  int v79; // [sp+54h] [bp-1Ch]@138
  int v80; // [sp+58h] [bp-18h]@1
  int v81; // [sp+5Ch] [bp-14h]@1
  int v82; // [sp+60h] [bp-10h]@1
  int v83; // [sp+64h] [bp-Ch]@2
  __int16 v84; // [sp+6Ah] [bp-6h]@1
  int v85; // [sp+70h] [bp+0h]@1
  int v86; // [sp+74h] [bp+4h]@1
  int v87; // [sp+78h] [bp+8h]@1
  int v88; // [sp+7Ch] [bp+Ch]@1

  v70 = a2;
  v69 = a1;
  v68 = dword_6FBB52F4 * dword_6FBBDBA0;
  v82 = dword_6FBB52F4 * dword_6FBBDB98;
  v80 = dword_6FBB52F8 * dword_6FBBDB9C;
  v81 = dword_6FBB52F8 * dword_6FBBDBA4;
  v2 = (signed __int16)((signed __int16)(32 * word_70041E80) >> 5);
  v87 = dword_6FBB52F4 * (signed __int16)((signed __int16)(32 * word_70041E84) >> 5);
  v3 = (signed __int16)((signed __int16)(32 * word_70041E82) >> 5);
  v88 = v2 * dword_6FBB52F4;
  v4 = (_DWORD *)(32 * (unsigned __int16)word_70041E86);
  LOWORD(v4) = (signed __int16)v4 >> 5;
  v86 = v3 * dword_6FBB52F8;
  v84 = dword_70041E70;
  v5 = BYTE2(dword_70041E70);
  v6 = dword_6FBB52F8 * (signed __int16)v4;
  sub_6F733480(v2, v3, &v88, &v86);
  result = sub_6F733480(
             (signed __int16)((signed __int16)(32 * word_70041E84) >> 5),
             (signed __int16)(32 * word_70041E86) >> 5,
             &v87,
             v4);
  v88 += dword_6FBB52F4 * dword_6FBBDB90;
  v87 += dword_6FBB52F4 * dword_6FBBDB90;
  v86 += dword_6FBB52F8 * dword_6FBBDB94;
  v85 = dword_6FBB52F8 * dword_6FBBDB94 + v6;
  v62 = dword_6FBB52F8 - 1;
  if ( dword_6FBB52F8 )
  {
    v83 = v5;
    while ( 1 )
    {
      v8 = dword_6FBB52F4;
      v9 = dword_6FBB52F4 - 1;
      if ( dword_6FBB52F4 )
        break;
LABEL_53:
      if ( --v62 == -1 )
        return result;
    }
    while ( 1 )
    {
      result = (v9 + v8 * v62) / v69;
      if ( (v9 + v8 * v62) % v69 != v70 )
        goto LABEL_11;
      v51 = v88 + v9;
      v55 = v86 + v62;
      v76 = v85 + v62;
      v71 = v85 - v86;
      v11 = v87 - v88;
      if ( v87 == v88 )
      {
        result = v68;
        v10 = v51 < v68 && v51 >= v82;
        if ( v85 == v86 )
        {
          if ( v10 && v55 >= v80 && v55 < v81 )
          {
            result = sub_6F71F0C0(v55);
            if ( result )
              result = dword_6FBB5058(
                         dword_6FBB5068 + 2 * ((v55 << 10) * v8 + v51),
                         dword_6FBB505C + 4 * ((v55 << 10) * v8 + v51),
                         v51,
                         v55,
                         (unsigned __int8)v84,
                         HIBYTE(v84),
                         v83,
                         0,
                         0);
          }
        }
        else
        {
          if ( v85 - v86 <= 0 )
          {
            v76 = v86 + v62;
            v55 = v85 + v62;
          }
          if ( v10 )
          {
            v28 = v55;
            if ( v55 <= v76 )
            {
              result = HIBYTE(v84);
              v29 = v76 + 1;
              v30 = ((_BYTE)v76 - (_BYTE)v55 + 1) & 3;
              if ( !(((_BYTE)v76 - (_BYTE)v55 + 1) & 3) )
                goto LABEL_234;
              if ( v30 != 1 )
              {
                if ( v30 != 2 )
                {
                  if ( v80 <= v55 && v81 > v55 && sub_6F71F0C0(v55) )
                    dword_6FBB5058(
                      dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                      dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                      v51,
                      v55,
                      (unsigned __int8)v84,
                      HIBYTE(v84),
                      v83,
                      0,
                      0);
                  ++v55;
                }
                if ( v80 <= v55 && v81 > v55 && sub_6F71F0C0(v55) )
                  dword_6FBB5058(
                    dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                    dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                    v51,
                    v55,
                    (unsigned __int8)v84,
                    HIBYTE(v84),
                    v83,
                    0,
                    0);
                ++v55;
              }
              if ( v80 <= v55 && v81 > v55 && sub_6F71F0C0(v55) )
                dword_6FBB5058(
                  dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                  dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                  v51,
                  v55,
                  (unsigned __int8)v84,
                  HIBYTE(v84),
                  v83,
                  0,
                  0);
              result = v55 + 1;
              v28 = v55 + 1;
              if ( v55 + 1 != v29 )
              {
LABEL_234:
                do
                {
                  if ( v80 <= v28 && v81 > v28 )
                  {
                    result = sub_6F71F0C0(v28);
                    if ( result )
                      result = dword_6FBB5058(
                                 dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v28 << 10)),
                                 dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v28 << 10)),
                                 v51,
                                 v28,
                                 (unsigned __int8)v84,
                                 HIBYTE(v84),
                                 v83,
                                 0,
                                 0);
                  }
                  v31 = v28 + 1;
                  if ( v80 <= v31 && v81 > v31 )
                  {
                    result = sub_6F71F0C0(v31);
                    if ( result )
                      result = dword_6FBB5058(
                                 dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v31 << 10)),
                                 dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v31 << 10)),
                                 v51,
                                 v31,
                                 (unsigned __int8)v84,
                                 HIBYTE(v84),
                                 v83,
                                 0,
                                 0);
                  }
                  if ( v80 <= v31 + 1 && v81 > v31 + 1 )
                  {
                    result = sub_6F71F0C0(v31 + 1);
                    if ( result )
                      result = dword_6FBB5058(
                                 dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * ((v31 + 1) << 10)),
                                 dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * ((v31 + 1) << 10)),
                                 v51,
                                 v31 + 1,
                                 (unsigned __int8)v84,
                                 HIBYTE(v84),
                                 v83,
                                 0,
                                 0);
                  }
                  if ( v80 <= v31 + 2 && v81 > v31 + 2 )
                  {
                    result = sub_6F71F0C0(v31 + 2);
                    if ( result )
                      result = dword_6FBB5058(
                                 dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * ((v31 + 2) << 10)),
                                 dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * ((v31 + 2) << 10)),
                                 v51,
                                 v31 + 2,
                                 (unsigned __int8)v84,
                                 HIBYTE(v84),
                                 v83,
                                 0,
                                 0);
                  }
                  v28 = v31 + 3;
                }
                while ( v28 != v29 );
              }
            }
          }
        }
LABEL_11:
        if ( --v9 == -1 )
          goto LABEL_53;
        goto LABEL_12;
      }
      v12 = v9 + v87;
      if ( v85 == v86 )
        break;
      if ( v11 < 0 )
      {
        v51 = v9 + v87;
        v11 = v88 - v87;
        v71 = v86 - v85;
        v12 = v88 + v9;
        v76 = v86 + v62;
        v55 = v85 + v62;
      }
      result = v71;
      v18 = (double)v71 / (double)v11;
      if ( v18 >= 0.0 )
      {
        if ( v18 <= 1.0 )
        {
          v79 = 2 * v71;
          v39 = 2 * v71 - v11;
          v66 = 2 * (v71 - v11);
          if ( v51 > v12 )
            goto LABEL_11;
          result = v12 + 1;
          v74 = v12 + 1;
          if ( !(((_BYTE)v12 - (_BYTE)v51) & 1) )
          {
            if ( v82 <= v51 && v68 > v51 && v80 <= v55 && v81 > v55 )
            {
              result = sub_6F71F0C0(v55);
              if ( result )
                result = dword_6FBB5058(
                           dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                           dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                           v51,
                           v55,
                           (unsigned __int8)v84,
                           HIBYTE(v84),
                           v83,
                           0,
                           0);
            }
            if ( v39 < 0 )
            {
              v39 += v79;
            }
            else
            {
              ++v55;
              v39 += v66;
            }
            if ( ++v51 == v74 )
              goto LABEL_11;
          }
          v40 = v51;
          v41 = v55;
          v52 = v9;
          do
          {
            if ( v82 <= v40 && v68 > v40 && v80 <= v41 && v81 > v41 )
            {
              result = sub_6F71F0C0(v41);
              if ( result )
                result = dword_6FBB5058(
                           dword_6FBB5068 + 2 * (v40 + dword_6FBB52F4 * (v41 << 10)),
                           dword_6FBB505C + 4 * (v40 + dword_6FBB52F4 * (v41 << 10)),
                           v40,
                           v41,
                           (unsigned __int8)v84,
                           HIBYTE(v84),
                           v83,
                           0,
                           0);
            }
            if ( v39 >= 0 )
            {
              v42 = v66 + v39;
              ++v41;
            }
            else
            {
              v42 = v79 + v39;
            }
            v43 = v40 + 1;
            if ( v82 <= v43 && v68 > v43 && v80 <= v41 && v81 > v41 )
            {
              result = sub_6F71F0C0(v41);
              if ( result )
                result = dword_6FBB5058(
                           dword_6FBB5068 + 2 * (v43 + dword_6FBB52F4 * (v41 << 10)),
                           dword_6FBB505C + 4 * (v43 + dword_6FBB52F4 * (v41 << 10)),
                           v43,
                           v41,
                           (unsigned __int8)v84,
                           HIBYTE(v84),
                           v83,
                           0,
                           0);
            }
            if ( v42 < 0 )
            {
              v39 = v79 + v42;
            }
            else
            {
              v39 = v66 + v42;
              ++v41;
            }
            v40 = v43 + 1;
          }
          while ( v40 != v74 );
        }
        else
        {
          v19 = v11 - v71;
          v72 = 2 * v11;
          v20 = 2 * v19;
          v21 = 2 * v11 - result;
          if ( v55 > v76 )
            goto LABEL_11;
          v64 = v76 + 1;
          result = v76 - v55;
          if ( ((_BYTE)v76 - (_BYTE)v55) & 1 )
          {
            v22 = v51;
            v52 = v9;
            v23 = v55;
            v24 = v20;
            v25 = v82;
          }
          else
          {
            if ( v82 <= v51 && v68 > v51 && v80 <= v55 && v81 > v55 && sub_6F71F0C0(v55) )
              dword_6FBB5058(
                dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                v51,
                v55,
                (unsigned __int8)v84,
                HIBYTE(v84),
                v83,
                0,
                0);
            if ( v21 <= 0 )
            {
              v21 += v72;
            }
            else
            {
              ++v51;
              v21 += v20;
            }
            v60 = v55 + 1;
            result = v76 + 1;
            if ( v60 == v64 )
              goto LABEL_11;
            v22 = v51;
            v24 = v20;
            v25 = v82;
            v52 = v9;
            v23 = v60;
          }
          do
          {
            if ( v25 <= v22 && v68 > v22 && v80 <= v23 && v81 > v23 )
            {
              v57 = v24;
              result = sub_6F71F0C0(v23);
              v24 = v57;
              if ( result )
              {
                result = dword_6FBB5058(
                           dword_6FBB5068 + 2 * (v22 + dword_6FBB52F4 * (v23 << 10)),
                           dword_6FBB505C + 4 * (v22 + dword_6FBB52F4 * (v23 << 10)),
                           v22,
                           v23,
                           (unsigned __int8)v84,
                           HIBYTE(v84),
                           v83,
                           0,
                           0);
                v24 = v57;
              }
            }
            if ( v21 > 0 )
            {
              v26 = v24 + v21;
              ++v22;
            }
            else
            {
              v26 = v72 + v21;
            }
            v27 = v23 + 1;
            if ( v25 <= v22 && v68 > v22 && v80 <= v27 && v81 > v27 )
            {
              v56 = v24;
              result = sub_6F71F0C0(v27);
              v24 = v56;
              if ( result )
              {
                result = dword_6FBB5058(
                           dword_6FBB5068 + 2 * (v22 + dword_6FBB52F4 * (v27 << 10)),
                           dword_6FBB505C + 4 * (v22 + dword_6FBB52F4 * (v27 << 10)),
                           v22,
                           v27,
                           (unsigned __int8)v84,
                           HIBYTE(v84),
                           v83,
                           0,
                           0);
                v24 = v56;
              }
            }
            if ( v26 <= 0 )
            {
              v21 = v72 + v26;
            }
            else
            {
              v21 = v24 + v26;
              ++v22;
            }
            v23 = v27 + 1;
          }
          while ( v23 != v64 );
        }
        goto LABEL_51;
      }
      result = v55 - v76;
      if ( -1.0 <= v18 )
      {
        v32 = 2 * result;
        result = 2 * (result - v11);
        v78 = v32;
        v33 = v32 - v11;
        v65 = result;
        if ( v51 > v12 )
          goto LABEL_11;
        result = HIBYTE(v84);
        v73 = v12 + 1;
        if ( ((_BYTE)v12 - (_BYTE)v51) & 1 )
        {
          v34 = v55;
          v35 = v51;
          v52 = v9;
          v36 = v82;
        }
        else
        {
          if ( v82 <= v51 && v68 > v51 && v80 <= v55 && v81 > v55 )
          {
            result = sub_6F71F0C0(v55);
            if ( result )
              result = dword_6FBB5058(
                         dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                         dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                         v51,
                         v55,
                         (unsigned __int8)v84,
                         HIBYTE(v84),
                         v83,
                         0,
                         0);
          }
          if ( v33 < 0 )
          {
            v33 += v78;
          }
          else
          {
            --v55;
            v33 += v65;
          }
          v54 = v51 + 1;
          if ( v54 == v73 )
            goto LABEL_11;
          v35 = v54;
          v34 = v55;
          v52 = v9;
          v36 = v82;
        }
        do
        {
          if ( v36 <= v35 && v68 > v35 && v80 <= v34 && v81 > v34 )
          {
            result = sub_6F71F0C0(v34);
            if ( result )
              result = dword_6FBB5058(
                         dword_6FBB5068 + 2 * (v35 + dword_6FBB52F4 * (v34 << 10)),
                         dword_6FBB505C + 4 * (v35 + dword_6FBB52F4 * (v34 << 10)),
                         v35,
                         v34,
                         (unsigned __int8)v84,
                         HIBYTE(v84),
                         v83,
                         0,
                         0);
          }
          if ( v33 >= 0 )
          {
            v37 = v65 + v33;
            --v34;
          }
          else
          {
            v37 = v78 + v33;
          }
          v38 = v35 + 1;
          if ( v36 <= v38 && v68 > v38 && v80 <= v34 && v81 > v34 )
          {
            result = sub_6F71F0C0(v34);
            if ( result )
              result = dword_6FBB5058(
                         dword_6FBB5068 + 2 * (v38 + dword_6FBB52F4 * (v34 << 10)),
                         dword_6FBB505C + 4 * (v38 + dword_6FBB52F4 * (v34 << 10)),
                         v38,
                         v34,
                         (unsigned __int8)v84,
                         HIBYTE(v84),
                         v83,
                         0,
                         0);
          }
          if ( v37 < 0 )
          {
            v33 = v78 + v37;
          }
          else
          {
            v33 = v65 + v37;
            --v34;
          }
          v35 = v38 + 1;
        }
        while ( v35 != v73 );
        goto LABEL_51;
      }
      v75 = 2 * v11;
      v44 = 2 * v11 - result;
      v67 = 2 * (v11 - result);
      if ( v55 < v76 )
        goto LABEL_11;
      result = v55 - (v76 - 1);
      if ( ((_BYTE)v55 - ((_BYTE)v76 - 1)) & 1 )
      {
        if ( v82 <= v51 && v68 > v51 && v80 <= v55 && v81 > v55 )
        {
          result = sub_6F71F0C0(v55);
          if ( result )
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                       dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * (v55 << 10)),
                       v51,
                       v55,
                       (unsigned __int8)v84,
                       HIBYTE(v84),
                       v83,
                       0,
                       0);
        }
        if ( v44 <= 0 )
        {
          v44 += v75;
        }
        else
        {
          ++v51;
          v44 += v67;
        }
        v61 = v55 - 1;
        if ( v61 == v76 - 1 )
          goto LABEL_11;
        v45 = v51;
        v47 = v76 - 1;
        v48 = v82;
        v53 = v9;
        v46 = v61;
      }
      else
      {
        v45 = v51;
        v53 = v9;
        v46 = v55;
        v47 = v76 - 1;
        v48 = v82;
      }
      do
      {
        if ( v48 <= v45 && v68 > v45 && v80 <= v46 && v81 > v46 )
        {
          v58 = v47;
          result = sub_6F71F0C0(v46);
          v47 = v58;
          if ( result )
          {
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v45 + dword_6FBB52F4 * (v46 << 10)),
                       dword_6FBB505C + 4 * (v45 + dword_6FBB52F4 * (v46 << 10)),
                       v45,
                       v46,
                       (unsigned __int8)v84,
                       HIBYTE(v84),
                       v83,
                       0,
                       0);
            v47 = v58;
          }
        }
        if ( v44 <= 0 )
        {
          v49 = v75 + v44;
        }
        else
        {
          v49 = v67 + v44;
          ++v45;
        }
        v50 = v46 - 1;
        if ( v48 <= v45 && v68 > v45 && v80 <= v50 && v81 > v50 )
        {
          v59 = v47;
          result = sub_6F71F0C0(v50);
          v47 = v59;
          if ( result )
          {
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v45 + dword_6FBB52F4 * (v50 << 10)),
                       dword_6FBB505C + 4 * (v45 + dword_6FBB52F4 * (v50 << 10)),
                       v45,
                       v50,
                       (unsigned __int8)v84,
                       HIBYTE(v84),
                       v83,
                       0,
                       0);
            v47 = v59;
          }
        }
        if ( v49 <= 0 )
        {
          v44 = v75 + v49;
        }
        else
        {
          v44 = v67 + v49;
          ++v45;
        }
        v46 = v50 - 1;
      }
      while ( v46 != v47 );
      v17 = v53;
LABEL_52:
      v9 = v17 - 1;
      if ( v9 == -1 )
        goto LABEL_53;
LABEL_12:
      v8 = dword_6FBB52F4;
    }
    if ( v11 <= 0 )
    {
      v51 = v9 + v87;
      v12 = v88 + v9;
    }
    result = v86 + v62;
    if ( v55 < v80 )
      goto LABEL_11;
    if ( v55 >= v81 )
      goto LABEL_11;
    result = sub_6F71F0C0(v55);
    if ( !result || v51 > v12 )
      goto LABEL_11;
    v77 = v12 + 1;
    result = v55 << 10;
    v63 = v55 << 10;
    v13 = ((_BYTE)v12 - (_BYTE)v51 + 1) & 3;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        if ( v13 != 2 )
        {
          if ( v82 <= v51 && v68 > v51 )
            result = dword_6FBB5058(
                       dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * v63),
                       dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * v63),
                       v51,
                       v55,
                       (unsigned __int8)v84,
                       HIBYTE(v84),
                       v83,
                       0,
                       0);
          ++v51;
        }
        if ( v82 <= v51 && v68 > v51 )
          result = dword_6FBB5058(
                     dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * v63),
                     dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * v63),
                     v51,
                     v55,
                     (unsigned __int8)v84,
                     HIBYTE(v84),
                     v83,
                     0,
                     0);
        ++v51;
      }
      if ( v82 <= v51 && v68 > v51 )
        result = dword_6FBB5058(
                   dword_6FBB5068 + 2 * (v51 + dword_6FBB52F4 * v63),
                   dword_6FBB505C + 4 * (v51 + dword_6FBB52F4 * v63),
                   v51,
                   v55,
                   (unsigned __int8)v84,
                   HIBYTE(v84),
                   v83,
                   0,
                   0);
      if ( ++v51 == v77 )
        goto LABEL_11;
    }
    v14 = v51;
    v52 = v9;
    do
    {
      if ( v82 <= v14 && v68 > v14 )
        dword_6FBB5058(
          dword_6FBB5068 + 2 * (v14 + dword_6FBB52F4 * v63),
          dword_6FBB505C + 4 * (v14 + dword_6FBB52F4 * v63),
          v14,
          v55,
          (unsigned __int8)v84,
          HIBYTE(v84),
          v83,
          0,
          0);
      v15 = v14 + 1;
      if ( v82 <= v15 && v68 > v15 )
        dword_6FBB5058(
          dword_6FBB5068 + 2 * (v15 + dword_6FBB52F4 * v63),
          dword_6FBB505C + 4 * (v15 + dword_6FBB52F4 * v63),
          v15,
          v55,
          (unsigned __int8)v84,
          HIBYTE(v84),
          v83,
          0,
          0);
      v16 = v15 + 1;
      if ( v82 <= v15 + 1 && v68 > v16 )
        dword_6FBB5058(
          dword_6FBB5068 + 2 * (v16 + dword_6FBB52F4 * v63),
          dword_6FBB505C + 4 * (v16 + dword_6FBB52F4 * v63),
          v15 + 1,
          v55,
          (unsigned __int8)v84,
          HIBYTE(v84),
          v83,
          0,
          0);
      result = v15 + 2;
      if ( v82 <= v15 + 2 && v68 > result )
        result = dword_6FBB5058(
                   dword_6FBB5068 + 2 * (result + dword_6FBB52F4 * v63),
                   dword_6FBB505C + 4 * (result + dword_6FBB52F4 * v63),
                   v15 + 2,
                   v55,
                   (unsigned __int8)v84,
                   HIBYTE(v84),
                   v83,
                   0,
                   0);
      v14 = v15 + 3;
    }
    while ( v14 != v77 );
LABEL_51:
    v17 = v52;
    goto LABEL_52;
  }
  return result;
}
