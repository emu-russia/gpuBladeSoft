signed int __cdecl sub_6F8B26D0(int *a1)
{
  int v1; // ebx@2
  signed int result; // eax@4
  int v3; // eax@6
  int v4; // edx@7
  signed int v5; // eax@12
  int v6; // edx@13
  int v7; // eax@13
  signed int v8; // ST1C_4@18

  if ( !a1 )
    return 22;
  v1 = *a1;
  if ( !*a1 )
    return 22;
  if ( v1 == -1 )
    return 0;
  result = 22;
  if ( *(_DWORD *)v1 == -1061506563 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 20));
    v3 = *(_DWORD *)(v1 + 12);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v1 + 8);
      if ( v4 )
      {
        *(_DWORD *)(v1 + 8) = v4 - 1;
        *(_DWORD *)(v1 + 12) = v3 + 1;
        goto LABEL_9;
      }
    }
    else if ( *(_DWORD *)(v1 + 8) > *(_DWORD *)(v1 + 16) )
    {
      v5 = sub_6F8B2490(
             *(void **)(v1 + 104),
             1,
             0xFFFFFFFF,
             (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
             (volatile signed __int32 *)(v1 + 96));
      if ( v5 )
      {
        v8 = v5;
        LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 20));
        return v8;
      }
      v6 = *(_DWORD *)(v1 + 16);
      v7 = *(_DWORD *)(v1 + 8);
      if ( v6 )
      {
        *(_DWORD *)(v1 + 16) = 0;
        v7 -= v6;
      }
      *(_DWORD *)(v1 + 12) = 1;
      *(_DWORD *)(v1 + 8) = v7 - 1;
LABEL_9:
      LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 20));
      return sub_6F8B1BC0(
               *(void **)(v1 + 100),
               1,
               (struct _RTL_CRITICAL_SECTION *)(v1 + 44),
               (volatile signed __int32 *)(v1 + 68));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 20));
    result = 0;
  }
  return result;
}
