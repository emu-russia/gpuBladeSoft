int __thiscall sub_6F92F860(void *this, int a2)
{
  int v2; // eax@1
  int v3; // edx@1
  void *(__thiscall *v4)(void *, int); // eax@1
  int v5; // eax@3
  _BYTE *v6; // eax@3
  void *v7; // ecx@3
  size_t v8; // eax@3
  bool v9; // al@3
  void *(__thiscall *v10)(void *, int); // eax@5
  int v11; // eax@7
  void *v12; // eax@7
  void *v13; // ecx@7
  size_t v14; // eax@7
  void *(__thiscall *v15)(void *, int); // eax@7
  int v16; // eax@9
  void *v17; // eax@9
  void *v18; // ecx@9
  size_t v19; // eax@9
  int (__thiscall *v20)(int); // eax@9
  char v21; // al@10
  int (__thiscall *v22)(int); // eax@11
  char v23; // al@12
  int v24; // eax@13
  char v25; // al@13
  char *v26; // edx@13
  int (__stdcall *v27)(const void *, int, void *); // eax@16
  int *v28; // ecx@17
  char v29; // al@18
  int (__stdcall *v30)(const void *, int, void *); // eax@20
  char *v31; // edx@21
  int *v32; // ecx@21
  _DWORD *v33; // eax@22
  int v34; // ecx@22
  int v35; // edx@22
  int v36; // ecx@22
  int v37; // ecx@24
  int v38; // ecx@26
  int result; // eax@27
  const char *v40; // [sp+0h] [bp-78h]@1
  char *v41; // [sp+4h] [bp-74h]@2
  int v42; // [sp+8h] [bp-70h]@3
  char *v43; // [sp+10h] [bp-68h]@13
  int *v44; // [sp+14h] [bp-64h]@2
  int v45; // [sp+18h] [bp-60h]@7
  int v46; // [sp+1Ch] [bp-5Ch]@9
  _BYTE *v47; // [sp+20h] [bp-58h]@3
  unsigned int v48; // [sp+24h] [bp-54h]@1
  void *v49; // [sp+28h] [bp-50h]@1
  char v50; // [sp+2Ch] [bp-4Ch]@1
  int v51; // [sp+30h] [bp-48h]@1
  int (__cdecl *v52)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-34h]@1
  int *v53; // [sp+48h] [bp-30h]@1
  char *v54; // [sp+4Ch] [bp-2Ch]@1
  int (*v55)(); // [sp+50h] [bp-28h]@1
  int *v56; // [sp+54h] [bp-24h]@1
  char v57; // [sp+61h] [bp-17h]@2
  char v58; // [sp+62h] [bp-16h]@6
  char v59; // [sp+63h] [bp-15h]@8
  int v60; // [sp+64h] [bp-14h]@2
  int v61; // [sp+68h] [bp-10h]@6
  int v62; // [sp+6Ch] [bp-Ch]@8
  char v63; // [sp+70h] [bp-8h]@1

  v49 = this;
  v54 = &v63;
  v52 = sub_6F962A50;
  v53 = dword_6F96B514;
  v55 = sub_6F92FD69;
  v56 = (int *)&v40;
  sub_6F8A1A60((int *)&v50);
  v51 = -1;
  v2 = sub_6F95E090(a2);
  v3 = v2;
  v48 = v2;
  v4 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v2 + 16);
  if ( v4 == sub_6F8F0A70 )
  {
    v44 = &v60;
    v41 = &v57;
    v40 = *(const char **)(*(_DWORD *)(v3 + 8) + 8);
    v51 = 5;
    sub_6F909D30(&v60, v40, (int)&v57);
  }
  else
  {
    v44 = &v60;
    v51 = 5;
    v4(&v60, v48);
  }
  v5 = *(_DWORD *)(v60 - 12);
  *((_DWORD *)v49 + 3) = v5;
  v51 = 11;
  v6 = sub_6F961B40(v5);
  v47 = v6;
  v7 = v6;
  v42 = 0;
  v8 = *((_DWORD *)v49 + 3);
  v51 = 10;
  sub_6F8BD380(v44, v7, v8, 0);
  v9 = 0;
  if ( *((_DWORD *)v49 + 3) )
  {
    LOBYTE(v44) = *v47;
    v9 = (unsigned __int8)((_BYTE)v44 - 1) <= 0x7Du;
  }
  *((_BYTE *)v49 + 16) = v9;
  v10 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v48 + 20);
  if ( v10 == sub_6F8F0AA0 )
  {
    v44 = &v61;
    v41 = &v58;
    v40 = *(const char **)(*(_DWORD *)(v48 + 8) + 20);
    v51 = 12;
    sub_6F909D30(&v61, v40, (int)&v58);
  }
  else
  {
    v44 = &v61;
    v51 = 1;
    v10(&v61, v48);
  }
  v11 = *(_DWORD *)(v61 - 12);
  *((_DWORD *)v49 + 6) = v11;
  v51 = 8;
  v12 = sub_6F961B40(v11);
  v45 = (int)v12;
  v13 = v12;
  v42 = 0;
  v14 = *((_DWORD *)v49 + 6);
  v51 = 7;
  sub_6F8BD380(v44, v13, v14, 0);
  v15 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v48 + 24);
  if ( v15 == sub_6F8F0AD0 )
  {
    v44 = &v62;
    v41 = &v59;
    v40 = *(const char **)(*(_DWORD *)(v48 + 8) + 28);
    v51 = 9;
    sub_6F909D30(&v62, v40, (int)&v59);
  }
  else
  {
    v44 = &v62;
    v51 = 2;
    ((void (__stdcall *)(unsigned int))v15)(v48);
  }
  v16 = *(_DWORD *)(v62 - 12);
  *((_DWORD *)v49 + 8) = v16;
  v51 = 6;
  v17 = sub_6F961B40(v16);
  v46 = (int)v17;
  v18 = v17;
  v42 = 0;
  v19 = *((_DWORD *)v49 + 8);
  v51 = 3;
  sub_6F8BD380(v44, v18, v19, 0);
  v20 = *(int (__thiscall **)(int))(*(_DWORD *)v48 + 8);
  if ( v20 == sub_6F8F0B40 )
  {
    v21 = *(_BYTE *)(*(_DWORD *)(v48 + 8) + 36);
  }
  else
  {
    v51 = 3;
    v21 = v20(v48);
  }
  *((_BYTE *)v49 + 36) = v21;
  v22 = *(int (__thiscall **)(int))(*(_DWORD *)v48 + 12);
  if ( v22 == sub_6F8F0B50 )
  {
    v23 = *(_BYTE *)(*(_DWORD *)(v48 + 8) + 37);
  }
  else
  {
    v51 = 3;
    v23 = v22(v48);
  }
  *((_BYTE *)v49 + 37) = v23;
  v51 = 3;
  v24 = sub_6F95DC10(a2);
  v48 = v24;
  v25 = *(_BYTE *)(v24 + 28);
  v43 = off_6FB49DE4[0];
  v44 = (int *)((char *)v49 + 38);
  v26 = off_6FB49DE4[0];
  if ( v25 == 1 )
    goto LABEL_39;
  if ( !v25 )
  {
    v51 = 3;
    sub_6F8C33B0(v48);
  }
  v26 = v43;
  v27 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v48 + 28);
  if ( v27 != sub_6F8C3630 )
  {
    v51 = 3;
    ((void (__thiscall *)(unsigned int, char *, char *, int *))v27)(v48, v43, v43 + 36, v44);
  }
  else
  {
LABEL_39:
    *(_DWORD *)((char *)v49 + 38) = *(_DWORD *)v26;
    v28 = v44;
    v44[1] = *((_DWORD *)v26 + 1);
    v28[2] = *((_DWORD *)v26 + 2);
    v28[3] = *((_DWORD *)v26 + 3);
    v28[4] = *((_DWORD *)v26 + 4);
    v28[5] = *((_DWORD *)v26 + 5);
    v28[6] = *((_DWORD *)v26 + 6);
    v28[7] = *((_DWORD *)v26 + 7);
    v28[8] = *((_DWORD *)v26 + 8);
  }
  v44 = (int *)((char *)v49 + 74);
  v43 = off_6FB49DE0[0];
  v29 = *(_BYTE *)(v48 + 28);
  if ( v29 == 1 )
    goto LABEL_21;
  if ( v29 )
  {
    v30 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v48 + 28);
    if ( v30 == sub_6F8C3630 )
    {
LABEL_21:
      v31 = v43;
      *(_DWORD *)((char *)v49 + 74) = *(_DWORD *)v43;
      v32 = v44;
      v44[1] = *((_DWORD *)v31 + 1);
      v32[2] = *((_DWORD *)v31 + 2);
      v32[3] = *((_DWORD *)v31 + 3);
      v32[4] = *((_DWORD *)v31 + 4);
      v32[5] = *((_DWORD *)v31 + 5);
      *((_WORD *)v32 + 12) = *((_WORD *)v31 + 12);
      goto LABEL_22;
    }
  }
  else
  {
    v51 = 3;
    sub_6F8C33B0(v48);
    v30 = *(int (__stdcall **)(const void *, int, void *))(*(_DWORD *)v48 + 28);
    if ( v30 == sub_6F8C3630 )
      goto LABEL_21;
  }
  v51 = 3;
  ((void (__thiscall *)(unsigned int, char *, char *, int *))v30)(v48, v43, v43 + 26, v44);
LABEL_22:
  v33 = v49;
  v34 = v45;
  *((_DWORD *)v49 + 2) = v47;
  v35 = v46;
  v33[5] = v34;
  v36 = v62;
  v33[7] = v35;
  *((_BYTE *)v33 + 100) = 1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v36 - 12), (int)&v59);
  v37 = v61;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v61 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v37 - 12), (int)&v59);
  v38 = v60;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v60 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F9086D0((void *)(v38 - 12), (int)&v59);
    result = sub_6F8A1AD0((int *)&v50);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v50);
  }
  return result;
}
