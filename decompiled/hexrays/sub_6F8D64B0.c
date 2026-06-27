_DWORD *__stdcall sub_6F8D64B0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // ecx@3
  unsigned int v6; // eax@4
  _BYTE *v7; // eax@5
  unsigned int v8; // ecx@5
  int v9; // ebx@6
  int v10; // ecx@10
  int v12; // eax@13
  bool v13; // sf@14
  int v14; // eax@14
  int v15; // edx@14
  _BYTE *v16; // eax@17
  int v17; // eax@20
  bool v18; // dl@22
  int v19; // esi@26
  unsigned int v20; // eax@26
  size_t v21; // edx@30
  int v22; // edx@39
  int *v23; // edx@42
  int v24; // eax@43
  int (__cdecl *v25)(int *, unsigned int, size_t, int, unsigned int, unsigned int); // eax@43
  int v26; // eax@43
  int *v27; // edx@54
  unsigned int v28; // eax@54
  size_t v29; // edx@59
  int *v30; // edx@62
  unsigned int v31; // eax@62
  size_t v32; // esi@66
  _WORD *v33; // eax@2
  int v34; // esi@2
  _DWORD *v35; // ecx@2
  int *v36; // [sp+8h] [bp-E8h]@1
  int v37; // [sp+Ch] [bp-E4h]@43
  size_t v38; // [sp+10h] [bp-E0h]@43
  int v39; // [sp+14h] [bp-DCh]@43
  unsigned int v40; // [sp+18h] [bp-D8h]@17
  unsigned int v41; // [sp+1Ch] [bp-D4h]@17
  size_t v42; // [sp+2Ch] [bp-C4h]@64
  int v43; // [sp+30h] [bp-C0h]@2
  size_t v44; // [sp+34h] [bp-BCh]@32
  size_t v45; // [sp+38h] [bp-B8h]@22
  int v46; // [sp+3Ch] [bp-B4h]@22
  size_t v47; // [sp+40h] [bp-B0h]@19
  int v48; // [sp+44h] [bp-ACh]@13
  int v49; // [sp+48h] [bp-A8h]@1
  int v50; // [sp+4Ch] [bp-A4h]@1
  unsigned int v51; // [sp+50h] [bp-A0h]@1
  unsigned int v52; // [sp+54h] [bp-9Ch]@1
  _DWORD *v53; // [sp+58h] [bp-98h]@1
  char v54; // [sp+5Eh] [bp-92h]@1
  unsigned __int8 v55; // [sp+5Fh] [bp-91h]@1
  int v56; // [sp+60h] [bp-90h]@1
  int v57; // [sp+64h] [bp-8Ch]@1
  unsigned int v58; // [sp+68h] [bp-88h]@1
  char v59; // [sp+6Ch] [bp-84h]@1
  int v60; // [sp+70h] [bp-80h]@1
  int (__cdecl *v61)(int, int, __int64, void (**)(void), int *); // [sp+84h] [bp-6Ch]@1
  int *v62; // [sp+88h] [bp-68h]@1
  char *v63; // [sp+8Ch] [bp-64h]@1
  int (*v64)(); // [sp+90h] [bp-60h]@1
  int *v65; // [sp+94h] [bp-5Ch]@1
  _DWORD *v66; // [sp+A0h] [bp-50h]@44
  int v67; // [sp+A4h] [bp-4Ch]@44
  int v68; // [sp+B4h] [bp-3Ch]@4
  int *v69; // [sp+B8h] [bp-38h]@13
  int v70; // [sp+BCh] [bp-34h]@13
  unsigned int v71; // [sp+C0h] [bp-30h]@13
  int *v72; // [sp+D0h] [bp-20h]@22
  unsigned int v73; // [sp+D4h] [bp-1Ch]@22
  unsigned int v74; // [sp+D8h] [bp-18h]@22
  char v75; // [sp+E8h] [bp-8h]@1

  v63 = &v75;
  v61 = sub_6F962A50;
  v53 = a1;
  v49 = a4;
  v57 = a2;
  v54 = a4;
  v62 = dword_6F96B748;
  v64 = sub_6F8D6E72;
  v65 = (int *)&v36;
  sub_6F8A1A60((int *)&v59);
  v55 = v57;
  v58 = a3 + 108;
  v60 = -1;
  v52 = sub_6F95DC10(a3 + 108);
  v51 = sub_6F8C3BF0(&unk_6FB49F64);
  v50 = *(_DWORD *)(*(_DWORD *)(a3 + 108) + 12) + 4 * v51;
  v56 = *(_DWORD *)v50;
  if ( !v56 )
  {
    v60 = 5;
    v33 = sub_6F961B60(0x44u);
    v34 = v58;
    *(_DWORD *)v33 = off_6FBB0934;
    v33[8] = 0;
    *((_DWORD *)v33 + 1) = 0;
    *((_DWORD *)v33 + 2) = 0;
    *((_DWORD *)v33 + 3) = 0;
    *((_BYTE *)v33 + 18) = 0;
    *((_DWORD *)v33 + 5) = 0;
    *((_DWORD *)v33 + 6) = 0;
    *((_DWORD *)v33 + 7) = 0;
    *((_DWORD *)v33 + 8) = 0;
    *((_DWORD *)v33 + 9) = 0;
    *((_DWORD *)v33 + 10) = 0;
    *((_DWORD *)v33 + 11) = 0;
    *((_DWORD *)v33 + 12) = 0;
    *((_DWORD *)v33 + 13) = 0;
    *((_BYTE *)v33 + 67) = 0;
    v60 = 4;
    v43 = (int)v33;
    sub_6F932E50(v33, v34);
    v35 = *(_DWORD **)(a3 + 108);
    v60 = -1;
    sub_6F936240(v35, v43, v51);
    v56 = *(_DWORD *)v50;
  }
  v5 = *(_DWORD *)(a5 + 4);
  v58 = *(_DWORD *)a5;
  if ( *(_BYTE *)v58 == *(_BYTE *)(v56 + 56) )
  {
    v68 = *(_DWORD *)(v56 + 52);
    if ( !v5 )
      goto LABEL_11;
    v19 = *(_DWORD *)(v56 + 36);
    ++v58;
    v20 = *(_DWORD *)(v56 + 40);
    v50 = v19;
    v51 = v20;
  }
  else
  {
    v68 = *(_DWORD *)(v56 + 48);
    v6 = *(_DWORD *)(v56 + 32);
    v50 = *(_DWORD *)(v56 + 28);
    v51 = v6;
  }
  v7 = (_BYTE *)v58;
  v8 = v58 + v5;
  if ( v8 > v58 )
  {
    v9 = *(_DWORD *)(v52 + 24);
    if ( *(_BYTE *)(v9 + 2 * *(_BYTE *)v58) & 8 )
    {
      do
      {
        if ( (_BYTE *)v8 == ++v7 )
        {
          v10 = v8 - v58;
          v52 = v10;
          if ( !v10 )
            goto LABEL_11;
          goto LABEL_13;
        }
      }
      while ( *(_BYTE *)(v9 + 2 * *v7) & 8 );
      v10 = (int)&v7[-v58];
      v52 = (unsigned int)&v7[-v58];
      if ( v7 == (_BYTE *)v58 )
        goto LABEL_11;
LABEL_13:
      v70 = 0;
      v69 = (int *)&v71;
      LOBYTE(v71) = 0;
      v60 = 1;
      sub_6F93BF60((int)&v69, 2 * v10);
      v12 = *(_DWORD *)(v56 + 44);
      v48 = v52 - v12;
      if ( (signed int)(v52 - v12) > 0 )
      {
        v13 = v12 < 0;
        v14 = v52 - v12;
        v15 = *(_DWORD *)(v56 + 12);
        if ( v13 )
          v14 = v52;
        v48 = v14;
        if ( v15 )
        {
          v48 = v14;
          v60 = 1;
          sub_6F93A950((int)&v69, 0, v70, 2 * v14, 0);
          v40 = v58;
          v41 = v58 + v48;
          v16 = sub_6F959760(
                  v69,
                  *(_BYTE *)(v56 + 18),
                  *(char **)(v56 + 8),
                  *(_DWORD *)(v56 + 12),
                  (_BYTE *)v58,
                  (_BYTE *)(v58 + v48));
          if ( v16 - (_BYTE *)v69 > (unsigned int)v70 )
          {
            v39 = v70;
            v38 = v16 - (_BYTE *)v69;
            sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase");
          }
          v70 = v16 - (_BYTE *)v69;
          *v16 = 0;
          v12 = *(_DWORD *)(v56 + 44);
        }
        else
        {
          v60 = 1;
          sub_6F93A0E0((int)&v69, 0, v70, (const void *)v58, v48);
          v12 = *(_DWORD *)(v56 + 44);
        }
      }
      v47 = v70;
      if ( v12 > 0 )
      {
        v27 = v69;
        v45 = v70 + 1;
        LOBYTE(v46) = *(_BYTE *)(v56 + 17);
        v28 = 15;
        if ( (unsigned int *)v69 != &v71 )
          v28 = v71;
        if ( v70 + 1 > v28 )
        {
          v60 = 1;
          sub_6F93C2B0((int)&v69, v47, 0, 0, 1u);
          v27 = v69;
        }
        *((_BYTE *)v27 + v47) = v46;
        v70 = v45;
        *((_BYTE *)v69 + v45) = 0;
        if ( v48 < 0 )
        {
          v39 = *(_BYTE *)(v56 + 57);
          v60 = 1;
          sub_6F93A950((int)&v69, v70, 0, -v48, v39);
          if ( v52 > 0x7FFFFFFF - v70 )
            sub_6F95B240("basic_string::append");
          v60 = 1;
          sub_6F93C0E0((int)&v69, (const void *)v58, v52);
        }
        else
        {
          v29 = *(_DWORD *)(v56 + 44);
          if ( v29 > 0x7FFFFFFF - v70 )
          {
            v60 = 1;
            sub_6F95B240("basic_string::append");
          }
          v60 = 1;
          sub_6F93C0E0((int)&v69, (const void *)(v48 + v58), v29);
        }
        v47 = v70;
      }
      v17 = *(_DWORD *)(a3 + 12);
      v58 = v51 + v47;
      v48 = v17 & 0xB0;
      if ( BYTE1(v17) & 2 )
        v58 = *(_DWORD *)(v56 + 24) + v51 + v47;
      LOBYTE(v74) = 0;
      v72 = (int *)&v74;
      v73 = 0;
      v60 = 2;
      sub_6F93BF60((int)&v72, 2 * v58);
      v52 = *(_DWORD *)(a3 + 8);
      v18 = v52 > v58 && v48 == 16;
      v45 = v52 - v58;
      v58 = (unsigned int)&v68;
      LOBYTE(v47) = v18;
      v46 = v54;
      do
      {
        if ( *(_BYTE *)v58 <= 4u )
        {
          switch ( *(_BYTE *)v58 )
          {
            case 0:
              if ( (_BYTE)v47 )
              {
                v60 = 2;
                sub_6F93A950((int)&v72, v73, 0, v45, v46);
              }
              break;
            case 1:
              v44 = v73;
              if ( (_BYTE)v47 )
              {
                v60 = 2;
                sub_6F93A950((int)&v72, v73, 0, v45, v46);
              }
              else
              {
                v30 = v72;
                v31 = 15;
                if ( (unsigned int *)v72 != &v74 )
                  v31 = v74;
                v42 = v44 + 1;
                if ( v44 + 1 > v31 )
                {
                  v60 = 2;
                  sub_6F93C2B0((int)&v72, v44, 0, 0, 1u);
                  v30 = v72;
                }
                v32 = v44;
                *((_BYTE *)v30 + v44) = v54;
                v73 = v42;
                *((_BYTE *)v72 + v32 + 1) = 0;
              }
              break;
            case 2:
              if ( *(_BYTE *)(a3 + 13) & 2 )
              {
                v21 = *(_DWORD *)(v56 + 24);
                if ( v21 > 0x7FFFFFFF - v73 )
                {
                  v60 = 2;
                  sub_6F95B240("basic_string::append");
                }
                v36 = *(int **)(v56 + 20);
                v60 = 2;
                sub_6F93C0E0((int)&v72, v36, v21);
              }
              break;
            case 3:
              if ( v51 )
              {
                v36 = (int *)*(_BYTE *)v50;
                v60 = 2;
                sub_6F93C440((int)&v72, (char)v36);
              }
              break;
            case 4:
              v60 = 2;
              sub_6F93C0E0((int)&v72, v69, v70);
              break;
          }
        }
        ++v58;
      }
      while ( &v69 != (int **)v58 );
      v22 = v73;
      if ( v51 > 1 )
      {
        if ( v51 - 1 > 0x7FFFFFFF - v73 )
        {
          v60 = 2;
          sub_6F95B240("basic_string::append");
        }
        v60 = 2;
        sub_6F93C0E0((int)&v72, (const void *)(v50 + 1), v51 - 1);
        v22 = v73;
        if ( v52 <= v73 )
          goto LABEL_41;
      }
      else if ( v52 <= v73 )
      {
LABEL_41:
        v52 = v22;
LABEL_42:
        v23 = v72;
        if ( !v55 )
        {
          v24 = *v53;
          v37 = v52;
          v36 = v72;
          v25 = *(int (__cdecl **)(int *, unsigned int, size_t, int, unsigned int, unsigned int))(v24 + 48);
          v60 = 2;
          v26 = v25(v72, v52, v38, v39, v40, v41);
          v23 = v72;
          v55 = v52 != v26;
        }
        v67 = v55;
        LOBYTE(v57) = v55;
        v66 = v53;
        if ( (unsigned int *)v23 != &v74 )
          j_free_1(v23);
        if ( (unsigned int *)v69 != &v71 )
          j_free_1(v69);
        goto LABEL_11;
      }
      v39 = (char)v49;
      v38 = v52 - v22;
      v37 = 0;
      if ( v48 == 32 )
      {
        v60 = 2;
        sub_6F93A950((int)&v72, v22, v37, v38, v39);
      }
      else
      {
        v60 = 2;
        sub_6F93A950((int)&v72, 0, v37, v38, v39);
      }
      goto LABEL_42;
    }
  }
LABEL_11:
  *(_DWORD *)(a3 + 8) = 0;
  LOBYTE(v57) = v55;
  sub_6F8A1AD0((int *)&v59);
  return v53;
}
