int __usercall sub_6F8B41B0@<eax>(int a1@<edi>, int a2)
{
  volatile signed __int32 *v2; // ebx@1
  volatile signed __int32 *v3; // ebx@5
  int v4; // esi@5
  void *v5; // eax@5
  bool v6; // zf@7
  int (__cdecl *v7)(_DWORD); // eax@11
  int v8; // ebx@12
  unsigned int v9; // eax@13
  void *v10; // edx@16
  int result; // eax@17
  LPVOID lpTlsValue; // [sp+4h] [bp-30h]@3
  LPVOID v13; // [sp+18h] [bp-1Ch]@1
  __int64 savedregs; // [sp+34h] [bp+0h]@1

  LODWORD(savedregs) = a1;
  v13 = (LPVOID)a2;
  v2 = (volatile signed __int32 *)(a2 + 28);
  sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48AD4);
  sub_6F8B2F50(v2);
  if ( dword_70373580 != 1 )
    sub_6F8B3CA0();
  TlsSetValue(dwTlsIndex, v13);
  *((_DWORD *)v13 + 15) = GetCurrentThreadId();
  sub_6F8B3270(v2);
  if ( setjmp3((int)v13 + 112, 0) )
  {
    sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48AD4);
  }
  else
  {
    sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4);
    v7 = (int (__cdecl *)(_DWORD))*((_DWORD *)v13 + 2);
    if ( v7 )
      v8 = v7(*((_DWORD *)v13 + 1));
    else
      v8 = 128;
    sub_6F8B2F50((volatile signed __int32 *)&unk_6FB48AD4);
    *((_DWORD *)v13 + 1) = v8;
    v9 = *((_DWORD *)v13 + 45);
    if ( v9 )
      sub_6F8B3EC0(v9);
  }
  v3 = (volatile signed __int32 *)((char *)v13 + 28);
  sub_6F8B2F50((volatile signed __int32 *)v13 + 7);
  v4 = *((_DWORD *)v13 + 1);
  v5 = (void *)*((_DWORD *)v13 + 6);
  if ( v5 )
    CloseHandle(v5);
  v6 = *((_DWORD *)v13 + 5) == 0;
  *((_DWORD *)v13 + 6) = 0;
  if ( v6 )
  {
    *(_DWORD *)v13 = -559038737;
    sub_6F8B3270(v3);
    sub_6F8B33F0((int *)v3);
    sub_6F8B38D0((signed int)v13);
    TlsSetValue(dwTlsIndex, 0);
    lpTlsValue = v10;
  }
  else
  {
    sub_6F8B3270(v3);
    sub_6F8B33F0((int *)v3);
    *((_DWORD *)v13 + 7) = -1;
    *((_DWORD *)v13 + 26) = 1;
  }
  while ( !sub_6F8B3270((volatile signed __int32 *)&unk_6FB48AD4) )
    Sleep(0);
  endthreadex(v4, lpTlsValue);
  result = a2;
  dword_70373558 = a2;
  return result;
}
