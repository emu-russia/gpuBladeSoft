__int64 __stdcall sub_6F8E9130(__int64 a1, int a2, __int16 a3, int a4, _DWORD *a5, int *a6)
{
  int v6; // eax@1
  __int16 v7; // ax@5
  char v8; // al@6
  bool v9; // al@10
  int v10; // eax@20
  int v11; // ecx@23
  unsigned int v12; // eax@23
  _DWORD *v13; // ecx@26
  int v15; // ecx@46
  unsigned int v16; // eax@46
  __int16 *v17; // eax@48
  __int16 v18; // ax@49
  char v19; // dl@52
  bool v20; // al@55
  void (*v21)(void); // eax@58
  __int16 *v22; // eax@64
  __int16 v23; // ax@65
  void (*v24)(void); // eax@81
  _WORD *v25; // eax@83
  int v26; // ebx@93
  char v27; // al@93
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
  int (*v40)(void); // eax@116
  int (*v41)(void); // eax@117
  int v42; // eax@119
  int (*v43)(void); // eax@124
  char v44; // al@125
  char v45; // al@129
  int v46; // [sp+0h] [bp-98h]@1
  int v47; // [sp+4h] [bp-94h]@72
  int *v48; // [sp+8h] [bp-90h]@13
  unsigned int v49; // [sp+10h] [bp-88h]@14
  char *v50; // [sp+14h] [bp-84h]@13
  int v51; // [sp+18h] [bp-80h]@5
  unsigned int v52; // [sp+1Ch] [bp-7Ch]@14
  unsigned int v53; // [sp+20h] [bp-78h]@14
  unsigned int v54; // [sp+24h] [bp-74h]@14
  unsigned int v55; // [sp+28h] [bp-70h]@11
  int *v56; // [sp+2Ch] [bp-6Ch]@4
  unsigned int v57; // [sp+30h] [bp-68h]@1
  int v58; // [sp+34h] [bp-64h]@10
  char v59; // [sp+39h] [bp-5Fh]@14
  char v60; // [sp+3Ah] [bp-5Eh]@4
  bool v61; // [sp+3Bh] [bp-5Dh]@10
  unsigned int v62; // [sp+3Ch] [bp-5Ch]@3
  __int64 v63; // [sp+40h] [bp-58h]@5
  int v64; // [sp+48h] [bp-50h]@1
  char v65; // [sp+4Ch] [bp-4Ch]@1
  int v66; // [sp+50h] [bp-48h]@1
  int (__cdecl *v67)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  int *v68; // [sp+68h] [bp-30h]@1
  char *v69; // [sp+6Ch] [bp-2Ch]@1
  int (*v70)(); // [sp+70h] [bp-28h]@1
  int *v71; // [sp+74h] [bp-24h]@1
  char v72; // [sp+8Bh] [bp-Dh]@13
  _DWORD *v73; // [sp+8Ch] [bp-Ch]@13
  char v74; // [sp+90h] [bp-8h]@1

  v69 = &v74;
  v71 = &v46;
  v67 = sub_6F962A50;
  v68 = &dword_6F96B188;
  v70 = sub_6F8E9B3C;
  sub_6F8A1A60((int *)&v65);
  v66 = -1;
  v64 = sub_6F8BF000(a4 + 108);
  v6 = *(_DWORD *)(a4 + 12) & 0x4A;
  v57 = v6;
  if ( v6 == 64 )
  {
    v62 = 8;
LABEL_4:
    v56 = &a2;
    v66 = -1;
    v60 = sub_6F8C2450(&a1, (int)&a2);
    if ( v60 )
    {
      v58 = 0;
      LOWORD(v63) = 0;
      v61 = 0;
      LOBYTE(v51) = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v6 != 8 )
  {
    v62 = 10;
    goto LABEL_4;
  }
  v56 = &a2;
  v66 = -1;
  LOBYTE(v63) = sub_6F8C2450(&a1, (int)&a2);
  if ( (_BYTE)v63 )
  {
    v50 = &v72;
    v48 = (int *)&v72;
    v66 = -1;
    v73 = sub_6F9081A0(0, 0);
    v60 = *(_BYTE *)(v64 + 16);
    if ( !v60 )
    {
      v44 = *(_BYTE *)(v64 + 164);
      LOBYTE(v51) = 0;
      v61 = 0;
      v59 = v44;
      if ( !v44 )
      {
        v60 = 0;
        v57 = 0;
        v58 = 0;
        goto LABEL_26;
      }
      v58 = 0;
      v55 = 22;
      v60 = v59;
      LOWORD(v63) = 0;
      v52 = 0x7FFFFFF;
      v53 = 0x7FFFFFFF;
      v49 = 16;
      goto LABEL_92;
    }
    v58 = 0;
    LOWORD(v63) = 0;
    v61 = 0;
    LOBYTE(v51) = 0;
    v62 = 16;
    v55 = 22;
LABEL_114:
    v66 = 1;
    sub_6F909A00((int *)&v73, 0x20u);
    goto LABEL_14;
  }
  v62 = 16;
LABEL_5:
  v66 = -1;
  LOWORD(v63) = sub_6F8C24F0((int *)&a1, WORD2(a1));
  v7 = *(_WORD *)(v64 + 112);
  LOBYTE(v51) = v7 == (_WORD)v63;
  if ( v7 == (_WORD)v63 )
  {
    v8 = *(_BYTE *)(v64 + 16);
LABEL_7:
    if ( (!v8 || *(_WORD *)(v64 + 38) != (_WORD)v63) && *(_WORD *)(v64 + 36) != (_WORD)v63 )
    {
      v66 = -1;
      sub_6F92DAB0((_DWORD *)a1);
      WORD2(a1) = -1;
      v9 = sub_6F8C2450(&a1, (int)v56);
      v58 = 0;
      v60 = v9;
      v61 = 0;
      if ( v9 )
      {
LABEL_11:
        v55 = 22;
        if ( v62 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOWORD(v63) = sub_6F8C24F0((int *)&a1, WORD2(a1));
      v8 = *(_BYTE *)(v64 + 16);
    }
    goto LABEL_36;
  }
  v8 = *(_BYTE *)(v64 + 16);
  if ( *(_WORD *)(v64 + 114) == (_WORD)v63 )
    goto LABEL_7;
LABEL_36:
  v58 = 0;
  v61 = 0;
  while ( 1 )
  {
    if ( v8 && *(_WORD *)(v64 + 38) == (_WORD)v63 || *(_WORD *)(v64 + 36) == (_WORD)v63 )
    {
LABEL_88:
      v60 = 0;
      goto LABEL_11;
    }
    if ( *(_WORD *)(v64 + 120) != (_WORD)v63 )
      break;
    v20 = v62 == 10 || !v61;
    if ( !v20 )
      goto LABEL_42;
    v61 = v62 == 8 || v57 == 0;
    if ( !v61 )
    {
      ++v58;
      v61 = v20;
LABEL_46:
      v15 = a1;
      v16 = *(_DWORD *)(a1 + 8);
      if ( v16 < *(_DWORD *)(a1 + 12) )
        goto LABEL_47;
      goto LABEL_58;
    }
    v15 = a1;
    v58 = 0;
    v62 = 8;
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 < *(_DWORD *)(a1 + 12) )
    {
LABEL_47:
      *(_DWORD *)(v15 + 8) = v16 + 2;
      WORD2(a1) = -1;
      goto LABEL_48;
    }
LABEL_58:
    v21 = *(void (**)(void))(*(_DWORD *)v15 + 40);
    v66 = -1;
    v21();
    v15 = a1;
    WORD2(a1) = -1;
    if ( !(_DWORD)a1 )
    {
      v60 = 1;
      goto LABEL_52;
    }
LABEL_48:
    v17 = *(__int16 **)(v15 + 8);
    if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 12) )
    {
      v40 = *(int (**)(void))(*(_DWORD *)v15 + 36);
      v66 = -1;
      v18 = v40();
    }
    else
    {
      v18 = *v17;
    }
    v60 = 0;
    if ( v18 == -1 )
    {
      LODWORD(a1) = 0;
      v60 = 1;
    }
LABEL_52:
    v19 = a3 == -1;
    v59 = v19 & (a2 != 0);
    if ( (unsigned __int8)v19 & (a2 != 0) )
    {
      v22 = *(__int16 **)(a2 + 8);
      if ( (unsigned int)v22 >= *(_DWORD *)(a2 + 12) )
      {
        v41 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v66 = -1;
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
        v19 = v59;
      }
    }
    if ( v19 == v60 )
    {
      v60 = 1;
      goto LABEL_11;
    }
    LOWORD(v63) = WORD2(a1);
    if ( (_DWORD)a1 && WORD2(a1) == -1 )
    {
      v25 = *(_WORD **)(a1 + 8);
      if ( (unsigned int)v25 >= *(_DWORD *)(a1 + 12) )
      {
        v43 = *(int (**)(void))(*(_DWORD *)a1 + 36);
        v66 = -1;
        LOWORD(v63) = v43();
      }
      else
      {
        LOWORD(v63) = *v25;
      }
      if ( (_WORD)v63 == -1 )
        LODWORD(a1) = 0;
    }
    if ( !v61 )
      goto LABEL_88;
    v8 = *(_BYTE *)(v64 + 16);
  }
  if ( !v61 )
    goto LABEL_88;
LABEL_42:
  if ( *(_WORD *)(v64 + 116) != (_WORD)v63 && *(_WORD *)(v64 + 118) != (_WORD)v63 )
  {
    v60 = 0;
    v61 = 1;
    goto LABEL_11;
  }
  if ( v57 == 0 || v62 == 16 )
  {
    v58 = 0;
    v61 = 0;
    v62 = 16;
    goto LABEL_46;
  }
  v60 = 0;
  v61 = 1;
LABEL_12:
  v55 = v62;
LABEL_13:
  v50 = &v72;
  v48 = (int *)&v72;
  v66 = -1;
  v73 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v64 + 16) )
    goto LABEL_114;
LABEL_14:
  v49 = v62;
  v53 = (v51 & 1) + 0x7FFFFFFF;
  v54 = v53 / v62;
  v52 = v53 / v62;
  v59 = *(_BYTE *)(v64 + 164);
  if ( !v59 )
  {
    if ( !v60 )
    {
      v59 = v60;
      v57 = 0;
      LOWORD(v52) = v55 + 48;
      while ( v55 > 0xA )
      {
        if ( (unsigned __int16)(v63 - 48) <= 9u )
          goto LABEL_20;
        if ( (unsigned __int16)(v63 - 97) > 5u )
        {
          if ( (unsigned __int16)(v63 - 65) > 5u )
            goto LABEL_71;
          v10 = (unsigned __int16)v63 - 55;
          goto LABEL_21;
        }
        v10 = (unsigned __int16)v63 - 87;
        if ( v10 == -1 )
          goto LABEL_71;
LABEL_22:
        if ( v54 < v57 )
        {
          v11 = a1;
          v59 = 1;
          v12 = *(_DWORD *)(a1 + 8);
          if ( v12 < *(_DWORD *)(a1 + 12) )
          {
LABEL_24:
            *(_DWORD *)(v11 + 8) = v12 + 2;
            goto LABEL_25;
          }
        }
        else
        {
          v59 |= v53 - v10 < v62 * v57;
          v11 = a1;
          v57 = v62 * v57 + v10;
          ++v58;
          v12 = *(_DWORD *)(a1 + 8);
          if ( v12 < *(_DWORD *)(a1 + 12) )
            goto LABEL_24;
        }
        v24 = *(void (**)(void))(*(_DWORD *)v11 + 40);
        v66 = 1;
        v24();
LABEL_25:
        WORD2(a1) = -1;
        v66 = 1;
        LOBYTE(v63) = sub_6F8C2450(&a1, (int)v56);
        if ( (_BYTE)v63 )
          goto LABEL_26;
        LOWORD(v63) = sub_6F8C24F0((int *)&a1, WORD2(a1));
      }
      if ( (unsigned __int16)v63 <= 0x2Fu || (unsigned __int16)v52 <= (unsigned __int16)v63 )
        goto LABEL_71;
LABEL_20:
      v10 = (unsigned __int16)v63 - 48;
LABEL_21:
      if ( v10 == -1 )
        goto LABEL_71;
      goto LABEL_22;
    }
    v45 = v60;
    v57 = 0;
    v60 = 0;
    LOBYTE(v63) = v45;
LABEL_26:
    v13 = v73;
    if ( !*(v73 - 3) )
      goto LABEL_27;
LABEL_72:
    v66 = 1;
    sub_6F909C90((int *)&v73, v58);
    v48 = (int *)&v73;
    v47 = *(_DWORD *)(v64 + 12);
    if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v64 + 8), v47, &v73) )
      *a5 = 4;
    v13 = v73;
    if ( !v58 && v61 != 1 && !*(v73 - 3) )
      goto LABEL_29;
    goto LABEL_77;
  }
LABEL_92:
  if ( v60 )
  {
    v57 = 0;
    v59 = 0;
    LOBYTE(v63) = v60;
    v60 = 0;
    goto LABEL_26;
  }
  v26 = v64;
  v59 = 0;
  v57 = 0;
  v62 = v64 + 120;
  v27 = *(_BYTE *)(v64 + 16);
  if ( !v27 )
    goto LABEL_101;
LABEL_94:
  if ( *(_WORD *)(v26 + 38) == (_WORD)v63 )
  {
    if ( v58 )
    {
      v66 = 1;
      sub_6F909C90((int *)&v73, v58);
      v58 = 0;
      goto LABEL_97;
    }
    LOBYTE(v63) = 0;
    v60 = v27;
    goto LABEL_26;
  }
  while ( 1 )
  {
LABEL_101:
    if ( (_WORD)v63 == *(_WORD *)(v64 + 36) )
      goto LABEL_71;
    v31 = (char *)v62;
    v32 = v55;
    if ( *(_WORD *)v62 != (_WORD)v63 )
      break;
LABEL_105:
    v33 = (signed int)&v31[-v62];
    v36 = __OFSUB__(v33, 30);
    v34 = v33 == 30;
    v35 = v33 - 30 < 0;
    v37 = (v33 >> 1) - 6;
    v38 = v33 >> 1;
    if ( !((unsigned __int8)(v35 ^ v36) | v34) )
      v38 = v37;
    if ( v57 <= v52 )
    {
      v59 |= v53 - v38 < v49 * v57;
      v57 = v49 * v57 + v38;
      ++v58;
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
    v59 = 1;
    v29 = *(_DWORD *)(a1 + 8);
    if ( v29 < *(_DWORD *)(a1 + 12) )
      goto LABEL_98;
LABEL_109:
    v39 = *(void (**)(void))(*(_DWORD *)v28 + 40);
    v66 = 1;
    v39();
LABEL_99:
    WORD2(a1) = -1;
    v66 = 1;
    LOBYTE(v63) = sub_6F8C2450(&a1, (int)v56);
    if ( (_BYTE)v63 )
      goto LABEL_26;
    v30 = sub_6F8C24F0((int *)&a1, WORD2(a1));
    v26 = v64;
    LOWORD(v63) = v30;
    v27 = *(_BYTE *)(v64 + 16);
    if ( v27 )
      goto LABEL_94;
  }
  while ( 1 )
  {
    v31 += 2;
    if ( !--v32 )
      break;
    if ( *(_WORD *)v31 == (_WORD)v63 )
      goto LABEL_105;
  }
LABEL_71:
  v13 = v73;
  LOBYTE(v63) = 0;
  if ( *(v73 - 3) )
    goto LABEL_72;
LABEL_27:
  if ( !v58 && v61 != 1 )
    goto LABEL_29;
LABEL_77:
  if ( v60 )
  {
LABEL_29:
    *a6 = 0;
    *a5 = 4;
    goto LABEL_30;
  }
  if ( v59 )
  {
    *a6 = (v51 & 1) + 0x7FFFFFFF;
    *a5 = 4;
  }
  else
  {
    v42 = -v57;
    if ( !(_BYTE)v51 )
      v42 = v57;
    *a6 = v42;
  }
LABEL_30:
  if ( (_BYTE)v63 )
    *a5 |= 2u;
  v63 = a1;
  sub_6F9086F0((int)(v13 - 3), (int)v50);
  sub_6F8A1AD0((int *)&v65);
  return v63;
}
