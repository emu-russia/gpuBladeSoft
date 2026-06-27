void __thiscall sub_6F910FD0(int this)
{
  *(_DWORD *)this = off_6FBAF818;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB0044;
  nullsub_18();
}
