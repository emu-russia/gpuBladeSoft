int __stdcall sub_6F8FBF60(int a1, int a2, int a3, int a4, int *a5)
{
  __int16 v5; // bx@3
  int v6; // eax@3
  int v7; // edx@5
  int (__thiscall *v8)(char *, signed int); // eax@5
  int v9; // eax@5
  unsigned int v11; // edx@7
  int v12; // edx@7
  int v13; // eax@10
  bool v14; // sf@11
  int v15; // eax@11
  int v16; // ebx@11
  int v17; // ST10_4@14
  char *v18; // eax@16
  int v19; // edx@16
  signed int v20; // eax@18
  unsigned int v21; // edx@18
  unsigned int v22; // eax@18
  int v23; // eax@21
  int v24; // edx@21
  bool v25; // dl@23
  __int16 v26; // ST0C_2@27
  unsigned int v27; // ST10_4@29
  unsigned int v28; // ST0C_4@29
  unsigned __int16 v29; // ax@30
  _DWORD *v30; // ecx@38
  char *v31; // edx@38
  int (__thiscall *v32)(int, _DWORD *, char *); // eax@41
  int v33; // eax@41
  int v34; // ecx@44
  __int16 v35; // ST0C_2@50
  void *v36; // eax@2
  int v37; // edx@2
  _DWORD *v38; // ecx@2
  unsigned __int16 v39; // ST10_2@55
  int *v40; // [sp+14h] [bp-B8h]@1
  unsigned int v41; // [sp+18h] [bp-B4h]@5
  unsigned int v42; // [sp+1Ch] [bp-B0h]@5
  int v43; // [sp+38h] [bp-94h]@14
  char *v44; // [sp+3Ch] [bp-90h]@14
  int v45; // [sp+40h] [bp-8Ch]@2
  char *v46; // [sp+44h] [bp-88h]@14
  char *v47; // [sp+48h] [bp-84h]@14
  int v48; // [sp+4Ch] [bp-80h]@1
  __int16 *v49; // [sp+50h] [bp-7Ch]@4
  unsigned int v50; // [sp+54h] [bp-78h]@1
  int v51; // [sp+58h] [bp-74h]@1
  unsigned int v52; // [sp+5Ch] [bp-70h]@1
  char *v53; // [sp+60h] [bp-6Ch]@1
  int v54; // [sp+64h] [bp-68h]@1
  unsigned __int8 v55; // [sp+6Bh] [bp-61h]@1
  int v56; // [sp+6Ch] [bp-60h]@1
  int v57; // [sp+70h] [bp-5Ch]@1
  unsigned int v58; // [sp+74h] [bp-58h]@1
  char v59; // [sp+78h] [bp-54h]@1
  int v60; // [sp+7Ch] [bp-50h]@1
  int (__cdecl *v61)(int, int, __int64, void (**)(void), int *); // [sp+90h] [bp-3Ch]@1
  int *v62; // [sp+94h] [bp-38h]@1
  char *v63; // [sp+98h] [bp-34h]@1
  int (*v64)(); // [sp+9Ch] [bp-30h]@1
  int *v65; // [sp+A0h] [bp-2Ch]@1
  int v66; // [sp+ACh] [bp-20h]@42
  int v67; // [sp+B0h] [bp-1Ch]@42
  char v68; // [sp+B6h] [bp-16h]@23
  char v69; // [sp+B7h] [bp-15h]@43
  _WORD *v70; // [sp+B8h] [bp-14h]@10
  _DWORD *v71; // [sp+BCh] [bp-10h]@10
  int v72; // [sp+C0h] [bp-Ch]@4
  char v73; // [sp+C4h] [bp-8h]@1

  v63 = &v73;
  v61 = sub_6F962A50;
  v54 = a1;
  v48 = a4;
  LOWORD(v50) = a4;
  v57 = a2;
  v62 = dword_6F96B114;
  v64 = sub_6F8FC72A;
  v65 = (int *)&v40;
  sub_6F8A1A60((int *)&v59);
  v55 = v57;
  v58 = a3 + 108;
  v60 = -1;
  v53 = (char *)sub_6F95DC70(a3 + 108);
  v52 = sub_6F8C3BF0(&unk_6FB49DF4);
  v51 = *(_DWORD *)(*(_DWORD *)(a3 + 108) + 12) + 4 * v52;
  v56 = *(_DWORD *)v51;
  if ( !v56 )
  {
    v60 = 5;
    v36 = sub_6F961B60(0x54u);
    v37 = v58;
    *((_DWORD *)v36 + 1) = 0;
    *(_DWORD *)v36 = off_6FBB0944;
    *((_DWORD *)v36 + 2) = 0;
    *((_DWORD *)v36 + 3) = 0;
    *((_BYTE *)v36 + 16) = 0;
    *(_DWORD *)((char *)v36 + 18) = 0;
    *((_DWORD *)v36 + 6) = 0;
    *((_DWORD *)v36 + 7) = 0;
    *((_DWORD *)v36 + 8) = 0;
    *((_DWORD *)v36 + 9) = 0;
    *((_DWORD *)v36 + 10) = 0;
    *((_DWORD *)v36 + 11) = 0;
    *((_DWORD *)v36 + 12) = 0;
    *((_DWORD *)v36 + 13) = 0;
    *((_DWORD *)v36 + 14) = 0;
    *((_BYTE *)v36 + 82) = 0;
    v60 = 4;
    v45 = (int)v36;
    sub_6F9336C0(v36, v37);
    v38 = *(_DWORD **)(a3 + 108);
    v60 = -1;
    sub_6F936240(v38, v45, v52);
    v56 = *(_DWORD *)v51;
  }
  v5 = *(_WORD *)(v56 + 60);
  v58 = *a5;
  v6 = *(_DWORD *)(v58 - 12);
  if ( *(_WORD *)v58 == v5 )
  {
    v72 = *(_DWORD *)(v56 + 56);
    v11 = *(_DWORD *)(v56 + 44);
    v49 = *(__int16 **)(v56 + 40);
    v52 = v11;
    v12 = v58 + 2;
    if ( !v6 )
      v12 = v58;
    v58 = v12;
  }
  else
  {
    v72 = *(_DWORD *)(v56 + 52);
    v49 = *(__int16 **)(v56 + 32);
    v52 = *(_DWORD *)(v56 + 36);
  }
  v7 = *(_DWORD *)v53;
  v42 = v58 + 2 * v6;
  v41 = v58;
  v40 = (int *)8;
  v8 = *(int (__thiscall **)(char *, signed int))(v7 + 20);
  v60 = -1;
  v9 = v8(v53, 8);
  v51 = v9 - v58;
  v53 = (char *)((signed int)(v9 - v58) >> 1);
  if ( v53 )
  {
    v40 = (int *)&v71;
    v70 = sub_6F8FD120(0, 0);
    v60 = 1;
    sub_6F8FEB20((int *)&v70, v51);
    v13 = *(_DWORD *)(v56 + 48);
    v51 = (int)&v53[-v13];
    if ( (signed int)&v53[-v13] > 0 )
    {
      v14 = v13 < 0;
      v15 = (int)&v53[-v13];
      v16 = *(_DWORD *)(v56 + 12);
      if ( v14 )
        v15 = (int)v53;
      v51 = v15;
      if ( v16 )
      {
        v41 = 0;
        v47 = (char *)(2 * v15);
        v40 = (int *)(2 * v15);
        v17 = *((_DWORD *)v70 - 3);
        v60 = 1;
        sub_6F8FD500(&v70, 0, v17, 2 * v15, 0);
        v47 += v58;
        v46 = *(char **)(v56 + 12);
        v44 = *(char **)(v56 + 8);
        v43 = *(_WORD *)(v56 + 20);
        if ( *((_DWORD *)v70 - 1) >= 0 )
          sub_6F8FD0E0((int *)&v70);
        v18 = (char *)sub_6F9598C0(v70, v43, v44, (int)v46, (char *)v58, v47);
        v19 = (int)v70;
        v47 = v18;
        if ( *((_DWORD *)v70 - 1) >= 0 )
        {
          v60 = 1;
          sub_6F8FD0E0((int *)&v70);
          v19 = (int)v70;
        }
        v20 = (signed int)&v47[-v19];
        v21 = *(_DWORD *)(v19 - 12);
        v22 = v20 >> 1;
        if ( v22 > v21 )
        {
          v41 = v21;
          v40 = (int *)v22;
          v60 = 1;
          sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase");
        }
        v60 = 1;
        sub_6F8FEC30((const void **)&v70, v22, v21 - v22, 0);
        v13 = *(_DWORD *)(v56 + 48);
      }
      else
      {
        v60 = 1;
        sub_6F8FDE60((void **)&v70, (char *)v58, v51);
        v13 = *(_DWORD *)(v56 + 48);
      }
    }
    if ( v13 > 0 )
    {
      v35 = *(_WORD *)(v56 + 18);
      v60 = 1;
      sub_6F8FEDB0((int *)&v70, v35);
      if ( v51 < 0 )
      {
        v39 = *(_WORD *)(v56 + 62);
        v60 = 1;
        sub_6F8FDD40(&v70, -v51, v39);
        sub_6F8FDAF0((unsigned int *)&v70, v58, (unsigned int)v53);
      }
      else
      {
        sub_6F8FDAF0((unsigned int *)&v70, v58 + 2 * v51, *(_DWORD *)(v56 + 48));
      }
    }
    v23 = *(_DWORD *)(a3 + 12);
    v51 = *(_DWORD *)(a3 + 12) & 0xB0;
    v24 = *((_DWORD *)v70 - 3) + v52;
    v58 = *((_DWORD *)v70 - 3) + v52;
    if ( BYTE1(v23) & 2 )
      v58 = *(_DWORD *)(v56 + 28) + v24;
    v40 = (int *)&v68;
    v60 = 1;
    v71 = sub_6F8FD120(0, 0);
    v60 = 2;
    sub_6F8FEB20((int *)&v71, 2 * v58);
    v53 = *(char **)(a3 + 8);
    v25 = (unsigned int)v53 > v58 && v51 == 16;
    v46 = &v53[-v58];
    v58 = (unsigned int)&v72;
    LOBYTE(v47) = v25;
    v50 = (unsigned __int16)v50;
    do
    {
      if ( *(_BYTE *)v58 <= 4u )
      {
        switch ( *(_BYTE *)v58 )
        {
          case 0:
            if ( (_BYTE)v47 )
            {
              v29 = v50;
              goto LABEL_31;
            }
            break;
          case 1:
            v29 = v50;
            if ( (_BYTE)v47 )
            {
LABEL_31:
              v60 = 2;
              sub_6F8FDD40(&v71, (int)v46, v29);
            }
            else
            {
              v60 = 2;
              sub_6F8FEDB0((int *)&v71, v50);
            }
            break;
          case 2:
            if ( *(_BYTE *)(a3 + 13) & 2 )
            {
              v27 = *(_DWORD *)(v56 + 28);
              v28 = *(_DWORD *)(v56 + 24);
              v60 = 2;
              sub_6F8FDAF0((unsigned int *)&v71, v28, v27);
            }
            break;
          case 3:
            if ( v52 )
            {
              v26 = *v49;
              v60 = 2;
              sub_6F8FEDB0((int *)&v71, v26);
            }
            break;
          case 4:
            v60 = 2;
            sub_6F8FDBD0((int *)&v71, (const void **)&v70);
            break;
        }
      }
      ++v58;
    }
    while ( (char *)v58 != &v73 );
    if ( v52 > 1 )
    {
      v60 = 2;
      sub_6F8FDAF0((unsigned int *)&v71, (unsigned int)(v49 + 1), v52 - 1);
      v30 = v71;
      v31 = (char *)*(v71 - 3);
      if ( v53 <= v31 )
        goto LABEL_39;
    }
    else
    {
      v30 = v71;
      v31 = (char *)*(v71 - 3);
      if ( v53 <= v31 )
      {
LABEL_39:
        v53 = v31;
LABEL_40:
        if ( !v55 )
        {
          v32 = *(int (__thiscall **)(int, _DWORD *, char *))(*(_DWORD *)v54 + 48);
          v60 = 2;
          v33 = v32(v54, v30, v53);
          v30 = v71;
          v55 = v33 != (_DWORD)v53;
        }
        v66 = v54;
        v67 = v55;
        LOBYTE(v57) = v55;
        if ( _InterlockedExchangeAdd(v30 - 1, 0xFFFFFFFF) <= 0 )
          sub_6F8FD6A0(v30 - 3, (int)&v69);
        v34 = (int)v70;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v70 - 1, 0xFFFFFFFF) <= 0 )
          sub_6F8FD6A0((void *)(v34 - 12), (int)&v69);
        goto LABEL_6;
      }
    }
    if ( v51 == 32 )
    {
      v60 = 2;
      sub_6F8FDD40(&v71, v53 - v31, v48);
      v30 = v71;
    }
    else
    {
      v60 = 2;
      sub_6F8FD500(&v71, 0, 0, v53 - v31, v48);
      v30 = v71;
    }
    goto LABEL_40;
  }
LABEL_6:
  *(_DWORD *)(a3 + 8) = 0;
  LOBYTE(v57) = v55;
  sub_6F8A1AD0((int *)&v59);
  return v54;
}
