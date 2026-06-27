void __thiscall sub_6F94ADE0(int this)
{
  int v1; // ebx@1
  void *v2; // eax@1

  v1 = this;
  v2 = *(void **)(this + 48);
  *(_DWORD *)this = off_6FBAFE88;
  *(_DWORD *)(this + 72) = off_6FBAFEB0;
  *(_DWORD *)(this + 8) = off_6FBAFE9C;
  *(_DWORD *)(this + 12) = off_6FBAFC60;
  if ( v2 != (void *)(this + 56) )
    j_free_1(v2);
  *(_DWORD *)(v1 + 12) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)(v1 + 40));
  *(_DWORD *)(v1 + 8) = &unk_6FBABB98;
  *(_DWORD *)v1 = &unk_6FBABB34;
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(v1 + 72) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)(v1 + 72));
  j_free_1((void *)v1);
}
