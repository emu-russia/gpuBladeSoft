void __cdecl sub_6F9119D0(int *a1)
{
  int v1; // ecx@1
  char v2; // [sp+1Fh] [bp-Dh]@2

  v1 = *a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*a1 - 4), 0xFFFFFFFF) <= 0 )
    sub_6F8FD6A0((void *)(v1 - 12), (int)&v2);
}
