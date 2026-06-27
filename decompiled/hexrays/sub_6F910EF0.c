void __thiscall sub_6F910EF0(int this)
{
  *(_DWORD *)this = off_6FBAF7C4;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB0018;
  nullsub_18();
}
