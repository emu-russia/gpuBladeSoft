void __usercall sub_6F6964B0(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ebx@3
  unsigned int v5; // esi@4
  int *v6; // edi@4
  unsigned int v7; // ebp@6
  size_t v8; // ecx@6
  int v9; // eax@9
  unsigned int v10; // ebx@13
  size_t v11; // eax@13
  int v12; // eax@16
  void *v13; // eax@23
  unsigned __int8 v14; // dl@24
  int v15; // ebp@27
  int v16; // edi@28
  int v17; // ebx@29
  int v18; // esi@29
  int v19; // ebp@29
  int v20; // ebp@33
  int v21; // ebp@34
  int v22; // eax@35
  char v23; // cl@35
  int v24; // eax@35
  char v25; // cl@35
  int v26; // eax@35
  char v27; // cl@35
  int v28; // eax@35
  _BYTE *v29; // ebp@35
  int v30; // eax@37
  FILE *v31; // eax@47
  char *v32; // eax@48
  int v33; // [sp+8h] [bp-F4h]@0
  int (__cdecl *v34)(int, int); // [sp+18h] [bp-E4h]@0
  const void *v35; // [sp+1Ch] [bp-E0h]@4
  int v36; // [sp+1Ch] [bp-E0h]@28
  int v37; // [sp+20h] [bp-DCh]@1
  int v38; // [sp+24h] [bp-D8h]@1
  _BYTE *v39; // [sp+24h] [bp-D8h]@28
  int v40; // [sp+28h] [bp-D4h]@1
  int v41; // [sp+28h] [bp-D4h]@28
  int v42; // [sp+2Ch] [bp-D0h]@23
  void *v43; // [sp+3Ch] [bp-C0h]@23
  int v44; // [sp+40h] [bp-BCh]@23
  int v45; // [sp+44h] [bp-B8h]@23
  int v46; // [sp+48h] [bp-B4h]@23
  int v47; // [sp+4Ch] [bp-B0h]@23
  char *v48; // [sp+50h] [bp-ACh]@37
  char v49; // [sp+58h] [bp-A4h]@45
  char *v50; // [sp+68h] [bp-94h]@37
  char v51; // [sp+70h] [bp-8Ch]@37
  char *v52; // [sp+80h] [bp-7Ch]@37
  char v53; // [sp+88h] [bp-74h]@39
  char *v54; // [sp+98h] [bp-64h]@37
  char v55; // [sp+A0h] [bp-5Ch]@43
  char *v56; // [sp+B0h] [bp-4Ch]@37
  char v57; // [sp+B8h] [bp-44h]@41
  const char *v58; // [sp+C8h] [bp-34h]@37
  int v59; // [sp+CCh] [bp-30h]@51
  char v60; // [sp+D0h] [bp-2Ch]@48

  v38 = a3;
  v37 = a1;
  v40 = a2;
  if ( (_DWORD)qword_6FBB554C )
  {
    v4 = dword_6FBBD7E4;
    if ( !dword_6FBBD7E4 )
      goto LABEL_58;
    v35 = (const void *)dword_6FBBD7C4;
    v5 = dword_6FBBD7C8;
    v6 = &dword_6FBBD7E0;
    do
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v4 + 20);
        v8 = v5;
        if ( v7 <= v5 )
          v8 = *(_DWORD *)(v4 + 20);
        if ( !v8 || (v9 = memcmp(*(const void **)(v4 + 16), v35, v8)) == 0 )
          v9 = v7 - v5;
        if ( v9 < 0 )
          break;
        v6 = (int *)v4;
        v4 = *(_DWORD *)(v4 + 8);
        if ( !v4 )
          goto LABEL_12;
      }
      v4 = *(_DWORD *)(v4 + 12);
    }
    while ( v4 );
LABEL_12:
    if ( v6 == &dword_6FBBD7E0 )
      goto LABEL_58;
    v10 = v6[5];
    v11 = v6[5];
    if ( v5 <= v10 )
      v11 = v5;
    if ( !v11 || (v12 = memcmp(v35, (const void *)v6[4], v11)) == 0 )
      v12 = v5 - v10;
    if ( v12 < 0 )
    {
LABEL_58:
      if ( BYTE2(dword_6FBBDBA8) != -1 )
      {
        v37 = 0;
        v38 = BYTE2(dword_6FBBDBA8) + 1;
      }
      if ( BYTE3(dword_6FBBDBA8) != -1 )
      {
        v40 = 0;
        a4 = BYTE3(dword_6FBBDBA8) + 1;
      }
      v47 = 0;
      v46 = 4;
      v44 = v38;
      v42 = 4 * v38;
      v45 = a4;
      v13 = malloc(a4 * 4 * v38);
      v43 = v13;
      if ( !v13 )
        sub_6F756950();
      v47 = 1;
      v14 = ((unsigned __int16)word_6FBB979C >> 7) & 3;
      if ( v14 != 3 )
        v34 = off_6FB4DD1C[v14];
      if ( a4 > 0 )
      {
        v15 = v38;
        if ( v38 > 0 )
        {
          v16 = v40;
          v39 = (char *)v13 + 3;
          v36 = v15 + v37;
          v41 = v40 + a4;
          do
          {
            v17 = (int)v39;
            v18 = v37;
            v19 = ((_BYTE)v36 - (_BYTE)v37) & 3;
            if ( !(((_BYTE)v36 - (_BYTE)v37) & 3) )
              goto LABEL_59;
            if ( v19 != 1 )
            {
              if ( v19 != 2 )
              {
                v18 = v37 + 1;
                *(_DWORD *)(v39 - 3) = v34(v37 << dword_6FD4098C, v16 << dword_6FD4098C);
                v17 = (int)(v39 + 4);
                *v39 *= 2;
              }
              v20 = v18++;
              *(_DWORD *)(v17 - 3) = v34(v20 << dword_6FD4098C, v16 << dword_6FD4098C);
              *(_BYTE *)v17 *= 2;
              v17 += 4;
            }
            v21 = v18++;
            *(_DWORD *)(v17 - 3) = v34(v21 << dword_6FD4098C, v16 << dword_6FD4098C);
            *(_BYTE *)v17 *= 2;
            v17 += 4;
            if ( v18 != v36 )
            {
LABEL_59:
              do
              {
                v22 = v34(v18 << dword_6FD4098C, v16 << dword_6FD4098C);
                v23 = dword_6FD4098C;
                *(_DWORD *)(v17 - 3) = v22;
                *(_BYTE *)v17 *= 2;
                v24 = v34((v18 + 1) << v23, v16 << v23);
                v25 = dword_6FD4098C;
                *(_DWORD *)(v17 + 1) = v24;
                *(_BYTE *)(v17 + 4) *= 2;
                v26 = v34((v18 + 2) << v25, v16 << v25);
                v27 = dword_6FD4098C;
                *(_DWORD *)(v17 + 5) = v26;
                v28 = v18 + 3;
                v18 += 4;
                *(_BYTE *)(v17 + 8) *= 2;
                v29 = (_BYTE *)(v17 + 12);
                v17 += 16;
                *(_DWORD *)(v17 - 7) = v34(v28 << v27, v16 << v27);
                *v29 *= 2;
              }
              while ( v18 != v36 );
            }
            ++v16;
            v39 += v42;
          }
          while ( v41 != v16 );
        }
      }
      sub_6F695280(&v48, ".png");
      sub_6F695280(&v54, "/");
      sub_6F695280(&v56, (const char *)&unk_6FBB5554);
      sub_6F7544E0((int)&v52, (int)&v56, (int)&v54);
      v30 = sub_6F93C0E0((int)&v52, (const void *)dword_6FBBD7C4, dword_6FBBD7C8);
      sub_6F93C4C0((int)&v50, v30);
      sub_6F7544E0((int)&v58, (int)&v50, (int)&v48);
      if ( v50 != &v51 )
        j_free_1(v50);
      if ( v52 != &v53 )
        j_free_1(v52);
      if ( v56 != &v57 )
        j_free_1(v56);
      if ( v54 != &v55 )
        j_free_1(v54);
      if ( v48 != &v49 )
        j_free_1(v48);
      v31 = fopen(v58, "rb");
      if ( v31 )
      {
        fclose(v31);
        v32 = (char *)v58;
        if ( v58 == &v60 )
          return;
        goto LABEL_49;
      }
      sub_6F757580((int)&v43);
      LOBYTE(v33) = 0;
      v56 = &v57;
      sub_6F93A6C0((int)&v56, v58, &v58[v59], v33);
      sub_6F757680(&v43, (const char **)&v56);
      if ( v56 != &v57 )
        j_free_1(v56);
      nullsub_10();
      v32 = (char *)v58;
      if ( v58 != &v60 )
      {
LABEL_49:
        j_free_1(v32);
        return;
      }
    }
  }
}
