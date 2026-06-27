int __thiscall sub_6F917A30(_DWORD *this)
{
  int result; // eax@2

  if ( this[4] >= this[5] )
    result = 0;
  else
    result = -((unsigned __int16)(*(int (__stdcall **)(signed int))(*this + 52))(0xFFFF) == -1);
  return result;
}
