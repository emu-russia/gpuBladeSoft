int __cdecl sub_6F8B35C0(volatile signed __int32 *a1)
{
  while ( !_InterlockedExchange(a1, 0) )
  {
    do
      _mm_pause();
    while ( !*a1 );
  }
  return 0;
}
