int __stdcall sub_6F8D7D40(int a1, int a2, int a3, int a4, int a5)
{
  __int16 v5; // cx@3
  int v6; // eax@3
  int v7; // edx@5
  int (__cdecl *v8)(signed int, unsigned int, unsigned int); // eax@5
  int v9; // eax@5
  signed int v10; // eax@5
  int v12; // esi@7
  int v13; // edx@7
  unsigned int v14; // esi@9
  int v15; // eax@10
  bool v16; // sf@11
  int v17; // eax@11
  int v18; // ebx@11
  char *v19; // eax@14
  int v20; // eax@17
  bool v21; // dl@19
  int *v22; // eax@23
  unsigned int v23; // edx@23
  int v24; // esi@27
  int v25; // edx@27
  unsigned int v26; // edx@29
  const void *v27; // ST08_4@30
  int v28; // ecx@38
  int *v29; // edx@41
  int (__cdecl *v30)(int *, unsigned int); // eax@42
  int v31; // eax@42
  int *v32; // eax@53
  unsigned int v33; // edx@53
  unsigned int v34; // esi@57
  int v35; // ebx@57
  unsigned int v36; // edx@58
  int *v37; // eax@61
  unsigned int v38; // edx@61
  int v39; // esi@65
  void *v40; // eax@2
  int v41; // esi@2
  _DWORD *v42; // ecx@2
  unsigned int v43; // [sp+10h] [bp-ECh]@47
  unsigned int v44; // [sp+14h] [bp-E8h]@1
  unsigned int v45; // [sp+18h] [bp-E4h]@5
  unsigned int v46; // [sp+1Ch] [bp-E0h]@5
  int v47; // [sp+34h] [bp-C8h]@23
  unsigned int v48; // [sp+38h] [bp-C4h]@23
  int v49; // [sp+3Ch] [bp-C0h]@2
  int v50; // [sp+40h] [bp-BCh]@23
  unsigned int v51; // [sp+44h] [bp-B8h]@19
  unsigned int v52; // [sp+48h] [bp-B4h]@19
  int v53; // [sp+4Ch] [bp-B0h]@10
  int v54; // [sp+50h] [bp-ACh]@1
  int v55; // [sp+54h] [bp-A8h]@4
  int *v56; // [sp+58h] [bp-A4h]@1
  unsigned int v57; // [sp+5Ch] [bp-A0h]@1
  unsigned int v58; // [sp+60h] [bp-9Ch]@1
  int v59; // [sp+64h] [bp-98h]@1
  unsigned __int16 v60; // [sp+68h] [bp-94h]@1
  unsigned __int8 v61; // [sp+6Bh] [bp-91h]@1
  int v62; // [sp+6Ch] [bp-90h]@1
  int v63; // [sp+70h] [bp-8Ch]@1
  unsigned int v64; // [sp+74h] [bp-88h]@1
  char v65; // [sp+78h] [bp-84h]@1
  int v66; // [sp+7Ch] [bp-80h]@1
  int (__cdecl *v67)(int, int, __int64, void (**)(void), int *); // [sp+90h] [bp-6Ch]@1
  int *v68; // [sp+94h] [bp-68h]@1
  char *v69; // [sp+98h] [bp-64h]@1
  int (*v70)(); // [sp+9Ch] [bp-60h]@1
  int *v71; // [sp+A0h] [bp-5Ch]@1
  int v72; // [sp+ACh] [bp-50h]@43
  int v73; // [sp+B0h] [bp-4Ch]@43
  int v74; // [sp+C0h] [bp-3Ch]@4
  int *v75; // [sp+C4h] [bp-38h]@10
  unsigned int v76; // [sp+C8h] [bp-34h]@10
  unsigned int v77; // [sp+CCh] [bp-30h]@10
  int *v78; // [sp+DCh] [bp-20h]@19
  unsigned int v79; // [sp+E0h] [bp-1Ch]@19
  unsigned int v80; // [sp+E4h] [bp-18h]@19
  char v81; // [sp+F4h] [bp-8h]@1

  v67 = sub_6F962A50;
  v68 = dword_6F96C0E4;
  v59 = a1;
  v54 = a4;
  v60 = a4;
  v69 = &v81;
  v63 = a2;
  v70 = sub_6F8D879C;
  v71 = (int *)&v44;
  sub_6F8A1A60((int *)&v65);
  v61 = v63;
  v64 = a3 + 108;
  v66 = -1;
  v58 = sub_6F95DC70(a3 + 108);
  v57 = sub_6F8C3BF0(&unk_6FB49F6C);
  v56 = (int *)(*(_DWORD *)(*(_DWORD *)(a3 + 108) + 12) + 4 * v57);
  v62 = *v56;
  if ( !v62 )
  {
    v66 = 5;
    v40 = sub_6F961B60(0x54u);
    v41 = v64;
    *((_DWORD *)v40 + 1) = 0;
    *(_DWORD *)v40 = off_6FBB0954;
    *((_DWORD *)v40 + 2) = 0;
    *((_DWORD *)v40 + 3) = 0;
    *((_BYTE *)v40 + 16) = 0;
    *(_DWORD *)((char *)v40 + 18) = 0;
    *((_DWORD *)v40 + 6) = 0;
    *((_DWORD *)v40 + 7) = 0;
    *((_DWORD *)v40 + 8) = 0;
    *((_DWORD *)v40 + 9) = 0;
    *((_DWORD *)v40 + 10) = 0;
    *((_DWORD *)v40 + 11) = 0;
    *((_DWORD *)v40 + 12) = 0;
    *((_DWORD *)v40 + 13) = 0;
    *((_DWORD *)v40 + 14) = 0;
    *((_BYTE *)v40 + 82) = 0;
    v66 = 4;
    v49 = (int)v40;
    sub_6F933F80(v40, v41);
    v42 = *(_DWORD **)(a3 + 108);
    v66 = -1;
    sub_6F936240(v42, v49, v57);
    v62 = *v56;
  }
  v5 = *(_WORD *)(v62 + 60);
  v6 = *(_DWORD *)(a5 + 4);
  v64 = *(_DWORD *)a5;
  if ( *(_WORD *)v64 == v5 )
  {
    v12 = *(_DWORD *)(v62 + 40);
    v74 = *(_DWORD *)(v62 + 56);
    v13 = v64 + 2;
    v55 = v12;
    if ( !v6 )
      v13 = v64;
    v14 = *(_DWORD *)(v62 + 44);
    v64 = v13;
    v57 = v14;
  }
  else
  {
    v74 = *(_DWORD *)(v62 + 52);
    v55 = *(_DWORD *)(v62 + 32);
    v57 = *(_DWORD *)(v62 + 36);
  }
  v7 = *(_DWORD *)v58;
  v46 = v64 + 2 * v6;
  v45 = v64;
  v44 = 8;
  v8 = *(int (__cdecl **)(signed int, unsigned int, unsigned int))(v7 + 20);
  v66 = -1;
  v9 = v8(8, v64, v46);
  v10 = v9 - v64;
  v56 = (int *)(v10 >> 1);
  if ( v10 >> 1 )
  {
    v76 = 0;
    v75 = (int *)&v77;
    LOWORD(v77) = 0;
    v66 = 1;
    sub_6F93EE90((int)&v75, v10);
    v15 = *(_DWORD *)(v62 + 48);
    v58 = v76;
    v53 = (int)v56 - v15;
    if ( (signed int)v56 - v15 > 0 )
    {
      v16 = v15 < 0;
      v17 = (int)v56 - v15;
      v18 = *(_DWORD *)(v62 + 12);
      if ( v16 )
        v17 = (int)v56;
      v53 = v17;
      if ( v18 )
      {
        v58 = 2 * v17;
        v66 = 1;
        sub_6F93D780((int)&v75, 0, v76, 2 * v17, 0);
        v45 = v64;
        v46 = v64 + v58;
        v19 = (char *)sub_6F9598C0(
                        v75,
                        *(_WORD *)(v62 + 20),
                        *(char **)(v62 + 8),
                        *(_DWORD *)(v62 + 12),
                        (char *)v64,
                        (char *)(v64 + v58));
        v58 = (v19 - (char *)v75) >> 1;
        if ( v58 > v76 )
        {
          v44 = v76;
          sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase");
        }
        v76 = v58;
        *(_WORD *)v19 = 0;
        v15 = *(_DWORD *)(v62 + 48);
      }
      else
      {
        v66 = 1;
        sub_6F93CF20((int)&v75, 0, v58, (const void *)v64, v53);
        v15 = *(_DWORD *)(v62 + 48);
        v58 = v76;
      }
    }
    if ( v15 > 0 )
    {
      LOWORD(v51) = *(_WORD *)(v62 + 18);
      v32 = v75;
      v52 = v58 + 1;
      v33 = 7;
      if ( (unsigned int *)v75 != &v77 )
        v33 = v77;
      if ( v58 + 1 > v33 )
      {
        v66 = 1;
        sub_6F93F200((int)&v75, v58, 0, 0, 1);
        v32 = v75;
      }
      v34 = v58;
      v35 = v52;
      *((_WORD *)v32 + v58) = v51;
      v76 = v35;
      *((_WORD *)v32 + v34 + 1) = 0;
      if ( v53 < 0 )
      {
        v44 = *(_WORD *)(v62 + 62);
        v66 = 1;
        sub_6F93D780((int)&v75, v52, 0, -v53, v44);
        if ( (unsigned int)v56 > 0x3FFFFFFF - v76 )
          sub_6F95B240("basic_string::append");
        v66 = 1;
        sub_6F93F020((int)&v75, (const void *)v64, (int)v56);
      }
      else
      {
        v36 = *(_DWORD *)(v62 + 48);
        if ( v36 > 0x3FFFFFFF - v35 )
        {
          v66 = 1;
          sub_6F95B240("basic_string::append");
        }
        v66 = 1;
        sub_6F93F020((int)&v75, (const void *)(v64 + 2 * v53), v36);
      }
      v58 = v76;
    }
    v20 = *(_DWORD *)(a3 + 12);
    v56 = (int *)(*(_DWORD *)(a3 + 12) & 0xB0);
    v64 = v57 + v58;
    if ( BYTE1(v20) & 2 )
      v64 = *(_DWORD *)(v62 + 28) + v57 + v58;
    v78 = (int *)&v80;
    v79 = 0;
    LOWORD(v80) = 0;
    v66 = 2;
    sub_6F93EE90((int)&v78, 2 * v64);
    v58 = *(_DWORD *)(a3 + 8);
    v21 = v58 > v64 && v56 == (int *)16;
    v51 = v58 - v64;
    v64 = (unsigned int)&v74;
    LOBYTE(v53) = v21;
    v52 = v60;
    do
    {
      if ( *(_BYTE *)v64 <= 4u )
      {
        switch ( *(_BYTE *)v64 )
        {
          case 0:
            if ( (_BYTE)v53 )
            {
              v66 = 2;
              sub_6F93D780((int)&v78, v79, 0, v51, v52);
            }
            break;
          case 1:
            v50 = v79;
            if ( (_BYTE)v53 )
            {
              v66 = 2;
              sub_6F93D780((int)&v78, v79, 0, v51, v52);
            }
            else
            {
              v37 = v78;
              v48 = v50 + 1;
              v38 = 7;
              if ( (unsigned int *)v78 != &v80 )
                v38 = v80;
              if ( v50 + 1 > v38 )
              {
                v66 = 2;
                sub_6F93F200((int)&v78, v50, 0, 0, 1);
                v37 = v78;
              }
              v39 = v50;
              *((_WORD *)v37 + v50) = v60;
              v79 = v48;
              *((_WORD *)v37 + v39 + 1) = 0;
            }
            break;
          case 2:
            if ( *(_BYTE *)(a3 + 13) & 2 )
            {
              v26 = *(_DWORD *)(v62 + 28);
              if ( v26 > 0x3FFFFFFF - v79 )
              {
                v66 = 2;
                sub_6F95B240("basic_string::append");
              }
              v27 = *(const void **)(v62 + 24);
              v66 = 2;
              sub_6F93F020((int)&v78, v27, v26);
            }
            break;
          case 3:
            if ( v57 )
            {
              LOWORD(v48) = *(_WORD *)v55;
              v50 = v79;
              v22 = v78;
              v47 = v79 + 1;
              v23 = 7;
              if ( (unsigned int *)v78 != &v80 )
                v23 = v80;
              if ( v79 + 1 > v23 )
              {
                v66 = 2;
                sub_6F93F200((int)&v78, v50, 0, 0, 1);
                v22 = v78;
              }
              v24 = v50;
              v25 = v47;
              *((_WORD *)v22 + v50) = v48;
              v79 = v25;
              *((_WORD *)v22 + v24 + 1) = 0;
            }
            break;
          case 4:
            v66 = 2;
            sub_6F93F020((int)&v78, v75, v76);
            break;
        }
      }
      ++v64;
    }
    while ( &v75 != (int **)v64 );
    v28 = v79;
    if ( v57 > 1 )
    {
      if ( v57 - 1 > 0x3FFFFFFF - v79 )
      {
        v66 = 2;
        sub_6F95B240("basic_string::append");
      }
      v66 = 2;
      sub_6F93F020((int)&v78, (const void *)(v55 + 2), v57 - 1);
      v28 = v79;
      if ( v58 <= v79 )
        goto LABEL_40;
    }
    else if ( v58 <= v79 )
    {
LABEL_40:
      v58 = v28;
LABEL_41:
      v29 = v78;
      if ( !v61 )
      {
        v30 = *(int (__cdecl **)(int *, unsigned int))(*(_DWORD *)v59 + 48);
        v66 = 2;
        v31 = v30(v78, v58);
        v29 = v78;
        v61 = v31 != v58;
      }
      v73 = v61;
      LOBYTE(v63) = v61;
      v72 = v59;
      if ( (unsigned int *)v29 != &v80 )
        j_free_1(v29);
      if ( (unsigned int *)v75 != &v77 )
        j_free_1(v75);
      goto LABEL_6;
    }
    v44 = (unsigned __int16)v54;
    v43 = v58 - v28;
    if ( v56 == (int *)32 )
    {
      v66 = 2;
      sub_6F93D780((int)&v78, v28, 0, v43, v44);
    }
    else
    {
      v66 = 2;
      sub_6F93D780((int)&v78, 0, 0, v43, v44);
    }
    goto LABEL_41;
  }
LABEL_6:
  *(_DWORD *)(a3 + 8) = 0;
  LOBYTE(v63) = v61;
  sub_6F8A1AD0((int *)&v65);
  return v59;
}
