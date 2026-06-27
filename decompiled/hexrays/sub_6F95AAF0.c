int __cdecl sub_6F95AAF0(int a1, int a2, int a3)
{
  _BYTE *v3; // eax@1
  int v5; // [sp+0h] [bp-5Ch]@1
  int v6; // [sp+Ch] [bp-50h]@1
  unsigned __int8 v7; // [sp+1Bh] [bp-41h]@1
  char v8; // [sp+1Ch] [bp-40h]@1
  int v9; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v10)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v11; // [sp+38h] [bp-24h]@1
  char *v12; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v13)(int, int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v14; // [sp+44h] [bp-18h]@1
  char v15; // [sp+50h] [bp-Ch]@1

  v10 = sub_6F962A50;
  v12 = &v15;
  v11 = dword_6F96CCB4;
  v13 = sub_6F95AB6F;
  v14 = &v5;
  sub_6F8A1A60((int *)&v8);
  v6 = *(_DWORD *)(a3 + 4);
  v3 = *(_BYTE **)a3;
  v9 = 1;
  v7 = sub_6F95B860(a1, a2, v3, v6);
  sub_6F8A1AD0((int *)&v8);
  return v7;
}
