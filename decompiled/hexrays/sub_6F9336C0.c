int __thiscall sub_6F9336C0(void *this, int a2)
{
  int v2; // eax@1
  int v3; // edx@1
  int (__thiscall *v4)(int); // eax@1
  __int16 v5; // ax@2
  int v6; // ebx@3
  int (__thiscall *v7)(int); // eax@3
  __int16 v8; // ax@4
  int v9; // ebx@5
  int (__thiscall *v10)(int); // eax@5
  int v11; // eax@6
  int v12; // edx@7
  void *(__thiscall *v13)(void *, int); // eax@7
  int v14; // eax@9
  _BYTE *v15; // eax@9
  void *v16; // edx@9
  size_t v17; // eax@9
  bool v18; // al@9
  void *(__thiscall *v19)(void *, int); // eax@11
  unsigned int v20; // eax@13
  void *v21; // eax@14
  void *v22; // edx@14
  unsigned int v23; // eax@14
  void *(__thiscall *v24)(void *, int); // eax@14
  unsigned int v25; // eax@16
  void *v26; // eax@17
  void *v27; // edx@17
  unsigned int v28; // eax@17
  void *(__thiscall *v29)(void *, int); // eax@17
  unsigned int v30; // eax@19
  void *v31; // eax@20
  void *v32; // edx@20
  unsigned int v33; // eax@20
  int (__thiscall *v34)(int); // eax@20
  int v35; // eax@21
  int v36; // ecx@22
  int (__thiscall *v37)(int); // eax@22
  int v38; // eax@23
  int *v39; // eax@24
  int v40; // ebx@24
  _DWORD *v41; // eax@24
  int v42; // edx@24
  int v43; // ecx@24
  int v44; // ebx@24
  int v45; // ebx@24
  int v46; // ecx@26
  int v47; // ecx@28
  int v48; // ecx@30
  const char *v50; // [sp+Ch] [bp-88h]@1
  char *v51; // [sp+10h] [bp-84h]@8
  char *v52; // [sp+14h] [bp-80h]@9
  int *v53; // [sp+1Ch] [bp-78h]@8
  int v54; // [sp+20h] [bp-74h]@14
  int v55; // [sp+24h] [bp-70h]@17
  int v56; // [sp+28h] [bp-6Ch]@20
  _BYTE *v57; // [sp+2Ch] [bp-68h]@9
  int v58; // [sp+30h] [bp-64h]@1
  void *v59; // [sp+34h] [bp-60h]@1
  char v60; // [sp+38h] [bp-5Ch]@1
  int v61; // [sp+3Ch] [bp-58h]@1
  int (__cdecl *v62)(int, int, __int64, void (**)(void), int *); // [sp+50h] [bp-44h]@1
  int *v63; // [sp+54h] [bp-40h]@1
  char *v64; // [sp+58h] [bp-3Ch]@1
  int (*v65)(); // [sp+5Ch] [bp-38h]@1
  int *v66; // [sp+60h] [bp-34h]@1
  char v67; // [sp+78h] [bp-1Ch]@8
  char v68; // [sp+79h] [bp-1Bh]@12
  char v69; // [sp+7Ah] [bp-1Ah]@15
  char v70; // [sp+7Bh] [bp-19h]@18
  int v71; // [sp+7Ch] [bp-18h]@8
  int v72; // [sp+80h] [bp-14h]@12
  int v73; // [sp+84h] [bp-10h]@15
  int v74; // [sp+88h] [bp-Ch]@18
  char v75; // [sp+8Ch] [bp-8h]@1

  v64 = &v75;
  v59 = this;
  v62 = sub_6F962A50;
  v63 = dword_6F96B0C8;
  v65 = sub_6F933C26;
  v66 = (int *)&v50;
  sub_6F8A1A60((int *)&v60);
  v61 = -1;
  v2 = sub_6F95DA90(a2);
  v3 = v2;
  v58 = v2;
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)v2 + 8);
  if ( v4 == sub_6F8BE430 )
  {
    v5 = *(_WORD *)(*(_DWORD *)(v3 + 8) + 18);
  }
  else
  {
    v61 = -1;
    v5 = ((int (__fastcall *)(int, int))v4)(v58, v3);
  }
  v6 = v58;
  *((_WORD *)v59 + 9) = v5;
  v7 = *(int (__thiscall **)(int))(*(_DWORD *)v6 + 12);
  if ( v7 == sub_6F8BE4A0 )
  {
    v8 = *(_WORD *)(*(_DWORD *)(v6 + 8) + 20);
  }
  else
  {
    v61 = -1;
    v8 = v7(v58);
  }
  v9 = v58;
  *((_WORD *)v59 + 10) = v8;
  v10 = *(int (__thiscall **)(int))(*(_DWORD *)v9 + 32);
  if ( v10 == sub_6F8BE420 )
  {
    v11 = *(_DWORD *)(*(_DWORD *)(v9 + 8) + 48);
  }
  else
  {
    v61 = -1;
    v11 = v10(v58);
  }
  v12 = v58;
  *((_DWORD *)v59 + 12) = v11;
  v13 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v12 + 16);
  if ( v13 == sub_6F8BE280 )
  {
    v53 = &v71;
    v51 = &v67;
    v50 = *(const char **)(*(_DWORD *)(v12 + 8) + 8);
    v61 = 6;
    sub_6F909D30(&v71, v50, (int)&v67);
  }
  else
  {
    v53 = &v71;
    v61 = 6;
    v13(&v71, v58);
  }
  v14 = *(_DWORD *)(v71 - 12);
  *((_DWORD *)v59 + 3) = v14;
  v61 = 18;
  v15 = sub_6F961B40(v14);
  v57 = v15;
  v16 = v15;
  v52 = 0;
  v17 = *((_DWORD *)v59 + 3);
  v61 = 17;
  sub_6F8BD380(v53, v16, v17, 0);
  v18 = 0;
  if ( *((_DWORD *)v59 + 3) )
  {
    LOBYTE(v53) = *v57;
    v18 = (unsigned __int8)((_BYTE)v53 - 1) <= 0x7Du;
  }
  *((_BYTE *)v59 + 16) = v18;
  v19 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v58 + 20);
  if ( v19 == sub_6F8BE3F0 )
  {
    v53 = &v72;
    v51 = &v68;
    v50 = *(const char **)(*(_DWORD *)(v58 + 8) + 24);
    v61 = 19;
    sub_6F8FEE50(&v72, (const wchar_t *)v50, (int)&v68);
  }
  else
  {
    v53 = &v72;
    v61 = 1;
    v19(&v72, v58);
  }
  v20 = *(_DWORD *)(v72 - 12);
  *((_DWORD *)v59 + 7) = v20;
  if ( v20 > 0x3FFFFFFE )
  {
    v61 = 15;
    sub_6F962910();
  }
  v61 = 13;
  v21 = sub_6F961B40(2 * v20);
  v54 = (int)v21;
  v22 = v21;
  v52 = 0;
  v23 = *((_DWORD *)v59 + 7);
  v61 = 14;
  sub_6F8BC4A0(v53, v22, v23, 0);
  v24 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v58 + 24);
  if ( v24 == sub_6F8BE470 )
  {
    v53 = &v73;
    v51 = &v69;
    v50 = *(const char **)(*(_DWORD *)(v58 + 8) + 32);
    v61 = 16;
    sub_6F8FEE50(&v73, (const wchar_t *)v50, (int)&v69);
  }
  else
  {
    v53 = &v73;
    v61 = 2;
    v24(&v73, v58);
  }
  v25 = *(_DWORD *)(v73 - 12);
  *((_DWORD *)v59 + 9) = v25;
  if ( v25 > 0x3FFFFFFE )
  {
    v61 = 11;
    sub_6F962910();
  }
  v61 = 9;
  v26 = sub_6F961B40(2 * v25);
  v55 = (int)v26;
  v27 = v26;
  v52 = 0;
  v28 = *((_DWORD *)v59 + 9);
  v61 = 10;
  sub_6F8BC4A0(v53, v27, v28, 0);
  v29 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v58 + 28);
  if ( v29 == sub_6F8BE440 )
  {
    v53 = &v74;
    v51 = &v70;
    v50 = *(const char **)(*(_DWORD *)(v58 + 8) + 40);
    v61 = 12;
    sub_6F8FEE50(&v74, (const wchar_t *)v50, (int)&v70);
  }
  else
  {
    v53 = &v74;
    v61 = 3;
    v29(&v74, v58);
  }
  v30 = *(_DWORD *)(v74 - 12);
  *((_DWORD *)v59 + 11) = v30;
  if ( v30 > 0x3FFFFFFE )
  {
    v61 = 8;
    sub_6F962910();
  }
  v61 = 7;
  v31 = sub_6F961B40(2 * v30);
  v56 = (int)v31;
  v32 = v31;
  v52 = 0;
  v33 = *((_DWORD *)v59 + 11);
  v61 = 4;
  sub_6F8BC4A0(v53, v32, v33, 0);
  v34 = *(int (__thiscall **)(int))(*(_DWORD *)v58 + 36);
  if ( v34 == sub_6F8BE300 )
  {
    v35 = *(_DWORD *)(*(_DWORD *)(v58 + 8) + 52);
  }
  else
  {
    v61 = 4;
    v35 = v34(v58);
  }
  v36 = v58;
  *((_DWORD *)v59 + 13) = v35;
  v37 = *(int (__thiscall **)(int))(*(_DWORD *)v36 + 40);
  if ( v37 == sub_6F8BE2F0 )
  {
    v38 = *(_DWORD *)(*(_DWORD *)(v36 + 8) + 56);
  }
  else
  {
    v61 = 4;
    v38 = v37(v58);
  }
  *((_DWORD *)v59 + 14) = v38;
  v61 = 4;
  v39 = (int *)sub_6F95DC70(a2);
  v40 = *v39;
  v50 = off_6FB49DE8;
  v52 = (char *)v59 + 60;
  v51 = off_6FB49DE8 + 11;
  (*(void (__thiscall **)(int *, char *, char *, int))(v40 + 44))(v39, off_6FB49DE8, off_6FB49DE8 + 11, (int)v59 + 60);
  v41 = v59;
  v42 = v55;
  v43 = v74;
  *((_DWORD *)v59 + 2) = v57;
  v44 = v54;
  v41[8] = v42;
  v41[6] = v44;
  v45 = v56;
  *((_BYTE *)v41 + 82) = 1;
  v41[10] = v45;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v43 - 12), (int)&v70);
  v46 = v73;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v73 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v46 - 12), (int)&v70);
  v47 = v72;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v72 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v47 - 12), (int)&v70);
  v48 = v71;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v71 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v48 - 12), (int)&v70);
  return sub_6F8A1AD0((int *)&v60);
}
