int __cdecl sub_6F912970(int a1, int a2, int a3)
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
  int result; // eax@6
  int v19; // [sp+Ch] [bp-68h]@1
  int v20; // [sp+10h] [bp-64h]@1
  void *v21; // [sp+20h] [bp-54h]@1
  size_t v22; // [sp+24h] [bp-50h]@1
  char v23; // [sp+28h] [bp-4Ch]@1
  int v24; // [sp+2Ch] [bp-48h]@1
  int (__cdecl *v25)(int, int, __int64, void (**)(void), int *); // [sp+40h] [bp-34h]@1
  int *v26; // [sp+44h] [bp-30h]@1
  char *v27; // [sp+48h] [bp-2Ch]@1
  int (*v28)(); // [sp+4Ch] [bp-28h]@1
  int *v29; // [sp+50h] [bp-24h]@1
  char v30; // [sp+67h] [bp-Dh]@2
  int v31; // [sp+68h] [bp-Ch]@1
  char v32; // [sp+6Ch] [bp-8h]@1

  v29 = &v19;
  v27 = &v32;
  v25 = sub_6F962A50;
  v26 = dword_6F96C3A8;
  v28 = sub_6F912BC6;
  sub_6F8A1A60((int *)&v23);
  v3 = *(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 8);
  v24 = -1;
  *(_BYTE *)(a3 + 36) = v3(a2, v19);
  *(_BYTE *)(a3 + 37) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 28) = 0;
  *(_BYTE *)(a3 + 100) = 1;
  v4 = *(_DWORD *)a2;
  v20 = a2;
  (*(void (__thiscall **)(int *))(v4 + 16))(&v31);
  v22 = *(_DWORD *)(v31 - 12);
  v24 = 1;
  v21 = sub_6F961B40(v22 + 1);
  sub_6F8BD380(&v31, v21, v22, 0);
  v5 = v21;
  v6 = v22;
  *((_BYTE *)v21 + v22) = 0;
  *(_DWORD *)(a3 + 8) = v5;
  v7 = v31;
  *(_DWORD *)(a3 + 12) = v6;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v7 - 12), (int)&v30);
  v8 = *(_DWORD *)a2;
  v19 = a2;
  v9 = *(void (__thiscall **)(int *, int))(v8 + 20);
  v24 = -1;
  v9(&v31, a2);
  v22 = *(_DWORD *)(v31 - 12);
  v24 = 2;
  v21 = sub_6F961B40(v22 + 1);
  sub_6F8BD380(&v31, v21, v22, 0);
  v10 = v21;
  v11 = v22;
  *((_BYTE *)v21 + v22) = 0;
  *(_DWORD *)(a3 + 20) = v10;
  v12 = v31;
  *(_DWORD *)(a3 + 24) = v11;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)(v12 - 12), (int)&v30);
  v13 = *(_DWORD *)a2;
  v19 = a2;
  v14 = *(void (__thiscall **)(int *, int))(v13 + 24);
  v24 = -1;
  v14(&v31, a2);
  v22 = *(_DWORD *)(v31 - 12);
  v24 = 3;
  v21 = sub_6F961B40(v22 + 1);
  sub_6F8BD380(&v31, v21, v22, 0);
  v15 = v21;
  v16 = v22;
  *((_BYTE *)v21 + v22) = 0;
  *(_DWORD *)(a3 + 28) = v15;
  v17 = v31;
  *(_DWORD *)(a3 + 32) = v16;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F9086D0((void *)(v17 - 12), (int)&v30);
    result = sub_6F8A1AD0((int *)&v23);
  }
  else
  {
    result = sub_6F8A1AD0((int *)&v23);
  }
  return result;
}
