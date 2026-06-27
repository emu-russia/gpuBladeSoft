int __thiscall sub_6F910D60(int this)
{
  int v1; // eax@1

  v1 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAF758;
  *(_DWORD *)(v1 + 12) = 0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 12) + 4), 1u);
  return sub_6F957610((_DWORD *)this);
}
