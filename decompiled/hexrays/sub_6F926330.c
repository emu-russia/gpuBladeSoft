int __thiscall sub_6F926330(_DWORD *this)
{
  _DWORD *v1; // ebx@1
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  __int16 *v6; // [sp+38h] [bp-24h]@1

  v1 = this;
  v5 = sub_6F962A50;
  v6 = &word_6F96BE66;
  sub_6F8A1A60((int *)&v3);
  *v1 = off_6FBB04F8;
  v1[28] = off_6FBB050C;
  v1[2] = off_6FBB0398;
  v4 = 0;
  sub_6F915820(v1 + 2);
  sub_6F90E8A0((int)(v1 + 11));
  v1[2] = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)v1 + 9);
  *v1 = dword_6FBABDC8;
  v1[1] = 0;
  v1[28] = off_6FBB0FC0;
  sub_6F956920(v1 + 28);
  j_free_1(v1);
  return sub_6F8A1AD0((int *)&v3);
}
