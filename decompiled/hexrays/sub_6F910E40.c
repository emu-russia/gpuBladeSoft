int __thiscall sub_6F910E40(int this)
{
  _DWORD *v1; // ebx@1
  int v2; // eax@1
  int v3; // ecx@1

  v1 = (_DWORD *)this;
  v2 = *(_DWORD *)(this + 16);
  *(_DWORD *)this = off_6FBAF7A0;
  v3 = *(_DWORD *)(this + 12);
  *(_DWORD *)(v2 + 12) = 0;
  _InterlockedSub((volatile signed __int32 *)(v3 + 4), 1u);
  return sub_6F957C00(v1);
}
