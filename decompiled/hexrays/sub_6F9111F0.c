void __thiscall sub_6F9111F0(int this)
{
  void *v1; // ebx@1

  v1 = (void *)this;
  *(_DWORD *)this = off_6FBAF8CC;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB00A0;
  nullsub_18();
  j_free_1(v1);
}
