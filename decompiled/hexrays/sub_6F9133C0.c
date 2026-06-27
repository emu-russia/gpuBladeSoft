int __cdecl sub_6F9133C0(int a1, int a2, int a3)
{
  int (__thiscall *v3)(int, int); // eax@1
  int v4; // eax@1
  void *v5; // ecx@1
  size_t v6; // eax@1
  int v7; // ecx@1
  int v8; // eax@3
  void (__thiscall *v9)(int *, int); // eax@3
  void *v10; // ecx@3
  size_t v11; // eax@3
  int v12; // ecx@3
  int v13; // eax@5
  void (__thiscall *v14)(int *, int); // eax@5
  void *v15; // ecx@5
  size_t v16; // eax@5
  int v17; // ecx@5
  int v18; // eax@7
  void (__thiscall *v19)(int *, int); // eax@7
  void *v20; // ecx@7
  size_t v21; // eax@7
  int v22; // ecx@7
  int (__thiscall *v23)(int); // eax@9
  int v25; // [sp+10h] [bp-68h]@1
  int v26; // [sp+14h] [bp-64h]@1
  void *v27; // [sp+24h] [bp-54h]@1
  size_t v28; // [sp+28h] [bp-50h]@1
  char v29; // [sp+2Ch] [bp-4Ch]@1
  int v30; // [sp+30h] [bp-48h]@1
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-34h]@1
  int *v32; // [sp+48h] [bp-30h]@1
  char *v33; // [sp+4Ch] [bp-2Ch]@1
  int (*v34)(); // [sp+50h] [bp-28h]@1
  int *v35; // [sp+54h] [bp-24h]@1
  char v36; // [sp+6Bh] [bp-Dh]@2
  int v37; // [sp+6Ch] [bp-Ch]@1
  char v38; // [sp+70h] [bp-8h]@1

  v35 = &v25;
  v33 = &v38;
  v31 = sub_6F962A50;
  v32 = dword_6F96C3D4;
  v34 = sub_6F9136E6;
  sub_6F8A1A60((int *)&v29);
  v3 = *(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 8);
  v30 = -1;
  *(_BYTE *)(a3 + 17) = v3(a2, v25);
  *(_BYTE *)(a3 + 18) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  *(_DWORD *)(a3 + 44) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 28) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  *(_BYTE *)(a3 + 67) = 1;
  v4 = *(_DWORD *)a2;
  v26 = a2;
  (*(void (__thiscall **)(int *))(v4 + 16))(&v37);
  v28 = *(_DWORD *)(v37 - 12);
  v30 = 1;
  v27 = sub_6F961B40(v28 + 1);
  sub_6F8BD380(&v37, v27, v28, 0);
  v5 = v27;
  v6 = v28;
  *((_BYTE *)v27 + v28) = 0;
  *(_DWORD *)(a3 + 8) = v5;
  v7 = v37;
  *(_DWORD *)(a3 + 12) = v6;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v7 - 12), (int)&v36);
  v8 = *(_DWORD *)a2;
  v25 = a2;
  v9 = *(void (__thiscall **)(int *, int))(v8 + 20);
  v30 = -1;
  v9(&v37, a2);
  v28 = *(_DWORD *)(v37 - 12);
  v30 = 2;
  v27 = sub_6F961B40(v28 + 1);
  sub_6F8BD380(&v37, v27, v28, 0);
  v10 = v27;
  v11 = v28;
  *((_BYTE *)v27 + v28) = 0;
  *(_DWORD *)(a3 + 20) = v10;
  v12 = v37;
  *(_DWORD *)(a3 + 24) = v11;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v12 - 12), (int)&v36);
  v13 = *(_DWORD *)a2;
  v25 = a2;
  v14 = *(void (__thiscall **)(int *, int))(v13 + 24);
  v30 = -1;
  v14(&v37, a2);
  v28 = *(_DWORD *)(v37 - 12);
  v30 = 3;
  v27 = sub_6F961B40(v28 + 1);
  sub_6F8BD380(&v37, v27, v28, 0);
  v15 = v27;
  v16 = v28;
  *((_BYTE *)v27 + v28) = 0;
  *(_DWORD *)(a3 + 28) = v15;
  v17 = v37;
  *(_DWORD *)(a3 + 32) = v16;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v17 - 12), (int)&v36);
  v18 = *(_DWORD *)a2;
  v25 = a2;
  v19 = *(void (__thiscall **)(int *, int))(v18 + 28);
  v30 = -1;
  v19(&v37, a2);
  v28 = *(_DWORD *)(v37 - 12);
  v30 = 4;
  v27 = sub_6F961B40(v28 + 1);
  sub_6F8BD380(&v37, v27, v28, 0);
  v20 = v27;
  v21 = v28;
  *((_BYTE *)v27 + v28) = 0;
  *(_DWORD *)(a3 + 36) = v20;
  v22 = v37;
  *(_DWORD *)(a3 + 40) = v21;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v22 - 12), (int)&v36);
  v23 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 36);
  v30 = -1;
  *(_DWORD *)(a3 + 48) = v23(a2);
  *(_DWORD *)(a3 + 52) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2);
  return sub_6F8A1AD0((int *)&v29);
}
