signed __int64 sub_6F935480()
{
  signed __int64 v0; // ST10_8@1
  char v2; // [sp+1Ch] [bp-60h]@1
  int v3; // [sp+20h] [bp-5Ch]@1
  int (__cdecl *v4)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-48h]@1
  int *v5; // [sp+38h] [bp-44h]@1
  int v6; // [sp+58h] [bp-24h]@1
  int v7; // [sp+5Ch] [bp-20h]@1

  v4 = sub_6F962A50;
  v5 = &dword_6F96B304;
  sub_6F8A1A60((int *)&v2);
  v3 = 0;
  sub_6F8A2750(1000, (int)&v6, 0);
  v0 = 1000 * (1000000i64 * v6 + v7);
  sub_6F8A1AD0((int *)&v2);
  return v0;
}
