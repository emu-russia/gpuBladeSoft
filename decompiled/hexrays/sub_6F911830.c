void __thiscall sub_6F911830(int this)
{
  void *v1; // ebx@1
  int v2; // eax@1

  v1 = (void *)this;
  v2 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAFA98;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 36) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 44) = 0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 12) + 4), 1u);
  sub_6F90C0B0((_DWORD *)this);
  j_free_1(v1);
}
