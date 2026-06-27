__int64 __stdcall sub_6F8F1BD0(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6, const char *a7)
{
  int v7; // ebx@1
  int v8; // eax@1
  int v9; // ST00_4@1
  unsigned int v10; // ebx@1
  int v11; // esi@1
  __int64 v12; // rax@1
  _DWORD *v13; // ecx@1
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
  char v28; // bl@25
  int v29; // eax@25
  int v30; // eax@30
  int v31; // ebx@32
  char v32; // al@32
  int (__stdcall *v33)(unsigned __int8, int); // edx@33
  int v35; // ST3C_4@11
  _BYTE *v36; // eax@41
  int v37; // eax@47
  int v38; // ebx@47
  char v39; // dl@47
  int (__stdcall *v40)(unsigned __int8, int); // ebp@48
  const char *v41; // eax@54
  __int64 v42; // rax@57
  __int64 v43; // rax@64
  int v44; // eax@66
  int v45; // ebx@66
  char v46; // dl@66
  int (__stdcall *v47)(unsigned __int8, int); // ebp@67
  __int64 v48; // rax@74
  int v49; // eax@76
  int v50; // eax@76
  int v51; // eax@79
  int v52; // eax@79
  __int64 v53; // rax@82
  int v54; // eax@88
  int v55; // eax@89
  __int64 v56; // rax@91
  char v57; // bp@98
  char v58; // al@99
  char v59; // bp@101
  char v60; // al@102
  __int64 v61; // rax@104
  int v62; // ST00_4@104
  __int64 v63; // rax@104
  __int64 v64; // rax@105
  int v65; // edx@115
  int v66; // [sp+0h] [bp-9Ch]@1
  int v67; // [sp+14h] [bp-88h]@61
  int v68; // [sp+14h] [bp-88h]@73
  int v69; // [sp+18h] [bp-84h]@61
  int v70; // [sp+18h] [bp-84h]@73
  const char *v71; // [sp+1Ch] [bp-80h]@55
  unsigned int v72; // [sp+1Ch] [bp-80h]@61
  int v73; // [sp+20h] [bp-7Ch]@61
  int v74; // [sp+20h] [bp-7Ch]@73
  int *v75; // [sp+24h] [bp-78h]@61
  int *v76; // [sp+24h] [bp-78h]@73
  unsigned int v77; // [sp+30h] [bp-6Ch]@1
  int v78; // [sp+38h] [bp-64h]@1
  unsigned __int8 v79; // [sp+3Ch] [bp-60h]@23
  int v80; // [sp+48h] [bp-54h]@1
  int v81; // [sp+4Ch] [bp-50h]@19
  int v82; // [sp+50h] [bp-4Ch]@76
  int v83; // [sp+54h] [bp-48h]@76
  int v84; // [sp+58h] [bp-44h]@76
  int v85; // [sp+5Ch] [bp-40h]@76
  int v86; // [sp+60h] [bp-3Ch]@76
  int v87; // [sp+64h] [bp-38h]@76
  int v88; // [sp+68h] [bp-34h]@77
  int v89; // [sp+6Ch] [bp-30h]@79
  int v90; // [sp+70h] [bp-2Ch]@79
  int v91; // [sp+74h] [bp-28h]@79
  int v92; // [sp+78h] [bp-24h]@79
  int v93; // [sp+7Ch] [bp-20h]@80

  v7 = a4 + 108;
  v8 = sub_6F95DB50(a4 + 108);
  v9 = v7;
  v10 = 0;
  v78 = v8;
  v11 = sub_6F95DC10(v9);
  LODWORD(v12) = strlen(a7);
  v80 = 0;
  HIDWORD(v12) = HIDWORD(a1);
  v77 = v12;
  v13 = (_DWORD *)a1;
  while ( 1 )
  {
    v14 = HIDWORD(v12) == -1;
    v15 = v14 & (v13 != 0);
    if ( v14 & (v13 != 0) )
    {
      v14 = 0;
      if ( v13[2] >= v13[3] )
      {
        v30 = (*(int (__cdecl **)(int))(*v13 + 36))(v66);
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
        v79 = v14;
        v27 = (*(int (__cdecl **)(int))(*(_DWORD *)a2 + 36))(v66);
        v14 = v79;
        if ( v27 == -1 )
        {
          a2 = 0;
          v14 = v79 ^ 1;
        }
      }
    }
    else
    {
      v14 ^= v16;
    }
    if ( v10 >= v77 || !v14 )
      break;
    if ( v80 )
      goto LABEL_39;
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
            goto LABEL_45;
        }
        else
        {
          v25 = ((int (__thiscall *)(int, _DWORD, _DWORD))v26)(v11, v25, 0);
          if ( !v25 )
            goto LABEL_45;
        }
        *(_BYTE *)(v11 + v23 + 285) = v25;
        v24 = v25;
      }
      v81 = 0;
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
LABEL_45:
            v80 |= 4u;
            HIDWORD(v12) = HIDWORD(a1);
            v13 = (_DWORD *)a1;
            goto LABEL_46;
          }
          *(_BYTE *)(v11 + v31 + 285) = v32;
          v24 = v32;
        }
      }
      switch ( v24 )
      {
        default:
          goto LABEL_45;
        case 116:
          v37 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          v38 = (unsigned __int8)v37;
          v39 = *(_BYTE *)(v11 + (unsigned __int8)v37 + 285);
          if ( v39 )
            goto LABEL_52;
          v39 = v37;
          v40 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v11 + 32);
          if ( v40 != sub_6F8C36A0 )
            v39 = ((int (__fastcall *)(int, int, _DWORD, _DWORD))v40)(v11, v37, (char)v37, 0);
          if ( !v39 )
            goto LABEL_110;
          *(_BYTE *)(v11 + v38 + 285) = v39;
LABEL_52:
          v13 = (_DWORD *)a1;
          if ( v39 == 9 )
            goto LABEL_53;
          goto LABEL_72;
        case 120:
          v41 = *(const char **)(*(_DWORD *)(v78 + 8) + 8);
          goto LABEL_55;
        case 100:
          LODWORD(v42) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v81, 1, 31, 2u, a4, &v80);
          a1 = v42;
          if ( v80 )
            goto LABEL_58;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = (_DWORD *)a1;
          *(_DWORD *)(a6 + 12) = v81;
          break;
        case 101:
          if ( *(_BYTE *)(*(_DWORD *)(v11 + 24) + 2 * (unsigned __int8)sub_6F8C23B0((int *)&a1, SHIDWORD(a1))) & 0x20 )
          {
            sub_6F92D0F0((_DWORD *)a1);
            HIDWORD(a1) = -1;
            v75 = &v80;
            v72 = 1;
            v73 = a4;
            v69 = 9;
            v67 = 1;
          }
          else
          {
            v72 = 2;
            v75 = &v80;
            v69 = 31;
            v73 = a4;
            v67 = 10;
          }
          LODWORD(v12) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v81, v67, v69, v72, v73, v75);
          a1 = v12;
          v13 = (_DWORD *)v12;
          if ( !v80 )
            *(_DWORD *)(a6 + 12) = v81;
          break;
        case 109:
          LODWORD(v43) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v81, 1, 12, 2u, a4, &v80);
          a1 = v43;
          if ( v80 )
            goto LABEL_58;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = (_DWORD *)a1;
          *(_DWORD *)(a6 + 16) = v81 - 1;
          break;
        case 110:
          v44 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          v45 = (unsigned __int8)v44;
          v46 = *(_BYTE *)(v11 + (unsigned __int8)v44 + 285);
          if ( v46 )
            goto LABEL_71;
          v46 = v44;
          v47 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v11 + 32);
          if ( v47 != sub_6F8C36A0 )
            v46 = ((int (__fastcall *)(int, int, _DWORD, _DWORD))v47)(v11, v44, (char)v44, 0);
          if ( v46 )
          {
            *(_BYTE *)(v11 + v45 + 285) = v46;
LABEL_71:
            v13 = (_DWORD *)a1;
            if ( v46 == 10 )
            {
LABEL_53:
              sub_6F92D0F0(v13);
              v13 = (_DWORD *)a1;
              HIDWORD(v12) = -1;
              HIDWORD(a1) = -1;
              break;
            }
          }
          else
          {
LABEL_110:
            v13 = (_DWORD *)a1;
          }
LABEL_72:
          v80 |= 4u;
          HIDWORD(v12) = HIDWORD(a1);
          break;
        case 73:
          v76 = &v80;
          v70 = 12;
          v74 = a4;
          v68 = 1;
          goto LABEL_74;
        case 97:
          v49 = *(_DWORD *)(v78 + 8);
          v82 = *(_DWORD *)(v49 + 72);
          v83 = *(_DWORD *)(v49 + 76);
          v84 = *(_DWORD *)(v49 + 80);
          v85 = *(_DWORD *)(v49 + 84);
          v86 = *(_DWORD *)(v49 + 88);
          v87 = *(_DWORD *)(v49 + 92);
          v50 = *(_DWORD *)(v49 + 96);
          goto LABEL_77;
        case 66:
          v51 = *(_DWORD *)(v78 + 8);
          v82 = *(_DWORD *)(v51 + 100);
          v83 = *(_DWORD *)(v51 + 104);
          v84 = *(_DWORD *)(v51 + 108);
          v85 = *(_DWORD *)(v51 + 112);
          v86 = *(_DWORD *)(v51 + 116);
          v87 = *(_DWORD *)(v51 + 120);
          v88 = *(_DWORD *)(v51 + 124);
          v89 = *(_DWORD *)(v51 + 128);
          v90 = *(_DWORD *)(v51 + 132);
          v91 = *(_DWORD *)(v51 + 136);
          v92 = *(_DWORD *)(v51 + 140);
          v52 = *(_DWORD *)(v51 + 144);
          goto LABEL_80;
        case 67:
        case 89:
        case 121:
          LODWORD(v53) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v81, 0, 9999, 4u, a4, &v80);
          a1 = v53;
          if ( v80 )
            goto LABEL_58;
          LODWORD(v12) = v81 - 1900;
          HIDWORD(v12) = HIDWORD(a1);
          if ( v81 < 0 )
            LODWORD(v12) = v81 + 100;
          v13 = (_DWORD *)a1;
          *(_DWORD *)(a6 + 20) = v12;
          break;
        case 68:
          sub_6F8C3560((_BYTE *)v11, "%m/%d/%y", (int)"%H:%M", &v82);
          v71 = (const char *)&v82;
          goto LABEL_56;
        case 72:
          v76 = &v80;
          v70 = 23;
          v74 = a4;
          v68 = 0;
LABEL_74:
          LODWORD(v48) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v81, v68, v70, 2u, v74, v76);
          a1 = v48;
          if ( v80 )
            goto LABEL_58;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = (_DWORD *)a1;
          *(_DWORD *)(a6 + 8) = v81;
          break;
        case 65:
          v54 = *(_DWORD *)(v78 + 8);
          v82 = *(_DWORD *)(v54 + 44);
          v83 = *(_DWORD *)(v54 + 48);
          v84 = *(_DWORD *)(v54 + 52);
          v85 = *(_DWORD *)(v54 + 56);
          v86 = *(_DWORD *)(v54 + 60);
          v87 = *(_DWORD *)(v54 + 64);
          v50 = *(_DWORD *)(v54 + 68);
LABEL_77:
          v88 = v50;
          a1 = sub_6F8F16C0(a1, a2, a3, (unsigned int *)&v81, (unsigned int *)&v82, 7, a4, &v80);
          if ( v80 )
            goto LABEL_58;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = (_DWORD *)a1;
          *(_DWORD *)(a6 + 24) = v81;
          break;
        case 98:
        case 104:
          v55 = *(_DWORD *)(v78 + 8);
          v82 = *(_DWORD *)(v55 + 148);
          v83 = *(_DWORD *)(v55 + 152);
          v84 = *(_DWORD *)(v55 + 156);
          v85 = *(_DWORD *)(v55 + 160);
          v86 = *(_DWORD *)(v55 + 164);
          v87 = *(_DWORD *)(v55 + 168);
          v88 = *(_DWORD *)(v55 + 172);
          v89 = *(_DWORD *)(v55 + 176);
          v90 = *(_DWORD *)(v55 + 180);
          v91 = *(_DWORD *)(v55 + 184);
          v92 = *(_DWORD *)(v55 + 188);
          v52 = *(_DWORD *)(v55 + 192);
LABEL_80:
          v93 = v52;
          a1 = sub_6F8F16C0(a1, a2, a3, (unsigned int *)&v81, (unsigned int *)&v82, 12, a4, &v80);
          if ( v80 )
            goto LABEL_58;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = (_DWORD *)a1;
          *(_DWORD *)(a6 + 16) = v81;
          break;
        case 99:
          v41 = *(const char **)(*(_DWORD *)(v78 + 8) + 24);
          goto LABEL_55;
        case 83:
          LODWORD(v56) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v81, 0, 60, 2u, a4, &v80);
          a1 = v56;
          if ( v80 )
            goto LABEL_58;
          HIDWORD(v12) = HIDWORD(a1);
          v13 = (_DWORD *)a1;
          *(_DWORD *)a6 = v81;
          break;
        case 84:
          sub_6F8C3560((_BYTE *)v11, "%H:%M:%S", (int)&unk_6FBA384E, &v82);
          v71 = (const char *)&v82;
          goto LABEL_56;
        case 88:
          v41 = *(const char **)(*(_DWORD *)(v78 + 8) + 16);
LABEL_55:
          v71 = v41;
          goto LABEL_56;
        case 90:
          if ( !(*(_BYTE *)(*(_DWORD *)(v11 + 24) + 2 * (unsigned __int8)sub_6F8C23B0((int *)&a1, SHIDWORD(a1))) & 1) )
            goto LABEL_45;
          a1 = sub_6F8F16C0(a1, a2, a3, (unsigned int *)&v82, (unsigned int *)off_6FB49EC0, 14, a4, &v80);
          LOBYTE(v12) = sub_6F8C2310(&a1, (int)&a2);
          HIDWORD(v12) = HIDWORD(a1);
          if ( (_BYTE)v12 || v82 | v80 )
            goto LABEL_59;
          v57 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          if ( *(_BYTE *)(v11 + 28) )
            v58 = *(_BYTE *)(v11 + 74);
          else
            v58 = sub_6F8C35E0((void *)v11, 45);
          if ( v57 == v58
            || ((v59 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1)), !*(_BYTE *)(v11 + 28)) ? (v60 = sub_6F8C35E0(
                                                                                                 (void *)v11,
                                                                                                 43),
                                                                                         v66 = v65) : (v60 = *(_BYTE *)(v11 + 72)),
                v59 == v60) )
          {
            LODWORD(v61) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v82, 0, 23, 2u, a4, &v80);
            a1 = v61;
            LODWORD(v63) = sub_6F8F1250(v62, SHIDWORD(v61), a2, a3, &v82, 0, 59, 2u, a4, &v80);
            a1 = v63;
          }
          goto LABEL_58;
        case 77:
          LODWORD(v64) = sub_6F8F1250(v66, SHIDWORD(a1), a2, a3, &v81, 0, 59, 2u, a4, &v80);
          a1 = v64;
          if ( v80 )
          {
LABEL_58:
            HIDWORD(v12) = HIDWORD(a1);
LABEL_59:
            v13 = (_DWORD *)a1;
          }
          else
          {
            HIDWORD(v12) = HIDWORD(a1);
            v13 = (_DWORD *)a1;
            *(_DWORD *)(a6 + 4) = v81;
          }
          break;
        case 82:
          sub_6F8C3560((_BYTE *)v11, "%H:%M", (int)"%H:%M:%S", &v82);
          v71 = (const char *)&v82;
LABEL_56:
          v12 = sub_6F8F1BD0(a1, a2, a3, a4, &v80, a6, v71);
          a1 = v12;
          v13 = (_DWORD *)v12;
          break;
      }
LABEL_46:
      v10 = v17 + 1;
    }
    else
    {
LABEL_25:
      v13 = (_DWORD *)a1;
      v28 = *v18;
      LOBYTE(v29) = BYTE4(a1);
      if ( (_DWORD)a1 && HIDWORD(a1) == -1 )
      {
        v36 = *(_BYTE **)(a1 + 8);
        if ( (unsigned int)v36 >= *(_DWORD *)(a1 + 12) )
        {
          v29 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)a1 + 36))(a1, v19);
          if ( v29 == -1 )
          {
            LODWORD(a1) = 0;
            v13 = 0;
            LOBYTE(v29) = -1;
          }
          else
          {
            v13 = (_DWORD *)a1;
          }
          goto LABEL_27;
        }
        if ( v28 == *v36 )
          goto LABEL_43;
LABEL_28:
        v80 |= 4u;
        HIDWORD(v12) = HIDWORD(a1);
        v10 = v17;
      }
      else
      {
LABEL_27:
        if ( v28 != (_BYTE)v29 )
          goto LABEL_28;
LABEL_43:
        sub_6F92D0F0(v13);
        v10 = v17;
        HIDWORD(v12) = -1;
        HIDWORD(a1) = -1;
        v13 = (_DWORD *)a1;
      }
    }
  }
  if ( v80 || v10 != v77 )
LABEL_39:
    *a5 |= 4u;
  return a1;
}
