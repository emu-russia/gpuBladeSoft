int __cdecl sub_6F912830(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  void (__thiscall *v6)(char **, _DWORD *, int, int); // eax@1
  void (__cdecl *v7)(int); // eax@1
  _DWORD *v9; // [sp+Ch] [bp-78h]@1
  int v10; // [sp+10h] [bp-74h]@1
  int v11; // [sp+14h] [bp-70h]@1
  char v12; // [sp+28h] [bp-5Ch]@1
  int v13; // [sp+2Ch] [bp-58h]@1
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+40h] [bp-44h]@1
  __int16 *v15; // [sp+44h] [bp-40h]@1
  char *v16; // [sp+48h] [bp-3Ch]@1
  int (*v17)(); // [sp+4Ch] [bp-38h]@1
  int *v18; // [sp+50h] [bp-34h]@1
  char *v19; // [sp+64h] [bp-20h]@1
  int v20; // [sp+68h] [bp-1Ch]@3
  char v21; // [sp+6Ch] [bp-18h]@3
  char v22; // [sp+7Ch] [bp-8h]@1

  v18 = (int *)&v9;
  v16 = &v22;
  v14 = sub_6F962A50;
  v15 = &word_6F96B222;
  v17 = sub_6F9128FE;
  sub_6F8A1A60((int *)&v12);
  v5 = *a2;
  v11 = a5;
  v10 = a4;
  v9 = a2;
  v6 = *(void (__thiscall **)(char **, _DWORD *, int, int))(v5 + 12);
  v13 = -1;
  v6(&v19, a2, a4, a5);
  v7 = *(void (__cdecl **)(int))(a3 + 24);
  if ( v7 )
  {
    v13 = 1;
    v7(a3);
  }
  *(_DWORD *)a3 = a3 + 8;
  LOBYTE(v11) = 0;
  v13 = 1;
  sub_6F93D4F0((void **)a3, v19, (int)&v19[2 * v20], v11);
  *(_DWORD *)(a3 + 24) = sub_6F9119A0;
  if ( v19 != &v21 )
    j_free_1(v19);
  return sub_6F8A1AD0((int *)&v12);
}
