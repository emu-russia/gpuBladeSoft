int __thiscall sub_6F961300(char *this)
{
  char *v1; // ebx@1
  int v2; // ebx@1
  char v4; // [sp+1Ch] [bp-40h]@1
  int v5; // [sp+20h] [bp-3Ch]@1
  int (__cdecl *v6)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-28h]@1
  __int16 *v7; // [sp+38h] [bp-24h]@1

  v1 = this;
  v6 = sub_6F962A50;
  v7 = &word_6F96BE76;
  sub_6F8A1A60((int *)&v4);
  v2 = (int)&v1[*(_DWORD *)(*(_DWORD *)v1 - 12)];
  *(_DWORD *)v2 = off_6FBB0584;
  *(_DWORD *)(v2 + 108) = off_6FBB0598;
  *(_DWORD *)(v2 + 4) = off_6FBB0398;
  v5 = 0;
  sub_6F915820((_DWORD *)(v2 + 4));
  sub_6F90E8A0(v2 + 40);
  *(_DWORD *)(v2 + 4) = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)(v2 + 32));
  *(_DWORD *)v2 = &unk_6FBABE68;
  *(_DWORD *)(v2 + 108) = off_6FBB0FC0;
  sub_6F956920((_DWORD *)(v2 + 108));
  j_free_1((void *)v2);
  return sub_6F8A1AD0((int *)&v4);
}
