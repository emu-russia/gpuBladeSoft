int __thiscall sub_6F911890(int this)
{
  int v1; // eax@1

  v1 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAFA64;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 36) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 44) = 0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 12) + 4), 1u);
  return sub_6F939FE0((_DWORD *)this);
}
