__int64 __stdcall sub_6F8F7E40(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // eax@1
  int v7; // eax@5
  char *v8; // eax@5
  char v9; // al@9
  bool v10; // al@16
  char v11; // al@18
  unsigned int v12; // eax@19
  void (*v13)(void); // eax@20
  signed int v14; // eax@21
  int v15; // ecx@21
  unsigned int v16; // eax@23
  unsigned __int8 v17; // dl@27
  char v18; // al@29
  _BYTE *v19; // eax@32
  char v20; // al@34
  void (*v21)(void); // eax@39
  int v22; // ecx@41
  bool v23; // al@50
  char v24; // al@51
  unsigned int v25; // eax@52
  void (*v26)(void); // eax@53
  int v27; // ecx@58
  _BYTE *v28; // eax@58
  int v29; // eax@62
  int (*v30)(void); // eax@76
  int v31; // eax@76
  int (__fastcall *v32)(int, _DWORD); // eax@79
  int v33; // eax@79
  char *v34; // eax@81
  int v35; // eax@84
  unsigned __int8 v37; // al@98
  void (*v38)(void); // eax@105
  char v39; // al@110
  int (*v40)(void); // eax@116
  int v41; // eax@116
  int v42; // eax@123
  int v43; // eax@123
  int v44; // eax@126
  char v45; // al@130
  char v46; // al@132
  unsigned int v47; // eax@133
  int (*v48)(void); // eax@141
  int v49; // [sp+0h] [bp-98h]@1
  int v50; // [sp+4h] [bp-94h]@112
  int *v51; // [sp+8h] [bp-90h]@3
  int v52; // [sp+18h] [bp-80h]@5
  unsigned int v53; // [sp+1Ch] [bp-7Ch]@47
  int v54; // [sp+20h] [bp-78h]@1
  unsigned int v55; // [sp+24h] [bp-74h]@5
  int v56; // [sp+28h] [bp-70h]@1
  int v57; // [sp+2Ch] [bp-6Ch]@5
  __int64 v58; // [sp+30h] [bp-68h]@1
  const void *v59; // [sp+38h] [bp-60h]@5
  int v60; // [sp+3Ch] [bp-5Ch]@5
  __int64 v61; // [sp+40h] [bp-58h]@1
  int v62; // [sp+48h] [bp-50h]@1
  char v63; // [sp+4Ch] [bp-4Ch]@1
  int v64; // [sp+50h] [bp-48h]@1
  int (__cdecl *v65)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  int *v66; // [sp+68h] [bp-30h]@1
  char *v67; // [sp+6Ch] [bp-2Ch]@1
  int (*v68)(); // [sp+70h] [bp-28h]@1
  int *v69; // [sp+74h] [bp-24h]@1
  char v70; // [sp+82h] [bp-16h]@5
  char v71; // [sp+83h] [bp-15h]@92
  _DWORD *v72; // [sp+84h] [bp-14h]@3
  _DWORD *v73; // [sp+88h] [bp-10h]@5
  int v74; // [sp+8Ch] [bp-Ch]@3
  char v75; // [sp+90h] [bp-8h]@1

  v67 = &v75;
  v69 = &v49;
  v65 = sub_6F962A50;
  v66 = dword_6F96B64C;
  v68 = sub_6F8F8904;
  sub_6F8A1A60((int *)&v63);
  LODWORD(v61) = a4 + 108;
  v64 = -1;
  v54 = sub_6F95DC10(a4 + 108);
  v6 = sub_6F8BF320(v61);
  BYTE5(v58) = 0;
  v62 = v6;
  v56 = v6 + 56;
  if ( *(_DWORD *)(v6 + 32) )
    BYTE5(v58) = *(_DWORD *)(v6 + 40) != 0;
  v51 = &v74;
  v64 = -1;
  v72 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v62 + 16) )
  {
    v64 = 1;
    sub_6F909A00((int *)&v72, 0x20u);
  }
  v51 = (int *)&v70;
  v64 = 1;
  v73 = sub_6F9081A0(0, 0);
  v64 = 2;
  sub_6F909A00((int *)&v73, 0x20u);
  v57 = 1;
  BYTE7(v58) = 0;
  v7 = *(_DWORD *)(v62 + 52);
  v60 = 0;
  v59 = (const void *)(v62 + 57);
  v74 = v7;
  v8 = (char *)&v74;
  v52 = 0;
  v55 = 0;
  BYTE4(v58) = 0;
  if ( (unsigned __int8)v74 > 4u )
    goto LABEL_70;
LABEL_6:
  switch ( *v8 )
  {
    case 0:
      LOBYTE(v58) = 1;
      goto LABEL_8;
    case 1:
      v64 = 2;
      if ( sub_6F8C2310(&a1, (int)&a2)
        || (v64 = 2, v37 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1)), !(*(_BYTE *)(*(_DWORD *)(v54 + 24) + 2 * v37) & 0x20)) )
      {
        LOBYTE(v58) = 0;
        if ( v57 == 4 )
        {
LABEL_9:
          v9 = v58 & (v55 > 1);
          goto LABEL_10;
        }
      }
      else
      {
        sub_6F92D0F0((_DWORD *)a1);
        HIDWORD(a1) = -1;
        LOBYTE(v58) = 1;
LABEL_8:
        if ( v57 == 4 )
          goto LABEL_9;
      }
      LODWORD(v61) = &a2;
      while ( 1 )
      {
        v64 = 2;
        if ( sub_6F8C2310(&a1, v61) )
          goto LABEL_66;
        LOBYTE(v29) = BYTE4(a1);
        v27 = a1;
        if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
        {
          v28 = *(_BYTE **)(a1 + 8);
          if ( (unsigned int)v28 < *(_DWORD *)(a1 + 12) )
          {
            if ( !(*(_BYTE *)(*(_DWORD *)(v54 + 24) + 2 * *v28) & 0x20) )
              goto LABEL_66;
LABEL_59:
            *(_DWORD *)(v27 + 8) = v28 + 1;
            goto LABEL_60;
          }
          v48 = *(int (**)(void))(*(_DWORD *)a1 + 36);
          v64 = 2;
          v29 = v48();
          if ( v29 == -1 )
            LODWORD(a1) = 0;
        }
        if ( !(*(_BYTE *)(*(_DWORD *)(v54 + 24) + 2 * (unsigned __int8)v29) & 0x20) )
          goto LABEL_66;
        v27 = a1;
        v28 = *(_BYTE **)(a1 + 8);
        if ( (unsigned int)v28 < *(_DWORD *)(a1 + 12) )
          goto LABEL_59;
        v38 = *(void (**)(void))(*(_DWORD *)a1 + 40);
        v64 = 2;
        v38();
LABEL_60:
        HIDWORD(a1) = -1;
      }
    case 2:
      if ( *(_BYTE *)(a4 + 13) & 2 )
        goto LABEL_47;
      v22 = v57 - 1;
      BYTE6(v58) = v57 == 1 || v55 > 1;
      if ( BYTE6(v58) )
        goto LABEL_47;
      if ( v22 != 1 )
      {
        LOBYTE(v58) = 1;
        if ( v22 != 2 )
          goto LABEL_67;
        if ( BYTE3(v74) != 4 && (BYTE3(v74) != 3 || !BYTE5(v58)) )
          goto LABEL_69;
        goto LABEL_47;
      }
      if ( BYTE5(v58) || (_BYTE)v74 == 3 || BYTE2(v74) == 1 )
      {
LABEL_47:
        LODWORD(v58) = 0;
        v53 = *(_DWORD *)(v62 + 24);
        LODWORD(v61) = &a2;
        while ( 1 )
        {
          v64 = 2;
          v23 = sub_6F8C2310(&a1, v61);
          BYTE6(v58) = (unsigned int)v58 < v53 && !v23;
          if ( !BYTE6(v58) )
            break;
          v24 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          if ( *(_BYTE *)(*(_DWORD *)(v62 + 20) + v58) != v24 )
            goto LABEL_122;
          v25 = *(_DWORD *)(a1 + 8);
          if ( v25 < *(_DWORD *)(a1 + 12) )
          {
            *(_DWORD *)(a1 + 8) = v25 + 1;
          }
          else
          {
            v26 = *(void (**)(void))(*(_DWORD *)a1 + 40);
            v64 = 2;
            v26();
          }
          LODWORD(v58) = v58 + 1;
          HIDWORD(a1) = -1;
        }
        if ( (_DWORD)v58 == v53 )
          goto LABEL_71;
LABEL_122:
        if ( !(_DWORD)v58 )
        {
          v42 = *(_DWORD *)(a4 + 12);
          LODWORD(v61) = v42;
          v43 = v42 & 0x200;
          LODWORD(v58) = v43 == 0;
          BYTE6(v58) = v43 != 0;
          goto LABEL_67;
        }
        goto LABEL_89;
      }
      do
      {
LABEL_69:
        v8 = (char *)&v73 + ++v57 + 3;
        if ( *((_BYTE *)&v73 + v57 + 3) <= 4u )
          goto LABEL_6;
LABEL_70:
        BYTE6(v58) = 0;
LABEL_71:
        LOBYTE(v58) = 1;
LABEL_67:
        ;
      }
      while ( v57 <= 3 && !BYTE6(v58) );
      v9 = v58 & (v55 > 1);
LABEL_10:
      if ( !v9 )
      {
        if ( (_BYTE)v58 )
        {
          if ( *(v73 - 3) <= 1u )
            goto LABEL_108;
          goto LABEL_126;
        }
LABEL_88:
        LODWORD(v61) = &a2;
LABEL_89:
        *a5 |= 4u;
        goto LABEL_90;
      }
      if ( BYTE4(v58) )
        LODWORD(v58) = *(_DWORD *)(v62 + 36);
      else
        LODWORD(v58) = *(_DWORD *)(v62 + 28);
      v59 = (const void *)1;
      LODWORD(v61) = &a2;
      while ( 1 )
      {
        v64 = 2;
        v10 = sub_6F8C2310(&a1, v61);
        if ( (unsigned int)v59 >= v55 || v10 == 1 )
          break;
        v11 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
        if ( *((_BYTE *)v59 + v58) != v11 )
          goto LABEL_89;
        v12 = *(_DWORD *)(a1 + 8);
        if ( v12 < *(_DWORD *)(a1 + 12) )
        {
          *(_DWORD *)(a1 + 8) = v12 + 1;
        }
        else
        {
          v13 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v64 = 2;
          v13();
        }
        v59 = (char *)v59 + 1;
        HIDWORD(a1) = -1;
      }
      if ( v59 != (const void *)v55 )
        goto LABEL_89;
      if ( *(v73 - 3) > 1u )
      {
LABEL_126:
        v44 = sub_6F8BD2C0(&v73, 48, 0);
        if ( v44 )
        {
          if ( v44 == -1 )
            v44 = *(v73 - 3) - 1;
          v64 = 2;
          sub_6F908A30(&v73, 0, v44);
        }
      }
LABEL_108:
      if ( BYTE4(v58) )
      {
        v64 = 2;
        sub_6F9094A0((int *)&v73);
        if ( *(_BYTE *)v73 != 48 )
        {
          sub_6F9094A0((int *)&v73);
          sub_6F908550(&v73, 0, 0, 1u, 45);
          *(v73 - 1) = -1;
        }
      }
      if ( *(v72 - 3) )
      {
        v39 = v60;
        if ( BYTE7(v58) )
          v39 = v52;
        v64 = 2;
        sub_6F909C90((int *)&v72, v39);
        v51 = (int *)&v72;
        v50 = *(_DWORD *)(v62 + 12);
        if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v62 + 8), v50, &v72) )
          *a5 |= 4u;
      }
      if ( BYTE7(v58) )
      {
        LODWORD(v61) = &a2;
        if ( *(_DWORD *)(v62 + 44) != v60 )
          goto LABEL_89;
      }
      v64 = 2;
      sub_6F908910((void *)a6, (int *)&v73);
      LODWORD(v61) = &a2;
LABEL_90:
      v64 = 2;
      if ( sub_6F8C2310(&a1, v61) )
        *a5 |= 2u;
      v61 = a1;
      sub_6F9086F0((int)(v73 - 3), (int)&v71);
      sub_6F9086F0((int)(v72 - 3), (int)&v71);
      sub_6F8A1AD0((int *)&v63);
      return v61;
    case 3:
      if ( *(_DWORD *)(v62 + 32) )
      {
        LODWORD(v61) = &a2;
        v64 = 2;
        BYTE6(v58) = sub_6F8C2310(&a1, (int)&a2);
        if ( !BYTE6(v58) )
        {
          v45 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          if ( **(_BYTE **)(v62 + 28) == v45 )
          {
            v55 = *(_DWORD *)(v62 + 32);
            sub_6F92D0F0((_DWORD *)a1);
            HIDWORD(a1) = -1;
            LOBYTE(v58) = 1;
            goto LABEL_67;
          }
        }
        if ( !*(_DWORD *)(v62 + 40) )
        {
          if ( !*(_DWORD *)(v62 + 32) )
            goto LABEL_74;
          goto LABEL_97;
        }
      }
      else
      {
        if ( !*(_DWORD *)(v62 + 40) )
          goto LABEL_74;
        LODWORD(v61) = &a2;
      }
      v64 = 2;
      BYTE6(v58) = sub_6F8C2310(&a1, v61);
      if ( !BYTE6(v58) )
      {
        v64 = 2;
        v46 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
        if ( **(_BYTE **)(v62 + 36) == v46 )
        {
          v47 = *(_DWORD *)(v62 + 40);
          v64 = 2;
          v55 = v47;
          sub_6F92D0F0((_DWORD *)a1);
          HIDWORD(a1) = -1;
          LOBYTE(v58) = 1;
          BYTE4(v58) = 1;
          goto LABEL_67;
        }
      }
      if ( !*(_DWORD *)(v62 + 32) || *(_DWORD *)(v62 + 40) )
      {
LABEL_74:
        BYTE6(v58) = BYTE5(v58);
        LOBYTE(v58) = BYTE5(v58) ^ 1;
        goto LABEL_67;
      }
LABEL_97:
      BYTE6(v58) = 0;
      LOBYTE(v58) = 1;
      BYTE4(v58) = 1;
      goto LABEL_67;
    case 4:
      v14 = HIDWORD(a1);
      v15 = a1;
      while ( 2 )
      {
        LOBYTE(v61) = v14 == -1;
        LOBYTE(v58) = v61 & (v15 != 0);
        if ( (_BYTE)v58 )
        {
          LOBYTE(v61) = 0;
          if ( *(_DWORD *)(v15 + 8) >= *(_DWORD *)(v15 + 12) )
          {
            v30 = *(int (**)(void))(*(_DWORD *)v15 + 36);
            v64 = 2;
            v31 = v30();
            LOBYTE(v61) = 0;
            if ( v31 == -1 )
            {
              LODWORD(a1) = 0;
              LOBYTE(v61) = v58;
            }
          }
        }
        v17 = a3 == -1;
        LOBYTE(v58) = v17 & (a2 != 0);
        if ( v17 & (a2 != 0) )
        {
          v17 = 0;
          if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
          {
            v32 = *(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 36);
            v64 = 2;
            v33 = v32(a2, 0);
            v17 = 0;
            if ( v33 == -1 )
            {
              a2 = 0;
              v17 = v58;
            }
          }
        }
        if ( (_BYTE)v61 == v17 )
          goto LABEL_119;
        v18 = BYTE4(a1);
        if ( HIDWORD(a1) != -1 || !(_DWORD)a1 )
          goto LABEL_31;
        v34 = *(char **)(a1 + 8);
        if ( (unsigned int)v34 >= *(_DWORD *)(a1 + 12) )
        {
          v40 = *(int (**)(void))(*(_DWORD *)a1 + 36);
          v64 = 2;
          v41 = v40();
          LOBYTE(v61) = v41;
          if ( v41 == -1 )
          {
            LODWORD(a1) = 0;
            LOBYTE(v61) = -1;
          }
        }
        else
        {
          v18 = *v34;
LABEL_31:
          LOBYTE(v61) = v18;
        }
        v19 = memchr(v59, (char)v61, 0xAu);
        if ( v19 )
        {
          v49 = off_6FB49DE8[(_DWORD)&v19[-v56]];
          v64 = 2;
          sub_6F909C90((int *)&v73, v49);
          ++v60;
        }
        else
        {
          LOBYTE(v58) = BYTE7(v58) | (*(_BYTE *)(v62 + 17) != (_BYTE)v61);
          if ( (_BYTE)v58 )
          {
            v20 = *(_BYTE *)(v62 + 16);
            if ( v20 )
            {
              if ( *(_BYTE *)(v62 + 18) == (_BYTE)v61 )
              {
                if ( !BYTE7(v58) )
                {
                  if ( v60 )
                  {
                    v64 = 2;
                    sub_6F909C90((int *)&v72, v60);
                    v15 = a1;
                    v60 = 0;
                    v16 = *(_DWORD *)(a1 + 8);
                    if ( v16 >= *(_DWORD *)(a1 + 12) )
                      goto LABEL_39;
                    goto LABEL_24;
                  }
                  LOBYTE(v58) = 0;
                  goto LABEL_87;
                }
                v20 = BYTE7(v58);
              }
              LOBYTE(v58) = v20;
            }
LABEL_87:
            if ( !*(v73 - 3) )
              goto LABEL_88;
LABEL_66:
            BYTE6(v58) = v58 ^ 1;
            goto LABEL_67;
          }
          if ( *(_DWORD *)(v62 + 44) <= 0 )
          {
            BYTE7(v58) = 0;
LABEL_119:
            LOBYTE(v58) = 1;
            if ( !*(v73 - 3) )
              goto LABEL_88;
            goto LABEL_66;
          }
          v35 = v60;
          BYTE7(v58) = 1;
          v60 = 0;
          v52 = v35;
        }
        v15 = a1;
        v16 = *(_DWORD *)(a1 + 8);
        if ( v16 >= *(_DWORD *)(a1 + 12) )
        {
LABEL_39:
          v21 = *(void (**)(void))(*(_DWORD *)v15 + 40);
          v64 = 2;
          v21();
          v15 = a1;
          goto LABEL_25;
        }
LABEL_24:
        *(_DWORD *)(v15 + 8) = v16 + 1;
LABEL_25:
        HIDWORD(a1) = -1;
        v14 = -1;
        continue;
      }
  }
}
