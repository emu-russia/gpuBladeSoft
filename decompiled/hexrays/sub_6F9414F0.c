int __thiscall sub_6F9414F0(int this, int a2, int a3)
{
  int v3; // ebx@1
  int result; // eax@3
  _BYTE *v5; // edx@4

  v3 = this;
  if ( a2 && a3 >= 0 )
  {
    v5 = *(_BYTE **)(this + 36);
    *(_DWORD *)(this + 40) = 0;
    *v5 = 0;
    sub_6F941550(this, a2, a3, 0);
    result = v3;
  }
  else
  {
    result = this;
  }
  return result;
}
