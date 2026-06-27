int __thiscall sub_6F935280(_DWORD *this, int a2)
{
  _DWORD *v2; // edx@1
  int v3; // eax@1
  int v4; // edx@1
  int v6; // [sp+0h] [bp-5Ch]@1
  _DWORD *v7; // [sp+14h] [bp-48h]@1
  char v8; // [sp+1Ch] [bp-40h]@1
  int v9; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v10)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v11; // [sp+38h] [bp-24h]@1
  char *v12; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v13)(int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v14; // [sp+44h] [bp-18h]@1
  char v15; // [sp+50h] [bp-Ch]@1

  v7 = this;
  v12 = &v15;
  v10 = sub_6F962A50;
  v11 = &dword_6F96AE30;
  v13 = sub_6F935302;
  v14 = &v6;
  sub_6F8A1A60((int *)&v8);
  v2 = v7;
  v7[1] = a2 != 0;
  *v2 = off_6FBB0C90;
  v9 = 1;
  v3 = sub_6F937FA0();
  v4 = (int)v7;
  v7[2] = v3;
  *(_BYTE *)(v4 + 12) = 0;
  sub_6F9351B0((_BYTE *)v4);
  return sub_6F8A1AD0((int *)&v8);
}
