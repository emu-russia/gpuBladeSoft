signed int __cdecl sub_6F8B30A0(volatile signed __int32 *a1, int a2)
{
  DWORD v2; // ecx@1
  signed __int64 v3; // rax@2
  signed __int64 v4; // kr00_8@2
  unsigned __int64 v5; // rax@2
  signed __int32 v6; // ebx@3
  signed __int32 v7; // ebp@4
  signed int result; // eax@7
  unsigned __int64 v9; // kr08_8@9
  DWORD v10; // ST1C_4@12
  signed __int32 v11; // eax@12
  DWORD v12; // ST1C_4@18
  DWORD v13; // eax@18
  bool v14; // zf@19
  int v15; // edi@22
  DWORD v16; // ST1C_4@22
  DWORD v17; // eax@22
  HANDLE v18; // eax@25
  DWORD v19; // edx@28
  DWORD v20; // [sp+1Ch] [bp-20h]@25

  v2 = -1;
  if ( a2
    && (v3 = sub_6F8B2DF0(a2),
        v4 = v3,
        v5 = sub_6F8B2D90(SHIDWORD(v3)),
        v2 = 0,
        HIDWORD(v5) < (unsigned int)((unsigned int)v5 < (unsigned int)v4) + HIDWORD(v4)) )
  {
    v9 = v4 - v5;
    if ( (v4 - v5) >> 32 )
      v2 = -1;
    else
      v2 = v9;
    v6 = *a1;
    if ( *a1 < 0xFFFFFFFD && *a1 != 0 )
      goto LABEL_4;
  }
  else
  {
    v6 = *a1;
    if ( *a1 < 0xFFFFFFFD && *a1 != 0 )
      goto LABEL_4;
  }
  v10 = v2;
  v11 = sub_6F8B2EE0(a1, v6);
  v2 = v10;
  v6 = v11;
  if ( !v11 )
    return 12;
LABEL_4:
  v7 = _InterlockedExchange((volatile signed __int32 *)v6, 1);
  if ( !v7 )
  {
LABEL_5:
    if ( *(_DWORD *)(v6 + 4) )
      *(_DWORD *)(v6 + 16) = GetCurrentThreadId();
    return 0;
  }
  if ( !*(_DWORD *)(v6 + 4) || (v15 = *(_DWORD *)(v6 + 16), v16 = v2, v17 = GetCurrentThreadId(), v2 = v16, v15 != v17) )
  {
    if ( *(_DWORD *)(v6 + 8) )
      goto LABEL_17;
    v20 = v2;
    v18 = CreateEventA(0, 0, 0, 0);
    v2 = v20;
    if ( v18 )
    {
      if ( (HANDLE)_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), (signed __int32)v18, 0) != v18 )
      {
        CloseHandle(v18);
        v2 = v20;
      }
LABEL_17:
      while ( _InterlockedExchange((volatile signed __int32 *)v6, 2) )
      {
        v12 = v2;
        v13 = WaitForSingleObject(*(HANDLE *)(v6 + 8), v2);
        v2 = v12;
        if ( v13 )
        {
          v14 = v13 == 258;
          result = 138;
          if ( !v14 )
            result = 22;
          return result;
        }
      }
      goto LABEL_5;
    }
    v19 = GetLastError();
    result = 1;
    if ( v19 == 5 )
      return result;
    return 12;
  }
  _InterlockedCompareExchange((volatile signed __int32 *)v6, v7, 1);
  result = 36;
  if ( *(_DWORD *)(v6 + 4) == 2 )
  {
    ++*(_DWORD *)(v6 + 12);
    result = 0;
  }
  return result;
}
