int __cdecl sub_6F9120E0(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // eax@1
  int (__thiscall *v6)(int *, char **, int); // eax@1
  int *v8; // [sp+8h] [bp-78h]@1
  int v9; // [sp+Ch] [bp-74h]@1
  int v10[4]; // [sp+10h] [bp-70h]@1
  int v11; // [sp+20h] [bp-60h]@1
  char v12; // [sp+24h] [bp-5Ch]@1
  int v13; // [sp+28h] [bp-58h]@1
  int (__cdecl *v14)(int, int, __int64, void (**)(void), int *); // [sp+3Ch] [bp-44h]@1
  int *v15; // [sp+40h] [bp-40h]@1
  char *v16; // [sp+44h] [bp-3Ch]@1
  int (*v17)(); // [sp+48h] [bp-38h]@1
  int *v18; // [sp+4Ch] [bp-34h]@1
  char *v19; // [sp+60h] [bp-20h]@1
  char v20; // [sp+68h] [bp-18h]@1
  char v21; // [sp+78h] [bp-8h]@1

  v18 = (int *)&v8;
  v16 = &v21;
  v14 = sub_6F962A50;
  v15 = &dword_6F96B258;
  v17 = sub_6F912185;
  sub_6F8A1A60((int *)&v12);
  v19 = &v20;
  LOBYTE(v10[0]) = 0;
  v13 = -1;
  sub_6F93A600((int)&v19, (_BYTE *)a3, (_BYTE *)(a4 + a3), v10[0]);
  v5 = *a2;
  v9 = a5;
  v8 = (int *)&v19;
  v6 = *(int (__thiscall **)(int *, char **, int))(v5 + 8);
  v13 = 1;
  v11 = v6(a2, &v19, a5);
  if ( v19 != &v20 )
    j_free_1(v19);
  sub_6F8A1AD0((int *)&v12);
  return v11;
}
