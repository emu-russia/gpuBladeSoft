int __cdecl sub_6F7961E0(int a1)
{
  int result; // eax@1
  _BYTE *v2; // esi@2
  bool v3; // zf@3
  const char *v4; // edi@5
  signed int v5; // ecx@5
  const char *v6; // eax@10
  const char *v7; // esi@10
  char v8; // bl@11
  size_t v9; // edi@11
  int v10; // ebp@11
  char *v11; // eax@12
  const char *v12; // eax@21
  const char *v13; // esi@21
  char v14; // bl@22
  size_t v15; // edi@22
  int v16; // ebp@22
  char *v17; // eax@23
  int v18; // eax@31
  int *v19; // ebx@32
  signed int v20; // edi@32
  int v21; // ebp@32
  int v22; // edx@35
  void *v23; // eax@36
  size_t v24; // edx@36
  signed int v25; // eax@41
  unsigned int v26; // ecx@43
  _BYTE *v27; // eax@43
  int v28; // esi@44
  int v29; // edx@46
  _BYTE *v30; // eax@60
  unsigned int v31; // ecx@60
  int v32; // edx@63
  int v33; // esi@69
  signed int v34; // eax@70
  bool v35; // zf@70
  signed int v36; // ebx@72
  const char *v37; // eax@73
  unsigned int v38; // eax@74
  int v39; // edi@80
  signed int v40; // eax@81
  bool v41; // zf@81
  signed int v42; // ebx@83
  const char *v43; // eax@84
  signed int v44; // ebp@85
  int v45; // esi@87
  int v46; // eax@87
  int v47; // eax@91
  size_t v48; // ebx@93
  int v49; // edi@95
  int v50; // ebx@97
  unsigned int v51; // ecx@97
  _BYTE *v52; // eax@97
  char v53; // si@102
  char *v54; // eax@103
  int v55; // ebx@105
  const char *v56; // eax@106
  const char *v57; // edi@106
  size_t v58; // ebp@107
  char v59; // dl@107
  int v60; // edx@111
  int v61; // edx@118
  int v62; // edx@123
  int v63; // edx@136
  int v64; // eax@142
  int v65; // edi@146
  int v66; // esi@156
  int v67; // edx@161
  int v68; // eax@161
  int v69; // esi@172
  bool v70; // al@177
  bool v71; // zf@177
  int (__cdecl *v72)(int, int, _DWORD); // eax@181
  int v73; // edx@183
  int v74; // eax@183
  const char *v75; // edi@193
  signed int v76; // ecx@193
  int v77; // [sp+20h] [bp-6Ch]@1
  int v78; // [sp+24h] [bp-68h]@2
  signed int v79; // [sp+28h] [bp-64h]@9
  size_t v80; // [sp+2Ch] [bp-60h]@36
  size_t v81; // [sp+3Ch] [bp-50h]@2
  const void *v82; // [sp+40h] [bp-4Ch]@21
  size_t v83; // [sp+44h] [bp-48h]@36
  int v84; // [sp+48h] [bp-44h]@30
  int v85; // [sp+4Ch] [bp-40h]@51
  int v86; // [sp+50h] [bp-3Ch]@32
  int v87; // [sp+54h] [bp-38h]@88
  int v88; // [sp+58h] [bp-34h]@32
  int v89; // [sp+5Ch] [bp-30h]@89
  int v90; // [sp+60h] [bp-2Ch]@32
  int v91; // [sp+64h] [bp-28h]@91
  int v92; // [sp+68h] [bp-24h]@38
  int v93; // [sp+6Ch] [bp-20h]@147

  v77 = *(_DWORD *)(a1 + 8);
  result = 6;
  if ( !v77 )
    return result;
  v78 = *(_DWORD *)a1;
  v2 = sub_6F792C60(a1, &v81);
  result = 2;
  if ( !v2 )
    return result;
  v3 = v81 == 16;
  if ( v81 != 16 )
    return result;
  v4 = "StartFontMetrics";
  v5 = 16;
  do
  {
    if ( !v5 )
      break;
    v3 = *v2++ == *v4++;
    --v5;
  }
  while ( v3 );
  if ( !v3 )
    return result;
  v79 = 160;
LABEL_10:
  while ( 2 )
  {
    v6 = sub_6F792C60(a1, &v81);
    v7 = v6;
    if ( !v6 )
      goto LABEL_31;
    v8 = *v6;
    v9 = v81;
    v10 = 0;
    while ( 1 )
    {
      v11 = off_6FB58F00[v10];
      if ( *v11 == v8 )
        break;
      if ( ++v10 == 74 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      result = strncmp(v11, v7, v9);
      if ( !result )
        break;
      if ( ++v10 != 74 )
      {
        v11 = off_6FB58F00[v10];
        if ( *v11 == v8 )
          continue;
      }
      goto LABEL_10;
    }
    switch ( v10 )
    {
      case 20:
        return result;
      default:
        continue;
      case 49:
LABEL_21:
        v12 = sub_6F792C60(a1, &v82);
        v13 = v12;
        if ( v12 )
        {
          v14 = *v12;
          v15 = (size_t)v82;
          v16 = 0;
          while ( 1 )
          {
            v17 = off_6FB58F00[v16];
            if ( *v17 == v14 )
              break;
            if ( ++v16 == 74 )
              goto LABEL_21;
          }
          while ( 1 )
          {
            result = strncmp(v17, v13, v15);
            if ( !result )
              break;
            if ( ++v16 != 74 )
            {
              v17 = off_6FB58F00[v16];
              if ( *v17 == v14 )
                continue;
            }
            goto LABEL_21;
          }
          switch ( v16 )
          {
            case 20:
            case 21:
              return result;
            case 53:
              v84 = 3;
              v33 = *(_DWORD *)(a1 + 8);
              if ( sub_6F792580(a1, &v84) != 1 )
                goto LABEL_78;
              v34 = v85;
              v35 = v85 == 0;
              if ( v85 < 0 )
                goto LABEL_78;
              *(_DWORD *)(v33 + 32) = v85;
              if ( !v35 )
              {
                *(_DWORD *)(v33 + 28) = sub_6F773B30(*(_DWORD *)a1, 20, 0, v34, 0, &v84);
                v64 = v84;
                if ( v84 )
                  goto LABEL_143;
              }
              v36 = -1;
              break;
            default:
              goto LABEL_78;
            case 50:
            case 51:
              v84 = 3;
              v39 = *(_DWORD *)(a1 + 8);
              if ( sub_6F792580(a1, &v84) != 1 )
                goto LABEL_78;
              v40 = v85;
              v41 = v85 == 0;
              if ( v85 < 0 )
                goto LABEL_78;
              *(_DWORD *)(v39 + 40) = v85;
              if ( !v41 )
              {
                *(_DWORD *)(v39 + 36) = sub_6F773B30(*(_DWORD *)a1, 16, 0, v40, 0, &v84);
                v64 = v84;
                if ( v84 )
                {
LABEL_143:
                  v79 = v64;
                  goto LABEL_31;
                }
              }
              v42 = -1;
              while ( 2 )
              {
                v43 = sub_6F792C60(a1, &v83);
                if ( v43 )
                {
                  v44 = sub_6F7919B0(v43, v83);
                  switch ( v44 )
                  {
                    default:
                      goto LABEL_78;
                    case 75:
                      continue;
                    case 34:
                    case 36:
                    case 37:
                      if ( ++v42 >= *(_DWORD *)(v39 + 40) )
                        goto LABEL_78;
                      v45 = *(_DWORD *)(v39 + 36) + 16 * v42;
                      v84 = 5;
                      v86 = 5;
                      v88 = 3;
                      v90 = 3;
                      v46 = sub_6F792860(a1, (int)&v84, 4);
                      if ( v46 <= 2 )
                        goto LABEL_78;
                      *(_DWORD *)v45 = v85;
                      *(_DWORD *)(v45 + 4) = v87;
                      if ( v44 == 37 )
                      {
                        *(_DWORD *)(v45 + 8) = 0;
                        *(_DWORD *)(v45 + 12) = v89;
                      }
                      else
                      {
                        *(_DWORD *)(v45 + 8) = v89;
                        if ( v44 != 34 || v46 != 4 )
                          v47 = 0;
                        else
                          v47 = v91;
                        *(_DWORD *)(v45 + 12) = v47;
                      }
                      continue;
                    case 20:
                    case 21:
                    case 22:
                      v48 = v42 + 1;
                      *(_DWORD *)(v39 + 40) = v48;
                      qsort(*(void **)(v39 + 36), v48, 0x10u, (int (__cdecl *)(const void *, const void *))sub_6F7912A0);
                      break;
                  }
                  goto LABEL_21;
                }
                goto LABEL_78;
              }
          }
LABEL_73:
          do
          {
            v37 = sub_6F792C60(a1, &v83);
            if ( !v37 )
              break;
            v38 = sub_6F7919B0(v37, v83);
            if ( v38 == 23 )
              goto LABEL_20;
            if ( v38 <= 0x17 )
            {
              if ( v38 - 20 <= 1 )
              {
LABEL_20:
                *(_DWORD *)(v33 + 32) = v36 + 1;
                goto LABEL_21;
              }
              break;
            }
            if ( v38 == 56 )
            {
              if ( ++v36 < *(_DWORD *)(v33 + 32) )
              {
                v65 = *(_DWORD *)(v33 + 28) + 20 * v36;
                v84 = 3;
                v86 = 2;
                v88 = 2;
                v90 = 2;
                v92 = 2;
                if ( sub_6F792860(a1, (int)&v84, 5) == 5 )
                {
                  *(_DWORD *)v65 = v85;
                  *(_DWORD *)(v65 + 4) = v87;
                  *(_DWORD *)(v65 + 8) = v89;
                  *(_DWORD *)(v65 + 12) = v91;
                  *(_DWORD *)(v65 + 16) = v93;
                  goto LABEL_73;
                }
              }
              break;
            }
          }
          while ( v38 == 75 );
        }
LABEL_78:
        v79 = 160;
        goto LABEL_31;
      case 45:
        v84 = 3;
        if ( sub_6F792580(a1, &v84) != 1 )
          goto LABEL_31;
        v49 = v85;
LABEL_96:
        if ( v49 > 0 )
        {
          v50 = *(_DWORD *)(a1 + 4);
          v51 = *(_DWORD *)(v50 + 8);
          v52 = *(_BYTE **)v50;
          if ( *(_DWORD *)(v50 + 12) > 1 )
            goto LABEL_98;
          if ( *(_DWORD *)(v50 + 12) != 1 )
          {
            do
            {
              if ( (unsigned int)v52 >= v51 )
                goto LABEL_130;
              *(_DWORD *)v50 = ++v52;
              v62 = *(v52 - 1);
            }
            while ( v62 == 32 || v62 == 9 );
            if ( v62 == 13 || v62 == 10 )
            {
LABEL_98:
              while ( 2 )
              {
                *(_DWORD *)(v50 + 12) = 0;
                do
                {
                  if ( (unsigned int)v52 >= v51 )
                    goto LABEL_100;
                  *(_DWORD *)v50 = ++v52;
                  v60 = *(v52 - 1);
                }
                while ( v60 == 32 || v60 == 9 );
                if ( v60 == 13 || v60 == 10 )
                {
                  *(_DWORD *)(v50 + 12) = 2;
                  continue;
                }
                break;
              }
              if ( v60 == 59 )
              {
                *(_DWORD *)(v50 + 12) = 1;
              }
              else
              {
                if ( v60 == 26 )
                {
LABEL_100:
                  *(_DWORD *)(v50 + 12) = 3;
                  return 160;
                }
                v66 = (int)(v52 - 1);
                while ( 1 )
                {
                  if ( (unsigned int)v52 >= v51 )
                  {
LABEL_158:
                    *(_DWORD *)(v50 + 12) = 3;
                    goto LABEL_159;
                  }
                  v67 = (int)(v52 + 1);
                  *(_DWORD *)v50 = v52 + 1;
                  v68 = *v52;
                  if ( v68 == 32 || v68 == 9 )
                    goto LABEL_159;
                  if ( v68 == 13 || v68 == 10 )
                  {
                    *(_DWORD *)(v50 + 12) = 2;
                    if ( !v66 )
                    {
                      v52 = (_BYTE *)v67;
                      goto LABEL_98;
                    }
LABEL_160:
                    --v49;
                    goto LABEL_96;
                  }
                  if ( v68 == 59 )
                    break;
                  if ( v68 == 26 )
                    goto LABEL_158;
                  v52 = (_BYTE *)v67;
                }
                *(_DWORD *)(v50 + 12) = 1;
LABEL_159:
                if ( v66 )
                  goto LABEL_160;
              }
              return 160;
            }
            if ( v62 == 59 )
            {
              *(_DWORD *)(v50 + 12) = 1;
            }
            else if ( v62 == 26 )
            {
LABEL_130:
              v52 = *(_BYTE **)v50;
              goto LABEL_98;
            }
          }
          do
          {
            if ( (unsigned int)v52 >= v51 )
              break;
            *(_DWORD *)v50 = ++v52;
            v61 = *(v52 - 1);
            if ( v61 == 13 )
              break;
          }
          while ( v61 != 10 && v61 != 26 );
          goto LABEL_98;
        }
        do
        {
LABEL_106:
          v56 = sub_6F792C60(a1, &v84);
          v57 = v56;
          if ( !v56 )
            return 160;
          v58 = v84;
          v55 = 0;
          v59 = *v56;
          while ( 1 )
          {
            v54 = off_6FB58F00[v55];
            if ( *v54 == v59 )
              break;
            if ( ++v55 == 74 )
              goto LABEL_106;
          }
          v53 = *v57;
          while ( strncmp(v54, v57, v58) )
          {
            if ( ++v55 != 74 )
            {
              v54 = off_6FB58F00[v55];
              if ( *v54 == v53 )
                continue;
            }
            goto LABEL_106;
          }
        }
        while ( v55 != 17 && v55 != 20 );
        v79 = 0;
        continue;
      case 26:
        v84 = 2;
        v19 = &v84;
        v86 = 2;
        v88 = 2;
        v20 = 2;
        v90 = 2;
        v21 = *(_DWORD *)(a1 + 4);
        while ( 2 )
        {
          if ( !v20 )
          {
            v25 = *(_DWORD *)(v21 + 12);
            if ( v25 <= 0 )
            {
              v27 = *(_BYTE **)v21;
              v26 = *(_DWORD *)(v21 + 8);
              do
              {
                if ( (unsigned int)v27 >= v26 )
                  goto LABEL_62;
                *(_DWORD *)v21 = ++v27;
                v63 = *(v27 - 1);
              }
              while ( v63 == 32 || v63 == 9 );
              if ( v63 == 13 || v63 == 10 )
                goto LABEL_67;
              if ( v63 == 59 )
              {
                *(_DWORD *)(v21 + 12) = 1;
              }
              else if ( v63 == 26 )
              {
LABEL_62:
                *(_DWORD *)(v21 + 12) = 3;
                goto LABEL_31;
              }
            }
            else
            {
              if ( v25 > 1 )
                goto LABEL_31;
              v26 = *(_DWORD *)(v21 + 8);
              v27 = *(_BYTE **)v21;
            }
            v28 = (int)(v27 - 1);
            while ( 1 )
            {
              if ( v26 <= (unsigned int)v27 )
              {
LABEL_33:
                *(_DWORD *)(v21 + 12) = 3;
                goto LABEL_34;
              }
              *(_DWORD *)v21 = ++v27;
              v29 = *(v27 - 1);
              if ( v29 == 13 || v29 == 10 )
                break;
              if ( v29 == 26 )
                goto LABEL_33;
            }
            *(_DWORD *)(v21 + 12) = 2;
LABEL_34:
            v82 = (const void *)v28;
            if ( !v28 )
              goto LABEL_31;
            v22 = *(_DWORD *)v21 + ~v28;
LABEL_36:
            v80 = v22;
            v23 = (void *)sub_6F773AE0(*(_DWORD *)a1, v22 + 1, &v83);
            v24 = v83;
            v19[1] = (int)v23;
            if ( !v24 )
            {
              memcpy(v23, v82, v80);
              *(_BYTE *)(v19[1] + v80) = 0;
            }
LABEL_38:
            v19 += 2;
            if ( &v92 != v19 )
            {
              v20 = *v19;
              continue;
            }
            *(_DWORD *)(v77 + 4) = v85;
            *(_DWORD *)(v77 + 8) = v87;
            *(_DWORD *)(v77 + 12) = v89;
            *(_DWORD *)(v77 + 16) = v91;
            goto LABEL_10;
          }
          break;
        }
        if ( *(_DWORD *)(v21 + 12) > 0 )
          goto LABEL_31;
        v30 = *(_BYTE **)v21;
        v31 = *(_DWORD *)(v21 + 8);
        do
        {
          if ( v31 <= (unsigned int)v30 )
            goto LABEL_62;
          *(_DWORD *)v21 = ++v30;
          v32 = *(v30 - 1);
        }
        while ( v32 == 32 || v32 == 9 );
        if ( v32 == 13 || v32 == 10 )
        {
LABEL_67:
          *(_DWORD *)(v21 + 12) = 2;
          goto LABEL_31;
        }
        if ( v32 != 59 )
        {
          if ( v32 == 26 )
            goto LABEL_62;
          v69 = (int)(v30 - 1);
          while ( 1 )
          {
            if ( (unsigned int)v30 >= v31 )
            {
LABEL_174:
              *(_DWORD *)(v21 + 12) = 3;
              goto LABEL_175;
            }
            v73 = (int)(v30 + 1);
            *(_DWORD *)v21 = v30 + 1;
            v74 = *v30;
            if ( v74 == 32 || v74 == 9 )
              goto LABEL_175;
            if ( v74 == 13 || v74 == 10 )
            {
              *(_DWORD *)(v21 + 12) = 2;
              goto LABEL_175;
            }
            if ( v74 == 59 )
              break;
            if ( v74 == 26 )
              goto LABEL_174;
            v30 = (_BYTE *)v73;
          }
          *(_DWORD *)(v21 + 12) = 1;
LABEL_175:
          v82 = (const void *)v69;
          if ( !v69 )
            goto LABEL_31;
          v22 = *(_DWORD *)v21 + ~v69;
          switch ( v20 )
          {
            case 0:
            case 1:
              goto LABEL_36;
            case 4:
              v70 = 0;
              v71 = v22 == 4;
              if ( v22 == 4 )
              {
                v75 = "true";
                v76 = 4;
                do
                {
                  if ( !v76 )
                    break;
                  v71 = *(_BYTE *)v69++ == *v75++;
                  --v76;
                }
                while ( v71 );
                v70 = v71;
              }
              *((_BYTE *)v19 + 4) = v70;
              break;
            case 3:
              v19[1] = sub_6F791EC0((unsigned int *)&v82, (_BYTE *)(v69 + v22));
              break;
            case 2:
              v19[1] = sub_6F792040((_BYTE **)&v82, (_BYTE *)(v69 + v22), 0);
              break;
            case 5:
              v72 = *(int (__cdecl **)(int, int, _DWORD))(a1 + 12);
              if ( v72 )
                v19[1] = v72(v69, *(_DWORD *)v21 + ~v69, *(_DWORD *)(a1 + 16));
              else
                v19[1] = 0;
              break;
            default:
              goto LABEL_38;
          }
          goto LABEL_38;
        }
        *(_DWORD *)(v21 + 12) = 1;
LABEL_31:
        sub_6F773D90(v78, *(_DWORD *)(v77 + 28));
        v18 = *(_DWORD *)(v77 + 36);
        *(_DWORD *)(v77 + 28) = 0;
        *(_DWORD *)(v77 + 32) = 0;
        sub_6F773D90(v78, v18);
        *(_DWORD *)(v77 + 36) = 0;
        *(_DWORD *)(v77 + 40) = 0;
        *(_BYTE *)v77 = 0;
        return v79;
      case 40:
        v84 = 3;
        if ( sub_6F792580(a1, &v84) != 1 )
          goto LABEL_31;
        if ( !(v85 & 0xFFFFFFFD) )
          continue;
        v79 = 7;
        goto LABEL_31;
      case 0:
        v84 = 2;
        if ( sub_6F792580(a1, &v84) != 1 )
          goto LABEL_31;
        *(_DWORD *)(v77 + 20) = v85;
        continue;
      case 14:
        v84 = 2;
        if ( sub_6F792580(a1, &v84) != 1 )
          goto LABEL_31;
        *(_DWORD *)(v77 + 24) = v85;
        continue;
      case 30:
        v84 = 4;
        if ( sub_6F792580(a1, &v84) != 1 )
          goto LABEL_31;
        *(_BYTE *)v77 = v85;
        continue;
    }
  }
}
