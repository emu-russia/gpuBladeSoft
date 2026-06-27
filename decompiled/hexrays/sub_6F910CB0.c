void __thiscall sub_6F910CB0(int this)
{
  void *v1; // ebx@1
  int v2; // eax@1

  v1 = (void *)this;
  v2 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAF734;
  *(_DWORD *)(v2 + 12) = 0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 12) + 4), 1u);
  sub_6F9532F0((_DWORD *)this);
  j_free_1(v1);
}
