int __thiscall sub_6F915BA0(int this, __int64 a2)
{
  int v2; // ebx@1

  v2 = this;
  if ( sub_6F8BF810((void *)(this + 36)) )
    return v2;
  if ( !a2 )
  {
    *(_DWORD *)(v2 + 64) = 1;
    return v2;
  }
  if ( !(_DWORD)a2 || SHIDWORD(a2) <= 0 )
    return v2;
  *(_QWORD *)(v2 + 60) = a2;
  return v2;
}
