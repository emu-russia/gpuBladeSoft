void sub_6F8B06C0()
{
  if ( _InterlockedExchange((volatile signed __int32 *)&dword_703734E8, 3) == 2 )
  {
    DeleteCriticalSection(&CriticalSection);
    DeleteCriticalSection(&stru_70373518);
  }
}
