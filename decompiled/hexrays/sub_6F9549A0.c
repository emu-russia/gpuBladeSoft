int __thiscall sub_6F9549A0(int this, int a2)
{
  int result; // eax@1
  int v3; // edx@1

  result = a2;
  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)this = a2;
  *(_DWORD *)(this + 4) = v3;
  **(_DWORD **)(a2 + 4) = this;
  *(_DWORD *)(a2 + 4) = this;
  return result;
}
