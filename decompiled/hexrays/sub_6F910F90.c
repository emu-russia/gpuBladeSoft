void __thiscall sub_6F910F90(int this)
{
  void *v1; // ebx@1

  v1 = (void *)this;
  *(_DWORD *)this = off_6FBAF844;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB0F5C;
  nullsub_18();
  j_free_1(v1);
}
