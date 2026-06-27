void __thiscall sub_6F911270(int this)
{
  *(_DWORD *)this = off_6FBAF8CC;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 8) + 4), 1u);
  *(_DWORD *)this = off_6FBB00A0;
  nullsub_18();
}
