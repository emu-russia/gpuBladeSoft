__int64 __stdcall sub_6F8F7340(__int64 a1, int a2, int a3, int a4, _DWORD *a5, int a6)
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
  char v23; // al@48
  bool v24; // al@50
  int v25; // ecx@57
  _BYTE *v26; // eax@57
  int v27; // eax@61
  int (*v28)(void); // eax@74
  int v29; // eax@74
  int (__fastcall *v30)(int, _DWORD); // eax@77
  int v31; // eax@77
  char *v32; // eax@79
  int v33; // eax@82
  unsigned __int8 v35; // al@96
  int v36; // eax@99
  int v37; // eax@99
  void (*v38)(void); // eax@105
  char v39; // al@110
  int (*v40)(void); // eax@116
  int v41; // eax@116
  int v42; // eax@123
  char v43; // al@127
  char v44; // al@129
  unsigned int v45; // eax@130
  int (*v46)(void); // eax@138
  int v47; // [sp+0h] [bp-98h]@1
  int v48; // [sp+4h] [bp-94h]@112
  int *v49; // [sp+8h] [bp-90h]@3
  int v50; // [sp+18h] [bp-80h]@5
  unsigned int v51; // [sp+1Ch] [bp-7Ch]@47
  int v52; // [sp+20h] [bp-78h]@1
  unsigned int v53; // [sp+24h] [bp-74h]@5
  int v54; // [sp+28h] [bp-70h]@1
  int v55; // [sp+2Ch] [bp-6Ch]@5
  __int64 v56; // [sp+30h] [bp-68h]@1
  const void *v57; // [sp+38h] [bp-60h]@5
  int v58; // [sp+3Ch] [bp-5Ch]@5
  __int64 v59; // [sp+40h] [bp-58h]@1
  int v60; // [sp+48h] [bp-50h]@1
  char v61; // [sp+4Ch] [bp-4Ch]@1
  int v62; // [sp+50h] [bp-48h]@1
  int (__cdecl *v63)(int, int, __int64, void (**)(void), int *); // [sp+64h] [bp-34h]@1
  int *v64; // [sp+68h] [bp-30h]@1
  char *v65; // [sp+6Ch] [bp-2Ch]@1
  int (*v66)(); // [sp+70h] [bp-28h]@1
  int *v67; // [sp+74h] [bp-24h]@1
  char v68; // [sp+82h] [bp-16h]@5
  char v69; // [sp+83h] [bp-15h]@90
  _DWORD *v70; // [sp+84h] [bp-14h]@3
  _DWORD *v71; // [sp+88h] [bp-10h]@5
  int v72; // [sp+8Ch] [bp-Ch]@3
  char v73; // [sp+90h] [bp-8h]@1

  v65 = &v73;
  v67 = &v47;
  v63 = sub_6F962A50;
  v64 = dword_6F96B654;
  v66 = sub_6F8F7DE4;
  sub_6F8A1A60((int *)&v61);
  LODWORD(v59) = a4 + 108;
  v62 = -1;
  v52 = sub_6F95DC10(a4 + 108);
  v6 = sub_6F8BF180(v59);
  BYTE5(v56) = 0;
  v60 = v6;
  v54 = v6 + 56;
  if ( *(_DWORD *)(v6 + 32) )
    BYTE5(v56) = *(_DWORD *)(v6 + 40) != 0;
  v49 = &v72;
  v62 = -1;
  v70 = sub_6F9081A0(0, 0);
  if ( *(_BYTE *)(v60 + 16) )
  {
    v62 = 1;
    sub_6F909A00((int *)&v70, 0x20u);
  }
  v49 = (int *)&v68;
  v62 = 1;
  v71 = sub_6F9081A0(0, 0);
  v62 = 2;
  sub_6F909A00((int *)&v71, 0x20u);
  v55 = 1;
  BYTE7(v56) = 0;
  v7 = *(_DWORD *)(v60 + 52);
  v58 = 0;
  v57 = (const void *)(v60 + 57);
  v72 = v7;
  v8 = (char *)&v72;
  v50 = 0;
  v53 = 0;
  BYTE4(v56) = 0;
  if ( (unsigned __int8)v72 > 4u )
    goto LABEL_69;
LABEL_6:
  switch ( *v8 )
  {
    case 0:
      LOBYTE(v56) = 1;
      goto LABEL_8;
    case 1:
      v62 = 2;
      if ( sub_6F8C2310(&a1, (int)&a2)
        || (v62 = 2, v35 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1)), !(*(_BYTE *)(*(_DWORD *)(v52 + 24) + 2 * v35) & 0x20)) )
      {
        LOBYTE(v56) = 0;
        if ( v55 == 4 )
        {
LABEL_9:
          v9 = v56 & (v53 > 1);
          goto LABEL_10;
        }
      }
      else
      {
        sub_6F92D0F0((_DWORD *)a1);
        HIDWORD(a1) = -1;
        LOBYTE(v56) = 1;
LABEL_8:
        if ( v55 == 4 )
          goto LABEL_9;
      }
      LODWORD(v59) = &a2;
      while ( 1 )
      {
        v62 = 2;
        if ( sub_6F8C2310(&a1, v59) )
          goto LABEL_65;
        LOBYTE(v27) = BYTE4(a1);
        v25 = a1;
        if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
        {
          v26 = *(_BYTE **)(a1 + 8);
          if ( (unsigned int)v26 < *(_DWORD *)(a1 + 12) )
          {
            if ( !(*(_BYTE *)(*(_DWORD *)(v52 + 24) + 2 * *v26) & 0x20) )
              goto LABEL_65;
LABEL_58:
            *(_DWORD *)(v25 + 8) = v26 + 1;
            goto LABEL_59;
          }
          v46 = *(int (**)(void))(*(_DWORD *)a1 + 36);
          v62 = 2;
          v27 = v46();
          if ( v27 == -1 )
            LODWORD(a1) = 0;
        }
        if ( !(*(_BYTE *)(*(_DWORD *)(v52 + 24) + 2 * (unsigned __int8)v27) & 0x20) )
          goto LABEL_65;
        v25 = a1;
        v26 = *(_BYTE **)(a1 + 8);
        if ( (unsigned int)v26 < *(_DWORD *)(a1 + 12) )
          goto LABEL_58;
        v38 = *(void (**)(void))(*(_DWORD *)a1 + 40);
        v62 = 2;
        v38();
LABEL_59:
        HIDWORD(a1) = -1;
      }
    case 2:
      if ( *(_BYTE *)(a4 + 13) & 2 )
        goto LABEL_47;
      v22 = v55 - 1;
      BYTE6(v56) = v55 == 1 || v53 > 1;
      if ( BYTE6(v56) )
        goto LABEL_47;
      if ( v22 != 1 )
      {
        LOBYTE(v56) = 1;
        if ( v22 != 2 )
          goto LABEL_66;
        if ( BYTE3(v72) != 4 && (BYTE3(v72) != 3 || !BYTE5(v56)) )
          goto LABEL_68;
        goto LABEL_47;
      }
      if ( BYTE5(v56) || (_BYTE)v72 == 3 || BYTE2(v72) == 1 )
      {
LABEL_47:
        LODWORD(v56) = 0;
        v51 = *(_DWORD *)(v60 + 24);
        LODWORD(v59) = &a2;
        while ( 1 )
        {
          v62 = 2;
          v24 = sub_6F8C2310(&a1, v59);
          BYTE6(v56) = (unsigned int)v56 < v51 && !v24;
          if ( !BYTE6(v56) )
            break;
          v23 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          if ( *(_BYTE *)(*(_DWORD *)(v60 + 20) + v56) != v23 )
            goto LABEL_98;
          v62 = 2;
          sub_6F92D0F0((_DWORD *)a1);
          LODWORD(v56) = v56 + 1;
          HIDWORD(a1) = -1;
        }
        if ( (_DWORD)v56 == v51 )
          goto LABEL_52;
LABEL_98:
        if ( !(_DWORD)v56 )
        {
          v36 = *(_DWORD *)(a4 + 12);
          LODWORD(v59) = v36;
          v37 = v36 & 0x200;
          LODWORD(v56) = v37 == 0;
          BYTE6(v56) = v37 != 0;
          goto LABEL_66;
        }
        goto LABEL_87;
      }
      do
      {
LABEL_68:
        v8 = (char *)&v71 + ++v55 + 3;
        if ( *((_BYTE *)&v71 + v55 + 3) <= 4u )
          goto LABEL_6;
LABEL_69:
        BYTE6(v56) = 0;
LABEL_52:
        LOBYTE(v56) = 1;
LABEL_66:
        ;
      }
      while ( v55 <= 3 && !BYTE6(v56) );
      v9 = v56 & (v53 > 1);
LABEL_10:
      if ( !v9 )
      {
        if ( (_BYTE)v56 )
        {
          if ( *(v71 - 3) <= 1u )
            goto LABEL_108;
          goto LABEL_123;
        }
LABEL_86:
        LODWORD(v59) = &a2;
LABEL_87:
        *a5 |= 4u;
        goto LABEL_88;
      }
      if ( BYTE4(v56) )
        LODWORD(v56) = *(_DWORD *)(v60 + 36);
      else
        LODWORD(v56) = *(_DWORD *)(v60 + 28);
      v57 = (const void *)1;
      LODWORD(v59) = &a2;
      while ( 1 )
      {
        v62 = 2;
        v10 = sub_6F8C2310(&a1, v59);
        if ( (unsigned int)v57 >= v53 || v10 == 1 )
          break;
        v11 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
        if ( *((_BYTE *)v57 + v56) != v11 )
          goto LABEL_87;
        v12 = *(_DWORD *)(a1 + 8);
        if ( v12 < *(_DWORD *)(a1 + 12) )
        {
          *(_DWORD *)(a1 + 8) = v12 + 1;
        }
        else
        {
          v13 = *(void (**)(void))(*(_DWORD *)a1 + 40);
          v62 = 2;
          v13();
        }
        v57 = (char *)v57 + 1;
        HIDWORD(a1) = -1;
      }
      if ( v57 != (const void *)v53 )
        goto LABEL_87;
      if ( *(v71 - 3) > 1u )
      {
LABEL_123:
        v42 = sub_6F8BD2C0(&v71, 48, 0);
        if ( v42 )
        {
          if ( v42 == -1 )
            v42 = *(v71 - 3) - 1;
          v62 = 2;
          sub_6F908A30(&v71, 0, v42);
        }
      }
LABEL_108:
      if ( BYTE4(v56) )
      {
        v62 = 2;
        sub_6F9094A0((int *)&v71);
        if ( *(_BYTE *)v71 != 48 )
        {
          sub_6F9094A0((int *)&v71);
          sub_6F908550(&v71, 0, 0, 1u, 45);
          *(v71 - 1) = -1;
        }
      }
      if ( *(v70 - 3) )
      {
        v39 = v58;
        if ( BYTE7(v56) )
          v39 = v50;
        v62 = 2;
        sub_6F909C90((int *)&v70, v39);
        v49 = (int *)&v70;
        v48 = *(_DWORD *)(v60 + 12);
        if ( !(unsigned __int8)sub_6F95AB90(*(_DWORD *)(v60 + 8), v48, &v70) )
          *a5 |= 4u;
      }
      if ( BYTE7(v56) )
      {
        LODWORD(v59) = &a2;
        if ( *(_DWORD *)(v60 + 44) != v58 )
          goto LABEL_87;
      }
      v62 = 2;
      sub_6F908910((void *)a6, (int *)&v71);
      LODWORD(v59) = &a2;
LABEL_88:
      v62 = 2;
      if ( sub_6F8C2310(&a1, v59) )
        *a5 |= 2u;
      v59 = a1;
      sub_6F9086F0((int)(v71 - 3), (int)&v69);
      sub_6F9086F0((int)(v70 - 3), (int)&v69);
      sub_6F8A1AD0((int *)&v61);
      return v59;
    case 3:
      if ( *(_DWORD *)(v60 + 32) )
      {
        LODWORD(v59) = &a2;
        v62 = 2;
        BYTE6(v56) = sub_6F8C2310(&a1, (int)&a2);
        if ( !BYTE6(v56) )
        {
          v43 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
          if ( **(_BYTE **)(v60 + 28) == v43 )
          {
            v53 = *(_DWORD *)(v60 + 32);
            sub_6F92D0F0((_DWORD *)a1);
            HIDWORD(a1) = -1;
            LOBYTE(v56) = 1;
            goto LABEL_66;
          }
        }
        if ( !*(_DWORD *)(v60 + 40) )
        {
          if ( !*(_DWORD *)(v60 + 32) )
            goto LABEL_72;
          goto LABEL_95;
        }
      }
      else
      {
        if ( !*(_DWORD *)(v60 + 40) )
          goto LABEL_72;
        LODWORD(v59) = &a2;
      }
      v62 = 2;
      BYTE6(v56) = sub_6F8C2310(&a1, v59);
      if ( !BYTE6(v56) )
      {
        v62 = 2;
        v44 = sub_6F8C23B0((int *)&a1, SHIDWORD(a1));
        if ( **(_BYTE **)(v60 + 36) == v44 )
        {
          v45 = *(_DWORD *)(v60 + 40);
          v62 = 2;
          v53 = v45;
          sub_6F92D0F0((_DWORD *)a1);
          HIDWORD(a1) = -1;
          LOBYTE(v56) = 1;
          BYTE4(v56) = 1;
          goto LABEL_66;
        }
      }
      if ( !*(_DWORD *)(v60 + 32) || *(_DWORD *)(v60 + 40) )
      {
LABEL_72:
        BYTE6(v56) = BYTE5(v56);
        LOBYTE(v56) = BYTE5(v56) ^ 1;
        goto LABEL_66;
      }
LABEL_95:
      BYTE6(v56) = 0;
      LOBYTE(v56) = 1;
      BYTE4(v56) = 1;
      goto LABEL_66;
    case 4:
      v14 = HIDWORD(a1);
      v15 = a1;
      while ( 2 )
      {
        LOBYTE(v59) = v14 == -1;
        LOBYTE(v56) = v59 & (v15 != 0);
        if ( (_BYTE)v56 )
        {
          LOBYTE(v59) = 0;
          if ( *(_DWORD *)(v15 + 8) >= *(_DWORD *)(v15 + 12) )
          {
            v28 = *(int (**)(void))(*(_DWORD *)v15 + 36);
            v62 = 2;
            v29 = v28();
            LOBYTE(v59) = 0;
            if ( v29 == -1 )
            {
              LODWORD(a1) = 0;
              LOBYTE(v59) = v56;
            }
          }
        }
        v17 = a3 == -1;
        LOBYTE(v56) = v17 & (a2 != 0);
        if ( v17 & (a2 != 0) )
        {
          v17 = 0;
          if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
          {
            v30 = *(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 36);
            v62 = 2;
            v31 = v30(a2, 0);
            v17 = 0;
            if ( v31 == -1 )
            {
              a2 = 0;
              v17 = v56;
            }
          }
        }
        if ( (_BYTE)v59 == v17 )
          goto LABEL_119;
        v18 = BYTE4(a1);
        if ( HIDWORD(a1) != -1 || !(_DWORD)a1 )
          goto LABEL_31;
        v32 = *(char **)(a1 + 8);
        if ( (unsigned int)v32 >= *(_DWORD *)(a1 + 12) )
        {
          v40 = *(int (**)(void))(*(_DWORD *)a1 + 36);
          v62 = 2;
          v41 = v40();
          LOBYTE(v59) = v41;
          if ( v41 == -1 )
          {
            LODWORD(a1) = 0;
            LOBYTE(v59) = -1;
          }
        }
        else
        {
          v18 = *v32;
LABEL_31:
          LOBYTE(v59) = v18;
        }
        v19 = memchr(v57, (char)v59, 0xAu);
        if ( v19 )
        {
          v47 = off_6FB49DE8[(_DWORD)&v19[-v54]];
          v62 = 2;
          sub_6F909C90((int *)&v71, v47);
          ++v58;
        }
        else
        {
          LOBYTE(v56) = BYTE7(v56) | (*(_BYTE *)(v60 + 17) != (_BYTE)v59);
          if ( (_BYTE)v56 )
          {
            v20 = *(_BYTE *)(v60 + 16);
            if ( v20 )
            {
              if ( *(_BYTE *)(v60 + 18) == (_BYTE)v59 )
              {
                if ( !BYTE7(v56) )
                {
                  if ( v58 )
                  {
                    v62 = 2;
                    sub_6F909C90((int *)&v70, v58);
                    v15 = a1;
                    v58 = 0;
                    v16 = *(_DWORD *)(a1 + 8);
                    if ( v16 >= *(_DWORD *)(a1 + 12) )
                      goto LABEL_39;
                    goto LABEL_24;
                  }
                  LOBYTE(v56) = 0;
                  goto LABEL_85;
                }
                v20 = BYTE7(v56);
              }
              LOBYTE(v56) = v20;
            }
LABEL_85:
            if ( !*(v71 - 3) )
              goto LABEL_86;
LABEL_65:
            BYTE6(v56) = v56 ^ 1;
            goto LABEL_66;
          }
          if ( *(_DWORD *)(v60 + 44) <= 0 )
          {
            BYTE7(v56) = 0;
LABEL_119:
            LOBYTE(v56) = 1;
            if ( !*(v71 - 3) )
              goto LABEL_86;
            goto LABEL_65;
          }
          v33 = v58;
          BYTE7(v56) = 1;
          v58 = 0;
          v50 = v33;
        }
        v15 = a1;
        v16 = *(_DWORD *)(a1 + 8);
        if ( v16 >= *(_DWORD *)(a1 + 12) )
        {
LABEL_39:
          v21 = *(void (**)(void))(*(_DWORD *)v15 + 40);
          v62 = 2;
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
