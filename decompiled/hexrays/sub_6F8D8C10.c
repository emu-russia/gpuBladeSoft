int sub_6F8D8C10()
{
  int v1; // [sp+0h] [bp-5Ch]@1
  int v2; // [sp+18h] [bp-44h]@1
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v6; // [sp+38h] [bp-24h]@1
  char *v7; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v8)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v9; // [sp+44h] [bp-18h]@1
  char v10; // [sp+50h] [bp-Ch]@1

  v5 = sub_6F962A50;
  v7 = &v10;
  v6 = dword_6F96CB60;
  v8 = sub_6F8D8C6B;
  v9 = &v1;
  sub_6F8A1A60((int *)&v3);
  v4 = 1;
  v2 = ___mb_cur_max_func();
  sub_6F8A1AD0((int *)&v3);
  return v2;
}
