int __thiscall sub_6F9157E0(_DWORD *this)
{
  int result; // eax@2

  if ( this[4] >= this[5] )
    result = 0;
  else
    result = -((*(int (__stdcall **)(signed int))(*this + 52))(-1) == -1);
  return result;
}
