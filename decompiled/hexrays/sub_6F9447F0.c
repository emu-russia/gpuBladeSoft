void __thiscall sub_6F9447F0(int this)
{
  int v1; // ebx@1
  void *v2; // eax@1

  v1 = this;
  v2 = *(void **)(this + 36);
  *(_DWORD *)this = off_6FBAFC60;
  if ( v2 != (void *)(this + 44) )
    j_free_1(v2);
  *(_DWORD *)v1 = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)(v1 + 28));
  j_free_1((void *)v1);
}
