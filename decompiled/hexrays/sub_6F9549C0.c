int __thiscall sub_6F9549C0(int this)
{
  int result; // eax@1
  _DWORD *v2; // edx@1

  result = *(_DWORD *)this;
  v2 = *(_DWORD **)(this + 4);
  *v2 = *(_DWORD *)this;
  *(_DWORD *)(result + 4) = v2;
  return result;
}
