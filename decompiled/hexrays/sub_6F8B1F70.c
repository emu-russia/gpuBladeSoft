signed int __cdecl sub_6F8B1F70(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // eax@4
  void *v3; // ebx@4
  HANDLE v4; // eax@5
  void *v5; // edx@5
  signed int result; // eax@7

  if ( !a1 )
    return 22;
  if ( a2 && *a2 == 1 )
  {
    result = 40;
  }
  else
  {
    v2 = calloc(1u, 0x6Cu);
    v3 = v2;
    if ( !v2 )
      return 12;
    *v2 = -1059148353;
    v2[1] = 0;
    v2[2] = 0;
    v2[4] = 0;
    v2[3] = 0;
    v2[25] = CreateSemaphoreA(0, 0, 0x7FFFFFFF, 0);
    v4 = CreateSemaphoreA(0, 0, 0x7FFFFFFF, 0);
    v5 = (void *)*((_DWORD *)v3 + 25);
    *((_DWORD *)v3 + 26) = v4;
    if ( v5 )
    {
      if ( v4 )
      {
        InitializeCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 20));
        InitializeCriticalSection((LPCRITICAL_SECTION)v3 + 3);
        InitializeCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 44));
        *((_DWORD *)v3 + 17) = 0;
        result = 0;
        *((_DWORD *)v3 + 24) = 1;
        *(_DWORD *)v3 = -1061506563;
        *a1 = v3;
        return result;
      }
      CloseHandle(v5);
      v4 = (HANDLE)*((_DWORD *)v3 + 26);
    }
    if ( v4 )
      CloseHandle(v4);
    free(v3);
    *a1 = 0;
    result = 11;
  }
  return result;
}
