void __thiscall sub_6F9112A0(int this)
{
  *(_DWORD *)this = off_6FBAF8E4;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB1024;
  nullsub_18();
}
