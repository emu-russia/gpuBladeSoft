int __thiscall sub_6F8BA280(int this, int a2)
{
  int v2; // ebx@1
  int v3; // eax@1
  int result; // eax@3

  v2 = this;
  v3 = a2;
  if ( a2 == -1 && (v3 = *(_DWORD *)(this + 36), v3 == -1) )
    result = -1;
  else
    result = ungetc(v3, *(FILE **)(this + 32));
  *(_DWORD *)(v2 + 36) = -1;
  return result;
}
