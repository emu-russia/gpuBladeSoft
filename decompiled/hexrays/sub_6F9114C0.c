int __thiscall sub_6F9114C0(int this)
{
  int v1; // eax@1

  v1 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAF960;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 24) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 32) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 40) = 0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 12) + 4), 1u);
  return sub_6F90AD70((_DWORD *)this);
}
