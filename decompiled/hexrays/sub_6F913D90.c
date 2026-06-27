int __cdecl sub_6F913D90(int a1, int a2, int a3)
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
  int v18; // eax@7
  void (__thiscall *v19)(char **, int); // eax@7
  size_t v20; // eax@7
  _BYTE *v21; // ecx@7
  char *v22; // eax@7
  int (__thiscall *v23)(int); // eax@9
  int v25; // [sp+10h] [bp-78h]@1
  int v26; // [sp+14h] [bp-74h]@1
  void *v27; // [sp+24h] [bp-64h]@1
  size_t v28; // [sp+28h] [bp-60h]@1
  char v29; // [sp+2Ch] [bp-5Ch]@1
  int v30; // [sp+30h] [bp-58h]@1
  int (__cdecl *v31)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v32; // [sp+48h] [bp-40h]@1
  char *v33; // [sp+4Ch] [bp-3Ch]@1
  int (*v34)(); // [sp+50h] [bp-38h]@1
  int *v35; // [sp+54h] [bp-34h]@1
  char *v36; // [sp+68h] [bp-20h]@1
  size_t v37; // [sp+6Ch] [bp-1Ch]@1
  char v38; // [sp+70h] [bp-18h]@1
  char v39; // [sp+80h] [bp-8h]@1

  v35 = &v25;
  v33 = &v39;
  v31 = sub_6F962A50;
  v32 = dword_6F96B228;
  v34 = sub_6F91403A;
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
  (*(void (__thiscall **)(int *))(v4 + 16))((int *)&v36);
  v28 = v37;
  v30 = 1;
  v27 = sub_6F961B40(v37 + 1);
  sub_6F8C7150((int)&v36, v27, v28, 0);
  v5 = v28;
  v6 = v27;
  *(_DWORD *)(a3 + 12) = v28;
  v6[v5] = 0;
  v7 = v36;
  *(_DWORD *)(a3 + 8) = v6;
  if ( v7 != &v38 )
    j_free_1(v7);
  v8 = *(_DWORD *)a2;
  v25 = a2;
  v9 = *(void (__thiscall **)(char **, int))(v8 + 20);
  v30 = -1;
  v9(&v36, a2);
  v28 = v37;
  v30 = 2;
  v27 = sub_6F961B40(v37 + 1);
  sub_6F8C7150((int)&v36, v27, v28, 0);
  v10 = v28;
  v11 = v27;
  *(_DWORD *)(a3 + 24) = v28;
  v11[v10] = 0;
  v12 = v36;
  *(_DWORD *)(a3 + 20) = v11;
  if ( v12 != &v38 )
    j_free_1(v12);
  v13 = *(_DWORD *)a2;
  v25 = a2;
  v14 = *(void (__thiscall **)(char **, int))(v13 + 24);
  v30 = -1;
  v14(&v36, a2);
  v28 = v37;
  v30 = 3;
  v27 = sub_6F961B40(v37 + 1);
  sub_6F8C7150((int)&v36, v27, v28, 0);
  v15 = v28;
  v16 = v27;
  *(_DWORD *)(a3 + 32) = v28;
  v16[v15] = 0;
  v17 = v36;
  *(_DWORD *)(a3 + 28) = v16;
  if ( v17 != &v38 )
    j_free_1(v17);
  v18 = *(_DWORD *)a2;
  v25 = a2;
  v19 = *(void (__thiscall **)(char **, int))(v18 + 28);
  v30 = -1;
  v19(&v36, a2);
  v28 = v37;
  v30 = 4;
  v27 = sub_6F961B40(v37 + 1);
  sub_6F8C7150((int)&v36, v27, v28, 0);
  v20 = v28;
  v21 = v27;
  *(_DWORD *)(a3 + 40) = v28;
  v21[v20] = 0;
  v22 = v36;
  *(_DWORD *)(a3 + 36) = v21;
  if ( v22 != &v38 )
    j_free_1(v22);
  v23 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 36);
  v30 = -1;
  *(_DWORD *)(a3 + 48) = v23(a2);
  *(_DWORD *)(a3 + 52) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2);
  return sub_6F8A1AD0((int *)&v29);
}
