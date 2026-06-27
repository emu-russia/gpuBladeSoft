int __cdecl sub_6F912C10(int a1, int a2, int a3)
{
  int (__thiscall *v3)(int, int); // eax@1
  int v4; // eax@1
  size_t v5; // eax@1
  _BYTE *v6; // ecx@1
  char *v7; // eax@1
  int v8; // eax@3
  void (__thiscall *v9)(char **, int); // eax@3
  size_t v10; // eax@3
  _BYTE *v11; // ecx@3
  char *v12; // eax@3
  int v13; // eax@5
  void (__thiscall *v14)(char **, int); // eax@5
  size_t v15; // eax@5
  _BYTE *v16; // ecx@5
  char *v17; // eax@5
  int v19; // [sp+Ch] [bp-78h]@1
  int v20; // [sp+10h] [bp-74h]@1
  void *v21; // [sp+20h] [bp-64h]@1
  size_t v22; // [sp+24h] [bp-60h]@1
  char v23; // [sp+28h] [bp-5Ch]@1
  int v24; // [sp+2Ch] [bp-58h]@1
  int (__cdecl *v25)(int, int, __int64, void (**)(void), int *); // [sp+40h] [bp-44h]@1
  int *v26; // [sp+44h] [bp-40h]@1
  char *v27; // [sp+48h] [bp-3Ch]@1
  int (*v28)(); // [sp+4Ch] [bp-38h]@1
  int *v29; // [sp+50h] [bp-34h]@1
  char *v30; // [sp+64h] [bp-20h]@1
  size_t v31; // [sp+68h] [bp-1Ch]@1
  char v32; // [sp+6Ch] [bp-18h]@1
  char v33; // [sp+7Ch] [bp-8h]@1

  v29 = &v19;
  v27 = &v33;
  v25 = sub_6F962A50;
  v26 = dword_6F96B208;
  v28 = sub_6F912DFB;
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
  (*(void (__thiscall **)(int *))(v4 + 16))((int *)&v30);
  v22 = v31;
  v24 = 1;
  v21 = sub_6F961B40(v31 + 1);
  sub_6F8C7150((int)&v30, v21, v22, 0);
  v5 = v22;
  v6 = v21;
  *(_DWORD *)(a3 + 12) = v22;
  v6[v5] = 0;
  v7 = v30;
  *(_DWORD *)(a3 + 8) = v6;
  if ( v7 != &v32 )
    j_free_1(v7);
  v8 = *(_DWORD *)a2;
  v19 = a2;
  v9 = *(void (__thiscall **)(char **, int))(v8 + 20);
  v24 = -1;
  v9(&v30, a2);
  v22 = v31;
  v24 = 2;
  v21 = sub_6F961B40(v31 + 1);
  sub_6F8C7150((int)&v30, v21, v22, 0);
  v10 = v22;
  v11 = v21;
  *(_DWORD *)(a3 + 24) = v22;
  v11[v10] = 0;
  v12 = v30;
  *(_DWORD *)(a3 + 20) = v11;
  if ( v12 != &v32 )
    j_free_1(v12);
  v13 = *(_DWORD *)a2;
  v19 = a2;
  v14 = *(void (__thiscall **)(char **, int))(v13 + 24);
  v24 = -1;
  v14(&v30, a2);
  v22 = v31;
  v24 = 3;
  v21 = sub_6F961B40(v31 + 1);
  sub_6F8C7150((int)&v30, v21, v22, 0);
  v15 = v22;
  v16 = v21;
  *(_DWORD *)(a3 + 32) = v22;
  v16[v15] = 0;
  v17 = v30;
  *(_DWORD *)(a3 + 28) = v16;
  if ( v17 != &v32 )
    j_free_1(v17);
  return sub_6F8A1AD0((int *)&v23);
}
