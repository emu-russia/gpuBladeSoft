void *__thiscall sub_6F9176C0(int this)
{
  unsigned int v1; // eax@1
  int v2; // ebx@2
  void *result; // eax@2

  v1 = *(_DWORD *)(this + 64);
  if ( v1 > 0x3FFFFFFE )
    sub_6F962910();
  v2 = this;
  result = sub_6F961B40(2 * v1);
  *(_BYTE *)(v2 + 68) = 1;
  *(_DWORD *)(v2 + 60) = result;
  return result;
}
