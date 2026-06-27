int __thiscall sub_6F8C3BF0(void *this)
{
  int result; // eax@2

  if ( *(_DWORD *)this )
  {
    result = *(_DWORD *)this - 1;
  }
  else
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)&dword_6FB49F4C, 1u);
    *(_DWORD *)this = result + 1;
  }
  return result;
}
