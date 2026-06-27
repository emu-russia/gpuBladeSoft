void __thiscall sub_6F960AD0(int this)
{
  void *v1; // esi@1
  int v2; // ebx@1
  void *v3; // eax@1

  v1 = (void *)(this - 8);
  v2 = this;
  v3 = *(void **)(this + 40);
  *(_DWORD *)(this - 8) = off_6FBAFE88;
  *(_DWORD *)(this + 64) = off_6FBAFEB0;
  *(_DWORD *)this = off_6FBAFE9C;
  *(_DWORD *)(this + 4) = off_6FBAFC60;
  if ( v3 != (void *)(this + 48) )
    j_free_1(v3);
  *(_DWORD *)(v2 + 4) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)(v2 + 32));
  *(_DWORD *)v2 = &unk_6FBABB98;
  *(_DWORD *)(v2 - 8) = &unk_6FBABB34;
  *(_DWORD *)(v2 - 4) = 0;
  *(_DWORD *)(v2 + 64) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)(v2 + 64));
  j_free_1(v1);
}
