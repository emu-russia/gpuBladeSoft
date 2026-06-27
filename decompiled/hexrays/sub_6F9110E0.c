void __thiscall sub_6F9110E0(int this)
{
  *(_DWORD *)this = off_6FBAF884;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB0FF4;
  nullsub_18();
}
