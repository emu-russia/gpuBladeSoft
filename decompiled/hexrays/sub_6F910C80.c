int __thiscall sub_6F910C80(int this)
{
  *(_DWORD *)this = off_6FBAF718;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 16) + 4), 1u);
  return sub_6F957050((_DWORD *)this);
}
