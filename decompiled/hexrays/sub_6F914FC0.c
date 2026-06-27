int __thiscall sub_6F914FC0(char *this)
{
  char *v1; // ebx@1
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v6; // [sp+38h] [bp-24h]@1

  v1 = this;
  v5 = sub_6F962A50;
  v6 = &dword_6F96C240;
  sub_6F8A1A60((int *)&v3);
  *(_DWORD *)v1 = off_6FBB0370;
  v4 = 0;
  sub_6F95B6E0((int (***)(void))v1 + 4);
  *(_DWORD *)v1 = off_6FBB00D0;
  sub_6F90F370(v1);
  return sub_6F8A1AD0((int *)&v3);
}
