int __thiscall sub_6F9325E0(void *this, int a2)
{
  int v2; // eax@1
  int v3; // edx@1
  int (__thiscall *v4)(int); // eax@1
  char v5; // al@2
  int (__thiscall *v6)(int); // eax@3
  char v7; // al@4
  int (__thiscall *v8)(int); // eax@5
  int v9; // eax@6
  void *(__thiscall *v10)(void *, int); // eax@7
  int v11; // eax@9
  _BYTE *v12; // eax@9
  void *v13; // ecx@9
  size_t v14; // eax@9
  bool v15; // al@9
  void *(__thiscall *v16)(void *, int); // eax@11
  int v17; // eax@13
  void *v18; // eax@13
  void *v19; // ecx@13
  size_t v20; // eax@13
  void *(__thiscall *v21)(void *, int); // eax@13
  int v22; // eax@15
  void *v23; // eax@15
  void *v24; // ecx@15
  size_t v25; // eax@15
  void *(__thiscall *v26)(void *, int); // eax@15
  int v27; // eax@17
  void *v28; // eax@17
  void *v29; // ecx@17
  size_t v30; // eax@17
  int (__thiscall *v31)(int); // eax@17
  int v32; // eax@18
  int (__thiscall *v33)(int); // eax@19
  int v34; // eax@20
  _BYTE *v35; // eax@21
  _DWORD *v36; // eax@21
  int v37; // ecx@21
  int v38; // edx@21
  int v39; // ecx@21
  int v40; // edx@21
  int v41; // ecx@23
  int v42; // ecx@25
  int v43; // ecx@27
  int result; // eax@28
  const char *v45; // [sp+0h] [bp-88h]@1
  char *v46; // [sp+4h] [bp-84h]@8
  int v47; // [sp+8h] [bp-80h]@9
  int *v48; // [sp+10h] [bp-78h]@7
  int v49; // [sp+14h] [bp-74h]@13
  int v50; // [sp+18h] [bp-70h]@15
  int v51; // [sp+1Ch] [bp-6Ch]@17
  _BYTE *v52; // [sp+20h] [bp-68h]@9
  int v53; // [sp+24h] [bp-64h]@1
  void *v54; // [sp+28h] [bp-60h]@1
  char v55; // [sp+2Ch] [bp-5Ch]@1
  int v56; // [sp+30h] [bp-58h]@1
  int (__cdecl *v57)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v58; // [sp+48h] [bp-40h]@1
  char *v59; // [sp+4Ch] [bp-3Ch]@1
  int (*v60)(); // [sp+50h] [bp-38h]@1
  int *v61; // [sp+54h] [bp-34h]@1
  char v62; // [sp+6Ch] [bp-1Ch]@8
  char v63; // [sp+6Dh] [bp-1Bh]@12
  char v64; // [sp+6Eh] [bp-1Ah]@14
  char v65; // [sp+6Fh] [bp-19h]@16
  int v66; // [sp+70h] [bp-18h]@7
  int v67; // [sp+74h] [bp-14h]@11
  int v68; // [sp+78h] [bp-10h]@14
  int v69; // [sp+7Ch] [bp-Ch]@16
  char v70; // [sp+80h] [bp-8h]@1

  v54 = this;
  v59 = &v70;
  v57 = sub_6F962A50;
  v58 = dword_6F96B56C;
  v60 = sub_6F932AF1;
  v61 = (int *)&v45;
  sub_6F8A1A60((int *)&v55);
  v56 = -1;
  v2 = sub_6F95D9D0(a2);
  v3 = v2;
  v53 = v2;
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)v2 + 8);
  if ( v4 == sub_6F8BDDD0 )
  {
    v5 = *(_BYTE *)(*(_DWORD *)(v3 + 8) + 17);
  }
  else
  {
    v56 = -1;
    v5 = ((int (__fastcall *)(int, int))v4)(v53, v3);
  }
  *((_BYTE *)v54 + 17) = v5;
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)v53 + 12);
  if ( v6 == sub_6F8BDE40 )
  {
    v7 = *(_BYTE *)(*(_DWORD *)(v53 + 8) + 18);
  }
  else
  {
    v56 = -1;
    v7 = v6(v53);
  }
  *((_BYTE *)v54 + 18) = v7;
  v8 = *(int (__thiscall **)(int))(*(_DWORD *)v53 + 32);
  if ( v8 == sub_6F8BDDC0 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(v53 + 8) + 44);
  }
  else
  {
    v56 = -1;
    v9 = v8(v53);
  }
  v48 = &v66;
  *((_DWORD *)v54 + 11) = v9;
  v10 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v53 + 16);
  if ( v10 == sub_6F8BDC20 )
  {
    v46 = &v62;
    v45 = *(const char **)(*(_DWORD *)(v53 + 8) + 8);
    v56 = 6;
    sub_6F909D30(&v66, v45, (int)&v62);
  }
  else
  {
    v56 = 6;
    ((void (__stdcall *)(int))v10)(v53);
  }
  v11 = *(_DWORD *)(v66 - 12);
  *((_DWORD *)v54 + 3) = v11;
  v56 = 15;
  v12 = sub_6F961B40(v11);
  v52 = v12;
  v13 = v12;
  v47 = 0;
  v14 = *((_DWORD *)v54 + 3);
  v56 = 14;
  sub_6F8BD380(v48, v13, v14, 0);
  v15 = 0;
  if ( *((_DWORD *)v54 + 3) )
  {
    LOBYTE(v48) = *v52;
    v15 = (unsigned __int8)((_BYTE)v48 - 1) <= 0x7Du;
  }
  v48 = &v67;
  *((_BYTE *)v54 + 16) = v15;
  v16 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v53 + 20);
  if ( v16 == sub_6F8BDD90 )
  {
    v46 = &v63;
    v45 = *(const char **)(*(_DWORD *)(v53 + 8) + 20);
    v56 = 16;
    sub_6F909D30(&v67, v45, (int)&v63);
  }
  else
  {
    v56 = 1;
    ((void (__stdcall *)(int))v16)(v53);
  }
  v17 = *(_DWORD *)(v67 - 12);
  *((_DWORD *)v54 + 6) = v17;
  v56 = 12;
  v18 = sub_6F961B40(v17);
  v49 = (int)v18;
  v19 = v18;
  v47 = 0;
  v20 = *((_DWORD *)v54 + 6);
  v56 = 11;
  sub_6F8BD380(v48, v19, v20, 0);
  v21 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v53 + 24);
  if ( v21 == sub_6F8BDE10 )
  {
    v48 = &v68;
    v46 = &v64;
    v45 = *(const char **)(*(_DWORD *)(v53 + 8) + 28);
    v56 = 13;
    sub_6F909D30(&v68, v45, (int)&v64);
  }
  else
  {
    v48 = &v68;
    v56 = 2;
    v21(&v68, v53);
  }
  v22 = *(_DWORD *)(v68 - 12);
  *((_DWORD *)v54 + 8) = v22;
  v56 = 9;
  v23 = sub_6F961B40(v22);
  v50 = (int)v23;
  v24 = v23;
  v47 = 0;
  v25 = *((_DWORD *)v54 + 8);
  v56 = 8;
  sub_6F8BD380(v48, v24, v25, 0);
  v26 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v53 + 28);
  if ( v26 == sub_6F8BDDE0 )
  {
    v48 = &v69;
    v46 = &v65;
    v45 = *(const char **)(*(_DWORD *)(v53 + 8) + 36);
    v56 = 10;
    sub_6F909D30(&v69, v45, (int)&v65);
  }
  else
  {
    v48 = &v69;
    v56 = 3;
    v26(&v69, v53);
  }
  v27 = *(_DWORD *)(v69 - 12);
  *((_DWORD *)v54 + 10) = v27;
  v56 = 7;
  v28 = sub_6F961B40(v27);
  v51 = (int)v28;
  v29 = v28;
  v47 = 0;
  v30 = *((_DWORD *)v54 + 10);
  v56 = 4;
  sub_6F8BD380(v48, v29, v30, 0);
  v31 = *(int (__thiscall **)(int))(*(_DWORD *)v53 + 36);
  if ( v31 == sub_6F8BDCA0 )
  {
    v32 = *(_DWORD *)(*(_DWORD *)(v53 + 8) + 48);
  }
  else
  {
    v56 = 4;
    v32 = v31(v53);
  }
  *((_DWORD *)v54 + 12) = v32;
  v33 = *(int (__thiscall **)(int))(*(_DWORD *)v53 + 40);
  if ( v33 == sub_6F8BDC90 )
  {
    v34 = *(_DWORD *)(*(_DWORD *)(v53 + 8) + 52);
  }
  else
  {
    v56 = 4;
    v34 = v33(v53);
  }
  *((_DWORD *)v54 + 13) = v34;
  v56 = 4;
  v35 = (_BYTE *)sub_6F95DC10(a2);
  sub_6F8C3560(v35, off_6FB49DE8, (int)(off_6FB49DE8 + 11), (char *)v54 + 56);
  v36 = v54;
  v37 = v50;
  *((_DWORD *)v54 + 2) = v52;
  v38 = v49;
  v36[7] = v37;
  v39 = v69;
  v36[5] = v38;
  v40 = v51;
  *((_BYTE *)v36 + 67) = 1;
  v36[9] = v40;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v39 - 12), (int)&v65);
  v41 = v68;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v68 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v41 - 12), (int)&v65);
  v42 = v67;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v42 - 12), (int)&v65);
  v43 = v66;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v66 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F9086D0((void *)(v43 - 12), (int)&v65);
    result = sub_6F8A1AD0((int *)&v55);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v55);
  }
  return result;
}
