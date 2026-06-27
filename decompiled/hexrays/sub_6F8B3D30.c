LPVOID sub_6F8B3D30()
{
  void *v0; // esi@3
  LPVOID result; // eax@4
  int v2; // ebx@5
  HANDLE v3; // eax@7
  HANDLE v4; // ebp@7
  HANDLE v5; // edi@7
  HANDLE v6; // eax@7
  int v7; // eax@8

  if ( dword_70373580 != 1 )
    sub_6F8B3CA0();
  v0 = TlsGetValue(dwTlsIndex);
  if ( !v0 && (v2 = sub_6F8B3B40(), off_70377020) && v2 )
  {
    *(_DWORD *)(v2 + 36) = 1;
    *(_DWORD *)(v2 + 60) = GetCurrentThreadId();
    v3 = CreateEventA(0, 1, 0, 0);
    *(_DWORD *)(v2 + 28) = -1;
    *(_DWORD *)(v2 + 24) = v3;
    sub_6F8B3BF0(v2 + 56);
    *(_DWORD *)(v2 + 100) = 0;
    *(_DWORD *)(v2 + 20) = 0;
    v4 = GetCurrentProcess();
    v5 = GetCurrentThread();
    v6 = GetCurrentProcess();
    if ( !DuplicateHandle(v6, v5, v4, (LPHANDLE)(v2 + 20), 0, 0, 2u)
      || (v7 = GetThreadPriority(*(HANDLE *)(v2 + 20)),
          *(_DWORD *)(v2 + 104) = 0,
          *(_DWORD *)(v2 + 108) = v7,
          *(_BYTE *)(v2 + 32) = *(_BYTE *)(v2 + 32) & 0xCF | 0x10,
          !TlsSetValue(dwTlsIndex, (LPVOID)v2)) )
    {
      abort();
    }
    result = (LPVOID)v2;
  }
  else
  {
    result = v0;
  }
  return result;
}
