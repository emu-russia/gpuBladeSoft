__int64 __stdcall sub_6F8F46F0(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6, const wchar_t *a7)
{
  int v7; // ebx@1
  int v8; // eax@1
  int v9; // ST20_4@1
  unsigned int v10; // ebx@1
  int v11; // esi@1
  __int64 v12; // rax@1
  _DWORD *v13; // ecx@1
  bool v14; // dl@2
  bool v15; // di@2
  bool v16; // al@3
  bool v17; // di@3
  int v18; // ecx@4
  unsigned int v19; // edi@7
  int v20; // ebp@7
  char v21; // al@8
  __int16 v22; // ax@11
  wchar_t v23; // bx@11
  __int16 *v24; // eax@15
  __int16 v25; // cx@16
  _WORD *v27; // eax@23
  unsigned __int16 v28; // ax@24
  unsigned __int16 v29; // ax@28
  __int16 *v30; // eax@32
  int v31; // eax@38
  int v32; // eax@40
  int v33; // eax@43
  unsigned __int16 v34; // ax@58
  __int64 v35; // rax@59
  __int16 v36; // di@61
  __int16 v37; // di@62
  signed __int16 v38; // dx@63
  int v39; // eax@64
  int v40; // eax@66
  unsigned __int16 v41; // ax@71
  __int16 v42; // dx@72
  unsigned __int16 v43; // ax@75
  bool v44; // ST54_1@79
  __int16 v45; // ax@79
  __int16 v46; // dx@82
  unsigned int v47; // [sp+50h] [bp-11Ch]@1
  const wchar_t *v48; // [sp+54h] [bp-118h]@7
  int v49; // [sp+5Ch] [bp-110h]@1
  int v50; // [sp+118h] [bp-54h]@1
  int v51; // [sp+11Ch] [bp-50h]@8
  int v52; // [sp+120h] [bp-4Ch]@38
  int v53; // [sp+124h] [bp-48h]@38
  int v54; // [sp+128h] [bp-44h]@38
  int v55; // [sp+12Ch] [bp-40h]@38
  int v56; // [sp+130h] [bp-3Ch]@38
  int v57; // [sp+134h] [bp-38h]@38
  int v58; // [sp+138h] [bp-34h]@38
  int v59; // [sp+13Ch] [bp-30h]@40
  int v60; // [sp+140h] [bp-2Ch]@40
  int v61; // [sp+144h] [bp-28h]@40
  int v62; // [sp+148h] [bp-24h]@40
  int v63; // [sp+14Ch] [bp-20h]@40

  v7 = a4 + 108;
  v8 = sub_6F95DBB0(a4 + 108);
  v9 = v7;
  v10 = 0;
  v49 = v8;
  v11 = sub_6F95DC70(v9);
  LODWORD(v12) = wcslen(a7);
  WORD2(v12) = WORD2(a1);
  v50 = 0;
  v47 = v12;
  v13 = (_DWORD *)a1;
  while ( 1 )
  {
    v14 = WORD2(v12) == -1;
    v15 = v14 && v13 != 0;
    if ( v14 && v13 != 0 )
    {
      v27 = (_WORD *)v13[2];
      v28 = (unsigned int)v27 >= v13[3] ? (unsigned __int16)(*(int (**)(void))(*v13 + 36))() : *v27;
      v14 = 0;
      if ( v28 == -1 )
      {
        LODWORD(a1) = 0;
        v14 = v15;
      }
    }
    v16 = (_WORD)a3 == -1;
    v17 = v16 && a2 != 0;
    if ( !v16
      || a2 == 0
      || ((v24 = *(__int16 **)(a2 + 8), (unsigned int)v24 >= *(_DWORD *)(a2 + 12)) ? (v44 = v14,
                                                                                      v45 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2),
                                                                                      v14 = v44,
                                                                                      v25 = v45) : (v25 = *v24),
          v16 = 0,
          v25 != -1) )
    {
      v18 = v50;
      if ( v14 == v16 )
        break;
      goto LABEL_5;
    }
    v18 = v50;
    a2 = 0;
    if ( v14 == v17 )
      break;
LABEL_5:
    if ( v10 >= v47 )
      break;
    if ( v18 )
      goto LABEL_21;
    v19 = v10;
    v20 = v10 + 1;
    v48 = &a7[v10];
    if ( (unsigned __int8)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, *v48, 0) == 37 )
    {
      v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, a7[v19 + 1], 0);
      v51 = 0;
      if ( v21 == 69 || v21 == 79 )
      {
        v20 = v10 + 2;
        v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, a7[v19 + 2], 0);
      }
      switch ( v21 )
      {
        case 110:
          v29 = sub_6F8C24F0((int *)&a1, WORD2(a1));
          if ( (unsigned __int8)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, v29, 0) == 10 )
            goto LABEL_76;
          goto LABEL_29;
        default:
          goto LABEL_29;
        case 120:
          v12 = sub_6F8F46F0(a1, a2, a3, a4, &v50, a6, (const wchar_t *)*(_DWORD *)(*(_DWORD *)(v49 + 8) + 8));
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 65:
          v31 = *(_DWORD *)(v49 + 8);
          v52 = *(_DWORD *)(v31 + 44);
          v53 = *(_DWORD *)(v31 + 48);
          v54 = *(_DWORD *)(v31 + 52);
          v55 = *(_DWORD *)(v31 + 56);
          v56 = *(_DWORD *)(v31 + 60);
          v57 = *(_DWORD *)(v31 + 64);
          v58 = *(_DWORD *)(v31 + 68);
          v12 = sub_6F8F4190(a1, a2, a3, (unsigned int *)&v51, &v52, 7, a4, &v50);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
            goto LABEL_39;
          break;
        case 66:
          v32 = *(_DWORD *)(v49 + 8);
          v52 = *(_DWORD *)(v32 + 100);
          v53 = *(_DWORD *)(v32 + 104);
          v54 = *(_DWORD *)(v32 + 108);
          v55 = *(_DWORD *)(v32 + 112);
          v56 = *(_DWORD *)(v32 + 116);
          v57 = *(_DWORD *)(v32 + 120);
          v58 = *(_DWORD *)(v32 + 124);
          v59 = *(_DWORD *)(v32 + 128);
          v60 = *(_DWORD *)(v32 + 132);
          v61 = *(_DWORD *)(v32 + 136);
          v62 = *(_DWORD *)(v32 + 140);
          v63 = *(_DWORD *)(v32 + 144);
          v12 = sub_6F8F4190(a1, a2, a3, (unsigned int *)&v51, &v52, 12, a4, &v50);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
            goto LABEL_41;
          break;
        case 67:
        case 89:
        case 121:
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 0, 9999, 4u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
          {
            v33 = v51 - 1900;
            if ( v51 < 0 )
              v33 = v51 + 100;
            *(_DWORD *)(a6 + 20) = v33;
          }
          break;
        case 68:
          (*(void (__thiscall **)(int, const char *, const char *, int *))(*(_DWORD *)v11 + 44))(
            v11,
            "%m/%d/%y",
            "%H:%M",
            &v52);
          v12 = sub_6F8F46F0(a1, a2, a3, a4, &v50, a6, (const wchar_t *)&v52);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 72:
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 0, 23, 2u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
            goto LABEL_48;
          break;
        case 73:
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 1, 12, 2u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
LABEL_48:
            *(_DWORD *)(a6 + 8) = v51;
          break;
        case 77:
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 0, 59, 2u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
            *(_DWORD *)(a6 + 4) = v51;
          break;
        case 82:
          (*(void (__thiscall **)(int, const char *, const char *, int *))(*(_DWORD *)v11 + 44))(
            v11,
            "%H:%M",
            "%H:%M:%S",
            &v52);
          v12 = sub_6F8F46F0(a1, a2, a3, a4, &v50, a6, (const wchar_t *)&v52);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 83:
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 0, 60, 2u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
            *(_DWORD *)a6 = v51;
          break;
        case 84:
          (*(void (__thiscall **)(int, const char *, void *, int *))(*(_DWORD *)v11 + 44))(
            v11,
            "%H:%M:%S",
            &unk_6FBA34BA,
            &v52);
          v12 = sub_6F8F46F0(a1, a2, a3, a4, &v50, a6, (const wchar_t *)&v52);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 88:
          v12 = sub_6F8F46F0(a1, a2, a3, a4, &v50, a6, (const wchar_t *)*(_DWORD *)(*(_DWORD *)(v49 + 8) + 16));
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 90:
          v34 = sub_6F8C24F0((int *)&a1, WORD2(a1));
          if ( !(unsigned __int8)(*(int (__thiscall **)(int, signed int, _DWORD))(*(_DWORD *)v11 + 8))(v11, 1, v34) )
            goto LABEL_29;
          v35 = sub_6F8F4190(a1, a2, a3, (unsigned int *)&v52, (int *)off_6FB49F00, 14, a4, &v50);
          LODWORD(a1) = v35;
          WORD2(a1) = WORD2(v35);
          LOBYTE(v12) = sub_6F8C2450(&a1, (int)&a2);
          WORD2(v12) = WORD2(a1);
          if ( (_BYTE)v12 || v52 | v50 )
            break;
          v36 = sub_6F8C24F0((int *)&a1, WORD2(a1));
          if ( v36 != (unsigned __int16)(*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 40))(v11, 45) )
          {
            v37 = sub_6F8C24F0((int *)&a1, WORD2(a1));
            if ( v37 != (unsigned __int16)(*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 40))(v11, 43) )
              goto LABEL_30;
          }
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v52, 0, 23, 2u, a4, &v50);
          WORD2(a1) = v38;
          LODWORD(a1) = sub_6F8F3D10(a1, v38, a2, a3, &v52, 0, 59, 2u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          break;
        case 97:
          v39 = *(_DWORD *)(v49 + 8);
          v52 = *(_DWORD *)(v39 + 72);
          v53 = *(_DWORD *)(v39 + 76);
          v54 = *(_DWORD *)(v39 + 80);
          v55 = *(_DWORD *)(v39 + 84);
          v56 = *(_DWORD *)(v39 + 88);
          v57 = *(_DWORD *)(v39 + 92);
          v58 = *(_DWORD *)(v39 + 96);
          v12 = sub_6F8F4190(a1, a2, a3, (unsigned int *)&v51, &v52, 7, a4, &v50);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
LABEL_39:
            *(_DWORD *)(a6 + 24) = v51;
          break;
        case 98:
        case 104:
          v40 = *(_DWORD *)(v49 + 8);
          v52 = *(_DWORD *)(v40 + 148);
          v53 = *(_DWORD *)(v40 + 152);
          v54 = *(_DWORD *)(v40 + 156);
          v55 = *(_DWORD *)(v40 + 160);
          v56 = *(_DWORD *)(v40 + 164);
          v57 = *(_DWORD *)(v40 + 168);
          v58 = *(_DWORD *)(v40 + 172);
          v59 = *(_DWORD *)(v40 + 176);
          v60 = *(_DWORD *)(v40 + 180);
          v61 = *(_DWORD *)(v40 + 184);
          v62 = *(_DWORD *)(v40 + 188);
          v63 = *(_DWORD *)(v40 + 192);
          v12 = sub_6F8F4190(a1, a2, a3, (unsigned int *)&v51, &v52, 12, a4, &v50);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
LABEL_41:
            *(_DWORD *)(a6 + 16) = v51;
          break;
        case 99:
          v12 = sub_6F8F46F0(a1, a2, a3, a4, &v50, a6, (const wchar_t *)*(_DWORD *)(*(_DWORD *)(v49 + 8) + 24));
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 100:
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 1, 31, 2u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
            goto LABEL_70;
          break;
        case 101:
          v41 = sub_6F8C24F0((int *)&a1, WORD2(a1));
          if ( (unsigned __int8)(*(int (__thiscall **)(int, signed int, _DWORD))(*(_DWORD *)v11 + 8))(v11, 32, v41) )
          {
            sub_6F92DAB0((_DWORD *)a1);
            WORD2(a1) = -1;
            LODWORD(a1) = sub_6F8F3D10(a1, -1, a2, a3, &v51, 1, 9, 1u, a4, &v50);
            WORD2(a1) = v46;
          }
          else
          {
            LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 10, 31, 2u, a4, &v50);
            WORD2(a1) = v42;
          }
          WORD2(v12) = WORD2(a1);
          if ( !v50 )
LABEL_70:
            *(_DWORD *)(a6 + 12) = v51;
          break;
        case 116:
          v43 = sub_6F8C24F0((int *)&a1, WORD2(a1));
          if ( (unsigned __int8)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, v43, 0) == 9 )
          {
LABEL_76:
            sub_6F92DAB0((_DWORD *)a1);
            WORD2(a1) = -1;
            WORD2(v12) = -1;
          }
          else
          {
LABEL_29:
            v50 |= 4u;
LABEL_30:
            WORD2(v12) = WORD2(a1);
          }
          break;
        case 109:
          LODWORD(a1) = sub_6F8F3D10(a1, SWORD2(a1), a2, a3, &v51, 1, 12, 2u, a4, &v50);
          WORD2(a1) = WORD2(v12);
          if ( !v50 )
            *(_DWORD *)(a6 + 16) = v51 - 1;
          break;
      }
      v10 = v20 + 1;
      v13 = (_DWORD *)a1;
    }
    else
    {
      v13 = (_DWORD *)a1;
      v22 = WORD2(a1);
      v23 = *v48;
      if ( (_DWORD)a1 && WORD2(a1) == -1 )
      {
        v30 = *(__int16 **)(a1 + 8);
        if ( (unsigned int)v30 >= *(_DWORD *)(a1 + 12) )
          v22 = (*(int (**)(void))(*(_DWORD *)a1 + 36))();
        else
          v22 = *v30;
        if ( v22 == -1 )
        {
          LODWORD(a1) = 0;
          v13 = 0;
          goto LABEL_13;
        }
        v13 = (_DWORD *)a1;
        if ( v23 == v22 )
          goto LABEL_36;
LABEL_14:
        v50 |= 4u;
        WORD2(v12) = WORD2(a1);
        v10 = v20;
      }
      else
      {
LABEL_13:
        if ( v23 != v22 )
          goto LABEL_14;
LABEL_36:
        sub_6F92DAB0(v13);
        v10 = v20;
        v13 = (_DWORD *)a1;
        WORD2(a1) = -1;
        WORD2(v12) = -1;
      }
    }
  }
  if ( v18 || v10 != v47 )
LABEL_21:
    *a5 |= 4u;
  return a1;
}
