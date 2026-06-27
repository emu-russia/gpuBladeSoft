int __thiscall sub_6F90D5B0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax@1
  _BYTE *v4; // [sp+0h] [bp-58h]@1
  int v5; // [sp+4h] [bp-54h]@1
  _DWORD *v6; // [sp+18h] [bp-40h]@1
  char v7; // [sp+1Ch] [bp-3Ch]@1
  int v8; // [sp+20h] [bp-38h]@1
  int (__cdecl *v9)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-24h]@1
  int *v10; // [sp+38h] [bp-20h]@1
  char *v11; // [sp+3Ch] [bp-1Ch]@1
  int (*v12)(); // [sp+40h] [bp-18h]@1
  int *v13; // [sp+44h] [bp-14h]@1
  char v14; // [sp+50h] [bp-8h]@1

  v6 = this;
  v11 = &v14;
  v9 = sub_6F962A50;
  v10 = &dword_6F96C450;
  v12 = sub_6F90D61E;
  v13 = (int *)&v4;
  sub_6F8A1A60((int *)&v7);
  v2 = v6;
  *v6 = off_6FBB0288;
  v5 = *(_DWORD *)(a2 + 4);
  v4 = *(_BYTE **)a2;
  v8 = 1;
  sub_6F90E920(v2 + 1, v4, v5);
  return sub_6F8A1AD0((int *)&v7);
}
