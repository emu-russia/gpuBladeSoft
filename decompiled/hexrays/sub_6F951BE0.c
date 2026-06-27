void __thiscall sub_6F951BE0(int this)
{
  int v1; // ebx@1
  void *v2; // eax@1

  v1 = this;
  v2 = *(void **)(this + 40);
  *(_DWORD *)this = off_6FBAFF3C;
  *(_DWORD *)(this + 64) = off_6FBAFF50;
  *(_DWORD *)(this + 4) = off_6FBAFC60;
  if ( v2 != (void *)(this + 48) )
    j_free_1(v2);
  *(_DWORD *)(v1 + 4) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)(v1 + 32));
  *(_DWORD *)v1 = &unk_6FBABC38;
  *(_DWORD *)(v1 + 64) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)(v1 + 64));
}
