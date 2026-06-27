void __thiscall sub_6F949030(int this)
{
  int v1; // ebx@1
  void *v2; // eax@1

  v1 = this;
  v2 = *(void **)(this + 48);
  *(_DWORD *)this = off_6FBAFE4C;
  *(_DWORD *)(this + 72) = off_6FBAFE74;
  *(_DWORD *)(this + 8) = off_6FBAFE60;
  *(_DWORD *)(this + 12) = off_6FBAFC20;
  if ( v2 != (void *)(this + 56) )
    j_free_1(v2);
  *(_DWORD *)(v1 + 12) = off_6FBB0674;
  sub_6F938380((volatile signed __int32 **)(v1 + 40));
  *(_DWORD *)(v1 + 8) = &unk_6FBABB0C;
  *(_DWORD *)v1 = &unk_6FBABAE4;
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(v1 + 72) = off_6FBB0FC0;
  sub_6F956920((_DWORD *)(v1 + 72));
}
