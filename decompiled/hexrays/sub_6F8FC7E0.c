int __stdcall sub_6F8FC7E0(int a1, int a2, int a3, int a4, int *a5)
{
  __int16 v5; // bx@3
  int v6; // eax@3
  int v7; // edx@5
  int (__thiscall *v8)(char *, signed int); // eax@5
  int v9; // eax@5
  __int16 *v11; // ebx@7
  unsigned int v12; // edx@7
  int v13; // edx@7
  int v14; // eax@10
  bool v15; // sf@11
  int v16; // eax@11
  int v17; // ebx@11
  int v18; // ST10_4@14
  char *v19; // eax@16
  int v20; // edx@16
  signed int v21; // eax@18
  unsigned int v22; // edx@18
  unsigned int v23; // eax@18
  int v24; // eax@21
  int v25; // ebx@21
  bool v26; // dl@23
  __int16 v27; // ST0C_2@27
  unsigned int v28; // ST10_4@29
  unsigned int v29; // ST0C_4@29
  unsigned __int16 v30; // ax@30
  _DWORD *v31; // ecx@38
  char *v32; // edx@38
  int (__thiscall *v33)(int, _DWORD *, char *); // eax@41
  int v34; // eax@41
  int v35; // ecx@42
  __int16 v36; // ST0C_2@48
  void *v37; // eax@2
  int v38; // edx@2
  _DWORD *v39; // ecx@2
  unsigned __int16 v40; // ST10_2@54
  int *v41; // [sp+14h] [bp-B8h]@1
  unsigned int v42; // [sp+18h] [bp-B4h]@5
  unsigned int v43; // [sp+1Ch] [bp-B0h]@5
  int v44; // [sp+38h] [bp-94h]@14
  char *v45; // [sp+3Ch] [bp-90h]@14
  int v46; // [sp+40h] [bp-8Ch]@2
  char *v47; // [sp+44h] [bp-88h]@14
  char *v48; // [sp+48h] [bp-84h]@14
  int v49; // [sp+4Ch] [bp-80h]@1
  __int16 *v50; // [sp+50h] [bp-7Ch]@4
  unsigned int v51; // [sp+54h] [bp-78h]@1
  int v52; // [sp+58h] [bp-74h]@1
  unsigned int v53; // [sp+5Ch] [bp-70h]@1
  char *v54; // [sp+60h] [bp-6Ch]@1
  int v55; // [sp+64h] [bp-68h]@1
  unsigned __int8 v56; // [sp+6Bh] [bp-61h]@1
  int v57; // [sp+6Ch] [bp-60h]@1
  int v58; // [sp+70h] [bp-5Ch]@1
  unsigned int v59; // [sp+74h] [bp-58h]@1
  char v60; // [sp+78h] [bp-54h]@1
  int v61; // [sp+7Ch] [bp-50h]@1
  int (__cdecl *v62)(int, int, __int64, void (**)(void), int *); // [sp+90h] [bp-3Ch]@1
  int *v63; // [sp+94h] [bp-38h]@1
  char *v64; // [sp+98h] [bp-34h]@1
  int (*v65)(); // [sp+9Ch] [bp-30h]@1
  int *v66; // [sp+A0h] [bp-2Ch]@1
  int v67; // [sp+ACh] [bp-20h]@42
  int v68; // [sp+B0h] [bp-1Ch]@42
  char v69; // [sp+B6h] [bp-16h]@23
  char v70; // [sp+B7h] [bp-15h]@42
  _WORD *v71; // [sp+B8h] [bp-14h]@10
  _DWORD *v72; // [sp+BCh] [bp-10h]@10
  int v73; // [sp+C0h] [bp-Ch]@4
  char v74; // [sp+C4h] [bp-8h]@1

  v64 = &v74;
  v62 = sub_6F962A50;
  v55 = a1;
  v49 = a4;
  LOWORD(v51) = a4;
  v58 = a2;
  v63 = dword_6F96B0FC;
  v65 = sub_6F8FCF7A;
  v66 = (int *)&v41;
  sub_6F8A1A60((int *)&v60);
  v56 = v58;
  v59 = a3 + 108;
  v61 = -1;
  v54 = (char *)sub_6F95DC70(a3 + 108);
  v53 = sub_6F8C3BF0(&unk_6FB49DF8);
  v52 = *(_DWORD *)(*(_DWORD *)(a3 + 108) + 12) + 4 * v53;
  v57 = *(_DWORD *)v52;
  if ( !v57 )
  {
    v61 = 5;
    v37 = sub_6F961B60(0x54u);
    v38 = v59;
    *((_DWORD *)v37 + 1) = 0;
    *(_DWORD *)v37 = off_6FBB0954;
    *((_DWORD *)v37 + 2) = 0;
    *((_DWORD *)v37 + 3) = 0;
    *((_BYTE *)v37 + 16) = 0;
    *(_DWORD *)((char *)v37 + 18) = 0;
    *((_DWORD *)v37 + 6) = 0;
    *((_DWORD *)v37 + 7) = 0;
    *((_DWORD *)v37 + 8) = 0;
    *((_DWORD *)v37 + 9) = 0;
    *((_DWORD *)v37 + 10) = 0;
    *((_DWORD *)v37 + 11) = 0;
    *((_DWORD *)v37 + 12) = 0;
    *((_DWORD *)v37 + 13) = 0;
    *((_DWORD *)v37 + 14) = 0;
    *((_BYTE *)v37 + 82) = 0;
    v61 = 4;
    v46 = (int)v37;
    sub_6F933F80(v37, v38);
    v39 = *(_DWORD **)(a3 + 108);
    v61 = -1;
    sub_6F936240(v39, v46, v53);
    v57 = *(_DWORD *)v52;
  }
  v5 = *(_WORD *)(v57 + 60);
  v59 = *a5;
  v6 = *(_DWORD *)(v59 - 12);
  if ( *(_WORD *)v59 == v5 )
  {
    v11 = *(__int16 **)(v57 + 40);
    v73 = *(_DWORD *)(v57 + 56);
    v12 = *(_DWORD *)(v57 + 44);
    v50 = v11;
    v53 = v12;
    v13 = v59 + 2;
    if ( !v6 )
      v13 = v59;
    v59 = v13;
  }
  else
  {
    v73 = *(_DWORD *)(v57 + 52);
    v50 = *(__int16 **)(v57 + 32);
    v53 = *(_DWORD *)(v57 + 36);
  }
  v7 = *(_DWORD *)v54;
  v43 = v59 + 2 * v6;
  v42 = v59;
  v41 = (int *)8;
  v8 = *(int (__thiscall **)(char *, signed int))(v7 + 20);
  v61 = -1;
  v9 = v8(v54, 8);
  v52 = v9 - v59;
  v54 = (char *)((signed int)(v9 - v59) >> 1);
  if ( v54 )
  {
    v41 = (int *)&v72;
    v71 = sub_6F8FD120(0, 0);
    v61 = 1;
    sub_6F8FEB20((int *)&v71, v52);
    v14 = *(_DWORD *)(v57 + 48);
    v52 = (int)&v54[-v14];
    if ( (signed int)&v54[-v14] > 0 )
    {
      v15 = v14 < 0;
      v16 = (int)&v54[-v14];
      v17 = *(_DWORD *)(v57 + 12);
      if ( v15 )
        v16 = (int)v54;
      v52 = v16;
      if ( v17 )
      {
        v42 = 0;
        v48 = (char *)(2 * v16);
        v41 = (int *)(2 * v16);
        v18 = *((_DWORD *)v71 - 3);
        v61 = 1;
        sub_6F8FD500(&v71, 0, v18, 2 * v16, 0);
        v48 += v59;
        v47 = *(char **)(v57 + 12);
        v45 = *(char **)(v57 + 8);
        v44 = *(_WORD *)(v57 + 20);
        if ( *((_DWORD *)v71 - 1) >= 0 )
          sub_6F8FD0E0((int *)&v71);
        v19 = (char *)sub_6F9598C0(v71, v44, v45, (int)v47, (char *)v59, v48);
        v20 = (int)v71;
        v48 = v19;
        if ( *((_DWORD *)v71 - 1) >= 0 )
        {
          v61 = 1;
          sub_6F8FD0E0((int *)&v71);
          v20 = (int)v71;
        }
        v21 = (signed int)&v48[-v20];
        v22 = *(_DWORD *)(v20 - 12);
        v23 = v21 >> 1;
        if ( v23 > v22 )
        {
          v42 = v22;
          v41 = (int *)v23;
          v61 = 1;
          sub_6F95BAF0("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase");
        }
        v61 = 1;
        sub_6F8FEC30((const void **)&v71, v23, v22 - v23, 0);
        v14 = *(_DWORD *)(v57 + 48);
      }
      else
      {
        v61 = 1;
        sub_6F8FDE60((void **)&v71, (char *)v59, v52);
        v14 = *(_DWORD *)(v57 + 48);
      }
    }
    if ( v14 > 0 )
    {
      v36 = *(_WORD *)(v57 + 18);
      v61 = 1;
      sub_6F8FEDB0((int *)&v71, v36);
      if ( v52 < 0 )
      {
        v40 = *(_WORD *)(v57 + 62);
        v61 = 1;
        sub_6F8FDD40(&v71, -v52, v40);
        sub_6F8FDAF0((unsigned int *)&v71, v59, (unsigned int)v54);
      }
      else
      {
        sub_6F8FDAF0((unsigned int *)&v71, v59 + 2 * v52, *(_DWORD *)(v57 + 48));
      }
    }
    v24 = *(_DWORD *)(a3 + 12);
    v52 = *(_DWORD *)(a3 + 12) & 0xB0;
    v25 = *((_DWORD *)v71 - 3) + v53;
    v59 = *((_DWORD *)v71 - 3) + v53;
    if ( BYTE1(v24) & 2 )
      v59 = *(_DWORD *)(v57 + 28) + v25;
    v41 = (int *)&v69;
    v61 = 1;
    v72 = sub_6F8FD120(0, 0);
    v61 = 2;
    sub_6F8FEB20((int *)&v72, 2 * v59);
    v54 = *(char **)(a3 + 8);
    v26 = (unsigned int)v54 > v59 && v52 == 16;
    v47 = &v54[-v59];
    v59 = (unsigned int)&v73;
    LOBYTE(v48) = v26;
    v51 = (unsigned __int16)v51;
    do
    {
      if ( *(_BYTE *)v59 <= 4u )
      {
        switch ( *(_BYTE *)v59 )
        {
          case 0:
            if ( (_BYTE)v48 )
            {
              v30 = v51;
              goto LABEL_31;
            }
            break;
          case 1:
            v30 = v51;
            if ( (_BYTE)v48 )
            {
LABEL_31:
              v61 = 2;
              sub_6F8FDD40(&v72, (int)v47, v30);
            }
            else
            {
              v61 = 2;
              sub_6F8FEDB0((int *)&v72, v51);
            }
            break;
          case 2:
            if ( *(_BYTE *)(a3 + 13) & 2 )
            {
              v28 = *(_DWORD *)(v57 + 28);
              v29 = *(_DWORD *)(v57 + 24);
              v61 = 2;
              sub_6F8FDAF0((unsigned int *)&v72, v29, v28);
            }
            break;
          case 3:
            if ( v53 )
            {
              v27 = *v50;
              v61 = 2;
              sub_6F8FEDB0((int *)&v72, v27);
            }
            break;
          case 4:
            v61 = 2;
            sub_6F8FDBD0((int *)&v72, (const void **)&v71);
            break;
        }
      }
      ++v59;
    }
    while ( (char *)v59 != &v74 );
    if ( v53 > 1 )
    {
      v61 = 2;
      sub_6F8FDAF0((unsigned int *)&v72, (unsigned int)(v50 + 1), v53 - 1);
      v31 = v72;
      v32 = (char *)*(v72 - 3);
      if ( v54 <= v32 )
        goto LABEL_39;
    }
    else
    {
      v31 = v72;
      v32 = (char *)*(v72 - 3);
      if ( v54 <= v32 )
      {
LABEL_39:
        v54 = v32;
LABEL_40:
        if ( !v56 )
        {
          v33 = *(int (__thiscall **)(int, _DWORD *, char *))(*(_DWORD *)v55 + 48);
          v61 = 2;
          v34 = v33(v55, v31, v54);
          v31 = v72;
          v56 = v34 != (_DWORD)v54;
        }
        v68 = v56;
        LOBYTE(v58) = v56;
        v67 = v55;
        sub_6F8FD6C0((int)(v31 - 3), (int)&v70);
        v35 = (int)v71;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v71 - 1, 0xFFFFFFFF) <= 0 )
          sub_6F8FD6A0((void *)(v35 - 12), (int)&v70);
        goto LABEL_6;
      }
    }
    if ( v52 == 32 )
    {
      v61 = 2;
      sub_6F8FDD40(&v72, v54 - v32, v49);
      v31 = v72;
    }
    else
    {
      v61 = 2;
      sub_6F8FD500(&v72, 0, 0, v54 - v32, v49);
      v31 = v72;
    }
    goto LABEL_40;
  }
LABEL_6:
  *(_DWORD *)(a3 + 8) = 0;
  LOBYTE(v58) = v56;
  sub_6F8A1AD0((int *)&v60);
  return v55;
}
