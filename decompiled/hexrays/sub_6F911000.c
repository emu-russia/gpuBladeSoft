void __thiscall sub_6F911000(int this)
{
  *(_DWORD *)this = off_6FBAF844;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB0F5C;
  nullsub_18();
}
