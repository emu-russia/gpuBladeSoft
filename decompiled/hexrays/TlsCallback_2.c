signed int __stdcall TlsCallback_2(int a1, int a2, int a3)
{
  LPVOID v4; // eax@7
  signed int v5; // ebx@7
  unsigned int v6; // eax@9
  int v7; // eax@15
  int v8; // edx@20
  void *v9; // eax@20
  unsigned int v10; // eax@23
  int *v11; // edi@25
  void *v12; // eax@26

  if ( !a2 )
  {
    if ( !a3 )
    {
      if ( dword_7037355C )
      {
        RemoveVectoredExceptionHandler((PVOID)dword_7037355C);
        dword_7037355C = 0;
      }
    }
    return 1;
  }
  if ( a2 != 1 )
  {
    if ( a2 != 3 )
      return 1;
    if ( dwTlsIndex == -1 )
      return 1;
    v4 = TlsGetValue(dwTlsIndex);
    v5 = (signed int)v4;
    if ( !v4 )
      return 1;
    if ( *((_BYTE *)v4 + 32) & 0x30 )
    {
      v6 = *((_DWORD *)v4 + 45);
      if ( v6 )
        sub_6F8B3EC0(v6);
      if ( *(_DWORD *)(v5 + 20) )
      {
        CloseHandle(*(HANDLE *)(v5 + 20));
        if ( *(_DWORD *)(v5 + 24) )
          CloseHandle(*(HANDLE *)(v5 + 24));
        *(_DWORD *)(v5 + 24) = 0;
        *(_DWORD *)(v5 + 20) = 0;
      }
      sub_6F8B33F0((int *)(v5 + 28));
      v7 = v5 + 56;
    }
    else
    {
      v8 = *((_DWORD *)v4 + 26);
      v9 = (void *)*((_DWORD *)v4 + 6);
      if ( v8 )
      {
        if ( v9 )
          CloseHandle(v9);
        *(_DWORD *)(v5 + 24) = 0;
        sub_6F8B33F0((int *)(v5 + 28));
        sub_6F8B3BF0(v5 + 56);
        return 1;
      }
      if ( v9 )
        CloseHandle(v9);
      v10 = *(_DWORD *)(v5 + 180);
      *(_DWORD *)(v5 + 24) = 0;
      *(_DWORD *)(v5 + 104) = 1;
      if ( v10 )
        sub_6F8B3EC0(v10);
      v11 = (int *)(v5 + 28);
      if ( !(*(_BYTE *)(v5 + 36) & 4) )
      {
        sub_6F8B33F0(v11);
        sub_6F8B3BF0(v5 + 56);
        return 1;
      }
      v12 = *(void **)(v5 + 20);
      *(_DWORD *)v5 = -559038737;
      if ( v12 )
        CloseHandle(v12);
      *(_DWORD *)(v5 + 20) = 0;
      sub_6F8B33F0(v11);
      v7 = v5 + 56;
    }
    sub_6F8B3BF0(v7);
    sub_6F8B38D0(v5);
    TlsSetValue(dwTlsIndex, 0);
    return 1;
  }
  dword_7037355C = (int)AddVectoredExceptionHandler(1u, (PVECTORED_EXCEPTION_HANDLER)sub_6F8B3610);
  return 1;
}
