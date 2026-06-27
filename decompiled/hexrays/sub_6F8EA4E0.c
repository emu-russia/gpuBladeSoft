__int64 __stdcall sub_6F8EA4E0(__int64 a1, int a2, __int16 a3, int a4, _DWORD *a5, _WORD *a6)
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
  int v26; // edx@93
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
  char v45; // al@125
  int v46; // [sp+0h] [bp-98h]@1
  int v47; // [sp+4h] [bp-94h]@73
  int *v48; // [sp+8h] [bp-90h]@13
  bool v49; // [sp+1Fh] [bp-79h]@5
  char *v50; // [sp+20h] [bp-78h]@17
  int v51; // [sp+24h] [bp-74h]@15
  int *v52; // [sp+28h] [bp-70h]@4
  unsigned int v53; // [sp+2Ch] [bp-6Ch]@11
  int v54; // [sp+30h] [bp-68h]@1
  int v55; // [sp+34h] [bp-64h]@10
  char v56; // [sp+38h] [bp-60h]@15
  char v57; // [sp+39h] [bp-5Fh]@16
  bool v58; // [sp+3Ah] [bp-5Eh]@4
  bool v59; // [sp+3Bh] [bp-5Dh]@10
  int v60; // [sp+3Ch] [bp-5Ch]@3
  __int64 v61; // [sp+40h] [bp-58h]@5
  int v62; // [sp+48h] [bp-50h]@1
  char v63; // [sp+4Ch] [bp-4Ch]@1
  int v64; // [sp+50h] [bp-48h]@1
  int (__cdecl *v65)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  __int16 *v66; // [sp+68h] [bp-30h]@1
  char *v67; // [sp+6Ch] [bp-2Ch]@1
  int (*v68)(); // [sp+70h] [bp-28h]@1
  int *v69; // [sp+74h] [bp-24h]@1
  char v70; // [sp+8Bh] [bp-Dh]@13
  _DWORD *v71; // [sp+8Ch] [bp-Ch]@13
  char v72; // [sp+90h] [bp-8h]@1

  v67 = &v72;
  v69 = &v46;
  v65 = sub_6F962A50;
  v66 = &word_6F96B18E;
  v68 = sub_6F8EAE42;
  sub_6F8A1A60((int *)&v63);
  v64 = -1;
  v62 = sub_6F8BF000(a4 + 108);
  v6 = *(_DWORD *)(a4 + 12) & 0x4A;
  v54 = v6;
  if ( v6 == 64 )
  {
    v60 = 8;
LABEL_4:
    v52 = &a2;
    v64 = -1;
    v58 = sub_6F8C2450(&a1, (int)&a2);
    if ( v58 )
    {
      v55 = 0;
      LOWORD(v61) = 0;
      v59 = 0;
      v49 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v6 != 8 )
  {
    v60 = 10;
    goto LABEL_4;
  }
  v52 = &a2;
  v64 = -1;
  v58 = sub_6F8C2450(&a1, (int)&a2);
  if ( v58 )
  {
    v55 = 0;
    LOWORD(v61) = 0;
    v59 = 0;
    v49 = 0;
    v60 = 16;
    v53 = 22;
    goto LABEL_13;
  }
  v60 = 16;
LABEL_5:
  v64 = -1;
  LOWORD(v61) = sub_6F8C24F0((int *)&a1, WORD2(a1));
  v7 = *(_WORD *)(v62 + 112);
  v49 = v7 == (_WORD)v61;
  if ( v7 == (_WORD)v61 )
  {
    v8 = *(_BYTE *)(v62 + 16);
LABEL_7:
    if ( (!v8 || *(_WORD *)(v62 + 38) != (_WORD)v61) && *(_WORD *)(v62 + 36) != (_WORD)v61 )
    {
      v64 = -1;
      sub_6F92DAB0((_DWORD *)a1);
      WORD2(a1) = -1;
      v9 = sub_6F8C2450(&a1, (int)v52);
      v55 = 0;
      v58 = v9;
      v59 = 0;
      if ( v9 )
      {
LABEL_11:
        v53 = 22;
        if ( v60 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOWORD(v61) = sub_6F8C24F0((int *)&a1, WORD2(a1));
      v8 = *(_BYTE *)(v62 + 16);
    }
    goto LABEL_37;
  }
  v8 = *(_BYTE *)(v62 + 16);
  if ( *(_WORD *)(v62 + 114) == (_WORD)v61 )
    goto LABEL_7;
LABEL_37:
  v55 = 0;
  v59 = 0;
  while ( 1 )
  {
    if ( v8 && *(_WORD *)(v62 + 38) == (_WORD)v61 || *(_WORD *)(v62 + 36) == (_WORD)v61 )
    {
LABEL_89:
      v58 = 0;
      goto LABEL_11;
    }
    if ( *(_WORD *)(v62 + 120) != (_WORD)v61 )
      break;
    v20 = v60 == 10 || !v59;
    if ( !v20 )
      goto LABEL_43;
    v59 = v60 == 8 || v54 == 0;
    if ( !v59 )
    {
      ++v55;
      v59 = v20;
LABEL_47:
      v15 = a1;
      v16 = *(_DWORD *)(a1 + 8);
      if ( v16 < *(_DWORD *)(a1 + 12) )
        goto LABEL_48;
      goto LABEL_59;
    }
    v15 = a1;
    v55 = 0;
    v60 = 8;
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
    v64 = -1;
    v21();
    v15 = a1;
    WORD2(a1) = -1;
    if ( !(_DWORD)a1 )
    {
      v58 = 1;
      goto LABEL_53;
    }
LABEL_49:
    v17 = *(__int16 **)(v15 + 8);
    if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 12) )
    {
      v40 = *(int (**)(void))(*(_DWORD *)v15 + 36);
      v64 = -1;
      v18 = v40();
    }
    else
    {
      v18 = *v17;
    }
    v58 = 0;
    if ( v18 == -1 )
    {
      LODWORD(a1) = 0;
      v58 = 1;
    }
LABEL_53:
    v19 = a3 == -1;
    LOBYTE(v53) = v19 & (a2 != 0);
    if ( v19 & (a2 != 0) )
    {
      v22 = *(__int16 **)(a2 + 8);
      if ( (unsigned int)v22 >= *(_DWORD *)(a2 + 12) )
      {
        v41 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v64 = -1;
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
        v19 = v53;
      }
    }
    if ( v58 == v19 )
    {
      v58 = 1;
      goto LABEL_11;
    }
    LOWORD(v61) = WORD2(a1);
    if ( (_DWORD)a1 && WORD2(a1) == -1 )
    {
      v25 = *(_WORD **)(a1 + 8);
      if ( (unsigned int)v25 >= *(_DWORD *)(a1 + 12) )
      {
        v43 = *(int (**)(void))(*(_DWORD *)a1 + 36);
        v64 = -1;
        LOWORD(v61) = v43();
      }
      else
      {
        LOWORD(v61) = *v25;
      }
      if ( (_WORD)v61 == -1 )
        LODWORD(a1) = 0;
    }
    if ( !v59 )
      goto LABEL_89;
    v8 = *(_BYTE *)(v62 + 16);
  }
  if ( !v59 )
    goto LABEL_89;
LABEL_43:
  if ( *(_WORD *)(v62 + 116) != (_WORD)v61 && *(_WORD *)(v62 + 118) != (_WORD)v61 )
  {
    v58 = 0;
    v59 = 1;
    goto LABEL_11;
  }
  if ( v54 == 0 || v60 == 16 )
  {
    v55 = 0;
    v59 = 0;
    v60 = 16;
    goto LABEL_47;
  }
  v58 = 0;
  v59 = 1;
LABEL_12:
  v53 = v60;
LABEL_13:
  v48 = (int *)&v70;
  v64 = -1;
  v71 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v62 + 16) )
  {
    v64 = 1;
    sub_6F909A00((int *)&v71, 0x20u);
  }
  v51 = 0xFFFF / v60;
  v56 = *(_BYTE *)(v62 + 164);
  if ( !v56 )
  {
    v57 = 0;
    if ( !v58 )
    {
      LOWORD(v54) = 0;
      LOWORD(v50) = v53 + 48;
      while ( v53 > 0xA )
      {
        if ( (unsigned __int16)(v61 - 48) <= 9u )
          goto LABEL_21;
        if ( (unsigned __int16)(v61 - 97) > 5u )
        {
          if ( (unsigned __int16)(v61 - 65) > 5u )
            goto LABEL_72;
          v10 = (unsigned __int16)v61 - 55;
          goto LABEL_22;
        }
        v10 = (unsigned __int16)v61 - 87;
        if ( v10 == -1 )
          goto LABEL_72;
LABEL_23:
        if ( (unsigned __int16)v51 < (unsigned __int16)v54 )
        {
          v11 = a1;
          v57 = 1;
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
          v57 |= (unsigned __int16)(v60 * v54) > 0xFFFF - v10;
          v11 = a1;
          LOWORD(v54) = v60 * v54 + v10;
          ++v55;
          v12 = *(_DWORD *)(a1 + 8);
          if ( v12 < *(_DWORD *)(a1 + 12) )
            goto LABEL_25;
        }
        v24 = *(void (**)(void))(*(_DWORD *)v11 + 40);
        v64 = 1;
        v24();
LABEL_26:
        WORD2(a1) = -1;
        v64 = 1;
        LOBYTE(v61) = sub_6F8C2450(&a1, (int)v52);
        if ( (_BYTE)v61 )
          goto LABEL_27;
        LOWORD(v61) = sub_6F8C24F0((int *)&a1, WORD2(a1));
      }
      if ( (unsigned __int16)v61 <= 0x2Fu || (unsigned __int16)v50 <= (unsigned __int16)v61 )
        goto LABEL_72;
LABEL_21:
      v10 = (unsigned __int16)v61 - 48;
LABEL_22:
      if ( v10 == -1 )
        goto LABEL_72;
      goto LABEL_23;
    }
    v44 = v58;
    v58 = 0;
    LOBYTE(v61) = v44;
    LOWORD(v54) = 0;
LABEL_27:
    v13 = v71;
    if ( !*(v71 - 3) )
      goto LABEL_28;
LABEL_73:
    v64 = 1;
    sub_6F909C90((int *)&v71, v55);
    v48 = (int *)&v71;
    v47 = *(_DWORD *)(v62 + 12);
    if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v62 + 8), v47, &v71) )
      *a5 = 4;
    v13 = v71;
    if ( !v55 && v59 != 1 && !*(v71 - 3) )
      goto LABEL_30;
    goto LABEL_78;
  }
  if ( v58 )
  {
    v45 = v58;
    v57 = 0;
    v58 = 0;
    LOBYTE(v61) = v45;
    LOWORD(v54) = 0;
    goto LABEL_27;
  }
  v26 = v62;
  v57 = 0;
  v50 = (char *)(v62 + 120);
  LOWORD(v54) = 0;
  v27 = *(_BYTE *)(v62 + 16);
  if ( !v27 )
    goto LABEL_101;
LABEL_94:
  if ( *(_WORD *)(v26 + 38) == (_WORD)v61 )
  {
    if ( v55 )
    {
      v64 = 1;
      sub_6F909C90((int *)&v71, v55);
      v55 = 0;
      goto LABEL_97;
    }
    LOBYTE(v61) = 0;
    v58 = v27;
    goto LABEL_27;
  }
  while ( 1 )
  {
LABEL_101:
    if ( (_WORD)v61 == *(_WORD *)(v62 + 36) )
      goto LABEL_72;
    v31 = v50;
    v32 = v53;
    if ( *(_WORD *)v50 != (_WORD)v61 )
      break;
LABEL_105:
    v33 = v31 - v50;
    v36 = __OFSUB__(v33, 30);
    v34 = v33 == 30;
    v35 = v33 - 30 < 0;
    v37 = (v33 >> 1) - 6;
    v38 = v33 >> 1;
    if ( !((unsigned __int8)(v35 ^ v36) | v34) )
      v38 = v37;
    if ( (unsigned __int16)v51 >= (unsigned __int16)v54 )
    {
      v57 |= (unsigned __int16)(v60 * v54) > 0xFFFF - v38;
      LOWORD(v54) = v60 * v54 + v38;
      ++v55;
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
    v57 = v56;
    v29 = *(_DWORD *)(a1 + 8);
    if ( v29 < *(_DWORD *)(a1 + 12) )
      goto LABEL_98;
LABEL_109:
    v39 = *(void (**)(void))(*(_DWORD *)v28 + 40);
    v64 = 1;
    v39();
LABEL_99:
    WORD2(a1) = -1;
    v64 = 1;
    LOBYTE(v61) = sub_6F8C2450(&a1, (int)v52);
    if ( (_BYTE)v61 )
      goto LABEL_27;
    v30 = sub_6F8C24F0((int *)&a1, WORD2(a1));
    v26 = v62;
    LOWORD(v61) = v30;
    v27 = *(_BYTE *)(v62 + 16);
    if ( v27 )
      goto LABEL_94;
  }
  while ( 1 )
  {
    v31 += 2;
    if ( !--v32 )
      break;
    if ( *(_WORD *)v31 == (_WORD)v61 )
      goto LABEL_105;
  }
LABEL_72:
  v13 = v71;
  LOBYTE(v61) = 0;
  if ( *(v71 - 3) )
    goto LABEL_73;
LABEL_28:
  if ( !v55 && v59 != 1 )
    goto LABEL_30;
LABEL_78:
  if ( v58 )
  {
LABEL_30:
    *a6 = 0;
    *a5 = 4;
    goto LABEL_31;
  }
  if ( v57 )
  {
    *a6 = -1;
    *a5 = 4;
  }
  else
  {
    v42 = -(unsigned __int16)v54;
    if ( !v49 )
      LOWORD(v42) = v54;
    *a6 = v42;
  }
LABEL_31:
  if ( (_BYTE)v61 )
    *a5 |= 2u;
  v61 = a1;
  sub_6F9086F0((int)(v13 - 3), (int)&v70);
  sub_6F8A1AD0((int *)&v63);
  return v61;
}
