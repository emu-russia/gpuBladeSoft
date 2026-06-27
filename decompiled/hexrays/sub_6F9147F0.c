int __cdecl sub_6F9147F0(int a1, int a2, int a3)
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
  int v22; // eax@9
  void (__thiscall *v23)(int *, int); // eax@9
  size_t v24; // eax@9
  unsigned int v25; // eax@9
  void *v26; // ecx@10
  size_t v27; // edx@10
  int v28; // ecx@10
  int (__thiscall *v29)(int); // eax@12
  int v31; // [sp+10h] [bp-68h]@1
  int v32; // [sp+14h] [bp-64h]@1
  void *v33; // [sp+20h] [bp-58h]@4
  void *v34; // [sp+24h] [bp-54h]@1
  size_t v35; // [sp+28h] [bp-50h]@1
  char v36; // [sp+2Ch] [bp-4Ch]@1
  int v37; // [sp+30h] [bp-48h]@1
  int (__cdecl *v38)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-34h]@1
  int *v39; // [sp+48h] [bp-30h]@1
  char *v40; // [sp+4Ch] [bp-2Ch]@1
  void *v41; // [sp+50h] [bp-28h]@1
  int *v42; // [sp+54h] [bp-24h]@1
  char v43; // [sp+6Bh] [bp-Dh]@2
  int v44; // [sp+6Ch] [bp-Ch]@1
  char v45; // [sp+70h] [bp-8h]@1

  v42 = &v31;
  v40 = &v45;
  v38 = sub_6F962A50;
  v39 = dword_6F96C3E0;
  v41 = &loc_6F914B8E;
  sub_6F8A1A60((int *)&v36);
  v3 = *(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 8);
  v37 = -1;
  *(_WORD *)(a3 + 18) = v3(a2, v31);
  *(_WORD *)(a3 + 20) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  *(_DWORD *)(a3 + 48) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 24) = 0;
  *(_DWORD *)(a3 + 32) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_BYTE *)(a3 + 82) = 1;
  v4 = *(_DWORD *)a2;
  v32 = a2;
  (*(void (__thiscall **)(int *))(v4 + 16))(&v44);
  v35 = *(_DWORD *)(v44 - 12);
  v37 = 1;
  v34 = sub_6F961B40(v35 + 1);
  sub_6F8BD380(&v44, v34, v35, 0);
  v5 = v34;
  v6 = v35;
  *((_BYTE *)v34 + v35) = 0;
  *(_DWORD *)(a3 + 8) = v5;
  v7 = v44;
  *(_DWORD *)(a3 + 12) = v6;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v7 - 12), (int)&v43);
  v8 = *(_DWORD *)a2;
  v31 = a2;
  v9 = *(void (__thiscall **)(int *, int))(v8 + 20);
  v37 = -1;
  v9(&v44, a2);
  v10 = *(_DWORD *)(v44 - 12);
  v35 = v10;
  v11 = v10 + 1;
  if ( v11 > 0x3FFFFFFE )
  {
    v37 = 2;
    sub_6F962910();
  }
  v34 = (void *)(2 * v11);
  v37 = 2;
  v33 = sub_6F961B40(2 * v11);
  sub_6F8BC4A0(&v44, v33, v35, 0);
  v12 = v33;
  *(_WORD *)((char *)v34 + (_DWORD)v33 - 2) = 0;
  v13 = v35;
  *(_DWORD *)(a3 + 24) = v12;
  v14 = v44;
  *(_DWORD *)(a3 + 28) = v13;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v14 - 12), (int)&v43);
  v15 = *(_DWORD *)a2;
  v31 = a2;
  v16 = *(void (__thiscall **)(int *, int))(v15 + 24);
  v37 = -1;
  v16(&v44, a2);
  v17 = *(_DWORD *)(v44 - 12);
  v35 = v17;
  v18 = v17 + 1;
  if ( v18 > 0x3FFFFFFE )
  {
    v37 = 3;
    sub_6F962910();
  }
  v34 = (void *)(2 * v18);
  v37 = 3;
  v33 = sub_6F961B40(2 * v18);
  sub_6F8BC4A0(&v44, v33, v35, 0);
  v19 = v33;
  *(_WORD *)((char *)v34 + (_DWORD)v33 - 2) = 0;
  v20 = v35;
  *(_DWORD *)(a3 + 32) = v19;
  v21 = v44;
  *(_DWORD *)(a3 + 36) = v20;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v21 - 12), (int)&v43);
  v22 = *(_DWORD *)a2;
  v31 = a2;
  v23 = *(void (__thiscall **)(int *, int))(v22 + 28);
  v37 = -1;
  v23(&v44, a2);
  v24 = *(_DWORD *)(v44 - 12);
  v35 = v24;
  v25 = v24 + 1;
  if ( v25 > 0x3FFFFFFE )
  {
    v37 = 4;
    sub_6F962910();
  }
  v34 = (void *)(2 * v25);
  v37 = 4;
  v33 = sub_6F961B40(2 * v25);
  sub_6F8BC4A0(&v44, v33, v35, 0);
  v26 = v33;
  *(_WORD *)((char *)v34 + (_DWORD)v33 - 2) = 0;
  v27 = v35;
  *(_DWORD *)(a3 + 40) = v26;
  v28 = v44;
  *(_DWORD *)(a3 + 44) = v27;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v28 - 12), (int)&v43);
  v29 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 36);
  v37 = -1;
  *(_DWORD *)(a3 + 52) = v29(a2);
  *(_DWORD *)(a3 + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2);
  return sub_6F8A1AD0((int *)&v36);
}
