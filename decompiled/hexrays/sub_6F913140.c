int __cdecl sub_6F913140(int a1, int a2, int a3)
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
  int v19; // [sp+Ch] [bp-78h]@1
  int v20; // [sp+10h] [bp-74h]@1
  void *v21; // [sp+1Ch] [bp-68h]@4
  void *v22; // [sp+20h] [bp-64h]@1
  size_t v23; // [sp+24h] [bp-60h]@1
  char v24; // [sp+28h] [bp-5Ch]@1
  int v25; // [sp+2Ch] [bp-58h]@1
  int (__cdecl *v26)(int, int, __int64, void (**)(void), int *); // [sp+40h] [bp-44h]@1
  __int16 *v27; // [sp+44h] [bp-40h]@1
  char *v28; // [sp+48h] [bp-3Ch]@1
  void *v29; // [sp+4Ch] [bp-38h]@1
  int *v30; // [sp+50h] [bp-34h]@1
  char *v31; // [sp+64h] [bp-20h]@1
  size_t v32; // [sp+68h] [bp-1Ch]@1
  char v33; // [sp+6Ch] [bp-18h]@1
  char v34; // [sp+7Ch] [bp-8h]@1

  v30 = &v19;
  v28 = &v34;
  v26 = sub_6F962A50;
  v27 = &word_6F96B212;
  v29 = &loc_6F91335E;
  sub_6F8A1A60((int *)&v24);
  v3 = *(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 8);
  v25 = -1;
  *(_WORD *)(a3 + 36) = v3(a2, v19);
  *(_WORD *)(a3 + 38) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2);
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 20) = 0;
  v4 = *(_DWORD *)a2;
  *(_DWORD *)(a3 + 28) = 0;
  *(_BYTE *)(a3 + 164) = 1;
  v20 = a2;
  (*(void (__thiscall **)(int *))(v4 + 16))((int *)&v31);
  v23 = v32;
  v25 = 1;
  v22 = sub_6F961B40(v32 + 1);
  sub_6F8C7150((int)&v31, v22, v23, 0);
  v5 = v23;
  v6 = v22;
  *(_DWORD *)(a3 + 12) = v23;
  v6[v5] = 0;
  v7 = v31;
  *(_DWORD *)(a3 + 8) = v6;
  if ( v7 != &v33 )
    j_free_1(v7);
  v8 = *(_DWORD *)a2;
  v19 = a2;
  v9 = *(void (__thiscall **)(char **, int))(v8 + 20);
  v25 = -1;
  v9(&v31, a2);
  v23 = v32;
  v10 = v32 + 1;
  if ( v32 + 1 > 0x3FFFFFFE )
  {
    v25 = 2;
    sub_6F962910();
  }
  v22 = (void *)(2 * v10);
  v25 = 2;
  v21 = sub_6F961B40(2 * v10);
  sub_6F8C7F00((int)&v31, v21, v23, 0);
  v11 = v21;
  *(_WORD *)((char *)v22 + (_DWORD)v21 - 2) = 0;
  v12 = v23;
  *(_DWORD *)(a3 + 20) = v11;
  *(_DWORD *)(a3 + 24) = v12;
  if ( v31 != &v33 )
    j_free_1(v31);
  v13 = *(_DWORD *)a2;
  v19 = a2;
  v14 = *(void (__thiscall **)(char **, int))(v13 + 24);
  v25 = -1;
  v14(&v31, a2);
  v23 = v32;
  v15 = v32 + 1;
  if ( v32 + 1 > 0x3FFFFFFE )
  {
    v25 = 3;
    sub_6F962910();
  }
  v22 = (void *)(2 * v15);
  v25 = 3;
  v21 = sub_6F961B40(2 * v15);
  sub_6F8C7F00((int)&v31, v21, v23, 0);
  v16 = v21;
  *(_WORD *)((char *)v22 + (_DWORD)v21 - 2) = 0;
  v17 = v23;
  *(_DWORD *)(a3 + 28) = v16;
  *(_DWORD *)(a3 + 32) = v17;
  if ( v31 != &v33 )
    j_free_1(v31);
  return sub_6F8A1AD0((int *)&v24);
}
