void __cdecl sub_6F8B7270(int a1)
{
  char v1; // [sp+1Fh] [bp-Dh]@2

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) <= 0 )
    sub_6F9086D0((void *)a1, (int)&v1);
}
