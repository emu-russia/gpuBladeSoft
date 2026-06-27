signed int __cdecl sub_6F8B2F50(volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx@1
  signed __int32 v2; // edi@2
  signed int result; // eax@5
  DWORD v4; // eax@12
  bool v5; // zf@13
  int v6; // ebp@16
  HANDLE v7; // eax@19

  v1 = *a1;
  if ( *a1 >= 0xFFFFFFFD || *a1 == 0 )
  {
    v1 = sub_6F8B2EE0(a1, *a1);
    result = 12;
    if ( !v1 )
      return result;
  }
  v2 = _InterlockedExchange((volatile signed __int32 *)v1, 1);
  if ( !v2 )
    goto LABEL_3;
  if ( *(_DWORD *)(v1 + 4) && (v6 = *(_DWORD *)(v1 + 16), v6 == GetCurrentThreadId()) )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)v1, v2, 1);
    result = 36;
    if ( *(_DWORD *)(v1 + 4) == 2 )
    {
      ++*(_DWORD *)(v1 + 12);
      result = 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(v1 + 8) )
      goto LABEL_11;
    v7 = CreateEventA(0, 0, 0, 0);
    if ( v7 )
    {
      if ( (HANDLE)_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 8), (signed __int32)v7, 0) != v7 )
        CloseHandle(v7);
LABEL_11:
      while ( _InterlockedExchange((volatile signed __int32 *)v1, 2) )
      {
        v4 = WaitForSingleObject(*(HANDLE *)(v1 + 8), 0xFFFFFFFF);
        if ( v4 )
        {
          v5 = v4 == 258;
          result = 138;
          if ( !v5 )
            result = 22;
          return result;
        }
      }
LABEL_3:
      if ( *(_DWORD *)(v1 + 4) )
        *(_DWORD *)(v1 + 16) = GetCurrentThreadId();
      return 0;
    }
    v5 = GetLastError() == 5;
    result = 1;
    if ( !v5 )
      result = 12;
  }
  return result;
}
