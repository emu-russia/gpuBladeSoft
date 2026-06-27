void __cdecl __noreturn sub_6F961ED0(_QWORD *a1)
{
  void (*v1)(void); // eax@2
  int v2; // [sp+0h] [bp-8Ch]@1
  int v3; // [sp+1Ch] [bp-70h]@2
  int v4; // [sp+20h] [bp-6Ch]@2
  int v5; // [sp+24h] [bp-68h]@2
  char v6; // [sp+2Ch] [bp-60h]@1
  int v7; // [sp+30h] [bp-5Ch]@2
  int (__cdecl *v8)(int, int, __int64, void (**)(void), int *); // [sp+44h] [bp-48h]@1
  int *v9; // [sp+48h] [bp-44h]@1
  char *v10; // [sp+4Ch] [bp-40h]@1
  int (__cdecl *v11)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, char); // [sp+50h] [bp-3Ch]@1
  int *v12; // [sp+54h] [bp-38h]@1
  int v13; // [sp+70h] [bp-1Ch]@2
  char v14; // [sp+80h] [bp-Ch]@1

  v8 = sub_6F962A50;
  v10 = &v14;
  v9 = dword_6F96AA0C;
  v11 = sub_6F961F6B;
  v12 = &v2;
  sub_6F8A1A60((int *)&v6);
  sub_6F961E00(a1);
  v4 = *((_DWORD *)a1 - 4);
  v3 = *((_DWORD *)a1 - 6);
  v5 = *((_DWORD *)a1 - 9);
  v13 = *((_DWORD *)a1 - 3);
  v1 = (void (*)(void))*((_DWORD *)a1 - 10);
  v7 = 1;
  sub_6F8B8AF0(v1);
}
