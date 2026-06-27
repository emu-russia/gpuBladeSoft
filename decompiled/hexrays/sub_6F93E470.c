int __thiscall sub_6F93E470(int this, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edx@1
  int result; // eax@1
  int v5; // edx@3

  v3 = *(_DWORD *)(this + 4);
  result = a2;
  if ( v3 < a2 )
  {
    result = sub_6F93D780(this, v3, 0, a2 - v3, a3);
  }
  else if ( v3 > a2 )
  {
    v5 = *(_DWORD *)this;
    *(_DWORD *)(this + 4) = a2;
    *(_WORD *)(v5 + 2 * a2) = 0;
  }
  return result;
}
