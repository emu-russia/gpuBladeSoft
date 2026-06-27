void __cdecl __noreturn sub_6F8B8A40(void (*a1)(void))
{
  int v1; // [sp+0h] [bp-5Ch]@1
  char v2; // [sp+1Ch] [bp-40h]@1
  int v3; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v4)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v5; // [sp+38h] [bp-24h]@1
  char *v6; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v7)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v8; // [sp+44h] [bp-18h]@1
  char v9; // [sp+50h] [bp-Ch]@1

  v4 = sub_6F962A50;
  v6 = &v9;
  v5 = dword_6F96A9B0;
  v7 = sub_6F8B8A85;
  v8 = &v1;
  sub_6F8A1A60((int *)&v2);
  v3 = 1;
  a1();
  abort();
}
