int __thiscall sub_6F910BC0(int this)
{
  *(_DWORD *)this = off_6FBAF6E0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 16) + 4), 1u);
  return sub_6F956CB0((_DWORD *)this);
}
