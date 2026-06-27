int __thiscall sub_6F92FFF0(void *this, int a2)
{
  int v2; // eax@1
  int v3; // edx@1
  void *(__thiscall *v4)(void *, int); // eax@1
  int v5; // eax@3
  _BYTE *v6; // eax@3
  void *v7; // edx@3
  size_t v8; // eax@3
  bool v9; // al@3
  int v10; // ebx@5
  void *(__thiscall *v11)(void *, int); // eax@5
  unsigned int v12; // eax@7
  void *v13; // eax@8
  void *v14; // edx@8
  unsigned int v15; // eax@8
  void *(__thiscall *v16)(void *, int); // eax@8
  unsigned int v17; // eax@10
  void *v18; // eax@11
  void *v19; // edx@11
  unsigned int v20; // eax@11
  int v21; // edx@11
  int (__thiscall *v22)(int); // eax@11
  __int16 v23; // ax@12
  int (__thiscall *v24)(int); // eax@13
  __int16 v25; // ax@14
  _DWORD *v26; // eax@15
  int v27; // edx@15
  int v28; // edx@15
  _BYTE *v29; // eax@15
  int v30; // ecx@15
  int v31; // edx@15
  int v32; // ecx@17
  int v33; // ecx@19
  const char *v35; // [sp+18h] [bp-78h]@1
  char *v36; // [sp+1Ch] [bp-74h]@2
  char *v37; // [sp+20h] [bp-70h]@3
  int *v38; // [sp+2Ch] [bp-64h]@2
  int v39; // [sp+30h] [bp-60h]@8
  void *v40; // [sp+34h] [bp-5Ch]@11
  _BYTE *v41; // [sp+38h] [bp-58h]@3
  _DWORD *v42; // [sp+3Ch] [bp-54h]@1
  void *v43; // [sp+40h] [bp-50h]@1
  char v44; // [sp+44h] [bp-4Ch]@1
  int v45; // [sp+48h] [bp-48h]@1
  int (__cdecl *v46)(int, int, __int64, void (**)(void), int *); // [sp+5Ch] [bp-34h]@1
  int *v47; // [sp+60h] [bp-30h]@1
  char *v48; // [sp+64h] [bp-2Ch]@1
  void *v49; // [sp+68h] [bp-28h]@1
  int *v50; // [sp+6Ch] [bp-24h]@1
  char v51; // [sp+79h] [bp-17h]@2
  char v52; // [sp+7Ah] [bp-16h]@6
  char v53; // [sp+7Bh] [bp-15h]@9
  int v54; // [sp+7Ch] [bp-14h]@2
  int v55; // [sp+80h] [bp-10h]@6
  int v56; // [sp+84h] [bp-Ch]@9
  char v57; // [sp+88h] [bp-8h]@1

  v48 = &v57;
  v43 = this;
  v46 = sub_6F962A50;
  v47 = dword_6F96B068;
  v49 = &loc_6F9303F3;
  v50 = (int *)&v35;
  sub_6F8A1A60((int *)&v44);
  v45 = -1;
  v2 = sub_6F95E0F0(a2);
  v3 = v2;
  v42 = (_DWORD *)v2;
  v4 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v2 + 16);
  if ( v4 == sub_6F8F0C80 )
  {
    v38 = &v54;
    v36 = &v51;
    v35 = *(const char **)(*(_DWORD *)(v3 + 8) + 8);
    v45 = 5;
    sub_6F909D30(&v54, v35, (int)&v51);
  }
  else
  {
    v38 = &v54;
    v45 = 5;
    v4(&v54, (int)v42);
  }
  v5 = *(_DWORD *)(v54 - 12);
  *((_DWORD *)v43 + 3) = v5;
  v45 = 13;
  v6 = sub_6F961B40(v5);
  v41 = v6;
  v7 = v6;
  v37 = 0;
  v8 = *((_DWORD *)v43 + 3);
  v45 = 12;
  sub_6F8BD380(v38, v7, v8, 0);
  v9 = 0;
  if ( *((_DWORD *)v43 + 3) )
  {
    LOBYTE(v38) = *v41;
    v9 = (unsigned __int8)((_BYTE)v38 - 1) <= 0x7Du;
  }
  v10 = (int)v42;
  *((_BYTE *)v43 + 16) = v9;
  v11 = *(void *(__thiscall **)(void *, int))(*(_DWORD *)v10 + 20);
  if ( v11 == sub_6F8F0CB0 )
  {
    v38 = &v55;
    v36 = &v52;
    v35 = *(const char **)(*(_DWORD *)(v10 + 8) + 20);
    v45 = 14;
    sub_6F8FEE50(&v55, (const wchar_t *)v35, (int)&v52);
  }
  else
  {
    v38 = &v55;
    v45 = 1;
    v11(&v55, (int)v42);
  }
  v12 = *(_DWORD *)(v55 - 12);
  *((_DWORD *)v43 + 6) = v12;
  if ( v12 > 0x3FFFFFFE )
  {
    v45 = 10;
    sub_6F962910();
  }
  v45 = 8;
  v13 = sub_6F961B40(2 * v12);
  v39 = (int)v13;
  v14 = v13;
  v37 = 0;
  v15 = *((_DWORD *)v43 + 6);
  v45 = 9;
  sub_6F8BC4A0(v38, v14, v15, 0);
  v16 = *(void *(__thiscall **)(void *, int))(*v42 + 24);
  if ( v16 == sub_6F8F0CE0 )
  {
    v38 = &v56;
    v36 = &v53;
    v35 = *(const char **)(v42[2] + 28);
    v45 = 11;
    sub_6F8FEE50(&v56, (const wchar_t *)v35, (int)&v53);
  }
  else
  {
    v38 = &v56;
    v45 = 2;
    v16(&v56, (int)v42);
  }
  v17 = *(_DWORD *)(v56 - 12);
  *((_DWORD *)v43 + 8) = v17;
  if ( v17 > 0x3FFFFFFE )
  {
    v45 = 7;
    sub_6F962910();
  }
  v45 = 6;
  v18 = sub_6F961B40(2 * v17);
  v40 = v18;
  v19 = v18;
  v37 = 0;
  v20 = *((_DWORD *)v43 + 8);
  v45 = 3;
  sub_6F8BC4A0(v38, v19, v20, 0);
  v21 = *v42;
  v22 = *(int (__thiscall **)(int))(*v42 + 8);
  if ( v22 == sub_6F8F0D50 )
  {
    v23 = *(_WORD *)(v42[2] + 36);
  }
  else
  {
    v45 = 3;
    v23 = v22(v42);
    v21 = *v42;
  }
  *((_WORD *)v43 + 18) = v23;
  v24 = *(int (__thiscall **)(int))(v21 + 12);
  if ( v24 == sub_6F8F0D60 )
  {
    v25 = *(_WORD *)(v42[2] + 38);
  }
  else
  {
    v45 = 3;
    v25 = v24(v42);
  }
  *((_WORD *)v43 + 19) = v25;
  v45 = 3;
  v26 = (_DWORD *)sub_6F95DC70(a2);
  v27 = *v26;
  v35 = off_6FB49DE4[0];
  v37 = (char *)v43 + 40;
  v36 = off_6FB49DE4[0] + 36;
  v42 = v26;
  (*(void (__thiscall **)(_DWORD *, char *, char *, int))(v27 + 44))(
    v26,
    off_6FB49DE4[0],
    off_6FB49DE4[0] + 36,
    (int)v43 + 40);
  v28 = *v42;
  v37 = (char *)v43 + 112;
  v36 = off_6FB49DE0[0] + 26;
  v35 = off_6FB49DE0[0];
  (*(void (__thiscall **)(int, char *, char *, int))(v28 + 44))(
    (int)v42,
    off_6FB49DE0[0],
    off_6FB49DE0[0] + 26,
    (int)v43 + 112);
  v29 = v43;
  v30 = v56;
  *((_DWORD *)v43 + 2) = v41;
  v31 = v39;
  v29[164] = 1;
  *((_DWORD *)v29 + 5) = v31;
  *((_DWORD *)v29 + 7) = v40;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v30 - 12), (int)&v53);
  v32 = v55;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v32 - 12), (int)&v53);
  v33 = v54;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v33 - 12), (int)&v53);
  return sub_6F8A1AD0((int *)&v44);
}
