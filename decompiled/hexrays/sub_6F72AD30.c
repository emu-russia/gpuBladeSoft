signed int sub_6F72AD30()
{
  int v0; // eax@1
  const void *v1; // ebp@3
  int v2; // eax@3
  void *v3; // ebp@13
  int v4; // eax@14
  unsigned __int8 v5; // cf@15
  bool v6; // zf@15
  const char *v7; // eax@15
  const char *v8; // edi@15
  signed int v9; // ecx@15
  const char *v10; // esi@15
  char v11; // bl@18
  bool v12; // cf@18
  bool v13; // zf@18
  const char *v14; // edi@19
  signed int v15; // ecx@19
  const char *v16; // esi@19
  unsigned int v17; // edi@23
  int *v18; // eax@23
  unsigned int v19; // ebx@25
  unsigned int v20; // edi@26
  int *v21; // eax@30
  unsigned int v22; // edi@33
  int *v23; // eax@33
  unsigned int v24; // ebx@35
  unsigned int v25; // edi@36
  int *v26; // eax@40
  int v27; // esi@42
  int v28; // edi@43
  int *v29; // ebx@52
  int v30; // ST00_4@55
  signed int v31; // ebp@55
  int v33; // esi@71
  int v34; // ebx@71
  int v35; // ecx@71
  int v36; // esi@72
  int v37; // ebx@72
  int v38; // ecx@72
  HMODULE v39; // eax@73
  HMODULE v40; // ebx@73
  int (*v41)(void); // edi@74
  int v42; // ecx@74
  int v43; // edx@77
  int v44; // ebx@77
  int v45; // ecx@77
  int v46; // esi@78
  int v47; // edi@78
  int v48; // ebx@78
  void *v49; // esi@80
  const char *v50; // eax@80
  const char *v51; // ebx@82
  _DWORD *v52; // eax@84
  int *v53; // [sp+8h] [bp-D4h]@1
  int (*v54)(void); // [sp+14h] [bp-C8h]@74
  FARPROC v55; // [sp+18h] [bp-C4h]@74
  FARPROC v56; // [sp+1Ch] [bp-C0h]@74
  const CHAR *v57; // [sp+24h] [bp-B8h]@5
  int v58; // [sp+28h] [bp-B4h]@23
  char v59; // [sp+2Ch] [bp-B0h]@56
  int *v60; // [sp+3Ch] [bp-A0h]@41
  int v61; // [sp+40h] [bp-9Ch]@43
  int v62; // [sp+44h] [bp-98h]@41
  int v63; // [sp+48h] [bp-94h]@71
  int v64; // [sp+4Ch] [bp-90h]@71
  int v65; // [sp+50h] [bp-8Ch]@71
  int *v66; // [sp+54h] [bp-88h]@1
  size_t v67; // [sp+58h] [bp-84h]@35
  unsigned int v68; // [sp+5Ch] [bp-80h]@11
  int *v69; // [sp+6Ch] [bp-70h]@3
  size_t v70; // [sp+70h] [bp-6Ch]@5
  unsigned int v71; // [sp+74h] [bp-68h]@3
  int v72; // [sp+78h] [bp-64h]@72
  int v73; // [sp+7Ch] [bp-60h]@72
  int v74; // [sp+80h] [bp-5Ch]@72
  int *v75; // [sp+84h] [bp-58h]@1
  size_t v76; // [sp+88h] [bp-54h]@3
  unsigned int v77; // [sp+8Ch] [bp-50h]@1
  int v78; // [sp+90h] [bp-4Ch]@77
  int v79; // [sp+94h] [bp-48h]@77
  int v80; // [sp+98h] [bp-44h]@77
  int *v81; // [sp+9Ch] [bp-40h]@1
  size_t v82; // [sp+A0h] [bp-3Ch]@25
  unsigned int v83; // [sp+A4h] [bp-38h]@9

  nullsub_10();
  sub_6F695280(&v66, "/plugins");
  sub_6F695280(&v81, "/");
  v0 = sub_6F93A0E0((int)&v81, 0, 0, dword_6FCFFE9C, dword_6FCFFEA0);
  v75 = (int *)&v77;
  if ( *(_DWORD *)v0 == v0 + 8 )
  {
    v43 = *(_DWORD *)(v0 + 12);
    v44 = *(_DWORD *)(v0 + 16);
    v45 = *(_DWORD *)(v0 + 20);
    v77 = *(_DWORD *)(v0 + 8);
    v78 = v43;
    v79 = v44;
    v80 = v45;
  }
  else
  {
    v75 = *(int **)v0;
    v77 = *(_DWORD *)(v0 + 8);
  }
  v76 = *(_DWORD *)(v0 + 4);
  *(_DWORD *)v0 = v0 + 8;
  v1 = dword_6FCFFF2C;
  *(_DWORD *)(v0 + 4) = 0;
  *(_BYTE *)(v0 + 8) = 0;
  v2 = sub_6F93C0E0((int)&v75, v1, dword_6FCFFF30);
  v69 = (int *)&v71;
  if ( *(_DWORD *)v2 == v2 + 8 )
  {
    v46 = *(_DWORD *)(v2 + 12);
    v47 = *(_DWORD *)(v2 + 16);
    v48 = *(_DWORD *)(v2 + 20);
    v71 = *(_DWORD *)(v2 + 8);
    v72 = v46;
    v73 = v47;
    v74 = v48;
  }
  else
  {
    v69 = *(int **)v2;
    v71 = *(_DWORD *)(v2 + 8);
  }
  v70 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)v2 = v2 + 8;
  *(_DWORD *)(v2 + 4) = 0;
  *(_BYTE *)(v2 + 8) = 0;
  sub_6F7544E0((int)&v57, (int)&v69, (int)&v66);
  if ( (unsigned int *)v69 != &v71 )
    j_free_1(v69);
  if ( (unsigned int *)v75 != &v77 )
    j_free_1(v75);
  if ( (unsigned int *)v81 != &v83 )
    j_free_1(v81);
  if ( (unsigned int *)v66 != &v68 )
    j_free_1(v66);
  v3 = sub_6F8A21E0(v57);
  if ( v3 )
  {
LABEL_14:
    v4 = sub_6F8A23C0((int)v3);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = __CFADD__(v4, 8);
        v6 = v4 == -8;
        v7 = (const char *)(v4 + 8);
        v8 = ".";
        v9 = 2;
        v10 = v7;
        do
        {
          if ( !v9 )
            break;
          v5 = (const unsigned __int8)*v10 < *v8;
          v6 = *v10++ == *v8++;
          --v9;
        }
        while ( v6 );
        v11 = !(v5 | v6) - v5;
        v12 = 0;
        v13 = v11 == 0;
        if ( !v11 )
          goto LABEL_14;
        v14 = "..";
        v15 = 3;
        v16 = v7;
        do
        {
          if ( !v15 )
            break;
          v12 = (const unsigned __int8)*v16 < *v14;
          v13 = *v16++ == *v14++;
          --v15;
        }
        while ( v13 );
        if ( (!v12 && !v13) == v12 )
          goto LABEL_14;
        sub_6F695280(&v66, v7);
        sub_6F695280(&v75, "/");
        LOBYTE(v53) = 0;
        v81 = (int *)&v83;
        v17 = 15;
        sub_6F93A6C0((int)&v81, v57, &v57[v58], (int)v53);
        v18 = v81;
        if ( (unsigned int *)v81 != &v83 )
          v17 = v83;
        v19 = v82 + v76;
        if ( v82 + v76 <= v17 )
          break;
        v20 = 15;
        if ( (unsigned int *)v75 != &v77 )
          v20 = v77;
        if ( v19 > v20 )
        {
          sub_6F93C2B0((int)&v81, v82, 0, v75, v76);
          v18 = v81;
LABEL_30:
          v82 = v19;
          *((_BYTE *)v18 + v19) = 0;
          v21 = (int *)&v81;
          goto LABEL_31;
        }
        v21 = (int *)sub_6F93A0E0((int)&v75, 0, 0, v81, v82);
LABEL_31:
        v69 = (int *)&v71;
        if ( (int *)*v21 == v21 + 2 )
        {
          v36 = v21[3];
          v37 = v21[4];
          v38 = v21[5];
          v71 = v21[2];
          v72 = v36;
          v73 = v37;
          v74 = v38;
        }
        else
        {
          v69 = (int *)*v21;
          v71 = v21[2];
        }
        v70 = v21[1];
        v22 = 15;
        *v21 = (int)(v21 + 2);
        v21[1] = 0;
        *((_BYTE *)v21 + 8) = 0;
        v23 = v69;
        if ( (unsigned int *)v69 != &v71 )
          v22 = v71;
        v24 = v70 + v67;
        if ( v70 + v67 <= v22 )
        {
          if ( v67 )
          {
            if ( v67 == 1 )
            {
              *((_BYTE *)v69 + v70) = *(_BYTE *)v66;
              v23 = v69;
            }
            else
            {
              memcpy((char *)v69 + v70, v66, v67);
              v23 = v69;
            }
          }
          goto LABEL_40;
        }
        v25 = 15;
        if ( (unsigned int *)v66 != &v68 )
          v25 = v68;
        if ( v24 > v25 )
        {
          sub_6F93C2B0((int)&v69, v70, 0, v66, v67);
          v23 = v69;
LABEL_40:
          v70 = v24;
          *((_BYTE *)v23 + v24) = 0;
          v26 = (int *)&v69;
          goto LABEL_41;
        }
        v26 = (int *)sub_6F93A0E0((int)&v66, 0, 0, v69, v70);
LABEL_41:
        v60 = &v62;
        if ( (int *)*v26 == v26 + 2 )
        {
          v33 = v26[3];
          v34 = v26[4];
          v35 = v26[5];
          v62 = v26[2];
          v63 = v33;
          v64 = v34;
          v65 = v35;
        }
        else
        {
          v27 = v26[2];
          v60 = (int *)*v26;
          v62 = v27;
        }
        v28 = v26[1];
        *((_BYTE *)v26 + 8) = 0;
        v61 = v28;
        *v26 = (int)(v26 + 2);
        v26[1] = 0;
        if ( (unsigned int *)v69 != &v71 )
          j_free_1(v69);
        if ( (unsigned int *)v81 != &v83 )
          j_free_1(v81);
        if ( (unsigned int *)v75 != &v77 )
          j_free_1(v75);
        if ( (unsigned int *)v66 != &v68 )
          j_free_1(v66);
        if ( sub_6F8A3890((int)v60, (int)&v81) < 0 )
        {
          if ( v60 != &v62 )
            j_free_1(v60);
          goto LABEL_14;
        }
        v29 = v60;
        if ( (HIWORD(v82) & 0xF000) == -32768 )
        {
          v53 = v60;
          nullsub_10();
          v39 = LoadLibraryA((LPCSTR)v60);
          v40 = v39;
          if ( v39 )
          {
            v41 = (int (*)(void))GetProcAddress(v39, "pluginTypeGet");
            v54 = (int (*)(void))GetProcAddress(v40, "pluginNameGet");
            v55 = GetProcAddress(v40, "pluginFilterFunc");
            v56 = GetProcAddress(v40, "pluginFilterParam");
            if ( !((unsigned int)v55 | (unsigned int)v41 | (unsigned int)v54) )
            {
              GetLastError();
              v53 = v60;
              nullsub_10();
              v29 = v60;
              goto LABEL_53;
            }
            if ( ((int (__fastcall *)(int, unsigned int))v41)(
                   v42,
                   (unsigned int)v55 | (unsigned int)v41 | (unsigned int)v54) == 1 )
            {
              v49 = sub_6F961B60(0x40u);
              *(_DWORD *)v49 = v40;
              *((_DWORD *)v49 + 10) = (char *)v49 + 48;
              *((_DWORD *)v49 + 4) = (char *)v49 + 24;
              *((_DWORD *)v49 + 5) = 0;
              *((_BYTE *)v49 + 24) = 0;
              *((_DWORD *)v49 + 11) = 0;
              *((_BYTE *)v49 + 48) = 0;
              *((_DWORD *)v49 + 1) = v41();
              v50 = (const char *)v54();
              sub_6F695280(&v75, v50);
              sub_6F93CC00((char *)v49 + 16, (int)&v75);
              if ( (unsigned int *)v75 != &v77 )
                j_free_1(v75);
              v51 = (const char *)v60;
              *((_DWORD *)v49 + 2) = v55;
              *((_DWORD *)v49 + 3) = v56;
              sub_6F695280(&v75, v51);
              sub_6F93CC00((char *)v49 + 40, (int)&v75);
              if ( (unsigned int *)v75 != &v77 )
                j_free_1(v75);
              v52 = sub_6F961B60(0xCu);
              v52[2] = v49;
              sub_6F9549A0((int)v52, (int)&dword_6FBBFBE0);
              ++dword_6FBBFBE8;
              v29 = v60;
              goto LABEL_53;
            }
          }
          else
          {
            GetLastError();
            v53 = v60;
            nullsub_10();
          }
          v29 = v60;
        }
LABEL_53:
        if ( v29 == &v62 )
          goto LABEL_14;
        j_free_1(v29);
        v4 = sub_6F8A23C0((int)v3);
        if ( !v4 )
          goto LABEL_55;
      }
      if ( v76 )
      {
        if ( v76 == 1 )
        {
          *((_BYTE *)v81 + v82) = *(_BYTE *)v75;
          v18 = v81;
        }
        else
        {
          memcpy((char *)v81 + v82, v75, v76);
          v18 = v81;
        }
      }
      goto LABEL_30;
    }
LABEL_55:
    v30 = (int)v3;
    v31 = 0;
    sub_6F8A24D0(v30);
  }
  else
  {
    v31 = -1;
    nullsub_10();
  }
  if ( v57 != &v59 )
    j_free_1((void *)v57);
  return v31;
}
