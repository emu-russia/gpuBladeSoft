int __cdecl sub_6F912E40(int a1, int a2, int a3)
{
  int (__thiscall *v3)(int, int); // eax@1
  int v4; // eax@1
  void *v5; // ecx@1
  size_t v6; // eax@1
  int v7; // ecx@1
  int v8; // eax@3
  void (__thiscall *v9)(int *, int); // eax@3
  size_t v10; // eax@3
  unsigned int v11; // eax@3
  void *v12; // ecx@4
  size_t v13; // edx@4
  int v14; // ecx@4
  int v15; // eax@6
  void (__thiscall *v16)(int *, int); // eax@6
  size_t v17; // eax@6
  unsigned int v18; // eax@6
  void *v19; // ecx@7
  size_t v20; // edx@7
  int v21; // ecx@7
  int result; // eax@8
  int v23; // [sp+Ch] [bp-68h]@1
  int v24; // [sp+10h] [bp-64h]@1
  void *v25; // [sp+1Ch] [bp-58h]@4
  void *v26; // [sp+20h] [bp-54h]@1
  size_t v27; // [sp+24h] [bp-50h]@1
  char v28; // [sp+28h] [bp-4Ch]@1
  int v29; // [sp+2Ch] [bp-48h]@1
  int (__cdecl *v30)(int, int, __int64, void (**)(void), int *); // [sp+40h] [bp-34h]@1
  __int16 *v31; // [sp+44h] [bp-30h]@1
  char *v32; // [sp+48h] [bp-2Ch]@1
  void *v33; // [sp+4Ch] [bp-28h]@1
  int *v34; // [sp+50h] [bp-24h]@1
  char v35; // [sp+67h] [bp-Dh]@2
  int v36; // [sp+68h] [bp-Ch]@1
  char v37; // [sp+6Ch] [bp-8h]@1

  v34 = &v23;
  v32 = &v37;
  v30 = sub_6F962A50;
  v31 = &word_6F96C3B2;
  v33 = &loc_6F9130DA;
  sub_6F8A1A60((int *)&v28);
  v3 = *(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 8);
  v29 = -1;
  *(_WORD *)(a3 + 36) = v3(a2, v23);
  *(_WORD *)(a3 + 38) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 20) = 0;
  v4 = *(_DWORD *)a2;
  *(_DWORD *)(a3 + 28) = 0;
  *(_BYTE *)(a3 + 164) = 1;
  v24 = a2;
  (*(void (__thiscall **)(int *))(v4 + 16))(&v36);
  v27 = *(_DWORD *)(v36 - 12);
  v29 = 1;
  v26 = sub_6F961B40(v27 + 1);
  sub_6F8BD380(&v36, v26, v27, 0);
  v5 = v26;
  v6 = v27;
  *((_BYTE *)v26 + v27) = 0;
  *(_DWORD *)(a3 + 8) = v5;
  v7 = v36;
  *(_DWORD *)(a3 + 12) = v6;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v7 - 12), (int)&v35);
  v8 = *(_DWORD *)a2;
  v23 = a2;
  v9 = *(void (__thiscall **)(int *, int))(v8 + 20);
  v29 = -1;
  v9(&v36, a2);
  v10 = *(_DWORD *)(v36 - 12);
  v27 = v10;
  v11 = v10 + 1;
  if ( v11 > 0x3FFFFFFE )
  {
    v29 = 2;
    sub_6F962910();
  }
  v26 = (void *)(2 * v11);
  v29 = 2;
  v25 = sub_6F961B40(2 * v11);
  sub_6F8BC4A0(&v36, v25, v27, 0);
  v12 = v25;
  *(_WORD *)((char *)v26 + (_DWORD)v25 - 2) = 0;
  v13 = v27;
  *(_DWORD *)(a3 + 20) = v12;
  v14 = v36;
  *(_DWORD *)(a3 + 24) = v13;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v14 - 12), (int)&v35);
  v15 = *(_DWORD *)a2;
  v23 = a2;
  v16 = *(void (__thiscall **)(int *, int))(v15 + 24);
  v29 = -1;
  v16(&v36, a2);
  v17 = *(_DWORD *)(v36 - 12);
  v27 = v17;
  v18 = v17 + 1;
  if ( v18 > 0x3FFFFFFE )
  {
    v29 = 3;
    sub_6F962910();
  }
  v26 = (void *)(2 * v18);
  v29 = 3;
  v25 = sub_6F961B40(2 * v18);
  sub_6F8BC4A0(&v36, v25, v27, 0);
  v19 = v25;
  *(_WORD *)((char *)v26 + (_DWORD)v25 - 2) = 0;
  v20 = v27;
  *(_DWORD *)(a3 + 28) = v19;
  v21 = v36;
  *(_DWORD *)(a3 + 32) = v20;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F8FD6A0((void *)(v21 - 12), (int)&v35);
    result = sub_6F8A1AD0((int *)&v28);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v28);
  }
  return result;
}
