int __thiscall sub_6F910D30(int this)
{
  int v1; // eax@1

  v1 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAF734;
  *(_DWORD *)(v1 + 12) = 0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 12) + 4), 1u);
  return sub_6F9532F0((_DWORD *)this);
}
