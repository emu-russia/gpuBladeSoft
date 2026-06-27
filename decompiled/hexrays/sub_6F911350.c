void __thiscall sub_6F911350(int this)
{
  *(_DWORD *)this = off_6FBAF8FC;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB00B8;
  nullsub_18();
}
