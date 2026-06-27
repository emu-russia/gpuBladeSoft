void __thiscall sub_6F9111C0(int this)
{
  *(_DWORD *)this = off_6FBAF8B4;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB100C;
  nullsub_18();
}
