char *__cdecl sub_6F95A560(char *a1, int a2, int a3)
{
  char *v3; // ebx@2
  int v4; // edi@2
  char *v5; // eax@2
  char *v6; // edx@2
  bool v7; // zf@4
  __int16 v8; // si@7
  int v9; // eax@7
  int v10; // ecx@9
  unsigned int v11; // eax@9
  int v12; // eax@10
  int (__cdecl *v13)(int); // eax@10
  __int16 v14; // ax@10
  int v15; // ecx@11
  int v16; // ecx@15
  int (*v17)(void); // eax@16
  int *v19; // ecx@19
  int v20; // eax@19
  int (__fastcall *v21)(int *, char *); // eax@19
  int v22; // eax@19
  int v23; // eax@23
  int (__cdecl *v24)(int, int); // eax@23
  int v25; // eax@23
  char *v26; // ecx@23
  __int16 v27; // si@30
  int v28; // eax@30
  __int16 v29; // ax@30
  int v30; // ecx@33
  unsigned int v31; // eax@33
  int (__fastcall *v32)(int, char *); // eax@34
  int *v33; // ecx@35
  int v34; // eax@36
  int (__fastcall *v35)(int *, char *); // eax@36
  __int16 v36; // ax@36
  int v37; // edi@36
  int v38; // ecx@39
  int (__fastcall *v39)(int, char *); // eax@40
  __int16 v40; // ax@40
  int v41; // ebx@40
  int v42; // ecx@41
  int v43; // [sp+8h] [bp-88h]@1
  int v44; // [sp+Ch] [bp-84h]@19
  int v45; // [sp+18h] [bp-78h]@6
  int v46; // [sp+1Ch] [bp-74h]@3
  int v47; // [sp+20h] [bp-70h]@2
  int v48; // [sp+24h] [bp-6Ch]@4
  int v49; // [sp+28h] [bp-68h]@3
  int *v50; // [sp+2Ch] [bp-64h]@1
  char *v51; // [sp+30h] [bp-60h]@2
  char v52; // [sp+34h] [bp-5Ch]@1
  int v53; // [sp+38h] [bp-58h]@1
  int (__cdecl *v54)(int, int, __int64, void (**)(void), int *); // [sp+4Ch] [bp-44h]@1
  int *v55; // [sp+50h] [bp-40h]@1
  char *v56; // [sp+54h] [bp-3Ch]@1
  int (*v57)(); // [sp+58h] [bp-38h]@1
  int *v58; // [sp+5Ch] [bp-34h]@1
  char v59; // [sp+70h] [bp-20h]@1
  char *v60; // [sp+74h] [bp-1Ch]@13
  char v61; // [sp+78h] [bp-18h]@1

  v56 = &v61;
  v58 = &v43;
  v50 = (int *)&v52;
  v54 = sub_6F962A50;
  v55 = dword_6F96BB50;
  v57 = sub_6F95A95D;
  sub_6F8A1A60((int *)&v52);
  v53 = -1;
  sub_6F922AD0((int)&v59, a1);
  if ( v59 )
  {
    v3 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
    v4 = *((_DWORD *)v3 + 2);
    v5 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
    v51 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
    v6 = v3;
    v47 = v4;
    if ( a3 >= v4 )
    {
      v19 = (int *)*((_DWORD *)v51 + 30);
      v20 = *v19;
      v44 = a3;
      v43 = a2;
      v21 = *(int (__fastcall **)(int *, char *))(v20 + 48);
      v53 = 2;
      v22 = v21(v19, v3);
      v6 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
      if ( a3 != v22 )
      {
        sub_6F958B40(
          (int)&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)],
          *(_DWORD *)&a1[*(_DWORD *)(*(_DWORD *)a1 - 12) + 20] | 1);
LABEL_21:
        *(_DWORD *)&a1[*(_DWORD *)(*(_DWORD *)a1 - 12) + 8] = 0;
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    v49 = *((_DWORD *)v3 + 3);
    v46 = v49 & 0xB0;
    if ( v46 == 32 )
    {
      if ( *((_DWORD *)v5 + 5) )
      {
LABEL_12:
        *((_DWORD *)v6 + 2) = 0;
        goto LABEL_13;
      }
    }
    else
    {
      v7 = v5[118] == 0;
      v48 = v4 - a3;
      if ( v7 )
      {
        v33 = (int *)*((_DWORD *)v51 + 31);
        if ( !v33 )
        {
          v53 = 2;
          sub_6F95AA30();
        }
        v34 = *v33;
        v43 = 32;
        v35 = *(int (__fastcall **)(int *, char *))(v34 + 40);
        v53 = 2;
        v36 = v35(v33, v3);
        v37 = (int)v51;
        LOWORD(v49) = v36;
        *((_WORD *)v51 + 58) = v36;
        *(_BYTE *)(v37 + 118) = 1;
        v51 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
      }
      else
      {
        LOWORD(v49) = *((_WORD *)v5 + 58);
      }
      v45 = (unsigned __int16)v49;
      do
      {
        v10 = *((_DWORD *)v51 + 30);
        v6 = v51;
        v11 = *(_DWORD *)(v10 + 20);
        if ( v11 < *(_DWORD *)(v10 + 24) )
        {
          v8 = v49;
          v9 = v11 + 2;
          *(_WORD *)(v9 - 2) = v49;
          *(_DWORD *)(v10 + 20) = v9;
          if ( v8 == -1 )
            goto LABEL_11;
        }
        else
        {
          v12 = *(_DWORD *)v10;
          v43 = v45;
          v13 = *(int (__cdecl **)(int))(v12 + 52);
          v53 = 2;
          v14 = v13(v45);
          v51 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
          v6 = v51;
          if ( v14 == -1 )
          {
LABEL_11:
            v15 = (int)v51;
            v51 = (char *)*((_DWORD *)v51 + 5);
            v53 = 2;
            sub_6F958B40(v15, (unsigned int)v51 | 1);
            v6 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
            if ( !*((_DWORD *)v6 + 5) )
              goto LABEL_23;
            goto LABEL_12;
          }
        }
        --v48;
      }
      while ( v48 );
      if ( *((_DWORD *)v51 + 5) )
        goto LABEL_12;
    }
LABEL_23:
    v23 = **((_DWORD **)v6 + 30);
    v44 = a3;
    v43 = a2;
    v24 = *(int (__cdecl **)(int, int))(v23 + 48);
    v53 = 2;
    v25 = v24(a2, a3);
    v26 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
    v51 = v26;
    v6 = v26;
    if ( a3 != v25 )
    {
      v51 = (char *)*((_DWORD *)v26 + 5);
      sub_6F958B40((int)v26, (unsigned int)v51 | 1);
      v51 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
      v6 = v51;
    }
    if ( v46 == 32 && !*((_DWORD *)v51 + 5) )
    {
      v7 = v51[118] == 0;
      v48 = v47 - a3;
      if ( v7 )
      {
        v38 = *((_DWORD *)v51 + 31);
        if ( !v38 )
        {
          v53 = 2;
          sub_6F95AA30();
        }
        v39 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v38 + 40);
        v53 = 2;
        v40 = v39(v38, v6);
        v41 = (int)v51;
        LOWORD(v49) = v40;
        *((_WORD *)v51 + 58) = v40;
        *(_BYTE *)(v41 + 118) = 1;
        v51 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
      }
      else
      {
        LOWORD(v49) = *((_WORD *)v51 + 58);
      }
      v47 = (unsigned __int16)v49;
      while ( 1 )
      {
        v30 = *((_DWORD *)v51 + 30);
        v6 = v51;
        v31 = *(_DWORD *)(v30 + 20);
        if ( v31 < *(_DWORD *)(v30 + 24) )
        {
          v27 = v49;
          v28 = v31 + 2;
          *(_WORD *)(v28 - 2) = v49;
          *(_DWORD *)(v30 + 20) = v28;
          v29 = v27;
        }
        else
        {
          v32 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v30 + 52);
          v53 = 2;
          v29 = v32(v30, v51);
          v6 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
          v51 = &a1[*(_DWORD *)(*(_DWORD *)a1 - 12)];
        }
        if ( v29 == -1 )
          break;
        if ( !--v48 )
          goto LABEL_12;
      }
      v42 = (int)v51;
      v51 = (char *)*((_DWORD *)v51 + 5);
      v53 = 2;
      sub_6F958B40(v42, (unsigned int)v51 | 1);
      goto LABEL_21;
    }
    goto LABEL_12;
  }
LABEL_13:
  v51 = &v60[*(_DWORD *)(*(_DWORD *)v60 - 12)];
  if ( v51[13] & 0x20 )
  {
    if ( !sub_6F95AC80() )
    {
      v16 = *((_DWORD *)v51 + 30);
      if ( v16 )
      {
        v17 = *(int (**)(void))(*(_DWORD *)v16 + 24);
        v53 = 0;
        if ( v17() == -1 )
          sub_6F958B40(
            (int)&v60[*(_DWORD *)(*(_DWORD *)v60 - 12)],
            *(_DWORD *)&v60[*(_DWORD *)(*(_DWORD *)v60 - 12) + 20] | 1);
      }
    }
  }
  sub_6F8A1AD0(v50);
  return a1;
}
