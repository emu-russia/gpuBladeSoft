int __cdecl sub_6F911E80(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax@1
  void (__thiscall *v9)(char **, _DWORD *, int, int, int, char **); // eax@1
  void (__cdecl *v10)(int); // eax@1
  _DWORD *v12; // [sp+14h] [bp-98h]@1
  int v13; // [sp+18h] [bp-94h]@1
  int v14; // [sp+1Ch] [bp-90h]@1
  int v15; // [sp+20h] [bp-8Ch]@1
  int *v16; // [sp+24h] [bp-88h]@1
  char v17; // [sp+40h] [bp-6Ch]@1
  int v18; // [sp+44h] [bp-68h]@1
  int (__cdecl *v19)(int, int, __int64, void (**)(void), int *); // [sp+58h] [bp-54h]@1
  int *v20; // [sp+5Ch] [bp-50h]@1
  char *v21; // [sp+60h] [bp-4Ch]@1
  int (*v22)(); // [sp+64h] [bp-48h]@1
  int *v23; // [sp+68h] [bp-44h]@1
  char *v24; // [sp+74h] [bp-38h]@1
  char v25; // [sp+7Ch] [bp-30h]@1
  char *v26; // [sp+8Ch] [bp-20h]@1
  int v27; // [sp+90h] [bp-1Ch]@3
  char v28; // [sp+94h] [bp-18h]@3
  char v29; // [sp+A4h] [bp-8h]@1

  v23 = (int *)&v12;
  v21 = &v29;
  v19 = sub_6F962A50;
  v20 = dword_6F96B26C;
  v22 = sub_6F911FA1;
  sub_6F8A1A60((int *)&v17);
  v24 = &v25;
  LOBYTE(v14) = 0;
  v18 = -1;
  sub_6F93D440((void **)&v24, (const void *)a7, a7 + 2 * a8, v14);
  v8 = *a2;
  v16 = (int *)&v24;
  v15 = a6;
  v14 = a5;
  v13 = a4;
  v12 = a2;
  v9 = *(void (__thiscall **)(char **, _DWORD *, int, int, int, char **))(v8 + 12);
  v18 = 1;
  v9(&v26, a2, a4, a5, a6, &v24);
  v10 = *(void (__cdecl **)(int))(a3 + 24);
  if ( v10 )
  {
    v18 = 2;
    v10(a3);
  }
  *(_DWORD *)a3 = a3 + 8;
  LOBYTE(v14) = 0;
  v18 = 2;
  sub_6F93D4F0((void **)a3, v26, (int)&v26[2 * v27], v14);
  *(_DWORD *)(a3 + 24) = sub_6F9119A0;
  if ( v26 != &v28 )
    j_free_1(v26);
  if ( v24 != &v25 )
    j_free_1(v24);
  return sub_6F8A1AD0((int *)&v17);
}
