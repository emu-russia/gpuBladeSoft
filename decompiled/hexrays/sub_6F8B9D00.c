int __thiscall sub_6F8B9D00(_DWORD *this)
{
  _DWORD *v1; // ebx@1
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  int *v6; // [sp+38h] [bp-24h]@1

  v1 = this;
  v5 = sub_6F962A50;
  v6 = &dword_6F96CABC;
  sub_6F8A1A60((int *)&v3);
  *v1 = off_6FBB03D8;
  v4 = 0;
  sub_6F917A70(v1);
  sub_6F90E8A0((int)(v1 + 9));
  *v1 = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)v1 + 7);
  return sub_6F8A1AD0((int *)&v3);
}
