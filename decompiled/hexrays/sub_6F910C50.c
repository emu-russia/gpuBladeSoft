int __thiscall sub_6F910C50(int this)
{
  *(_DWORD *)this = off_6FBAF6FC;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 16) + 4), 1u);
  return sub_6F952D30((_DWORD *)this);
}
