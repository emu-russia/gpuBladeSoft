__int64 __userpurge sub_6F8EB9E0@<edx:eax>(int a1@<edi>, __int64 a2, int a3, __int16 a4, int a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // eax@1
  __int16 v8; // ax@5
  char v9; // al@6
  bool v10; // al@10
  unsigned int v11; // edx@15
  signed int v12; // esi@21
  int v13; // ecx@24
  unsigned int v14; // eax@24
  _DWORD *v15; // ecx@27
  _DWORD *v16; // eax@30
  int v18; // ecx@47
  unsigned int v19; // eax@47
  __int16 *v20; // eax@49
  __int16 v21; // ax@50
  unsigned __int8 v22; // dl@53
  bool v23; // al@56
  void (*v24)(void); // eax@59
  __int16 *v25; // eax@65
  __int16 v26; // ax@66
  _DWORD *v27; // esi@82
  int v28; // edx@82
  void (*v29)(void); // eax@84
  _WORD *v30; // eax@86
  int v31; // esi@95
  bool v32; // al@95
  int v33; // ecx@99
  unsigned int v34; // eax@99
  __int16 v35; // ax@102
  char *v36; // eax@104
  unsigned int v37; // edx@104
  signed int v38; // eax@107
  signed int v39; // esi@107
  void (*v40)(void); // eax@111
  int (*v41)(void); // eax@115
  int (*v42)(void); // eax@116
  _DWORD *v43; // eax@118
  int (*v44)(void); // eax@122
  char v45; // al@124
  __int64 v46; // [sp+0h] [bp-A8h]@1
  __int64 v47; // [sp+8h] [bp-A0h]@13
  bool v48; // [sp+13h] [bp-95h]@5
  char *v49; // [sp+14h] [bp-94h]@17
  unsigned int v50; // [sp+18h] [bp-90h]@15
  unsigned int v51; // [sp+1Ch] [bp-8Ch]@15
  int *v52; // [sp+20h] [bp-88h]@4
  unsigned int v53; // [sp+24h] [bp-84h]@11
  __int64 v54; // [sp+28h] [bp-80h]@1
  __int64 v55; // [sp+30h] [bp-78h]@3
  int v56; // [sp+38h] [bp-70h]@10
  char v57; // [sp+3Ch] [bp-6Ch]@15
  char v58; // [sp+3Dh] [bp-6Bh]@16
  bool v59; // [sp+3Eh] [bp-6Ah]@4
  bool v60; // [sp+3Fh] [bp-69h]@10
  __int64 v61; // [sp+40h] [bp-68h]@5
  int v62; // [sp+48h] [bp-60h]@1
  char v63; // [sp+4Ch] [bp-5Ch]@1
  int v64; // [sp+50h] [bp-58h]@1
  int (__cdecl *v65)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-44h]@1
  __int16 *v66; // [sp+68h] [bp-40h]@1
  char *v67; // [sp+6Ch] [bp-3Ch]@1
  int (*v68)(); // [sp+70h] [bp-38h]@1
  __int64 *v69; // [sp+74h] [bp-34h]@1
  char v70; // [sp+8Bh] [bp-1Dh]@13
  _DWORD *v71; // [sp+8Ch] [bp-1Ch]@13
  char v72; // [sp+90h] [bp-18h]@1

  v67 = &v72;
  v69 = &v46;
  v65 = sub_6F962A50;
  v66 = &word_6F96B1A6;
  v68 = sub_6F8EC418;
  sub_6F8A1A60((int *)&v63);
  v64 = -1;
  v62 = sub_6F8BF000(a5 + 108);
  v7 = *(_DWORD *)(a5 + 12) & 0x4A;
  LODWORD(v54) = v7;
  if ( v7 == 64 )
  {
    LODWORD(v55) = 8;
LABEL_4:
    v52 = &a3;
    v64 = -1;
    v59 = sub_6F8C2450(&a2, (int)&a3);
    if ( v59 )
    {
      v56 = 0;
      LOWORD(v61) = 0;
      v60 = 0;
      v48 = 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  if ( v7 != 8 )
  {
    LODWORD(v55) = 10;
    goto LABEL_4;
  }
  v52 = &a3;
  v64 = -1;
  v59 = sub_6F8C2450(&a2, (int)&a3);
  if ( v59 )
  {
    v56 = 0;
    LOWORD(v61) = 0;
    v60 = 0;
    v48 = 0;
    LODWORD(v55) = 16;
    v53 = 22;
    goto LABEL_13;
  }
  LODWORD(v55) = 16;
LABEL_5:
  v64 = -1;
  LOWORD(v61) = sub_6F8C24F0((int *)&a2, WORD2(a2));
  v8 = *(_WORD *)(v62 + 112);
  v48 = v8 == (_WORD)v61;
  if ( v8 == (_WORD)v61 )
  {
    v9 = *(_BYTE *)(v62 + 16);
LABEL_7:
    if ( (!v9 || *(_WORD *)(v62 + 38) != (_WORD)v61) && *(_WORD *)(v62 + 36) != (_WORD)v61 )
    {
      v64 = -1;
      sub_6F92DAB0((_DWORD *)a2);
      WORD2(a2) = -1;
      v10 = sub_6F8C2450(&a2, (int)v52);
      v56 = 0;
      v59 = v10;
      v60 = 0;
      if ( v10 )
      {
LABEL_11:
        v53 = 22;
        if ( (_DWORD)v55 != 16 )
          goto LABEL_12;
        goto LABEL_13;
      }
      LOWORD(v61) = sub_6F8C24F0((int *)&a2, WORD2(a2));
      v9 = *(_BYTE *)(v62 + 16);
    }
    goto LABEL_37;
  }
  v9 = *(_BYTE *)(v62 + 16);
  if ( *(_WORD *)(v62 + 114) == (_WORD)v61 )
    goto LABEL_7;
LABEL_37:
  v56 = 0;
  v60 = 0;
  while ( 1 )
  {
    if ( v9 && *(_WORD *)(v62 + 38) == (_WORD)v61 || (a1 = (unsigned __int16)v61, *(_WORD *)(v62 + 36) == (_WORD)v61) )
    {
LABEL_91:
      v59 = 0;
      goto LABEL_11;
    }
    if ( *(_WORD *)(v62 + 120) != (_WORD)v61 )
      break;
    v23 = (_DWORD)v55 == 10 || !v60;
    if ( !v23 )
      goto LABEL_43;
    v60 = (_DWORD)v55 == 8 || (_DWORD)v54 == 0;
    if ( !v60 )
    {
      ++v56;
      v60 = v23;
LABEL_47:
      v18 = a2;
      v19 = *(_DWORD *)(a2 + 8);
      if ( v19 < *(_DWORD *)(a2 + 12) )
        goto LABEL_48;
      goto LABEL_59;
    }
    v18 = a2;
    v56 = 0;
    LODWORD(v55) = 8;
    v19 = *(_DWORD *)(a2 + 8);
    if ( v19 < *(_DWORD *)(a2 + 12) )
    {
LABEL_48:
      *(_DWORD *)(v18 + 8) = v19 + 2;
      WORD2(a2) = -1;
      goto LABEL_49;
    }
LABEL_59:
    v24 = *(void (**)(void))(*(_DWORD *)v18 + 40);
    v64 = -1;
    v24();
    v18 = a2;
    WORD2(a2) = -1;
    if ( !(_DWORD)a2 )
    {
      v59 = 1;
      goto LABEL_53;
    }
LABEL_49:
    v20 = *(__int16 **)(v18 + 8);
    if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 12) )
    {
      v41 = *(int (**)(void))(*(_DWORD *)v18 + 36);
      v64 = -1;
      v21 = v41();
    }
    else
    {
      v21 = *v20;
    }
    v59 = 0;
    if ( v21 == -1 )
    {
      LODWORD(a2) = 0;
      v59 = 1;
    }
LABEL_53:
    v22 = a4 == -1;
    LOBYTE(v53) = v22 & (a3 != 0);
    if ( v22 & (a3 != 0) )
    {
      v25 = *(__int16 **)(a3 + 8);
      if ( (unsigned int)v25 >= *(_DWORD *)(a3 + 12) )
      {
        v42 = *(int (**)(void))(*(_DWORD *)a3 + 36);
        v64 = -1;
        v26 = v42();
      }
      else
      {
        v26 = *v25;
      }
      v22 = 0;
      if ( v26 == -1 )
      {
        a3 = 0;
        v22 = v53;
      }
    }
    if ( v59 == v22 )
    {
      v59 = 1;
      goto LABEL_11;
    }
    LOWORD(v61) = WORD2(a2);
    if ( (_DWORD)a2 && WORD2(a2) == -1 )
    {
      v30 = *(_WORD **)(a2 + 8);
      if ( (unsigned int)v30 >= *(_DWORD *)(a2 + 12) )
      {
        v44 = *(int (**)(void))(*(_DWORD *)a2 + 36);
        v64 = -1;
        LOWORD(v61) = v44();
      }
      else
      {
        LOWORD(v61) = *v30;
      }
      if ( (_WORD)v61 == -1 )
        LODWORD(a2) = 0;
    }
    if ( !v60 )
      goto LABEL_91;
    v9 = *(_BYTE *)(v62 + 16);
  }
  if ( !v60 )
    goto LABEL_91;
LABEL_43:
  if ( *(_WORD *)(v62 + 116) != (_WORD)v61 && *(_WORD *)(v62 + 118) != (_WORD)v61 )
  {
    v59 = 0;
    v60 = 1;
    goto LABEL_11;
  }
  if ( (_DWORD)v54 == 0 || (_DWORD)v55 == 16 )
  {
    v56 = 0;
    v60 = 0;
    LODWORD(v55) = 16;
    goto LABEL_47;
  }
  v59 = 0;
  v60 = 1;
LABEL_12:
  v53 = v55;
LABEL_13:
  LODWORD(v47) = &v70;
  v64 = -1;
  v71 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v62 + 16) )
  {
    v64 = 1;
    sub_6F909A00((int *)&v71, 0x20u);
  }
  v54 = (signed int)v55;
  v47 = (signed int)v55;
  v51 = sub_6F8A1530(a1, 0xFFFFFFFFFFFFFFFFui64, v47, HIDWORD(v47));
  v50 = v11;
  v57 = *(_BYTE *)(v62 + 164);
  if ( !v57 )
  {
    v58 = 0;
    if ( !v59 )
    {
      v55 = 0i64;
      LOWORD(v49) = v53 + 48;
      while ( v53 > 0xA )
      {
        if ( (unsigned __int16)(v61 - 48) <= 9u )
          goto LABEL_21;
        if ( (unsigned __int16)(v61 - 97) > 5u )
        {
          if ( (unsigned __int16)(v61 - 65) > 5u )
            goto LABEL_72;
          v12 = (unsigned __int16)v61 - 55;
          goto LABEL_22;
        }
        v12 = (unsigned __int16)v61 - 87;
        if ( v12 == -1 )
          goto LABEL_72;
LABEL_23:
        if ( v50 < (unsigned int)(v51 < (unsigned int)v55) + HIDWORD(v55) )
        {
          v13 = a2;
          v58 = 1;
          v14 = *(_DWORD *)(a2 + 8);
          if ( v14 < *(_DWORD *)(a2 + 12) )
          {
LABEL_25:
            *(_DWORD *)(v13 + 8) = v14 + 2;
            goto LABEL_26;
          }
        }
        else
        {
          v61 = v12;
          v58 |= ~(v12 >> 31) < (unsigned int)((~v12 < (unsigned int)(v55 * v54)) + ((unsigned __int64)(v55 * v54) >> 32));
          v13 = a2;
          ++v56;
          v55 = v55 * v54 + v12;
          v14 = *(_DWORD *)(a2 + 8);
          if ( v14 < *(_DWORD *)(a2 + 12) )
            goto LABEL_25;
        }
        v29 = *(void (**)(void))(*(_DWORD *)v13 + 40);
        v64 = 1;
        v29();
LABEL_26:
        WORD2(a2) = -1;
        v64 = 1;
        LOBYTE(v61) = sub_6F8C2450(&a2, (int)v52);
        if ( (_BYTE)v61 )
          goto LABEL_27;
        LOWORD(v61) = sub_6F8C24F0((int *)&a2, WORD2(a2));
      }
      if ( (unsigned __int16)v61 <= 0x2Fu || (unsigned __int16)v49 <= (unsigned __int16)v61 )
        goto LABEL_72;
LABEL_21:
      v12 = (unsigned __int16)v61 - 48;
LABEL_22:
      if ( v12 == -1 )
        goto LABEL_72;
      goto LABEL_23;
    }
    v45 = v59;
    v55 = 0i64;
    v59 = 0;
    LOBYTE(v61) = v45;
LABEL_27:
    v15 = v71;
    if ( !*(v71 - 3) )
      goto LABEL_28;
LABEL_73:
    v64 = 1;
    sub_6F909C90((int *)&v71, v56);
    LODWORD(v47) = &v71;
    v46 = *(_QWORD *)(v62 + 8);
    if ( !(unsigned __int8)sub_6F95AB90(v46, SHIDWORD(v46), &v71) )
      *a6 = 4;
    v15 = v71;
    if ( !v56 && v60 != 1 && !*(v71 - 3) )
      goto LABEL_30;
    goto LABEL_78;
  }
  if ( v59 )
  {
    v55 = 0i64;
    LOBYTE(v61) = v59;
    v58 = 0;
    v59 = 0;
    goto LABEL_27;
  }
  v31 = v62;
  v58 = 0;
  v55 = 0i64;
  v49 = (char *)(v62 + 120);
  v32 = *(_BYTE *)(v62 + 16);
  if ( !v32 )
    goto LABEL_103;
LABEL_96:
  if ( *(_WORD *)(v31 + 38) == (_WORD)v61 )
  {
    if ( v56 )
    {
      v64 = 1;
      sub_6F909C90((int *)&v71, v56);
      v56 = 0;
      goto LABEL_99;
    }
    LOBYTE(v61) = 0;
    v59 = v32;
    goto LABEL_27;
  }
  while ( 1 )
  {
LABEL_103:
    if ( (_WORD)v61 == *(_WORD *)(v62 + 36) )
      goto LABEL_72;
    v36 = v49;
    v37 = v53;
    if ( *(_WORD *)v49 != (_WORD)v61 )
      break;
LABEL_107:
    v38 = v36 - v49;
    v39 = (v38 >> 1) - 6;
    if ( v38 <= 30 )
      v39 = v38 >> 1;
    if ( v50 >= (unsigned int)(v51 < (unsigned int)v55) + HIDWORD(v55) )
    {
      v61 = v39;
      v58 |= ~(v39 >> 31) < (unsigned int)((~v39 < (unsigned int)(v55 * v54)) + ((unsigned __int64)(v55 * v54) >> 32));
      v55 = v55 * v54 + v39;
      ++v56;
LABEL_99:
      v33 = a2;
      v34 = *(_DWORD *)(a2 + 8);
      if ( v34 >= *(_DWORD *)(a2 + 12) )
        goto LABEL_111;
LABEL_100:
      *(_DWORD *)(v33 + 8) = v34 + 2;
      goto LABEL_101;
    }
    v33 = a2;
    v58 = v57;
    v34 = *(_DWORD *)(a2 + 8);
    if ( v34 < *(_DWORD *)(a2 + 12) )
      goto LABEL_100;
LABEL_111:
    v40 = *(void (**)(void))(*(_DWORD *)v33 + 40);
    v64 = 1;
    v40();
LABEL_101:
    WORD2(a2) = -1;
    v64 = 1;
    LOBYTE(v61) = sub_6F8C2450(&a2, (int)v52);
    if ( (_BYTE)v61 )
      goto LABEL_27;
    v35 = sub_6F8C24F0((int *)&a2, WORD2(a2));
    v31 = v62;
    LOWORD(v61) = v35;
    v32 = *(_BYTE *)(v62 + 16);
    if ( v32 )
      goto LABEL_96;
  }
  while ( 1 )
  {
    v36 += 2;
    if ( !--v37 )
      break;
    if ( *(_WORD *)v36 == (_WORD)v61 )
      goto LABEL_107;
  }
LABEL_72:
  v15 = v71;
  LOBYTE(v61) = 0;
  if ( *(v71 - 3) )
    goto LABEL_73;
LABEL_28:
  if ( !v56 && v60 != 1 )
    goto LABEL_30;
LABEL_78:
  if ( v59 )
  {
LABEL_30:
    v16 = a7;
    *a7 = 0;
    v16[1] = 0;
    *a6 = 4;
    goto LABEL_31;
  }
  if ( v58 )
  {
    v43 = a7;
    *a7 = -1;
    v43[1] = -1;
    *a6 = 4;
  }
  else
  {
    if ( v48 )
      v55 = -v55;
    v27 = a7;
    v28 = HIDWORD(v55);
    *a7 = v55;
    v27[1] = v28;
  }
LABEL_31:
  if ( (_BYTE)v61 )
    *a6 |= 2u;
  v61 = a2;
  sub_6F9086F0((int)(v15 - 3), (int)&v70);
  sub_6F8A1AD0((int *)&v63);
  return v61;
}
