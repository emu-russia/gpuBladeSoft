_DWORD *__stdcall sub_6F8FB3C0(_DWORD *a1, int a2, int a3, int a4, unsigned int *a5)
{
  int v5; // ecx@3
  char v6; // al@3
  unsigned int v7; // eax@4
  _BYTE *v8; // eax@5
  unsigned int v9; // ecx@5
  int v10; // ebx@6
  int v12; // eax@13
  bool v13; // sf@14
  int v14; // eax@14
  int v15; // ebx@16
  int v16; // eax@17
  _BYTE *v17; // eax@19
  int v18; // edx@19
  size_t v19; // eax@21
  unsigned int v20; // edx@21
  int v21; // eax@24
  int v22; // ecx@24
  bool v23; // dl@26
  int *v24; // ebx@30
  unsigned int v25; // eax@30
  char v26; // al@35
  _DWORD *v27; // ecx@43
  unsigned int v28; // edx@43
  int v29; // eax@46
  int (__thiscall *v30)(_DWORD); // eax@46
  int v31; // eax@46
  _WORD *v32; // eax@2
  int v33; // edx@2
  _DWORD *v34; // ecx@2
  unsigned int v35; // [sp+8h] [bp-B8h]@1
  unsigned int v36; // [sp+Ch] [bp-B4h]@34
  int *v37; // [sp+10h] [bp-B0h]@13
  unsigned int v38; // [sp+14h] [bp-ACh]@17
  int v39; // [sp+2Ch] [bp-94h]@17
  char *v40; // [sp+30h] [bp-90h]@17
  int v41; // [sp+34h] [bp-8Ch]@2
  int v42; // [sp+38h] [bp-88h]@17
  _BYTE *v43; // [sp+3Ch] [bp-84h]@17
  int v44; // [sp+40h] [bp-80h]@13
  int v45; // [sp+44h] [bp-7Ch]@1
  int *v46; // [sp+48h] [bp-78h]@1
  int v47; // [sp+4Ch] [bp-74h]@1
  unsigned int v48; // [sp+50h] [bp-70h]@1
  unsigned int v49; // [sp+54h] [bp-6Ch]@1
  _DWORD *v50; // [sp+58h] [bp-68h]@1
  unsigned __int8 v51; // [sp+5Fh] [bp-61h]@1
  int v52; // [sp+60h] [bp-60h]@1
  int v53; // [sp+64h] [bp-5Ch]@1
  unsigned int v54; // [sp+68h] [bp-58h]@1
  char v55; // [sp+6Ch] [bp-54h]@1
  int v56; // [sp+70h] [bp-50h]@1
  int (__cdecl *v57)(int, int, __int64, void (**)(void), int *); // [sp+84h] [bp-3Ch]@1
  int *v58; // [sp+88h] [bp-38h]@1
  char *v59; // [sp+8Ch] [bp-34h]@1
  int (*v60)(); // [sp+90h] [bp-30h]@1
  int *v61; // [sp+94h] [bp-2Ch]@1
  _DWORD *v62; // [sp+A0h] [bp-20h]@47
  int v63; // [sp+A4h] [bp-1Ch]@47
  char v64; // [sp+AAh] [bp-16h]@26
  char v65; // [sp+ABh] [bp-15h]@47
  _BYTE *v66; // [sp+ACh] [bp-14h]@13
  _DWORD *v67; // [sp+B0h] [bp-10h]@13
  int v68; // [sp+B4h] [bp-Ch]@4
  char v69; // [sp+B8h] [bp-8h]@1

  v57 = sub_6F962A50;
  v58 = dword_6F96B59C;
  v50 = a1;
  v45 = a4;
  LOBYTE(v47) = a4;
  v59 = &v69;
  v53 = a2;
  v60 = sub_6F8FBB3E;
  v61 = (int *)&v35;
  sub_6F8A1A60((int *)&v55);
  v51 = v53;
  v54 = a3 + 108;
  v56 = -1;
  v49 = sub_6F95DC10(a3 + 108);
  v48 = sub_6F8C3BF0(&unk_6FB49DF0);
  v46 = (int *)(*(_DWORD *)(*(_DWORD *)(a3 + 108) + 12) + 4 * v48);
  v52 = *v46;
  if ( !v52 )
  {
    v56 = 5;
    v32 = sub_6F961B60(0x44u);
    *(_DWORD *)v32 = off_6FBB0934;
    v32[8] = 0;
    v33 = v54;
    *((_DWORD *)v32 + 1) = 0;
    *((_DWORD *)v32 + 2) = 0;
    *((_DWORD *)v32 + 3) = 0;
    *((_BYTE *)v32 + 18) = 0;
    *((_DWORD *)v32 + 5) = 0;
    *((_DWORD *)v32 + 6) = 0;
    *((_DWORD *)v32 + 7) = 0;
    *((_DWORD *)v32 + 8) = 0;
    *((_DWORD *)v32 + 9) = 0;
    *((_DWORD *)v32 + 10) = 0;
    *((_DWORD *)v32 + 11) = 0;
    *((_DWORD *)v32 + 12) = 0;
    *((_DWORD *)v32 + 13) = 0;
    *((_BYTE *)v32 + 67) = 0;
    v56 = 4;
    v41 = (int)v32;
    sub_6F932E50(v32, v33);
    v34 = *(_DWORD **)(a3 + 108);
    v56 = -1;
    sub_6F936240(v34, v41, v48);
    v52 = *v46;
  }
  v5 = *(_DWORD *)(*a5 - 12);
  v6 = *(_BYTE *)(v52 + 56);
  v54 = *a5;
  if ( *(_BYTE *)v54 == v6 )
  {
    v68 = *(_DWORD *)(v52 + 52);
    if ( !v5 )
      goto LABEL_11;
    v24 = *(int **)(v52 + 36);
    ++v54;
    v25 = *(_DWORD *)(v52 + 40);
    v46 = v24;
    v48 = v25;
  }
  else
  {
    v68 = *(_DWORD *)(v52 + 48);
    v7 = *(_DWORD *)(v52 + 32);
    v46 = *(int **)(v52 + 28);
    v48 = v7;
  }
  v8 = (_BYTE *)v54;
  v9 = v54 + v5;
  if ( v9 > v54 )
  {
    v10 = *(_DWORD *)(v49 + 24);
    if ( *(_BYTE *)(v10 + 2 * *(_BYTE *)v54) & 8 )
    {
      do
      {
        if ( (_BYTE *)v9 == ++v8 )
        {
          v49 = v9 - v54;
          if ( v9 == v54 )
            goto LABEL_11;
          goto LABEL_13;
        }
      }
      while ( *(_BYTE *)(v10 + 2 * *v8) & 8 );
      v49 = (unsigned int)&v8[-v54];
      if ( v8 == (_BYTE *)v54 )
        goto LABEL_11;
LABEL_13:
      v37 = (int *)&v67;
      v56 = -1;
      v66 = sub_6F9081A0(0, 0);
      v56 = 1;
      sub_6F909A00((int *)&v66, 2 * v49);
      v12 = *(_DWORD *)(v52 + 44);
      v44 = v49 - v12;
      if ( (signed int)(v49 - v12) > 0 )
      {
        v13 = v12 < 0;
        v14 = v49 - v12;
        if ( v13 )
          v14 = v49;
        v15 = v14;
        v44 = v14;
        if ( *(_DWORD *)(v52 + 12) )
        {
          v38 = 0;
          v44 = v14;
          v37 = (int *)(2 * v14);
          v16 = *((_DWORD *)v66 - 3);
          v56 = 1;
          sub_6F908550(&v66, 0, v16, 2 * v15, 0);
          v43 = (_BYTE *)(v44 + v54);
          v42 = *(_DWORD *)(v52 + 12);
          v40 = *(char **)(v52 + 8);
          v39 = *(_BYTE *)(v52 + 18);
          if ( *((_DWORD *)v66 - 1) >= 0 )
            sub_6F908160((int *)&v66);
          v17 = sub_6F959760(v66, v39, v40, v42, (_BYTE *)v54, v43);
          v18 = (int)v66;
          v43 = v17;
          if ( *((_DWORD *)v66 - 1) >= 0 )
          {
            v56 = 1;
            sub_6F908160((int *)&v66);
            v18 = (int)v66;
          }
          v19 = (size_t)&v43[-v18];
          v20 = *(_DWORD *)(v18 - 12);
          if ( v19 > v20 )
          {
            v38 = v20;
            v37 = (int *)v19;
            v56 = 1;
            sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase");
          }
          v56 = 1;
          sub_6F909B10((const void **)&v66, v19, v20 - v19, 0);
          v12 = *(_DWORD *)(v52 + 44);
        }
        else
        {
          v56 = 1;
          sub_6F908E30((void **)&v66, (char *)v54, v44);
          v12 = *(_DWORD *)(v52 + 44);
        }
      }
      if ( v12 > 0 )
      {
        v35 = *(_BYTE *)(v52 + 17);
        v56 = 1;
        sub_6F909C90((int *)&v66, v35);
        if ( v44 < 0 )
        {
          v36 = *(_BYTE *)(v52 + 57);
          v56 = 1;
          sub_6F908D10(&v66, -v44, v36);
          sub_6F908AF0((unsigned int *)&v66, v54, v49);
        }
        else
        {
          v36 = *(_DWORD *)(v52 + 44);
          sub_6F908AF0((unsigned int *)&v66, v44 + v54, v36);
        }
      }
      v21 = *(_DWORD *)(a3 + 12);
      v44 = *(_DWORD *)(a3 + 12) & 0xB0;
      v22 = *((_DWORD *)v66 - 3) + v48;
      v54 = *((_DWORD *)v66 - 3) + v48;
      if ( BYTE1(v21) & 2 )
        v54 = *(_DWORD *)(v52 + 24) + v22;
      v37 = (int *)&v64;
      v56 = 1;
      v67 = sub_6F9081A0(0, 0);
      v56 = 2;
      sub_6F909A00((int *)&v67, 2 * v54);
      v49 = *(_DWORD *)(a3 + 8);
      v23 = v49 > v54 && v44 == 16;
      v42 = v49 - v54;
      v54 = (unsigned int)&v68;
      LOBYTE(v43) = v23;
      v47 = (char)v47;
      do
      {
        if ( *(_BYTE *)v54 <= 4u )
        {
          switch ( *(_BYTE *)v54 )
          {
            case 0:
              if ( (_BYTE)v43 )
              {
                v26 = v47;
                goto LABEL_36;
              }
              break;
            case 1:
              v26 = v47;
              if ( (_BYTE)v43 )
              {
LABEL_36:
                v56 = 2;
                sub_6F908D10(&v67, v42, v26);
              }
              else
              {
                v56 = 2;
                sub_6F909C90((int *)&v67, v47);
              }
              break;
            case 2:
              if ( *(_BYTE *)(a3 + 13) & 2 )
              {
                v36 = *(_DWORD *)(v52 + 24);
                v35 = *(_DWORD *)(v52 + 20);
                v56 = 2;
                sub_6F908AF0((unsigned int *)&v67, v35, v36);
              }
              break;
            case 3:
              if ( v48 )
              {
                v35 = *(_BYTE *)v46;
                v56 = 2;
                sub_6F909C90((int *)&v67, v35);
              }
              break;
            case 4:
              v56 = 2;
              sub_6F908BB0((int *)&v67, (const void **)&v66);
              break;
          }
        }
        ++v54;
      }
      while ( (char *)v54 != &v69 );
      if ( v48 > 1 )
      {
        v56 = 2;
        sub_6F908AF0((unsigned int *)&v67, (unsigned int)v46 + 1, v48 - 1);
        v27 = v67;
        v28 = *(v67 - 3);
        if ( v49 <= v28 )
          goto LABEL_44;
      }
      else
      {
        v27 = v67;
        v28 = *(v67 - 3);
        if ( v49 <= v28 )
        {
LABEL_44:
          v49 = v28;
LABEL_45:
          if ( !v51 )
          {
            v29 = *v50;
            v35 = (unsigned int)v27;
            v36 = v49;
            v30 = *(int (__thiscall **)(_DWORD))(v29 + 48);
            v56 = 2;
            v31 = v30(v50);
            v27 = v67;
            v51 = v31 != v49;
          }
          v63 = v51;
          LOBYTE(v53) = v51;
          v62 = v50;
          sub_6F9086F0((int)(v27 - 3), (int)&v65);
          sub_6F9086F0((int)(v66 - 12), (int)&v65);
          goto LABEL_11;
        }
      }
      if ( v44 == 32 )
      {
        v56 = 2;
        sub_6F908D10(&v67, v49 - v28, v45);
        v27 = v67;
      }
      else
      {
        v56 = 2;
        sub_6F908550(&v67, 0, 0, v49 - v28, v45);
        v27 = v67;
      }
      goto LABEL_45;
    }
  }
LABEL_11:
  *(_DWORD *)(a3 + 8) = 0;
  LOBYTE(v53) = v51;
  sub_6F8A1AD0((int *)&v55);
  return v50;
}
