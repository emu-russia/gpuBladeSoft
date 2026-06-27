void __thiscall sub_6F924DA0(int this)
{
  int v1; // ecx@1
  char v2; // [sp+1Fh] [bp-Dh]@3

  *(_DWORD *)this = off_6FBB04E0;
  v1 = *(_DWORD *)(this + 4);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_6F9086D0((void *)(v1 - 12), (int)&v2);
    nullsub_19();
  }
  else
  {
    nullsub_19();
  }
}
