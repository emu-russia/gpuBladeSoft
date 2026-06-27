void __thiscall sub_6F911310(int this)
{
  void *v1; // ebx@1

  v1 = (void *)this;
  *(_DWORD *)this = off_6FBAF914;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB103C;
  nullsub_18();
  j_free_1(v1);
}
