signed int __cdecl sub_6F8B2A80(int a1)
{
  int v1; // ebx@1
  struct _RTL_CRITICAL_SECTION *v2; // edi@1
  int v3; // ebp@1
  signed int result; // eax@3
  int v5; // eax@7
  signed int v6; // eax@11
  signed int v7; // ST1C_4@14

  v1 = *(_DWORD *)a1;
  v2 = (struct _RTL_CRITICAL_SECTION *)(*(_DWORD *)a1 + 20);
  EnterCriticalSection(v2);
  v3 = *(_DWORD *)(v1 + 12);
  if ( v3 )
  {
    *(_DWORD *)(v1 + 12) = v3 - 1;
    LeaveCriticalSection(v2);
    if ( v3 == 1 )
    {
      result = sub_6F8B1BC0(
                 *(void **)(v1 + 104),
                 1,
                 (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
                 (volatile signed __int32 *)(v1 + 96));
      if ( result )
        goto LABEL_5;
    }
    result = sub_6F8B2F50(*(volatile signed __int32 **)(a1 + 4));
    if ( result )
      goto LABEL_5;
  }
  else
  {
    v5 = *(_DWORD *)(v1 + 16);
    if ( v5 == 1073741822 )
    {
      *(_DWORD *)(v1 + 16) = 0x3FFFFFFF;
      v6 = sub_6F8B2490(
             *(void **)(v1 + 104),
             1,
             0xFFFFFFFF,
             (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
             (volatile signed __int32 *)(v1 + 96));
      if ( v6
        || (*(_DWORD *)(v1 + 8) -= *(_DWORD *)(v1 + 16),
            (v6 = sub_6F8B1BC0(
                    *(void **)(v1 + 104),
                    1,
                    (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
                    (volatile signed __int32 *)(v1 + 96))) != 0) )
      {
        v7 = v6;
        LeaveCriticalSection(v2);
        result = v7;
        **(_DWORD **)(a1 + 8) = v7;
        return result;
      }
      *(_DWORD *)(v1 + 16) = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 16) = v5 + 1;
    }
    LeaveCriticalSection(v2);
    result = sub_6F8B2F50(*(volatile signed __int32 **)(a1 + 4));
    if ( result )
    {
LABEL_5:
      **(_DWORD **)(a1 + 8) = result;
      return result;
    }
  }
  return result;
}
