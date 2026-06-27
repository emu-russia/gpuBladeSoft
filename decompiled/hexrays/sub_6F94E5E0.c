void __thiscall sub_6F94E5E0(int this)
{
  int v1; // ebx@1
  void *v2; // eax@1

  v1 = this;
  v2 = *(void **)(this + 44);
  *(_DWORD *)this = off_6FBAFEEC;
  *(_DWORD *)(this + 68) = off_6FBAFF00;
  *(_DWORD *)(this + 8) = off_6FBAFC60;
  if ( v2 != (void *)(this + 52) )
    j_free_1(v2);
  *(_DWORD *)(v1 + 8) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)(v1 + 36));
  *(_DWORD *)v1 = &unk_6FBABBE8;
  *(_DWORD *)(v1 + 4) = 0;
  *(_DWORD *)(v1 + 68) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)(v1 + 68));
}
