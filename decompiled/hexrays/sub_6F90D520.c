int __thiscall sub_6F90D520(_DWORD *this, const char *a2)
{
  _DWORD *v2; // eax@1
  int v4; // [sp+0h] [bp-68h]@1
  _DWORD *v5; // [sp+18h] [bp-50h]@1
  char v6; // [sp+1Ch] [bp-4Ch]@1
  int v7; // [sp+20h] [bp-48h]@1
  int (__cdecl *v8)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-34h]@1
  int *v9; // [sp+38h] [bp-30h]@1
  char *v10; // [sp+3Ch] [bp-2Ch]@1
  int (*v11)(); // [sp+40h] [bp-28h]@1
  int *v12; // [sp+44h] [bp-24h]@1
  char v13; // [sp+5Fh] [bp-9h]@1
  char v14; // [sp+60h] [bp-8h]@1

  v5 = this;
  v10 = &v14;
  v8 = sub_6F962A50;
  v9 = &dword_6F96C298;
  v11 = sub_6F90D589;
  v12 = &v4;
  sub_6F8A1A60((int *)&v6);
  v2 = v5;
  *v5 = off_6FBB0288;
  v7 = 1;
  sub_6F909D30(v2 + 1, a2, (int)&v13);
  return sub_6F8A1AD0((int *)&v6);
}
