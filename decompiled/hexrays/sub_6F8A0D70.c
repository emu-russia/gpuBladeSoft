void sub_6F8A0D70()
{
  int i; // ebx@1
  LPVOID v1; // esi@2

  EnterCriticalSection((LPCRITICAL_SECTION)&unk_70372B68);
  for ( i = dword_70372B60; i; i = *(_DWORD *)(i + 8) )
  {
    v1 = TlsGetValue(*(_DWORD *)i);
    if ( !GetLastError() && v1 )
      (*(void (__cdecl **)(LPVOID))(i + 4))(v1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&unk_70372B68);
}
