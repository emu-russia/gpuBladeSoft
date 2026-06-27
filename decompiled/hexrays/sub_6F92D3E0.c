int __thiscall sub_6F92D3E0(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax@1

  result = this;
  *(_DWORD *)this = -1;
  *(_DWORD *)(this + 4) = -1;
  *(_DWORD *)(this + 8) = 0;
  return result;
}
