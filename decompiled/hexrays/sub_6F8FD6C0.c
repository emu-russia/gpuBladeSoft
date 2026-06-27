void __thiscall sub_6F8FD6C0(int this, int a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(this + 8), 0xFFFFFFFF) <= 0 )
    j_free_1((void *)this);
}
