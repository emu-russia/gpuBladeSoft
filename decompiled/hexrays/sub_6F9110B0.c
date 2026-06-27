void __thiscall sub_6F9110B0(int this)
{
  *(_DWORD *)this = off_6FBAF86C;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB0070;
  nullsub_18();
}
