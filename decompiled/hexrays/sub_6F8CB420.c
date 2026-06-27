__int64 __stdcall sub_6F8CB420(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6, const char *a7)
{
  int v7; // ebx@1
  int v8; // eax@1
  int v9; // ST00_4@1
  unsigned int v10; // ebx@1
  int v11; // esi@1
  __int64 v12; // rax@1
  int v13; // ecx@1
  unsigned __int8 v14; // dl@2
  unsigned __int8 v15; // di@2
  bool v16; // al@3
  int v17; // edi@9
  const char *v18; // ebp@9
  int v19; // edx@9
  char v20; // al@9
  char v21; // cl@9
  int (__stdcall *v22)(unsigned __int8, int); // eax@10
  int v23; // ebp@15
  char v24; // dl@15
  char v25; // al@15
  int (__stdcall *v26)(unsigned __int8, int); // edx@16
  int v27; // eax@23
  int v28; // eax@25
  char v29; // bl@25
  int v30; // eax@31
  int v31; // ebx@33
  char v32; // al@33
  int (__stdcall *v33)(unsigned __int8, int); // edx@34
  int v35; // ST3C_4@11
  _BYTE *v36; // eax@42
  __int64 v37; // rax@52
  __int64 v38; // rax@54
  char v39; // al@57
  int (__stdcall *v40)(const void *, int, void *); // eax@60
  const char *v41; // eax@62
  __int64 v42; // rax@64
  char v43; // al@66
  int (__stdcall *v44)(const void *, int, void *); // eax@69
  char v45; // bl@75
  char v46; // al@76
  char v47; // bl@78
  char v48; // al@79
  __int64 v49; // rax@81
  int v50; // ST00_4@81
  __int64 v51; // rax@81
  int v52; // eax@82
  int v53; // ebx@82
  char v54; // dl@82
  int (__stdcall *v55)(unsigned __int8, int); // ebp@83
  __int64 v56; // rax@90
  __int64 v57; // rax@96
  int v58; // eax@98
  int v59; // ebx@98
  char v60; // dl@98
  int (__stdcall *v61)(unsigned __int8, int); // ebp@99
  int v62; // eax@105
  int v63; // eax@105
  int v64; // eax@108
  int v65; // eax@108
  int v66; // eax@112
  int v67; // eax@113
  __int64 v68; // rax@115
  char v69; // al@119
  int (__stdcall *v70)(const void *, int, void *); // eax@122
  int v71; // edx@134
  int v72; // [sp+0h] [bp-9Ch]@1
  int v73; // [sp+14h] [bp-88h]@51
  int v74; // [sp+14h] [bp-88h]@93
  int v75; // [sp+18h] [bp-84h]@51
  int v76; // [sp+18h] [bp-84h]@93
  unsigned int v77; // [sp+1Ch] [bp-80h]@93
  int v78; // [sp+20h] [bp-7Ch]@51
  int v79; // [sp+20h] [bp-7Ch]@93
  int *v80; // [sp+24h] [bp-78h]@51
  int *v81; // [sp+24h] [bp-78h]@93
  unsigned int v82; // [sp+30h] [bp-6Ch]@1
  int v83; // [sp+38h] [bp-64h]@1
  unsigned __int8 v84; // [sp+3Ch] [bp-60h]@23
  int v85; // [sp+48h] [bp-54h]@1
  int v86; // [sp+4Ch] [bp-50h]@19
  int v87; // [sp+50h] [bp-4Ch]@61
  int v88; // [sp+54h] [bp-48h]@61
  int v89; // [sp+58h] [bp-44h]@70
  int v90; // [sp+5Ch] [bp-40h]@105
  int v91; // [sp+60h] [bp-3Ch]@105
  int v92; // [sp+64h] [bp-38h]@105
  int v93; // [sp+68h] [bp-34h]@106
  int v94; // [sp+6Ch] [bp-30h]@108
  int v95; // [sp+70h] [bp-2Ch]@108
  int v96; // [sp+74h] [bp-28h]@108
  int v97; // [sp+78h] [bp-24h]@108
  int v98; // [sp+7Ch] [bp-20h]@109

  v7 = a4 + 108;
  v8 = sub_6F95DB50(a4 + 108);
  v9 = v7;
  v10 = 0;
  v83 = v8;
  v11 = sub_6F95DC10(v9);
  LODWORD(v12) = strlen(a7);
  v85 = 0;
  HIDWORD(v12) = HIDWORD(a1);
  v82 = v12;
  v13 = a1;
  while ( 1 )
  {
    v14 = HIDWORD(v12) == -1;
    v15 = v14 & (v13 != 0);
    if ( v14 & (v13 != 0) )
    {
      v14 = 0;
      if ( *(_DWORD *)(v13 + 8) >= *(_DWORD *)(v13 + 12) )
      {
        v30 = (*(int (__cdecl **)(int))(*(_DWORD *)v13 + 36))(v72);
        v14 = 0;
        if ( v30 == -1 )
        {
          LODWORD(a1) = 0;
          v14 = v15;
        }
      }
    }
    v16 = a3 == -1;
    if ( a2 && v16 )
    {
      if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
      {
        v84 = v14;
        v27 = (*(int (__cdecl **)(int))(*(_DWORD *)a2 + 36))(v72);
        v14 = v84;
        if ( v27 == -1 )
        {
          a2 = 0;
          v14 = v84 ^ 1;
        }
      }
    }
    else
    {
      v14 ^= v16;
    }
    if ( v10 >= v82 || !v14 )
      break;
    if ( v85 )
      goto LABEL_40;
    v17 = v10 + 1;
    v18 = &a7[v10];
    v19 = a7[v10];
    v20 = *(_BYTE *)(v11 + v19 + 285);
    v21 = a7[v10];
    if ( !v20 )
    {
      v22 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v11 + 32);
      if ( v22 != sub_6F8C36A0 )
      {
        v35 = a7[v10];
        v21 = ((int (__thiscall *)(int, _DWORD, _DWORD))v22)(v11, (char)v19, 0);
        v19 = v35;
      }
      if ( !v21 )
        goto LABEL_25;
      *(_BYTE *)(v11 + v19 + 285) = v21;
      v20 = v21;
    }
    if ( v20 == 37 )
    {
      v23 = a7[v17];
      v24 = *(_BYTE *)(v11 + v23 + 285);
      v25 = a7[v17];
      if ( !v24 )
      {
        v26 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v11 + 32);
        if ( v26 == sub_6F8C36A0 )
        {
          if ( !v25 )
            goto LABEL_49;
        }
        else
        {
          v25 = ((int (__thiscall *)(int, _DWORD, _DWORD))v26)(v11, v25, 0);
          if ( !v25 )
            goto LABEL_49;
        }
        *(_BYTE *)(v11 + v23 + 285) = v25;
        v24 = v25;
      }
      v86 = 0;
      if ( v24 == 69 || v24 == 79 )
      {
        v17 = v10 + 2;
        v31 = a7[v10 + 2];
        v24 = *(_BYTE *)(v11 + v31 + 285);
        v32 = v31;
        if ( !v24 )
        {
          v33 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v11 + 32);
          if ( v33 != sub_6F8C36A0 )
            v32 = ((int (__thiscall *)(int, _DWORD, _DWORD))v33)(v11, (char)v31, 0);
          if ( !v32 )
          {
LABEL_49:
            v85 |= 4u;
            HIDWORD(v12) = HIDWORD(a1);
            v13 = a1;
            goto LABEL_50;
          }
          *(_BYTE *)(v11 + v31 + 285) = v32;
          v24 = v32;
        }
      }
      switch ( v24 )
      {
        default:
          goto LABEL_49;
        case 73:
          v80 = &v85;
          v75 = 12;
          v78 = a4;
          v73 = 1;
          goto LABEL_52;
        case 77:
          LODWORD(v38) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v86, 0, 59, 2u, a4, &v85);
          a1 = v38;
          if ( v85 )
            goto LABEL_55;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = a1;
          *(_DWORD *)(a6 + 4) = v86;
          break;
        case 82:
          v39 = *(_BYTE *)(v11 + 28);
          if ( v39 == 1 )
            goto LABEL_138;
          if ( !v39 )
            sub_6F8C33B0(v11);
          v40 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v11 + 28);
          if ( v40 != sub_6F8C3630 )
          {
            ((void (__thiscall *)(int, const char *, const char *, int *))v40)(v11, "%H:%M", "%H:%M:%S", &v87);
          }
          else
          {
LABEL_138:
            v87 = 624576549;
            LOWORD(v88) = 77;
          }
          goto LABEL_62;
        case 83:
          LODWORD(v42) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v86, 0, 60, 2u, a4, &v85);
          a1 = v42;
          if ( v85 )
            goto LABEL_55;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = a1;
          *(_DWORD *)a6 = v86;
          break;
        case 84:
          v43 = *(_BYTE *)(v11 + 28);
          if ( v43 == 1 )
            goto LABEL_139;
          if ( !v43 )
            sub_6F8C33B0(v11);
          v44 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v11 + 28);
          if ( v44 != sub_6F8C3630 )
          {
            ((void (__thiscall *)(int, const char *, void *, int *))v44)(v11, "%H:%M:%S", &unk_6FBA3A0E, &v87);
          }
          else
          {
LABEL_139:
            v87 = 624576549;
            v88 = 1394948685;
            LOBYTE(v89) = 0;
          }
          goto LABEL_62;
        case 88:
          v41 = *(const char **)(*(_DWORD *)(v83 + 8) + 16);
          goto LABEL_63;
        case 90:
          if ( !(*(_BYTE *)(*(_DWORD *)(v11 + 24) + 2 * (unsigned __int8)sub_6F8C2400((int *)&a1, SHIDWORD(a1))) & 1) )
            goto LABEL_49;
          a1 = sub_6F8CADD0(a1, a2, a3, (int **)&v87, (int *)off_6FB49EC0, 14, a4, &v85);
          LOBYTE(v12) = sub_6F8C2310(&a1, (int)&a2);
          HIDWORD(v12) = HIDWORD(a1);
          if ( (_BYTE)v12 || v87 | v85 )
            goto LABEL_56;
          v45 = sub_6F8C2400((int *)&a1, SHIDWORD(a1));
          if ( *(_BYTE *)(v11 + 28) )
          {
            v46 = *(_BYTE *)(v11 + 74);
          }
          else
          {
            sub_6F8C33B0(v11);
            v46 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 24))(v11, 45);
          }
          if ( v45 == v46
            || ((v47 = sub_6F8C2400((int *)&a1, SHIDWORD(a1)), !*(_BYTE *)(v11 + 28)) ? (sub_6F8C33B0(v11),
                                                                                         v48 = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 24))(
                                                                                                 v11,
                                                                                                 43),
                                                                                         v72 = v71) : (v48 = *(_BYTE *)(v11 + 72)),
                v47 == v48) )
          {
            LODWORD(v49) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v87, 0, 23, 2u, a4, &v85);
            a1 = v49;
            LODWORD(v51) = sub_6F8CA960(v50, SHIDWORD(v49), a2, a3, &v87, 0, 59, 2u, a4, &v85);
            a1 = v51;
          }
          goto LABEL_55;
        case 116:
          v52 = sub_6F8C2400((int *)&a1, SHIDWORD(a1));
          v53 = (unsigned __int8)v52;
          v54 = *(_BYTE *)(v11 + (unsigned __int8)v52 + 285);
          if ( v54 )
            goto LABEL_87;
          v54 = v52;
          v55 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v11 + 32);
          if ( v55 != sub_6F8C36A0 )
            v54 = ((int (__fastcall *)(int, int, _DWORD, _DWORD))v55)(v11, v52, (char)v52, 0);
          if ( !v54 )
            goto LABEL_127;
          *(_BYTE *)(v11 + v53 + 285) = v54;
LABEL_87:
          v13 = a1;
          if ( v54 == 9 )
            goto LABEL_88;
          goto LABEL_104;
        case 120:
          v41 = *(const char **)(*(_DWORD *)(v83 + 8) + 8);
          goto LABEL_63;
        case 100:
          LODWORD(v56) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v86, 1, 31, 2u, a4, &v85);
          a1 = v56;
          if ( v85 )
            goto LABEL_55;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = a1;
          *(_DWORD *)(a6 + 12) = v86;
          break;
        case 101:
          if ( *(_BYTE *)(*(_DWORD *)(v11 + 24) + 2 * (unsigned __int8)sub_6F8C2400((int *)&a1, SHIDWORD(a1))) & 0x20 )
          {
            sub_6F92D0F0((_DWORD *)a1);
            HIDWORD(a1) = -1;
            v81 = &v85;
            v77 = 1;
            v79 = a4;
            v76 = 9;
            v74 = 1;
          }
          else
          {
            v77 = 2;
            v81 = &v85;
            v76 = 31;
            v79 = a4;
            v74 = 10;
          }
          LODWORD(v12) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v86, v74, v76, v77, v79, v81);
          a1 = v12;
          v13 = v12;
          if ( !v85 )
            *(_DWORD *)(a6 + 12) = v86;
          break;
        case 109:
          LODWORD(v57) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v86, 1, 12, 2u, a4, &v85);
          a1 = v57;
          if ( v85 )
            goto LABEL_55;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = a1;
          *(_DWORD *)(a6 + 16) = v86 - 1;
          break;
        case 110:
          v58 = sub_6F8C2400((int *)&a1, SHIDWORD(a1));
          v59 = (unsigned __int8)v58;
          v60 = *(_BYTE *)(v11 + (unsigned __int8)v58 + 285);
          if ( v60 )
            goto LABEL_103;
          v60 = v58;
          v61 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v11 + 32);
          if ( v61 != sub_6F8C36A0 )
            v60 = ((int (__fastcall *)(int, int, _DWORD, _DWORD))v61)(v11, v58, (char)v58, 0);
          if ( v60 )
          {
            *(_BYTE *)(v11 + v59 + 285) = v60;
LABEL_103:
            v13 = a1;
            if ( v60 == 10 )
            {
LABEL_88:
              sub_6F92D0F0((_DWORD *)v13);
              v13 = a1;
              HIDWORD(v12) = -1;
              HIDWORD(a1) = -1;
              break;
            }
          }
          else
          {
LABEL_127:
            v13 = a1;
          }
LABEL_104:
          v85 |= 4u;
          HIDWORD(v12) = HIDWORD(a1);
          break;
        case 97:
          v62 = *(_DWORD *)(v83 + 8);
          v87 = *(_DWORD *)(v62 + 72);
          v88 = *(_DWORD *)(v62 + 76);
          v89 = *(_DWORD *)(v62 + 80);
          v90 = *(_DWORD *)(v62 + 84);
          v91 = *(_DWORD *)(v62 + 88);
          v92 = *(_DWORD *)(v62 + 92);
          v63 = *(_DWORD *)(v62 + 96);
          goto LABEL_106;
        case 66:
          v64 = *(_DWORD *)(v83 + 8);
          v87 = *(_DWORD *)(v64 + 100);
          v88 = *(_DWORD *)(v64 + 104);
          v89 = *(_DWORD *)(v64 + 108);
          v90 = *(_DWORD *)(v64 + 112);
          v91 = *(_DWORD *)(v64 + 116);
          v92 = *(_DWORD *)(v64 + 120);
          v93 = *(_DWORD *)(v64 + 124);
          v94 = *(_DWORD *)(v64 + 128);
          v95 = *(_DWORD *)(v64 + 132);
          v96 = *(_DWORD *)(v64 + 136);
          v97 = *(_DWORD *)(v64 + 140);
          v65 = *(_DWORD *)(v64 + 144);
          goto LABEL_109;
        case 72:
          v80 = &v85;
          v75 = 23;
          v78 = a4;
          v73 = 0;
LABEL_52:
          LODWORD(v37) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v86, v73, v75, 2u, v78, v80);
          a1 = v37;
          if ( v85 )
            goto LABEL_55;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = a1;
          *(_DWORD *)(a6 + 8) = v86;
          break;
        case 65:
          v66 = *(_DWORD *)(v83 + 8);
          v87 = *(_DWORD *)(v66 + 44);
          v88 = *(_DWORD *)(v66 + 48);
          v89 = *(_DWORD *)(v66 + 52);
          v90 = *(_DWORD *)(v66 + 56);
          v91 = *(_DWORD *)(v66 + 60);
          v92 = *(_DWORD *)(v66 + 64);
          v63 = *(_DWORD *)(v66 + 68);
LABEL_106:
          v93 = v63;
          a1 = sub_6F8CADD0(a1, a2, a3, (int **)&v86, &v87, 7, a4, &v85);
          if ( v85 )
            goto LABEL_55;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = a1;
          *(_DWORD *)(a6 + 24) = v86;
          break;
        case 98:
        case 104:
          v67 = *(_DWORD *)(v83 + 8);
          v87 = *(_DWORD *)(v67 + 148);
          v88 = *(_DWORD *)(v67 + 152);
          v89 = *(_DWORD *)(v67 + 156);
          v90 = *(_DWORD *)(v67 + 160);
          v91 = *(_DWORD *)(v67 + 164);
          v92 = *(_DWORD *)(v67 + 168);
          v93 = *(_DWORD *)(v67 + 172);
          v94 = *(_DWORD *)(v67 + 176);
          v95 = *(_DWORD *)(v67 + 180);
          v96 = *(_DWORD *)(v67 + 184);
          v97 = *(_DWORD *)(v67 + 188);
          v65 = *(_DWORD *)(v67 + 192);
LABEL_109:
          v98 = v65;
          a1 = sub_6F8CADD0(a1, a2, a3, (int **)&v86, &v87, 12, a4, &v85);
          if ( v85 )
            goto LABEL_55;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = a1;
          *(_DWORD *)(a6 + 16) = v86;
          break;
        case 99:
          v41 = *(const char **)(*(_DWORD *)(v83 + 8) + 24);
          goto LABEL_63;
        case 67:
        case 89:
        case 121:
          LODWORD(v68) = sub_6F8CA960(v72, SHIDWORD(a1), a2, a3, &v86, 0, 9999, 4u, a4, &v85);
          a1 = v68;
          if ( v85 )
          {
LABEL_55:
            HIDWORD(v12) = HIDWORD(a1);
LABEL_56:
            v13 = a1;
          }
          else
          {
            LODWORD(v12) = v86 - 1900;
            HIDWORD(v12) = HIDWORD(a1);
            if ( v86 < 0 )
              LODWORD(v12) = v86 + 100;
            v13 = a1;
            *(_DWORD *)(a6 + 20) = v12;
          }
          break;
        case 68:
          v69 = *(_BYTE *)(v11 + 28);
          if ( v69 == 1 )
            goto LABEL_140;
          if ( !v69 )
            sub_6F8C33B0(v11);
          v70 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v11 + 28);
          if ( v70 != sub_6F8C3630 )
          {
            ((void (__thiscall *)(int, const char *, const char *, int *))v70)(v11, "%m/%d/%y", "%H:%M", &v87);
          }
          else
          {
LABEL_140:
            v87 = 623865125;
            v88 = 2032480100;
            LOBYTE(v89) = 0;
          }
LABEL_62:
          v41 = (const char *)&v87;
LABEL_63:
          v12 = sub_6F8CB420(a1, a2, a3, a4, &v85, a6, v41);
          a1 = v12;
          v13 = v12;
          break;
      }
LABEL_50:
      v10 = v17 + 1;
    }
    else
    {
LABEL_25:
      LOBYTE(v28) = BYTE4(a1);
      v29 = *v18;
      v13 = a1;
      if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
      {
        v36 = *(_BYTE **)(a1 + 8);
        if ( (unsigned int)v36 >= *(_DWORD *)(a1 + 12) )
        {
          v28 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)a1 + 36))(a1, v19);
          if ( v28 == -1 )
          {
            LODWORD(a1) = 0;
            v13 = 0;
          }
          else
          {
            v13 = a1;
          }
          goto LABEL_27;
        }
        if ( v29 == *v36 )
          goto LABEL_46;
        HIDWORD(v12) = -1;
LABEL_29:
        v85 |= 4u;
        v10 = v17;
      }
      else
      {
LABEL_27:
        if ( v29 != (_BYTE)v28 )
        {
          HIDWORD(v12) = HIDWORD(a1);
          goto LABEL_29;
        }
        v36 = *(_BYTE **)(v13 + 8);
        if ( (unsigned int)v36 < *(_DWORD *)(v13 + 12) )
        {
LABEL_46:
          *(_DWORD *)(v13 + 8) = v36 + 1;
          goto LABEL_47;
        }
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v13 + 40))(v13, v19);
        v13 = a1;
LABEL_47:
        HIDWORD(a1) = -1;
        v10 = v17;
        HIDWORD(v12) = -1;
      }
    }
  }
  if ( v85 || v10 != v82 )
LABEL_40:
    *a5 |= 4u;
  return a1;
}
