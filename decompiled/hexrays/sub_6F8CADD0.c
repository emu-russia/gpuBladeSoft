__int64 __stdcall sub_6F8CADD0(__int64 a1, int a2, int a3, int **a4, int *a5, int a6, int a7, _DWORD *a8)
{
  const char *v8; // edi@1
  unsigned int v9; // eax@1
  char v10; // ST04_1@1
  void *v11; // esp@1
  char v13; // dl@4
  int v14; // esi@5
  unsigned int v15; // edi@5
  char v16; // bl@5
  int *v17; // edx@5
  char v18; // al@6
  int v19; // ecx@8
  int **v20; // ebx@10
  unsigned int v21; // edi@11
  size_t v22; // esi@11
  int **v23; // eax@11
  unsigned int v24; // ebx@11
  int **v25; // esi@11
  size_t v26; // eax@12
  int **v27; // eax@15
  unsigned int v28; // esi@15
  unsigned int v29; // eax@15
  char v30; // si@18
  bool v31; // dl@20
  bool v32; // di@20
  unsigned int v33; // esi@22
  const char *v34; // edi@22
  int *v35; // edx@24
  _BYTE *v36; // eax@24
  int *v37; // eax@30
  unsigned int v38; // esi@30
  size_t v39; // eax@30
  int v40; // edx@30
  unsigned __int8 v41; // bl@32
  int v42; // ecx@34
  char v43; // bl@34
  int v44; // eax@34
  _BYTE *v45; // eax@37
  char v46; // di@40
  int v47; // eax@47
  int v48; // eax@47
  int v49; // eax@49
  int v50; // eax@55
  int v51; // eax@55
  unsigned __int8 v52; // [sp+17h] [bp-25h]@5
  int *v53; // [sp+18h] [bp-24h]@30
  unsigned int v54; // [sp+1Ch] [bp-20h]@5
  const char *v55; // [sp+20h] [bp-1Ch]@5

  v8 = (const char *)sub_6F95DC10(a7 + 108);
  v9 = 16 * ((unsigned int)(4 * a6 + 27) >> 4);
  sub_6F8A13B0(v9, v10);
  v11 = alloca(v9);
  if ( !sub_6F8C2310(&a1, (int)&a2) )
  {
    v13 = sub_6F8C2400((int *)&a1, SHIDWORD(a1));
    if ( a6 )
    {
      v55 = v8;
      v14 = 0;
      v54 = (unsigned int)&v52 & 0xFFFFFFF0;
      v15 = 0;
      v16 = v13;
      v17 = a5;
      do
      {
        while ( 1 )
        {
          v19 = *(_BYTE *)v17[v14];
          if ( (_BYTE)v19 == v16 )
            break;
          a5 = v17;
          v18 = (*(int (__thiscall **)(const char *, int))(*(_DWORD *)v55 + 8))(v55, v19);
          v17 = a5;
          if ( v16 == v18 )
            break;
          if ( a6 == ++v14 )
            goto LABEL_10;
        }
        *(_DWORD *)(v54 + 4 * v15++) = v14++;
      }
      while ( a6 != v14 );
LABEL_10:
      v20 = (int **)v54;
      v55 = (const char *)v15;
      v54 = 0;
      if ( v15 > 1 )
      {
        do
        {
          v21 = 1;
          v22 = strlen((const char *)a5[(_DWORD)*v20]);
          v23 = v20;
          v24 = v22;
          v25 = v23;
          do
          {
            v26 = strlen((const char *)a5[(_DWORD)v25[v21]]);
            if ( v24 > v26 )
              v24 = v26;
            ++v21;
          }
          while ( v21 < (unsigned int)v55 );
          v27 = v25;
          v28 = v24;
          v20 = v27;
          v29 = *(_DWORD *)(a1 + 8);
          if ( v29 >= *(_DWORD *)(a1 + 12) )
            (*(void (**)(void))(*(_DWORD *)a1 + 40))();
          else
            *(_DWORD *)(a1 + 8) = v29 + 1;
          ++v54;
          HIDWORD(a1) = -1;
          if ( v54 >= v28 )
            goto LABEL_2;
          v30 = 1;
          if ( (_DWORD)a1 )
          {
            v30 = 0;
            if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) && (*(int (**)(void))(*(_DWORD *)a1 + 36))() == -1 )
            {
              LODWORD(a1) = 0;
              v30 = 1;
            }
          }
          v31 = a3 == -1;
          v32 = v31 && a2 != 0;
          if ( v31 && a2 != 0 )
          {
            v31 = 0;
            if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
            {
              v47 = *(_DWORD *)a2;
              LOBYTE(v53) = 0;
              v48 = (*(int (**)(void))(v47 + 36))();
              v31 = (char)v53;
              if ( v48 == -1 )
              {
                a2 = 0;
                v31 = v32;
              }
            }
          }
          if ( v30 == v31 )
            goto LABEL_2;
          v33 = 0;
          v34 = v55;
          do
          {
            while ( 1 )
            {
              v35 = (int *)&v20[v33];
              LOBYTE(v55) = *(_BYTE *)(a5[*v35] + v54);
              LOBYTE(v36) = BYTE4(a1);
              if ( (_DWORD)a1 && HIDWORD(a1) == -1 )
              {
                v36 = *(_BYTE **)(a1 + 8);
                if ( (unsigned int)v36 >= *(_DWORD *)(a1 + 12) )
                {
                  v49 = *(_DWORD *)a1;
                  v53 = (int *)&v20[v33];
                  v36 = (_BYTE *)(*(int (**)(void))(v49 + 36))();
                  v35 = v53;
                  if ( v36 == (_BYTE *)-1 )
                  {
                    LODWORD(a1) = 0;
                    LOBYTE(v36) = -1;
                  }
                }
                else
                {
                  LOBYTE(v36) = *v36;
                }
              }
              if ( (_BYTE)v55 == (_BYTE)v36 )
                break;
              *v35 = (int)v20[(_DWORD)--v34];
              if ( (unsigned int)v34 <= v33 )
                goto LABEL_28;
            }
            ++v33;
          }
          while ( (unsigned int)v34 > v33 );
LABEL_28:
          v55 = v34;
        }
        while ( (unsigned int)v34 > 1 );
      }
      if ( v55 == (const char *)1 )
      {
        sub_6F92D0F0((_DWORD *)a1);
        v37 = *v20;
        HIDWORD(a1) = -1;
        v53 = v37;
        v38 = v54 + 1;
        v55 = (const char *)a5[(_DWORD)v37];
        v39 = strlen(v55);
        v54 = v39;
        if ( v38 >= v39 )
        {
          if ( v38 == v39 )
          {
LABEL_62:
            *a4 = v53;
            return a1;
          }
          goto LABEL_2;
        }
        while ( 1 )
        {
          v46 = 1;
          if ( (_DWORD)a1 )
          {
            v46 = 0;
            if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) && (*(int (**)(void))(*(_DWORD *)a1 + 36))() == -1 )
            {
              LODWORD(a1) = 0;
              v46 = 1;
            }
          }
          v41 = a3 == -1;
          LOBYTE(v40) = v41 & (a2 != 0);
          if ( v41 & (a2 != 0) )
          {
            v41 = 0;
            if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a2 + 12) )
            {
              v50 = *(_DWORD *)a2;
              v52 = v40;
              v51 = (*(int (**)(void))(v50 + 36))();
              v40 = v52;
              if ( v51 == -1 )
              {
                a2 = 0;
                v41 = v52;
              }
            }
          }
          if ( v46 == v41 )
            break;
          v42 = a1;
          v43 = v55[v38];
          LOBYTE(v44) = BYTE4(a1);
          if ( HIDWORD(a1) == -1 && (_DWORD)a1 )
          {
            v45 = *(_BYTE **)(a1 + 8);
            if ( (unsigned int)v45 < *(_DWORD *)(a1 + 12) )
            {
              if ( v43 != *v45 )
                break;
              goto LABEL_38;
            }
            v44 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)a1 + 36))(a1, v40);
            if ( v44 == -1 )
              LODWORD(a1) = 0;
          }
          if ( v43 != (_BYTE)v44 )
            break;
          v42 = a1;
          v45 = *(_BYTE **)(a1 + 8);
          if ( (unsigned int)v45 >= *(_DWORD *)(a1 + 12) )
          {
            (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)a1 + 40))(a1, v40);
            goto LABEL_39;
          }
LABEL_38:
          *(_DWORD *)(v42 + 8) = v45 + 1;
LABEL_39:
          HIDWORD(a1) = -1;
          if ( ++v38 == v54 )
            goto LABEL_62;
        }
      }
    }
  }
LABEL_2:
  *a8 |= 4u;
  return a1;
}
