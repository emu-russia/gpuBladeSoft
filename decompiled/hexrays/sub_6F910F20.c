void __thiscall sub_6F910F20(int this)
{
  *(_DWORD *)this = off_6FBAF7F0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB0F34;
  nullsub_18();
}
