int __thiscall sub_6F9094A0(int *this)
{
  int result; // eax@1

  result = *(_DWORD *)(*this - 4);
  if ( result >= 0 )
    result = sub_6F908160(this);
  return result;
}
