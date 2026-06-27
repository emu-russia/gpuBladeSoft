int __thiscall sub_6F90CE80(_DWORD *this, int a2, int a3)
{
  int v3; // edx@1
  void *v4; // eax@1
  int v5; // edx@1
  int v7; // [sp+0h] [bp-58h]@1
  _DWORD *v8; // [sp+18h] [bp-40h]@1
  char v9; // [sp+1Ch] [bp-3Ch]@1
  int v10; // [sp+20h] [bp-38h]@1
  int (__cdecl *v11)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-24h]@1
  int *v12; // [sp+38h] [bp-20h]@1
  char *v13; // [sp+3Ch] [bp-1Ch]@1
  int (*v14)(); // [sp+40h] [bp-18h]@1
  int *v15; // [sp+44h] [bp-14h]@1
  char v16; // [sp+50h] [bp-8h]@1

  v8 = this;
  v13 = &v16;
  v11 = sub_6F962A50;
  v12 = dword_6F96AFBC;
  v14 = sub_6F90CF00;
  v15 = &v7;
  sub_6F8A1A60((int *)&v9);
  v3 = (int)v8;
  v8[1] = a3 != 0;
  *(_DWORD *)v3 = off_6FBB0278;
  *(_DWORD *)(v3 + 8) = a2;
  v4 = sub_6F937F90();
  v5 = (int)v8;
  v8[4] = v4;
  v10 = 1;
  sub_6F90CB40(v5, 0);
  return sub_6F8A1AD0((int *)&v9);
}
