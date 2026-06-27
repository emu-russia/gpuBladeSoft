int __thiscall sub_6F8B96B0(char *this)
{
  char *v1; // ebx@1
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v6; // [sp+38h] [bp-24h]@1

  v1 = this;
  v5 = sub_6F962A50;
  v6 = &dword_6F96CAC4;
  sub_6F8A1A60((int *)&v3);
  *(_DWORD *)v1 = off_6FBB0398;
  v4 = 0;
  sub_6F915820(v1);
  sub_6F90E8A0((int)(v1 + 36));
  *(_DWORD *)v1 = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)v1 + 7);
  j_free_1(v1);
  return sub_6F8A1AD0((int *)&v3);
}
