int __thiscall sub_6F960EE0(char *this)
{
  char *v1; // ebx@1
  int v2; // ebx@1
  char v4; // [sp+1Ch] [bp-40h]@1
  int v5; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v6)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  __int16 *v7; // [sp+38h] [bp-24h]@1

  v1 = this;
  v6 = sub_6F962A50;
  v7 = &word_6F96BFF6;
  sub_6F8A1A60((int *)&v4);
  v2 = (int)&v1[*(_DWORD *)(*(_DWORD *)v1 - 12)];
  *(_DWORD *)v2 = off_6FBB0458;
  *(_DWORD *)(v2 + 120) = off_6FBB0480;
  *(_DWORD *)(v2 + 8) = off_6FBB046C;
  *(_DWORD *)(v2 + 12) = off_6FBB03D8;
  v5 = 0;
  sub_6F917A70((void *)(v2 + 12));
  sub_6F90E8A0(v2 + 48);
  *(_DWORD *)(v2 + 12) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)(v2 + 40));
  *(_DWORD *)(v2 + 8) = &unk_6FBABDA0;
  *(_DWORD *)v2 = &unk_6FBABD3C;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 120) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)(v2 + 120));
  return sub_6F8A1AD0((int *)&v4);
}
