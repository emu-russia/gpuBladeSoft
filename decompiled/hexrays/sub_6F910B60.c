void __thiscall sub_6F910B60(int this)
{
  void *v1; // ebx@1

  v1 = (void *)this;
  *(_DWORD *)this = off_6FBAF6E0;
  _InterlockedSub((volatile signed __int32 *)(*(_DWORD *)(this + 16) + 4), 1u);
  sub_6F956CB0((_DWORD *)this);
  j_free_1(v1);
}
