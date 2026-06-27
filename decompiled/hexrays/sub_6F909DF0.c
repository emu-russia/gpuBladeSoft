_DWORD *__thiscall sub_6F909DF0(int *this, int *a2)
{
  int *v2; // ebx@1
  _DWORD *result; // eax@1
  char v4; // [sp+1Fh] [bp-Dh]@3

  v2 = this;
  result = (_DWORD *)*a2;
  if ( *(_DWORD *)(*a2 - 4) < 0 )
  {
    result = sub_6F9087C0((int)(result - 3), (int)&v4, 0);
    *v2 = (int)result;
  }
  else
  {
    _InterlockedAdd(result - 1, 1u);
    *this = (int)result;
  }
  return result;
}
