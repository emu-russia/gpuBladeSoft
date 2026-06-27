void __thiscall sub_6F9113B0(int this)
{
  void *v1; // ebx@1
  int v2; // eax@1

  v1 = (void *)this;
  v2 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAF92C;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 24) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 32) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 16) + 40) = 0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 12) + 4), 1u);
  sub_6F938CA0((_DWORD *)this);
  j_free_1(v1);
}
