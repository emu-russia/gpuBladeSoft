int __thiscall sub_6F910B90(int this)
{
  *(_DWORD *)this = off_6FBAF6C4;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 16) + 4), 1u);
  return sub_6F952990((_DWORD *)this);
}
