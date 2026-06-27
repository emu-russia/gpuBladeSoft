__int64 __stdcall sub_6F8E87C0(__int64 a1, int a2, __int16 a3, int a4, _DWORD *a5, int *a6)
{
  int v6; // eax@1
  __int16 v7; // ax@5
  char v8; // al@6
  bool v9; // al@10
  int v10; // eax@21
  int v11; // ecx@24
  unsigned int v12; // eax@24
  _DWORD *v13; // ecx@27
  int v15; // ecx@47
  unsigned int v16; // eax@47
  __int16 *v17; // eax@49
  __int16 v18; // ax@50
  unsigned __int8 v19; // dl@53
  bool v20; // al@56
  void (*v21)(void); // eax@59
  __int16 *v22; // eax@65
  __int16 v23; // ax@66
  void (*v24)(void); // eax@82
  _WORD *v25; // eax@84
  int v26; // ebx@93
  bool v27; // al@93
  int v28; // ecx@97
  unsigned int v29; // eax@97
  __int16 v30; // ax@100
  char *v31; // eax@102
  unsigned int v32; // edx@102
  signed int v33; // eax@105
  bool v34; // zf@105
  bool v35; // sf@105
  unsigned __int8 v36; // of@105
  int v37; // edx@105
  signed int v38; // eax@105
  void (*v39)(void); // eax@109
  int (*v40)(void); // eax@113
  int (*v41)(void); // eax@114
  int v42; // eax@116
  int (*v43)(void); // eax@122
  char v44; // al@124
  int v45; // [sp+0h] [bp-98h]@1
  int v46; // [sp+4h] [bp-94h]@73
  int *v47; // [sp+8h] [bp-90h]@13
  bool v48; // [sp+1Fh] [bp-79h]@5
  char *v49; // [sp+20h] [bp-78h]@17
  unsigned int v50; // [sp+24h] [bp-74h]@15
  int *v51; // [sp+28h] [bp-70h]@4
  unsigned int v52; // [sp+2Ch] [bp-6Ch]@11
  unsigned int v53; // [sp+30h] [bp-68h]@1
  int v54; // [sp+34h] [bp-64h]@10
  char v55; // [sp+38h] [bp-60h]@15
  char v56; // [sp+39h] [bp-5Fh]@16
  bool v57; // [sp+3Ah] [bp-5Eh]@4
  bool v58; // [sp+3Bh] [bp-5Dh]@10
  unsigned int v59; // [sp+3Ch] [bp-5Ch]@3
  __int64 v60; // [sp+40h] [bp-58h]@5
  int v61; // [sp+48h] [bp-50h]@1
  char v62; // [sp+4Ch] [bp-4Ch]@1
  int v63; // [sp+50h] [bp-48h]@1
  int (__cdecl *v64)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  int *v65; // [sp+68h] [bp-30h]@1
  char *v66; // [sp+6Ch] [bp-2Ch]@1
  int (*v67)(); // [sp+70h] [bp-28h]@1
  int *v68; // [sp+74h] [bp-24h]@1
  char v69; // [sp+8Bh] [bp-Dh]@13
  _DWORD *v70; // [sp+8Ch] [bp-Ch]@13
  char v71; // [sp+90h] [bp-8h]@1

  v66 = &v71;
  v68 = &v45;
  v64 = sub_6F962A50;
  v65 = &dword_6F96B194;
  v67 = sub_6F8E90F4;
  sub_6F8A1A60((int *)&v62);
  v63 = -1;
  v61 = sub_6F8BF000(a4 + 108);
  v6 = *(_DWORD *)(a4 + 12) & 0x4A;
  v53 = v6;
  if ( v6 == 64 )
  {
    v59 = 8;
LABEL_4:
    v51 = &a2;
    v63 = -1;
    v57 = sub_6F8C2450(&a1, (int)&a2);
    if ( v57 )
    {
      v54 = 0;
      LOWORD(v60) = 0;
      v58 = 0;
      v48 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v6 != 8 )
  {
    v59 = 10;
    goto LABEL_4;
  }
  v51 = &a2;
  v63 = -1;
  v57 = sub_6F8C2450(&a1, (int)&a2);
  if ( v57 )
  {
    v54 = 0;
    LOWORD(v60) = 0;
    v58 = 0;
    v48 = 0;
    v59 = 16;
    v52 = 22;
    goto LABEL_13;
  }
  v59 = 16;
LABEL_5:
  v63 = -1;
  LOWORD(v60) = sub_6F8C24F0((int *)&a1, WORD2(a1));
  v7 = *(_WORD *)(v61 + 112);
  v48 = v7 == (_WORD)v60;
  if ( v7 == (_WORD)v60 )
  {
    v8 = *(_BYTE *)(v61 + 16);
LABEL_7:
    if ( (!v8 || *(_WORD *)(v61 + 38) != (_WORD)v60) && *(_WORD *)(v61 + 36) != (_WORD)v60 )
    {
      v63 = -1;
      sub_6F92DAB0((_DWORD *)a1);
      WORD2(a1) = -1;
      v9 = sub_6F8C2450(&a1, (int)v51);
      v54 = 0;
      v57 = v9;
      v58 = 0;
      if ( v9 )
      {
LABEL_11:
        v52 = 22;
        if ( v59 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOWORD(v60) = sub_6F8C24F0((int *)&a1, WORD2(a1));
      v8 = *(_BYTE *)(v61 + 16);
    }
    goto LABEL_37;
  }
  v8 = *(_BYTE *)(v61 + 16);
  if ( *(_WORD *)(v61 + 114) == (_WORD)v60 )
    goto LABEL_7;
LABEL_37:
  v54 = 0;
  v58 = 0;
  while ( 1 )
  {
    if ( v8 && *(_WORD *)(v61 + 38) == (_WORD)v60 || *(_WORD *)(v61 + 36) == (_WORD)v60 )
    {
LABEL_89:
      v57 = 0;
      goto LABEL_11;
    }
    if ( *(_WORD *)(v61 + 120) != (_WORD)v60 )
      break;
    v20 = v59 == 10 || !v58;
    if ( !v20 )
      goto LABEL_43;
    v58 = v59 == 8 || v53 == 0;
    if ( !v58 )
    {
      ++v54;
      v58 = v20;
LABEL_47:
      v15 = a1;
      v16 = *(_DWORD *)(a1 + 8);
      if ( v16 < *(_DWORD *)(a1 + 12) )
        goto LABEL_48;
      goto LABEL_59;
    }
    v15 = a1;
    v54 = 0;
    v59 = 8;
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 < *(_DWORD *)(a1 + 12) )
    {
LABEL_48:
      *(_DWORD *)(v15 + 8) = v16 + 2;
      WORD2(a1) = -1;
      goto LABEL_49;
    }
LABEL_59:
    v21 = *(void (**)(void))(*(_DWORD *)v15 + 40);
    v63 = -1;
    v21();
    v15 = a1;
    WORD2(a1) = -1;
    if ( !(_DWORD)a1 )
    {
      v57 = 1;
      goto LABEL_53;
    }
LABEL_49:
    v17 = *(__int16 **)(v15 + 8);
    if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 12) )
    {
      v40 = *(int (**)(void))(*(_DWORD *)v15 + 36);
      v63 = -1;
      v18 = v40();
    }
    else
    {
      v18 = *v17;
    }
    v57 = 0;
    if ( v18 == -1 )
    {
      LODWORD(a1) = 0;
      v57 = 1;
    }
LABEL_53:
    v19 = a3 == -1;
    LOBYTE(v52) = v19 & (a2 != 0);
    if ( v19 & (a2 != 0) )
    {
      v22 = *(__int16 **)(a2 + 8);
      if ( (unsigned int)v22 >= *(_DWORD *)(a2 + 12) )
      {
        v41 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v63 = -1;
        v23 = v41();
      }
      else
      {
        v23 = *v22;
      }
      v19 = 0;
      if ( v23 == -1 )
      {
        a2 = 0;
        v19 = v52;
      }
    }
    if ( v57 == v19 )
    {
      v57 = 1;
      goto LABEL_11;
    }
    LOWORD(v60) = WORD2(a1);
    if ( (_DWORD)a1 && WORD2(a1) == -1 )
    {
      v25 = *(_WORD **)(a1 + 8);
      if ( (unsigned int)v25 >= *(_DWORD *)(a1 + 12) )
      {
        v43 = *(int (**)(void))(*(_DWORD *)a1 + 36);
        v63 = -1;
        LOWORD(v60) = v43();
      }
      else
      {
        LOWORD(v60) = *v25;
      }
      if ( (_WORD)v60 == -1 )
        LODWORD(a1) = 0;
    }
    if ( !v58 )
      goto LABEL_89;
    v8 = *(_BYTE *)(v61 + 16);
  }
  if ( !v58 )
    goto LABEL_89;
LABEL_43:
  if ( *(_WORD *)(v61 + 116) != (_WORD)v60 && *(_WORD *)(v61 + 118) != (_WORD)v60 )
  {
    v57 = 0;
    v58 = 1;
    goto LABEL_11;
  }
  if ( v53 == 0 || v59 == 16 )
  {
    v54 = 0;
    v58 = 0;
    v59 = 16;
    goto LABEL_47;
  }
  v57 = 0;
  v58 = 1;
LABEL_12:
  v52 = v59;
LABEL_13:
  v47 = (int *)&v69;
  v63 = -1;
  v70 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v61 + 16) )
  {
    v63 = 1;
    sub_6F909A00((int *)&v70, 0x20u);
  }
  v50 = 0xFFFFFFFF / v59;
  v55 = *(_BYTE *)(v61 + 164);
  if ( !v55 )
  {
    v56 = 0;
    if ( !v57 )
    {
      v53 = 0;
      LOWORD(v49) = v52 + 48;
      while ( v52 > 0xA )
      {
        if ( (unsigned __int16)(v60 - 48) <= 9u )
          goto LABEL_21;
        if ( (unsigned __int16)(v60 - 97) > 5u )
        {
          if ( (unsigned __int16)(v60 - 65) > 5u )
            goto LABEL_72;
          v10 = (unsigned __int16)v60 - 55;
          goto LABEL_22;
        }
        v10 = (unsigned __int16)v60 - 87;
        if ( v10 == -1 )
          goto LABEL_72;
LABEL_23:
        if ( v50 < v53 )
        {
          v11 = a1;
          v56 = 1;
          v12 = *(_DWORD *)(a1 + 8);
          if ( v12 < *(_DWORD *)(a1 + 12) )
          {
LABEL_25:
            *(_DWORD *)(v11 + 8) = v12 + 2;
            goto LABEL_26;
          }
        }
        else
        {
          v56 |= ~v10 < v59 * v53;
          v11 = a1;
          v53 = v59 * v53 + v10;
          ++v54;
          v12 = *(_DWORD *)(a1 + 8);
          if ( v12 < *(_DWORD *)(a1 + 12) )
            goto LABEL_25;
        }
        v24 = *(void (**)(void))(*(_DWORD *)v11 + 40);
        v63 = 1;
        v24();
LABEL_26:
        WORD2(a1) = -1;
        v63 = 1;
        LOBYTE(v60) = sub_6F8C2450(&a1, (int)v51);
        if ( (_BYTE)v60 )
          goto LABEL_27;
        LOWORD(v60) = sub_6F8C24F0((int *)&a1, WORD2(a1));
      }
      if ( (unsigned __int16)v60 <= 0x2Fu || (unsigned __int16)v49 <= (unsigned __int16)v60 )
        goto LABEL_72;
LABEL_21:
      v10 = (unsigned __int16)v60 - 48;
LABEL_22:
      if ( v10 == -1 )
        goto LABEL_72;
      goto LABEL_23;
    }
    v44 = v57;
    v53 = 0;
    v57 = 0;
    LOBYTE(v60) = v44;
LABEL_27:
    v13 = v70;
    if ( !*(v70 - 3) )
      goto LABEL_28;
LABEL_73:
    v63 = 1;
    sub_6F909C90((int *)&v70, v54);
    v47 = (int *)&v70;
    v46 = *(_DWORD *)(v61 + 12);
    if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v61 + 8), v46, &v70) )
      *a5 = 4;
    v13 = v70;
    if ( !v54 && v58 != 1 && !*(v70 - 3) )
      goto LABEL_30;
    goto LABEL_78;
  }
  if ( v57 )
  {
    v53 = 0;
    v56 = 0;
    LOBYTE(v60) = v57;
    v57 = 0;
    goto LABEL_27;
  }
  v26 = v61;
  v56 = 0;
  v53 = 0;
  v49 = (char *)(v61 + 120);
  v27 = *(_BYTE *)(v61 + 16);
  if ( !v27 )
    goto LABEL_101;
LABEL_94:
  if ( *(_WORD *)(v26 + 38) == (_WORD)v60 )
  {
    if ( v54 )
    {
      v63 = 1;
      sub_6F909C90((int *)&v70, v54);
      v54 = 0;
      goto LABEL_97;
    }
    LOBYTE(v60) = 0;
    v57 = v27;
    goto LABEL_27;
  }
  while ( 1 )
  {
LABEL_101:
    if ( (_WORD)v60 == *(_WORD *)(v61 + 36) )
      goto LABEL_72;
    v31 = v49;
    v32 = v52;
    if ( *(_WORD *)v49 != (_WORD)v60 )
      break;
LABEL_105:
    v33 = v31 - v49;
    v36 = __OFSUB__(v33, 30);
    v34 = v33 == 30;
    v35 = v33 - 30 < 0;
    v37 = (v33 >> 1) - 6;
    v38 = v33 >> 1;
    if ( !((unsigned __int8)(v35 ^ v36) | v34) )
      v38 = v37;
    if ( v50 >= v53 )
    {
      v56 |= ~v38 < v59 * v53;
      v53 = v59 * v53 + v38;
      ++v54;
LABEL_97:
      v28 = a1;
      v29 = *(_DWORD *)(a1 + 8);
      if ( v29 >= *(_DWORD *)(a1 + 12) )
        goto LABEL_109;
LABEL_98:
      *(_DWORD *)(v28 + 8) = v29 + 2;
      goto LABEL_99;
    }
    v28 = a1;
    v56 = v55;
    v29 = *(_DWORD *)(a1 + 8);
    if ( v29 < *(_DWORD *)(a1 + 12) )
      goto LABEL_98;
LABEL_109:
    v39 = *(void (**)(void))(*(_DWORD *)v28 + 40);
    v63 = 1;
    v39();
LABEL_99:
    WORD2(a1) = -1;
    v63 = 1;
    LOBYTE(v60) = sub_6F8C2450(&a1, (int)v51);
    if ( (_BYTE)v60 )
      goto LABEL_27;
    v30 = sub_6F8C24F0((int *)&a1, WORD2(a1));
    v26 = v61;
    LOWORD(v60) = v30;
    v27 = *(_BYTE *)(v61 + 16);
    if ( v27 )
      goto LABEL_94;
  }
  while ( 1 )
  {
    v31 += 2;
    if ( !--v32 )
      break;
    if ( *(_WORD *)v31 == (_WORD)v60 )
      goto LABEL_105;
  }
LABEL_72:
  v13 = v70;
  LOBYTE(v60) = 0;
  if ( *(v70 - 3) )
    goto LABEL_73;
LABEL_28:
  if ( !v54 && v58 != 1 )
    goto LABEL_30;
LABEL_78:
  if ( v57 )
  {
LABEL_30:
    *a6 = 0;
    *a5 = 4;
    goto LABEL_31;
  }
  if ( v56 )
  {
    *a6 = -1;
    *a5 = 4;
  }
  else
  {
    v42 = -v53;
    if ( !v48 )
      v42 = v53;
    *a6 = v42;
  }
LABEL_31:
  if ( (_BYTE)v60 )
    *a5 |= 2u;
  v60 = a1;
  sub_6F9086F0((int)(v13 - 3), (int)&v69);
  sub_6F8A1AD0((int *)&v62);
  return v60;
}
