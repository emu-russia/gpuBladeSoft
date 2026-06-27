signed int __cdecl sub_6F8B3270(volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx@1
  signed int result; // eax@3
  int v3; // esi@9
  DWORD v4; // edx@9
  int v5; // eax@10

  v1 = *a1;
  if ( *a1 < 0xFFFFFFFD && *a1 != 0 || (v1 = sub_6F8B2EE0(a1, *a1), result = 12, v1) )
  {
    if ( *(_DWORD *)(v1 + 4) )
    {
      result = 22;
      if ( !*(_DWORD *)v1 )
        return result;
      v3 = *(_DWORD *)(v1 + 16);
      v4 = GetCurrentThreadId();
      result = 1;
      if ( v3 != v4 )
        return result;
      v5 = *(_DWORD *)(v1 + 12);
      if ( v5 )
      {
        *(_DWORD *)(v1 + 12) = v5 - 1;
        return 0;
      }
      *(_DWORD *)(v1 + 16) = -1;
    }
    result = 0;
    if ( _InterlockedExchange((volatile signed __int32 *)v1, 0) == 2 )
      result = SetEvent(*(HANDLE *)(v1 + 8)) == 0;
  }
  return result;
}
