int __thiscall sub_6F956D10(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // edx@1
  int v6; // [sp+0h] [bp-5Ch]@1
  _DWORD *v7; // [sp+14h] [bp-48h]@1
  char v8; // [sp+1Ch] [bp-40h]@1
  int v9; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v10)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  __int16 *v11; // [sp+38h] [bp-24h]@1
  char *v12; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v13)(int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v14; // [sp+44h] [bp-18h]@1
  char v15; // [sp+50h] [bp-Ch]@1

  v7 = this;
  v12 = &v15;
  v10 = sub_6F962A50;
  v11 = &word_6F96B002;
  v13 = sub_6F956D87;
  v14 = &v6;
  sub_6F8A1A60((int *)&v8);
  v4 = v7;
  v7[1] = a4 != 0;
  *v4 = off_6FBB0ED0;
  v9 = 1;
  v7[2] = sub_6F937FA0();
  return sub_6F8A1AD0((int *)&v8);
}
