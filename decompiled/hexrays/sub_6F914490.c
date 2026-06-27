int __cdecl sub_6F914490(int a1, int a2, int a3)
{
  int (__thiscall *v3)(int, int); // eax@1
  int v4; // eax@1
  size_t v5; // eax@1
  _BYTE *v6; // ecx@1
  char *v7; // eax@1
  int v8; // eax@3
  void (__thiscall *v9)(char **, int); // eax@3
  int v10; // eax@3
  void *v11; // ecx@4
  size_t v12; // edx@4
  int v13; // eax@6
  void (__thiscall *v14)(char **, int); // eax@6
  int v15; // eax@6
  void *v16; // ecx@7
  size_t v17; // edx@7
  int v18; // eax@9
  void (__thiscall *v19)(char **, int); // eax@9
  int v20; // eax@9
  void *v21; // ecx@10
  size_t v22; // edx@10
  int (__thiscall *v23)(int); // eax@12
  int v25; // [sp+10h] [bp-78h]@1
  int v26; // [sp+14h] [bp-74h]@1
  void *v27; // [sp+20h] [bp-68h]@4
  void *v28; // [sp+24h] [bp-64h]@1
  size_t v29; // [sp+28h] [bp-60h]@1
  char v30; // [sp+2Ch] [bp-5Ch]@1
  int v31; // [sp+30h] [bp-58h]@1
  int (__cdecl *v32)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-44h]@1
  int *v33; // [sp+48h] [bp-40h]@1
  char *v34; // [sp+4Ch] [bp-3Ch]@1
  void *v35; // [sp+50h] [bp-38h]@1
  int *v36; // [sp+54h] [bp-34h]@1
  char *v37; // [sp+68h] [bp-20h]@1
  size_t v38; // [sp+6Ch] [bp-1Ch]@1
  char v39; // [sp+70h] [bp-18h]@1
  char v40; // [sp+80h] [bp-8h]@1

  v36 = &v25;
  v34 = &v40;
  v32 = sub_6F962A50;
  v33 = dword_6F96B24C;
  v35 = &loc_6F914781;
  sub_6F8A1A60((int *)&v30);
  v3 = *(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 8);
  v31 = -1;
  *(_WORD *)(a3 + 18) = v3(a2, v25);
  *(_WORD *)(a3 + 20) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  *(_DWORD *)(a3 + 48) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 24) = 0;
  *(_DWORD *)(a3 + 32) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_BYTE *)(a3 + 82) = 1;
  v4 = *(_DWORD *)a2;
  v26 = a2;
  (*(void (__thiscall **)(int *))(v4 + 16))((int *)&v37);
  v29 = v38;
  v31 = 1;
  v28 = sub_6F961B40(v38 + 1);
  sub_6F8C7150((int)&v37, v28, v29, 0);
  v5 = v29;
  v6 = v28;
  *(_DWORD *)(a3 + 12) = v29;
  v6[v5] = 0;
  v7 = v37;
  *(_DWORD *)(a3 + 8) = v6;
  if ( v7 != &v39 )
    j_free_1(v7);
  v8 = *(_DWORD *)a2;
  v25 = a2;
  v9 = *(void (__thiscall **)(char **, int))(v8 + 20);
  v31 = -1;
  v9(&v37, a2);
  v29 = v38;
  v10 = v38 + 1;
  if ( v38 + 1 > 0x3FFFFFFE )
  {
    v31 = 2;
    sub_6F962910();
  }
  v28 = (void *)(2 * v10);
  v31 = 2;
  v27 = sub_6F961B40(2 * v10);
  sub_6F8C7F00((int)&v37, v27, v29, 0);
  v11 = v27;
  *(_WORD *)((char *)v28 + (_DWORD)v27 - 2) = 0;
  v12 = v29;
  *(_DWORD *)(a3 + 24) = v11;
  *(_DWORD *)(a3 + 28) = v12;
  if ( v37 != &v39 )
    j_free_1(v37);
  v13 = *(_DWORD *)a2;
  v25 = a2;
  v14 = *(void (__thiscall **)(char **, int))(v13 + 24);
  v31 = -1;
  v14(&v37, a2);
  v29 = v38;
  v15 = v38 + 1;
  if ( v38 + 1 > 0x3FFFFFFE )
  {
    v31 = 3;
    sub_6F962910();
  }
  v28 = (void *)(2 * v15);
  v31 = 3;
  v27 = sub_6F961B40(2 * v15);
  sub_6F8C7F00((int)&v37, v27, v29, 0);
  v16 = v27;
  *(_WORD *)((char *)v28 + (_DWORD)v27 - 2) = 0;
  v17 = v29;
  *(_DWORD *)(a3 + 32) = v16;
  *(_DWORD *)(a3 + 36) = v17;
  if ( v37 != &v39 )
    j_free_1(v37);
  v18 = *(_DWORD *)a2;
  v25 = a2;
  v19 = *(void (__thiscall **)(char **, int))(v18 + 28);
  v31 = -1;
  v19(&v37, a2);
  v29 = v38;
  v20 = v38 + 1;
  if ( v38 + 1 > 0x3FFFFFFE )
  {
    v31 = 4;
    sub_6F962910();
  }
  v28 = (void *)(2 * v20);
  v31 = 4;
  v27 = sub_6F961B40(2 * v20);
  sub_6F8C7F00((int)&v37, v27, v29, 0);
  v21 = v27;
  *(_WORD *)((char *)v28 + (_DWORD)v27 - 2) = 0;
  v22 = v29;
  *(_DWORD *)(a3 + 40) = v21;
  *(_DWORD *)(a3 + 44) = v22;
  if ( v37 != &v39 )
    j_free_1(v37);
  v23 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 36);
  v31 = -1;
  *(_DWORD *)(a3 + 52) = v23(a2);
  *(_DWORD *)(a3 + 56) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2);
  return sub_6F8A1AD0((int *)&v30);
}
