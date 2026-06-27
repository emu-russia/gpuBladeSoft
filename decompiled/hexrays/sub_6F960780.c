int __thiscall sub_6F960780(void *this)
{
  void *v1; // ebx@1
  char v3; // [sp+1Ch] [bp-40h]@1
  int v4; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v5)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  __int16 *v6; // [sp+38h] [bp-24h]@1

  v1 = this;
  v5 = sub_6F962A50;
  v6 = &word_6F96BE5A;
  sub_6F8A1A60((int *)&v3);
  *((_DWORD *)v1 - 2) = off_6FBB041C;
  *((_DWORD *)v1 + 27) = off_6FBB0444;
  *(_DWORD *)v1 = off_6FBB0430;
  *((_DWORD *)v1 + 1) = off_6FBB0398;
  v4 = 0;
  sub_6F915820((_DWORD *)v1 + 1);
  sub_6F90E8A0((int)v1 + 40);
  *((_DWORD *)v1 + 1) = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)v1 + 8);
  *(_DWORD *)v1 = &unk_6FBABD14;
  *((_DWORD *)v1 - 2) = &unk_6FBABCEC;
  *((_DWORD *)v1 - 1) = 0;
  *((_DWORD *)v1 + 27) = off_6FBB0FC0;
  sub_6F956920((_DWORD *)v1 + 27);
  return sub_6F8A1AD0((int *)&v3);
}
