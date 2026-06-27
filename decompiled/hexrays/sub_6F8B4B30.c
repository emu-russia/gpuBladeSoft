void __cdecl __noreturn sub_6F8B4B30(int a1)
{
  int v1; // esi@1
  LPVOID v2; // eax@1
  _BYTE *v3; // ebx@1
  unsigned int v4; // eax@1
  _DWORD *v5; // eax@5
  signed int v6; // ebx@5
  void *v7; // eax@6
  void *v8; // eax@11
  BOOL v9; // [sp+4h] [bp-18h]@0

  v1 = a1;
  v2 = sub_6F8B3D30();
  v3 = v2;
  *((_DWORD *)v2 + 1) = a1;
  v4 = *((_DWORD *)v2 + 45);
  if ( v4 )
    sub_6F8B3EC0(v4);
  if ( !(v3[32] & 0x30) )
    longjmp((int)(v3 + 112), 1);
  v5 = TlsGetValue(dwTlsIndex);
  v6 = (signed int)v5;
  if ( v5 )
  {
    v7 = (void *)v5[6];
    if ( !*(_DWORD *)(v6 + 20) )
    {
      *(_DWORD *)v6 = -559038737;
      if ( v7 )
        CloseHandle(v7);
      *(_DWORD *)(v6 + 24) = 0;
      v1 = *(_DWORD *)(v6 + 4);
      goto LABEL_12;
    }
    v1 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 104) = 1;
    if ( v7 )
      CloseHandle(v7);
    *(_DWORD *)(v6 + 24) = 0;
    if ( *(_BYTE *)(v6 + 36) & 4 )
      goto LABEL_11;
  }
  while ( 1 )
  {
    endthreadex(v1, v9);
LABEL_11:
    v8 = *(void **)(v6 + 20);
    *(_DWORD *)v6 = -559038737;
    CloseHandle(v8);
    *(_DWORD *)(v6 + 20) = 0;
LABEL_12:
    sub_6F8B38D0(v6);
    v9 = TlsSetValue(dwTlsIndex, 0);
  }
}
