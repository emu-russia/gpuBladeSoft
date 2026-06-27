int __thiscall sub_6F953E60(_DWORD *this)
{
  _DWORD *v1; // eax@1
  int v3; // [sp+0h] [bp-5Ch]@1
  _DWORD *v4; // [sp+14h] [bp-48h]@1
  char v5; // [sp+1Ch] [bp-40h]@1
  int v6; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v7)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v8; // [sp+38h] [bp-24h]@1
  char *v9; // [sp+3Ch] [bp-20h]@1
  int (__cdecl *v10)(int, int, int, int, int, int, int, int, int); // [sp+40h] [bp-1Ch]@1
  int *v11; // [sp+44h] [bp-18h]@1
  char v12; // [sp+50h] [bp-Ch]@1

  v4 = this;
  v9 = &v12;
  v7 = sub_6F962A50;
  v8 = &dword_6F96CCDC;
  v10 = sub_6F953EDF;
  v11 = &v3;
  sub_6F8A1A60((int *)&v5);
  v1 = v4;
  *v4 = off_6FBB0D28;
  v6 = 1;
  sub_6F938040(v1 + 2);
  *v4 = &unk_6FBB0B84;
  v6 = -1;
  nullsub_18();
  return sub_6F8A1AD0((int *)&v5);
}
