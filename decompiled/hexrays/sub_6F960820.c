int __thiscall sub_6F960820(char *this)
{
  char *v1; // ebx@1
  char *v2; // edi@1
  char v4; // [sp+1Ch] [bp-40h]@1
  int v5; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v6)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  __int16 *v7; // [sp+38h] [bp-24h]@1

  v1 = this;
  v2 = this - 8;
  v6 = sub_6F962A50;
  v7 = &word_6F96C016;
  sub_6F8A1A60((int *)&v4);
  *((_DWORD *)v1 - 2) = off_6FBB0458;
  *((_DWORD *)v1 + 28) = off_6FBB0480;
  *(_DWORD *)v1 = off_6FBB046C;
  *((_DWORD *)v1 + 1) = off_6FBB03D8;
  v5 = 0;
  sub_6F917A70(v1 + 4);
  sub_6F90E8A0((int)(v1 + 40));
  *((_DWORD *)v1 + 1) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)v1 + 8);
  *(_DWORD *)v1 = &unk_6FBABDA0;
  *((_DWORD *)v1 - 2) = &unk_6FBABD3C;
  *((_DWORD *)v1 - 1) = 0;
  *((_DWORD *)v1 + 28) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)v1 + 28);
  j_free_1(v2);
  return sub_6F8A1AD0((int *)&v4);
}
