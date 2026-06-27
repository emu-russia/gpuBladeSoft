int __thiscall sub_6F8BA030(int this)
{
  int v1; // ebx@1
  int result; // eax@1

  v1 = this;
  result = getc(*(FILE **)(this + 32));
  *(_DWORD *)(v1 + 36) = result;
  return result;
}
