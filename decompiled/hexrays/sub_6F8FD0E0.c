int __thiscall sub_6F8FD0E0(int *this)
{
  int *v1; // ebx@1
  int result; // eax@3

  v1 = this;
  if ( *(_DWORD *)(*this - 4) > 0 )
    sub_6F8FEC30((const void **)this, 0, 0, 0);
  result = *v1;
  *(_DWORD *)(*v1 - 4) = -1;
  return result;
}
