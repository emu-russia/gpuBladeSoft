__int64 __stdcall sub_6F8E2270(__int64 a1, char a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  bool v6; // al@1
  char v7; // dl@7
  void *v8; // eax@11
  int v9; // ecx@13
  unsigned int v10; // eax@13
  int v11; // eax@16
  int v13; // eax@24
  int v14; // eax@25
  int v15; // ecx@27
  unsigned int v16; // eax@27
  unsigned int v17; // eax@35
  char v18; // al@38
  char v19; // al@40
  void (*v20)(void); // eax@42
  bool v21; // zf@44
  int v22; // eax@44
  void (*v23)(void); // eax@48
  char v24; // al@57
  char v25; // cl@57
  void (*v26)(void); // eax@71
  char v27; // al@72
  char v28; // cl@72
  char v29; // dl@73
  char v30; // cl@74
  int v31; // ecx@80
  unsigned int v32; // eax@80
  bool v33; // al@82
  void (*v34)(void); // eax@85
  char v35; // al@86
  bool v36; // al@92
  int v37; // edx@100
  int v38; // eax@102
  int v39; // ebx@102
  int v40; // [sp+0h] [bp-78h]@1
  int v41; // [sp+4h] [bp-74h]@20
  char *v42; // [sp+8h] [bp-70h]@3
  const void *v43; // [sp+10h] [bp-68h]@7
  int v44; // [sp+14h] [bp-64h]@2
  char v45; // [sp+19h] [bp-5Fh]@5
  __int16 v46; // [sp+1Ah] [bp-5Eh]@2
  int *v47; // [sp+1Ch] [bp-5Ch]@2
  __int64 v48; // [sp+20h] [bp-58h]@1
  _DWORD *v49; // [sp+28h] [bp-50h]@2
  char v50; // [sp+2Ch] [bp-4Ch]@1
  int v51; // [sp+30h] [bp-48h]@1
  int (__cdecl *v52)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-34h]@1
  int *v53; // [sp+48h] [bp-30h]@1
  char *v54; // [sp+4Ch] [bp-2Ch]@1
  int (*v55)(); // [sp+50h] [bp-28h]@1
  int *v56; // [sp+54h] [bp-24h]@1
  char v57; // [sp+6Bh] [bp-Dh]@3
  _DWORD *v58; // [sp+6Ch] [bp-Ch]@3
  char v59; // [sp+70h] [bp-8h]@1

  v54 = &v59;
  v56 = &v40;
  v52 = sub_6F962A50;
  v53 = &dword_6F96B610;
  v55 = sub_6F8E2B21;
  sub_6F8A1A60((int *)&v50);
  v51 = -1;
  LODWORD(v48) = sub_6F8BEE80(a4 + 108);
  v6 = sub_6F8C2310(&a1, (int)&a2);
  if ( v6 )
  {
    LOBYTE(v46) = v6;
    LOBYTE(v49) = 0;
    v44 = 0;
    LOBYTE(v47) = 0;
    goto LABEL_3;
  }
  v27 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
  LOBYTE(v49) = v27;
  v28 = *(_BYTE *)(v48 + 75);
  if ( v28 == v27 )
  {
    v29 = *(_BYTE *)(v48 + 16);
  }
  else
  {
    v29 = *(_BYTE *)(v48 + 16);
    if ( *(_BYTE *)(v48 + 74) != v27 )
    {
LABEL_74:
      v44 = 0;
      v30 = 0;
      while ( 1 )
      {
        if ( v29 && *(_BYTE *)(v48 + 37) == (_BYTE)v49
          || *(_BYTE *)(v48 + 36) == (_BYTE)v49
          || *(_BYTE *)(v48 + 78) != (_BYTE)v49 )
        {
          LOBYTE(v47) = v30;
          LOBYTE(v46) = 0;
          goto LABEL_3;
        }
        if ( v30 )
        {
          v31 = a1;
          ++v44;
          v32 = *(_DWORD *)(a1 + 8);
          if ( v32 < *(_DWORD *)(a1 + 12) )
            goto LABEL_81;
        }
        else
        {
          v51 = -1;
          sub_6F909C90(a6, 48);
          v31 = a1;
          ++v44;
          v32 = *(_DWORD *)(a1 + 8);
          if ( v32 < *(_DWORD *)(a1 + 12) )
          {
LABEL_81:
            *(_DWORD *)(v31 + 8) = v32 + 1;
            goto LABEL_82;
          }
        }
        v34 = *(void (**)(void))(*(_DWORD *)v31 + 40);
        v51 = -1;
        v34();
LABEL_82:
        HIDWORD(a1) = -1;
        v51 = -1;
        v33 = sub_6F8C2310(&a1, (int)&a2);
        if ( v33 )
        {
          LOBYTE(v46) = v33;
          LOBYTE(v47) = v33;
          goto LABEL_3;
        }
        v35 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
        v30 = 1;
        LOBYTE(v49) = v35;
        v29 = *(_BYTE *)(v48 + 16);
      }
    }
  }
  if ( v29 && *(_BYTE *)(v48 + 37) == v27 || *(_BYTE *)(v48 + 36) == v27 )
    goto LABEL_74;
  v51 = -1;
  sub_6F909C90(a6, 2 * (v28 != v27) + 43);
  sub_6F92D0F0((_DWORD *)a1);
  HIDWORD(a1) = -1;
  v36 = sub_6F8C2310(&a1, (int)&a2);
  LOBYTE(v47) = 0;
  LOBYTE(v46) = v36;
  v44 = 0;
  if ( !v36 )
  {
    LOBYTE(v49) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
    v29 = *(_BYTE *)(v48 + 16);
    goto LABEL_74;
  }
LABEL_3:
  v42 = &v57;
  v51 = -1;
  v58 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v48 + 16) )
  {
    v51 = 1;
    sub_6F909A00((int *)&v58, 0x20u);
  }
  v45 = *(_BYTE *)(v48 + 100);
  if ( !v45 )
  {
    if ( !(_BYTE)v46 )
    {
LABEL_24:
      v13 = (char)v49;
      if ( (unsigned __int8)((_BYTE)v49 - 48) <= 9u )
      {
LABEL_25:
        v14 = v13 - 48;
        if ( v14 == -1 )
          goto LABEL_31;
        v51 = 1;
        sub_6F909C90(a6, v14 + 48);
        LOBYTE(v47) = 1;
        goto LABEL_27;
      }
      while ( 1 )
      {
LABEL_31:
        if ( *(_BYTE *)(v48 + 36) == (_BYTE)v49 && !v46 )
        {
          v51 = 1;
          sub_6F909C90(a6, 46);
          v46 = 1;
LABEL_27:
          v15 = a1;
          v16 = *(_DWORD *)(a1 + 8);
          if ( v16 >= *(_DWORD *)(a1 + 12) )
            goto LABEL_42;
LABEL_28:
          *(_DWORD *)(v15 + 8) = v16 + 1;
          goto LABEL_29;
        }
        if ( *(_BYTE *)(v48 + 92) != (_BYTE)v49 && *(_BYTE *)(v48 + 98) != (_BYTE)v49 )
          goto LABEL_16;
        LOBYTE(v47) = (HIBYTE(v46) ^ 1) & (unsigned __int8)v47;
        if ( !(_BYTE)v47 )
          goto LABEL_16;
        v51 = 1;
        sub_6F909C90(a6, 101);
        v17 = *(_DWORD *)(a1 + 8);
        if ( v17 >= *(_DWORD *)(a1 + 12) )
        {
          v26 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v51 = 1;
          v26();
        }
        else
        {
          *(_DWORD *)(a1 + 8) = v17 + 1;
        }
        HIDWORD(a1) = -1;
        v51 = 1;
        if ( sub_6F8C2310(&a1, (int)&a2) )
        {
LABEL_95:
          v47 = (int *)&v58;
          v49 = v58;
          if ( !*(v58 - 3) )
            goto LABEL_22;
          goto LABEL_20;
        }
        v18 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
        LOBYTE(v49) = v18;
        if ( *(_BYTE *)(v48 + 75) == v18 )
        {
          v19 = 43;
        }
        else
        {
          if ( *(_BYTE *)(v48 + 74) != v18 )
          {
            HIBYTE(v46) = (_BYTE)v47;
            goto LABEL_24;
          }
          v19 = 45;
        }
        v51 = 1;
        sub_6F909C90(a6, v19);
        v15 = a1;
        HIBYTE(v46) = (_BYTE)v47;
        v16 = *(_DWORD *)(a1 + 8);
        if ( v16 < *(_DWORD *)(a1 + 12) )
          goto LABEL_28;
LABEL_42:
        v20 = *(void (**)(void))(*(_DWORD *)v15 + 40);
        v51 = 1;
        v20();
LABEL_29:
        HIDWORD(a1) = -1;
        v51 = 1;
        if ( sub_6F8C2310(&a1, (int)&a2) )
        {
LABEL_16:
          v49 = v58;
          v11 = *(v58 - 3);
LABEL_17:
          if ( !v11 )
            goto LABEL_22;
          if ( v46 )
          {
            v47 = (int *)&v58;
          }
          else
          {
LABEL_19:
            v47 = (int *)&v58;
            v51 = 1;
            sub_6F909C90((int *)&v58, v44);
            v49 = v58;
          }
LABEL_20:
          v42 = (char *)v47;
          v41 = *(_DWORD *)(v48 + 12);
          v40 = *(_DWORD *)(v48 + 8);
          if ( !(unsigned __int8)sub_6F95AB90(v40, v41, v47) )
            *a5 = 4;
          goto LABEL_22;
        }
        v51 = 1;
        LOBYTE(v49) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
        v13 = (char)v49;
        if ( (unsigned __int8)((_BYTE)v49 - 48) <= 9u )
          goto LABEL_25;
      }
    }
LABEL_100:
    v37 = *(v58 - 3);
    v49 = v58;
    if ( !v37 )
      goto LABEL_22;
    goto LABEL_19;
  }
  if ( (_BYTE)v46 )
    goto LABEL_100;
  v7 = *(_BYTE *)(v48 + 16);
  v43 = (const void *)(v48 + 78);
  while ( !v7 || *(_BYTE *)(v48 + 37) != (_BYTE)v49 )
  {
    if ( *(_BYTE *)(v48 + 36) == (_BYTE)v49 )
    {
      v21 = v46 == 0;
      HIBYTE(v46) |= v46;
      v49 = v58;
      v22 = *(v58 - 3);
      if ( !v21 )
        goto LABEL_98;
      if ( v22 )
      {
        v51 = 1;
        sub_6F909C90((int *)&v58, v44);
      }
      v51 = 1;
      sub_6F909C90(a6, 46);
      v9 = a1;
      LOBYTE(v46) = v45;
      v10 = *(_DWORD *)(a1 + 8);
      if ( v10 < *(_DWORD *)(a1 + 12) )
      {
LABEL_14:
        *(_DWORD *)(v9 + 8) = v10 + 1;
        goto LABEL_15;
      }
LABEL_48:
      v23 = *(void (**)(void))(*(_DWORD *)v9 + 40);
      v51 = 1;
      v23();
LABEL_15:
      HIDWORD(a1) = -1;
      v51 = 1;
      if ( sub_6F8C2310(&a1, (int)&a2) )
        goto LABEL_16;
      v51 = 1;
      LOBYTE(v49) = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
      v7 = *(_BYTE *)(v48 + 16);
    }
    else
    {
      v8 = memchr(v43, (char)v49, 0xAu);
      if ( v8 )
      {
        v51 = 1;
        sub_6F909C90(a6, (_BYTE)v8 - (_BYTE)v43 + 48);
        ++v44;
        LOBYTE(v47) = v45;
        goto LABEL_13;
      }
      if ( *(_BYTE *)(v48 + 92) != (_BYTE)v49 && *(_BYTE *)(v48 + 98) != (_BYTE)v49 )
        goto LABEL_16;
      v21 = ((unsigned __int8)(HIBYTE(v46) ^ 1) & (unsigned __int8)v47) == 0;
      LOBYTE(v47) = (HIBYTE(v46) ^ 1) & (unsigned __int8)v47;
      v49 = v58;
      v11 = *(v58 - 3);
      if ( v21 )
        goto LABEL_17;
      if ( v11 && !(_BYTE)v46 )
      {
        v51 = 1;
        sub_6F909C90((int *)&v58, v44);
      }
      v51 = 1;
      sub_6F909C90(a6, 101);
      sub_6F92D0F0((_DWORD *)a1);
      HIDWORD(a1) = -1;
      if ( sub_6F8C2310(&a1, (int)&a2) )
        goto LABEL_95;
      v24 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
      LOBYTE(v49) = v24;
      v25 = *(_BYTE *)(v48 + 75);
      v7 = *(_BYTE *)(v48 + 16);
      if ( v25 != v24 && *(_BYTE *)(v48 + 74) != v24 )
        goto LABEL_59;
      if ( v7 && *(_BYTE *)(v48 + 37) == v24 )
      {
        HIBYTE(v46) = *(_BYTE *)(v48 + 16);
        LOBYTE(v47) = v7;
      }
      else
      {
        if ( *(_BYTE *)(v48 + 36) != v24 )
        {
          v51 = 1;
          sub_6F909C90(a6, 2 * (v25 != v24) + 43);
          HIBYTE(v46) = (_BYTE)v47;
LABEL_13:
          v9 = a1;
          v10 = *(_DWORD *)(a1 + 8);
          if ( v10 < *(_DWORD *)(a1 + 12) )
            goto LABEL_14;
          goto LABEL_48;
        }
LABEL_59:
        HIBYTE(v46) = (_BYTE)v47;
      }
    }
  }
  LOBYTE(v46) = HIBYTE(v46) | v46;
  if ( (_BYTE)v46 )
  {
    v49 = v58;
    v22 = *(v58 - 3);
LABEL_98:
    v47 = (int *)&v58;
    if ( v22 )
      goto LABEL_20;
    goto LABEL_22;
  }
  if ( v44 )
  {
    v51 = 1;
    sub_6F909C90((int *)&v58, v44);
    HIBYTE(v46) = 0;
    v44 = 0;
    goto LABEL_13;
  }
  v42 = 0;
  v38 = *(_DWORD *)(*a6 - 12);
  v51 = 1;
  sub_6F909B10((const void **)a6, 0, v38, 0);
  v39 = *(v58 - 3);
  v49 = v58;
  if ( v39 )
    goto LABEL_19;
LABEL_22:
  v48 = a1;
  sub_6F9086F0((int)(v49 - 3), (int)&v57);
  sub_6F8A1AD0((int *)&v50);
  return v48;
}
