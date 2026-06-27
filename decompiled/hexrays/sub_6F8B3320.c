signed int __cdecl sub_6F8B3320(volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx@1
  signed int v2; // esi@3
  int v4; // esi@9

  v1 = *a1;
  if ( *a1 < 0xFFFFFFFD && *a1 != 0 || (v1 = sub_6F8B2EE0(a1, *a1)) != 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v1, 1, 0) == 1 )
    {
      v2 = 0;
      if ( *(_DWORD *)(v1 + 4) )
      {
        *(_DWORD *)(v1 + 16) = GetCurrentThreadId();
        return 0;
      }
    }
    else if ( *(_DWORD *)(v1 + 4) != 2 || (v4 = *(_DWORD *)(v1 + 16), v4 != GetCurrentThreadId()) )
    {
      v2 = 16;
    }
    else
    {
      ++*(_DWORD *)(v1 + 12);
      v2 = 0;
    }
    return v2;
  }
  return 12;
}
