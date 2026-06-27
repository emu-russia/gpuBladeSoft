int __cdecl sub_6F8AD210(__int16 a1, int a2, int a3, _BYTE *a4, const char **a5)
{
  _BYTE *v5; // ebp@1
  const char **v6; // edi@1
  int v7; // eax@1
  int v8; // eax@1
  int v9; // esi@2
  _BYTE *v11; // edx@6
  unsigned int v12; // ebx@6
  char v13; // cl@6
  int v14; // esi@7
  const char *v15; // eax@11
  int v16; // ebx@11
  int v17; // ebx@14
  const char *v18; // eax@15
  __int64 v19; // st7@19
  const wchar_t *v20; // esi@27
  int v21; // eax@30
  __int64 v22; // rax@33
  int *v23; // ecx@38
  __int64 v24; // st7@49
  __int64 v25; // st7@51
  __int64 v26; // st7@58
  const char *v27; // eax@59
  signed int v28; // edx@59
  char *v29; // eax@64
  int v30; // eax@66
  unsigned int v31; // edx@68
  const char *v32; // eax@71
  __int64 v33; // st7@73
  __int64 v34; // st7@75
  __int64 v35; // st7@77
  __int64 v36; // st7@83
  const char *v37; // ecx@88
  int v38; // eax@120
  signed int v39; // eax@120
  _TBYTE v40; // [sp+0h] [bp-9Ch]@0
  signed int v41; // [sp+18h] [bp-84h]@6
  int *v42; // [sp+20h] [bp-7Ch]@6
  _BYTE *v43; // [sp+24h] [bp-78h]@6
  int v44; // [sp+28h] [bp-74h]@1
  _BYTE *v45; // [sp+2Ch] [bp-70h]@120
  __int16 v46; // [sp+3Eh] [bp-5Eh]@120
  __int64 v47; // [sp+40h] [bp-5Ch]@15
  __int64 v48; // [sp+48h] [bp-54h]@46
  int v49; // [sp+54h] [bp-48h]@1
  int v50; // [sp+58h] [bp-44h]@1
  int v51; // [sp+5Ch] [bp-40h]@1
  int v52; // [sp+60h] [bp-3Ch]@1
  int v53; // [sp+64h] [bp-38h]@1
  __int16 v54; // [sp+68h] [bp-34h]@1
  int v55; // [sp+6Ch] [bp-30h]@1
  __int16 v56; // [sp+70h] [bp-2Ch]@1
  int v57; // [sp+74h] [bp-28h]@1
  int v58; // [sp+78h] [bp-24h]@1
  int v59; // [sp+7Ch] [bp-20h]@1

  v5 = a4;
  v6 = a5;
  v7 = *errno();
  v51 = -1;
  v52 = -1;
  v44 = v7;
  v53 = -3;
  v49 = a2;
  v54 = 0;
  v55 = 0;
  v50 = a1 & 0x6000;
  v56 = 0;
  v57 = 0;
  v58 = a3;
  v59 = -1;
  v8 = *a4;
  while ( 1 )
  {
    v9 = (int)(v5 + 1);
    if ( !v8 )
      return v57;
    while ( v8 != 37 )
    {
      sub_6F8AB850(v8, (int)&v49);
      v8 = v5[1];
      v5 = (_BYTE *)v9++;
      if ( !v8 )
        return v57;
    }
    v52 = -1;
    v11 = (_BYTE *)v9;
    v12 = 0;
    v51 = -1;
    v13 = v5[1];
    v50 = a1 & 0x6000;
    v42 = &v51;
    v41 = 0;
    v43 = (_BYTE *)v9;
LABEL_7:
    v8 = v13;
    v5 = v11 + 1;
    v14 = v13;
    if ( !v13 )
    {
      v5 = v11;
      continue;
    }
    while ( 2 )
    {
      switch ( v13 )
      {
        case 116:
        case 122:
          v41 = 0;
          v13 = v11[1];
          v12 = 4;
          goto LABEL_10;
        case 115:
          v15 = *v6;
          v16 = (int)(v6 + 1);
          if ( (unsigned int)(v41 - 2) <= 1 )
            goto LABEL_27;
          ++v6;
          sub_6F8ABA90(v15, (int)&v49);
          goto LABEL_13;
        case 99:
          v52 = -1;
          v17 = (int)(v6 + 1);
          if ( (unsigned int)(v41 - 2) <= 1 )
            goto LABEL_71;
          v18 = *v6;
          ++v6;
          LOBYTE(v47) = (_BYTE)v18;
          sub_6F8AB9D0((int)&v47, 1, (int)&v49);
          goto LABEL_13;
        case 32:
          if ( v12 )
            goto LABEL_93;
          v13 = v11[1];
          v50 |= 0x40u;
          v11 = v5;
          goto LABEL_7;
        case 102:
          v50 |= 0x20u;
          if ( v50 & 4 )
            goto LABEL_19;
          goto LABEL_75;
        case 45:
          if ( v12 )
            goto LABEL_93;
          v13 = v11[1];
          v50 |= 0x400u;
          v11 = v5;
          goto LABEL_7;
        case 73:
          v13 = v11[1];
          if ( v13 != 54 )
          {
            if ( v13 != 51 )
            {
              v41 = 0;
              v12 = 4;
              v11 = v5;
              goto LABEL_7;
            }
            if ( v11[2] == 50 )
            {
              v13 = v11[3];
              v12 = 4;
              v41 = 2;
              v11 += 3;
              goto LABEL_7;
            }
            v11 = v5;
            v12 = 4;
            v14 = 51;
            ++v5;
            v41 = 0;
            continue;
          }
          if ( v11[2] == 52 )
          {
            v13 = v11[3];
            v12 = 4;
            v41 = 3;
            v11 += 3;
            goto LABEL_7;
          }
LABEL_112:
          sub_6F8AB850(37, (int)&v49);
          v5 = v43;
LABEL_13:
          v8 = *v5;
          break;
        case 76:
          v13 = v11[1];
          v50 |= 4u;
          v12 = 4;
          v11 = v5;
          goto LABEL_7;
        case 83:
          v16 = (int)(v6 + 1);
LABEL_27:
          v20 = (const wchar_t *)*v6;
          if ( !*v6 )
            v20 = L"(null)";
          if ( v52 < 0 )
            v21 = wcslen(v20);
          else
            v21 = sub_6F8B14E0(v20, v52);
          v6 = (const char **)v16;
          sub_6F8AB8B0((int)v20, v21, (int)&v49);
          goto LABEL_13;
        case 88:
        case 111:
        case 117:
        case 120:
          if ( v41 == 3 )
          {
            v22 = *(_QWORD *)v6;
            v6 += 2;
            v47 = v22;
          }
          else
          {
            LODWORD(v22) = *v6;
            if ( v41 == 2 )
            {
LABEL_37:
              HIDWORD(v22) = 0;
              v47 = (unsigned int)v22;
              ++v6;
              goto LABEL_38;
            }
            if ( v41 != 1 )
            {
              if ( v41 == 5 )
                LODWORD(v22) = (unsigned __int8)v22;
              goto LABEL_37;
            }
            v22 = (unsigned __int16)v22;
            ++v6;
            v47 = (unsigned __int16)v22;
          }
LABEL_38:
          v23 = &v49;
          if ( v14 != 117 )
          {
            sub_6F8AC740(v14, v22, HIDWORD(v22), (int)&v49);
            goto LABEL_13;
          }
          goto LABEL_47;
        case 100:
        case 105:
          v50 |= 0x80u;
          if ( v41 == 3 )
          {
            v22 = *(_QWORD *)v6;
            v6 += 2;
            v47 = v22;
          }
          else
          {
            LODWORD(v22) = *v6;
            if ( v41 == 2 )
            {
LABEL_45:
              v22 = (signed int)v22;
              v47 = (signed int)v22;
              ++v6;
              goto LABEL_46;
            }
            if ( v41 != 1 )
            {
              if ( v41 == 5 )
                LODWORD(v22) = (char)v22;
              goto LABEL_45;
            }
            ++v6;
            v22 = (signed __int16)v22;
            v47 = (signed __int16)v22;
          }
LABEL_46:
          v48 = SHIDWORD(v22) >> 31;
          v23 = &v49;
LABEL_47:
          sub_6F8AC0F0(v22, SHIDWORD(v22), (int)v23);
          goto LABEL_13;
        case 97:
          v50 |= 0x20u;
          if ( v50 & 4 )
            goto LABEL_49;
          goto LABEL_83;
        case 101:
          v50 |= 0x20u;
          if ( v50 & 4 )
            goto LABEL_51;
          goto LABEL_73;
        case 108:
          v13 = v11[1];
          v41 = 2;
          v12 = 4;
          if ( v13 != 108 )
            goto LABEL_10;
          v13 = v11[2];
          v41 = 3;
          v11 += 2;
          goto LABEL_7;
        case 104:
          v13 = v11[1];
          v41 = 1;
          v12 = 4;
          if ( v13 == 104 )
          {
            v13 = v11[2];
            v41 = 5;
            v11 += 2;
          }
          else
          {
LABEL_10:
            v11 = v5;
          }
          goto LABEL_7;
        case 106:
          v13 = v11[1];
          v41 = 3;
          v12 = 4;
          v11 = v5;
          goto LABEL_7;
        case 103:
          v50 |= 0x20u;
          if ( v50 & 4 )
            goto LABEL_58;
          goto LABEL_77;
        case 110:
          v27 = *v6;
          ++v6;
          v28 = v57;
          switch ( v41 )
          {
            case 5:
              *v27 = v57;
              break;
            case 1:
              *(_WORD *)v27 = v57;
              break;
            case 2:
              *(_DWORD *)v27 = v57;
              break;
            default:
              *(_DWORD *)v27 = v57;
              if ( v41 == 3 )
                *((_DWORD *)v27 + 1) = v28 >> 31;
              break;
          }
          goto LABEL_13;
        case 109:
          v29 = strerror(v44);
          sub_6F8ABA90(v29, (int)&v49);
          goto LABEL_13;
        case 112:
          if ( !v12 )
          {
            v30 = a1 & 0x6000;
            if ( v50 == v30 )
            {
              BYTE1(v30) |= 2u;
              v52 = 8;
              v50 = v30;
            }
          }
          v31 = (unsigned int)*v6;
          ++v6;
          v47 = v31;
          v48 = 0i64;
          sub_6F8AC740(120, v31, 0, (int)&v49);
          goto LABEL_13;
        case 37:
          sub_6F8AB850(37, (int)&v49);
          goto LABEL_13;
        case 67:
          v52 = -1;
          v17 = (int)(v6 + 1);
LABEL_71:
          v32 = *v6;
          v6 = (const char **)v17;
          LOWORD(v47) = (_WORD)v32;
          sub_6F8AB8B0((int)&v47, 1, (int)&v49);
          goto LABEL_13;
        case 69:
          if ( v50 & 4 )
          {
LABEL_51:
            v25 = *(__int64 *)v6;
            v6 += 3;
            *(double *)&v40 = *(double *)&v25;
            sub_6F8AC510((int)&v49, v40);
          }
          else
          {
LABEL_73:
            v33 = *(__int64 *)v6;
            v6 += 2;
            *(double *)&v40 = *(double *)&v33;
            sub_6F8AC510((int)&v49, v40);
          }
          goto LABEL_13;
        case 70:
          if ( v50 & 4 )
          {
LABEL_19:
            v19 = *(__int64 *)v6;
            v6 += 3;
            *(double *)&v40 = *(double *)&v19;
            sub_6F8AC020((int)&v49, v40);
          }
          else
          {
LABEL_75:
            v34 = *(__int64 *)v6;
            v6 += 2;
            *(double *)&v40 = *(double *)&v34;
            sub_6F8AC020((int)&v49, v40);
          }
          goto LABEL_13;
        case 71:
          if ( v50 & 4 )
          {
LABEL_58:
            v26 = *(__int64 *)v6;
            v6 += 3;
            *(double *)&v40 = *(double *)&v26;
            sub_6F8AC5C0((int)&v49, v40);
          }
          else
          {
LABEL_77:
            v35 = *(__int64 *)v6;
            v6 += 2;
            *(double *)&v40 = *(double *)&v35;
            sub_6F8AC5C0((int)&v49, v40);
          }
          goto LABEL_13;
        case 35:
          if ( v12 )
            goto LABEL_93;
          v13 = v11[1];
          v50 |= 0x800u;
          v11 = v5;
          goto LABEL_7;
        case 48:
          if ( !v12 )
          {
            v13 = v11[1];
            v50 |= 0x200u;
            v11 = v5;
            goto LABEL_7;
          }
          if ( v12 > 3 )
            goto LABEL_112;
LABEL_102:
          if ( v12 == 2 )
            v12 = 3;
LABEL_98:
          if ( !v42 )
            goto LABEL_93;
          if ( *v42 < 0 )
          {
            *v42 = v14 - 48;
LABEL_93:
            v13 = v11[1];
            v11 = v5;
          }
          else
          {
            v13 = v11[1];
            v11 = v5;
            *v42 = v14 + 10 * *v42 - 48;
          }
          goto LABEL_7;
        case 65:
          if ( v50 & 4 )
          {
LABEL_49:
            v24 = *(__int64 *)v6;
            v6 += 3;
            *(double *)&v40 = *(double *)&v24;
            sub_6F8ACC20((int)&v49, v40);
          }
          else
          {
LABEL_83:
            v36 = *(__int64 *)v6;
            v6 += 2;
            *(double *)&v40 = *(double *)&v36;
            sub_6F8ACC20((int)&v49, v40);
          }
          goto LABEL_13;
        case 46:
          if ( v12 > 1 )
            goto LABEL_85;
          v13 = v11[1];
          v12 = 2;
          v11 = v5;
          v52 = 0;
          v42 = &v52;
          goto LABEL_7;
        case 42:
          if ( !v42 )
          {
LABEL_85:
            v13 = v11[1];
            v12 = 4;
            v11 = v5;
            goto LABEL_7;
          }
          if ( v12 & 0xFFFFFFFD )
          {
            v13 = v11[1];
            v42 = 0;
            v12 = 4;
            v11 = v5;
          }
          else
          {
            v37 = *v6;
            *v42 = (int)*v6;
            if ( (signed int)v37 >= 0 )
              goto LABEL_89;
            if ( v12 )
            {
              v52 = -1;
LABEL_89:
              v13 = v11[1];
              ++v6;
              v42 = 0;
              v11 = v5;
              goto LABEL_7;
            }
            v13 = v11[1];
            v50 |= 0x400u;
            ++v6;
            v11 = v5;
            v51 = -v51;
            v42 = 0;
          }
          goto LABEL_7;
        case 43:
          if ( v12 )
            goto LABEL_93;
          v13 = v11[1];
          v50 |= 0x100u;
          v11 = v5;
          goto LABEL_7;
        case 39:
          if ( v12 )
            goto LABEL_93;
          v45 = v11;
          v50 |= 0x1000u;
          LODWORD(v47) = 0;
          v38 = localeconv();
          v39 = sub_6F8A29A0((WCHAR *)&v46, *(const CHAR **)(v38 + 4), 0x10u, (int *)&v47);
          if ( v39 > 0 )
            v56 = v46;
          v13 = v45[1];
          v55 = v39;
          v11 = v5;
          goto LABEL_7;
        default:
          if ( (unsigned __int8)(v13 - 48) > 9u || v12 > 3 )
            goto LABEL_112;
          if ( v12 )
            goto LABEL_102;
          v12 = 1;
          goto LABEL_98;
      }
      break;
    }
  }
}
