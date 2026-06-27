__int64 __stdcall sub_6F8CE530(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6, const wchar_t *a7)
{
  int v7; // ebx@1
  int v8; // eax@1
  int v9; // ST20_4@1
  unsigned int v10; // ebx@1
  int v11; // esi@1
  __int64 v12; // rax@1
  int v13; // ecx@1
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
  unsigned int v31; // eax@36
  int v32; // eax@40
  int v33; // eax@42
  int v34; // eax@45
  int v35; // eax@53
  int v36; // eax@55
  unsigned __int16 v37; // ax@60
  __int16 v38; // dx@61
  unsigned __int16 v39; // ax@68
  __int64 v40; // rax@69
  __int16 v41; // di@71
  __int16 v42; // di@72
  signed __int16 v43; // dx@73
  unsigned __int16 v44; // ax@77
  bool v45; // ST54_1@81
  __int16 v46; // ax@81
  __int16 v47; // dx@84
  unsigned int v48; // [sp+50h] [bp-11Ch]@1
  const wchar_t *v49; // [sp+54h] [bp-118h]@7
  int v50; // [sp+5Ch] [bp-110h]@1
  int v51; // [sp+118h] [bp-54h]@1
  int v52; // [sp+11Ch] [bp-50h]@8
  int v53; // [sp+120h] [bp-4Ch]@40
  int v54; // [sp+124h] [bp-48h]@40
  int v55; // [sp+128h] [bp-44h]@40
  int v56; // [sp+12Ch] [bp-40h]@40
  int v57; // [sp+130h] [bp-3Ch]@40
  int v58; // [sp+134h] [bp-38h]@40
  int v59; // [sp+138h] [bp-34h]@40
  int v60; // [sp+13Ch] [bp-30h]@42
  int v61; // [sp+140h] [bp-2Ch]@42
  int v62; // [sp+144h] [bp-28h]@42
  int v63; // [sp+148h] [bp-24h]@42
  int v64; // [sp+14Ch] [bp-20h]@42

  v7 = a4 + 108;
  v8 = sub_6F95DBB0(a4 + 108);
  v9 = v7;
  v10 = 0;
  v50 = v8;
  v11 = sub_6F95DC70(v9);
  LODWORD(v12) = wcslen(a7);
  WORD2(v12) = WORD2(a1);
  v51 = 0;
  v48 = v12;
  v13 = a1;
  while ( 1 )
  {
    v14 = WORD2(v12) == -1;
    v15 = v14 && v13 != 0;
    if ( v14 && v13 != 0 )
    {
      v27 = *(_WORD **)(v13 + 8);
      v28 = (unsigned int)v27 >= *(_DWORD *)(v13 + 12) ? (unsigned __int16)(*(int (**)(void))(*(_DWORD *)v13 + 36))() : *v27;
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
      || ((v24 = *(__int16 **)(a2 + 8), (unsigned int)v24 >= *(_DWORD *)(a2 + 12)) ? (v45 = v14,
                                                                                      v46 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2),
                                                                                      v14 = v45,
                                                                                      v25 = v46) : (v25 = *v24),
          v16 = 0,
          v25 != -1) )
    {
      v18 = v51;
      if ( v14 == v16 )
        break;
      goto LABEL_5;
    }
    v18 = v51;
    a2 = 0;
    if ( v14 == v17 )
      break;
LABEL_5:
    if ( v10 >= v48 )
      break;
    if ( v18 )
      goto LABEL_21;
    v19 = v10;
    v20 = v10 + 1;
    v49 = &a7[v10];
    if ( (unsigned __int8)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, *v49, 0) == 37 )
    {
      v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, a7[v19 + 1], 0);
      v52 = 0;
      if ( v21 == 69 || v21 == 79 )
      {
        v20 = v10 + 2;
        v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, a7[v19 + 2], 0);
      }
      switch ( v21 )
      {
        case 110:
          v29 = sub_6F8C2540((int *)&a1, WORD2(a1));
          if ( (unsigned __int8)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, v29, 0) == 10 )
            goto LABEL_78;
          goto LABEL_29;
        default:
          goto LABEL_29;
        case 120:
          v12 = sub_6F8CE530(a1, a2, a3, a4, &v51, a6, (const wchar_t *)*(_DWORD *)(*(_DWORD *)(v50 + 8) + 8));
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 65:
          v32 = *(_DWORD *)(v50 + 8);
          v53 = *(_DWORD *)(v32 + 44);
          v54 = *(_DWORD *)(v32 + 48);
          v55 = *(_DWORD *)(v32 + 52);
          v56 = *(_DWORD *)(v32 + 56);
          v57 = *(_DWORD *)(v32 + 60);
          v58 = *(_DWORD *)(v32 + 64);
          v59 = *(_DWORD *)(v32 + 68);
          v12 = sub_6F8CDF20(a1, a2, a3, (unsigned int *)&v52, (int)&v53, 7, a4, &v51);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
            goto LABEL_41;
          break;
        case 66:
          v33 = *(_DWORD *)(v50 + 8);
          v53 = *(_DWORD *)(v33 + 100);
          v54 = *(_DWORD *)(v33 + 104);
          v55 = *(_DWORD *)(v33 + 108);
          v56 = *(_DWORD *)(v33 + 112);
          v57 = *(_DWORD *)(v33 + 116);
          v58 = *(_DWORD *)(v33 + 120);
          v59 = *(_DWORD *)(v33 + 124);
          v60 = *(_DWORD *)(v33 + 128);
          v61 = *(_DWORD *)(v33 + 132);
          v62 = *(_DWORD *)(v33 + 136);
          v63 = *(_DWORD *)(v33 + 140);
          v64 = *(_DWORD *)(v33 + 144);
          v12 = sub_6F8CDF20(a1, a2, a3, (unsigned int *)&v52, (int)&v53, 12, a4, &v51);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
            goto LABEL_43;
          break;
        case 67:
        case 89:
        case 121:
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 0, 9999, 4u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
          {
            v34 = v52 - 1900;
            if ( v52 < 0 )
              v34 = v52 + 100;
            *(_DWORD *)(a6 + 20) = v34;
          }
          break;
        case 68:
          (*(void (__thiscall **)(int, const char *, const char *, int *))(*(_DWORD *)v11 + 44))(
            v11,
            "%m/%d/%y",
            "%H:%M",
            &v53);
          v12 = sub_6F8CE530(a1, a2, a3, a4, &v51, a6, (const wchar_t *)&v53);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 72:
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 0, 23, 2u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
            goto LABEL_50;
          break;
        case 73:
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 1, 12, 2u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
LABEL_50:
            *(_DWORD *)(a6 + 8) = v52;
          break;
        case 97:
          v35 = *(_DWORD *)(v50 + 8);
          v53 = *(_DWORD *)(v35 + 72);
          v54 = *(_DWORD *)(v35 + 76);
          v55 = *(_DWORD *)(v35 + 80);
          v56 = *(_DWORD *)(v35 + 84);
          v57 = *(_DWORD *)(v35 + 88);
          v58 = *(_DWORD *)(v35 + 92);
          v59 = *(_DWORD *)(v35 + 96);
          v12 = sub_6F8CDF20(a1, a2, a3, (unsigned int *)&v52, (int)&v53, 7, a4, &v51);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
LABEL_41:
            *(_DWORD *)(a6 + 24) = v52;
          break;
        case 98:
        case 104:
          v36 = *(_DWORD *)(v50 + 8);
          v53 = *(_DWORD *)(v36 + 148);
          v54 = *(_DWORD *)(v36 + 152);
          v55 = *(_DWORD *)(v36 + 156);
          v56 = *(_DWORD *)(v36 + 160);
          v57 = *(_DWORD *)(v36 + 164);
          v58 = *(_DWORD *)(v36 + 168);
          v59 = *(_DWORD *)(v36 + 172);
          v60 = *(_DWORD *)(v36 + 176);
          v61 = *(_DWORD *)(v36 + 180);
          v62 = *(_DWORD *)(v36 + 184);
          v63 = *(_DWORD *)(v36 + 188);
          v64 = *(_DWORD *)(v36 + 192);
          v12 = sub_6F8CDF20(a1, a2, a3, (unsigned int *)&v52, (int)&v53, 12, a4, &v51);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
LABEL_43:
            *(_DWORD *)(a6 + 16) = v52;
          break;
        case 99:
          v12 = sub_6F8CE530(a1, a2, a3, a4, &v51, a6, (const wchar_t *)*(_DWORD *)(*(_DWORD *)(v50 + 8) + 24));
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 100:
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 1, 31, 2u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
            goto LABEL_59;
          break;
        case 101:
          v37 = sub_6F8C2540((int *)&a1, WORD2(a1));
          if ( (unsigned __int8)(*(int (__thiscall **)(int, signed int, _DWORD))(*(_DWORD *)v11 + 8))(v11, 32, v37) )
          {
            sub_6F92DAB0((_DWORD *)a1);
            WORD2(a1) = -1;
            LODWORD(a1) = sub_6F8CDAA0(a1, -1, a2, a3, &v52, 1, 9, 1u, a4, &v51);
            WORD2(a1) = v47;
          }
          else
          {
            LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 10, 31, 2u, a4, &v51);
            WORD2(a1) = v38;
          }
          WORD2(v12) = WORD2(a1);
          if ( !v51 )
LABEL_59:
            *(_DWORD *)(a6 + 12) = v52;
          break;
        case 83:
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 0, 60, 2u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
            *(_DWORD *)a6 = v52;
          break;
        case 84:
          (*(void (__thiscall **)(int, const char *, void *, int *))(*(_DWORD *)v11 + 44))(
            v11,
            "%H:%M:%S",
            &unk_6FBA3D12,
            &v53);
          v12 = sub_6F8CE530(a1, a2, a3, a4, &v51, a6, (const wchar_t *)&v53);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 88:
          v12 = sub_6F8CE530(a1, a2, a3, a4, &v51, a6, (const wchar_t *)*(_DWORD *)(*(_DWORD *)(v50 + 8) + 16));
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 90:
          v39 = sub_6F8C2540((int *)&a1, WORD2(a1));
          if ( !(unsigned __int8)(*(int (__thiscall **)(int, signed int, _DWORD))(*(_DWORD *)v11 + 8))(v11, 1, v39) )
            goto LABEL_29;
          v40 = sub_6F8CDF20(a1, a2, a3, (unsigned int *)&v53, (int)off_6FB49F00, 14, a4, &v51);
          LODWORD(a1) = v40;
          WORD2(a1) = WORD2(v40);
          LOBYTE(v12) = sub_6F8C2450(&a1, (int)&a2);
          WORD2(v12) = WORD2(a1);
          if ( (_BYTE)v12 || v53 | v51 )
            break;
          v41 = sub_6F8C2540((int *)&a1, WORD2(a1));
          if ( v41 != (unsigned __int16)(*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 40))(v11, 45) )
          {
            v42 = sub_6F8C2540((int *)&a1, WORD2(a1));
            if ( v42 != (unsigned __int16)(*(int (__thiscall **)(int, signed int))(*(_DWORD *)v11 + 40))(v11, 43) )
              goto LABEL_30;
          }
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v53, 0, 23, 2u, a4, &v51);
          WORD2(a1) = v43;
          LODWORD(a1) = sub_6F8CDAA0(a1, v43, a2, a3, &v53, 0, 59, 2u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          break;
        case 77:
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 0, 59, 2u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
            *(_DWORD *)(a6 + 4) = v52;
          break;
        case 82:
          (*(void (__thiscall **)(int, const char *, const char *, int *))(*(_DWORD *)v11 + 44))(
            v11,
            "%H:%M",
            "%H:%M:%S",
            &v53);
          v12 = sub_6F8CE530(a1, a2, a3, a4, &v51, a6, (const wchar_t *)&v53);
          LODWORD(a1) = v12;
          WORD2(a1) = WORD2(v12);
          break;
        case 116:
          v44 = sub_6F8C2540((int *)&a1, WORD2(a1));
          if ( (unsigned __int8)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 48))(v11, v44, 0) == 9 )
          {
LABEL_78:
            sub_6F92DAB0((_DWORD *)a1);
            WORD2(a1) = -1;
            WORD2(v12) = -1;
          }
          else
          {
LABEL_29:
            v51 |= 4u;
LABEL_30:
            WORD2(v12) = WORD2(a1);
          }
          break;
        case 109:
          LODWORD(a1) = sub_6F8CDAA0(a1, SWORD2(a1), a2, a3, &v52, 1, 12, 2u, a4, &v51);
          WORD2(a1) = WORD2(v12);
          if ( !v51 )
            *(_DWORD *)(a6 + 16) = v52 - 1;
          break;
      }
      v10 = v20 + 1;
      v13 = a1;
    }
    else
    {
      v13 = a1;
      v22 = WORD2(a1);
      v23 = *v49;
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
        v13 = a1;
        if ( v23 == v22 )
          goto LABEL_36;
LABEL_14:
        v51 |= 4u;
        WORD2(v12) = WORD2(a1);
        v10 = v20;
      }
      else
      {
LABEL_13:
        if ( v23 != v22 )
          goto LABEL_14;
LABEL_36:
        v31 = *(_DWORD *)(v13 + 8);
        if ( v31 >= *(_DWORD *)(v13 + 12) )
        {
          (*(void (**)(void))(*(_DWORD *)v13 + 40))();
          v13 = a1;
        }
        else
        {
          *(_DWORD *)(v13 + 8) = v31 + 2;
        }
        v10 = v20;
        WORD2(v12) = -1;
        WORD2(a1) = -1;
      }
    }
  }
  if ( v10 != v48 || v18 )
LABEL_21:
    *a5 |= 4u;
  return a1;
}
