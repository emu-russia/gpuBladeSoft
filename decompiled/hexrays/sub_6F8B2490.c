signed int __usercall sub_6F8B2490@<eax>(void *a1@<eax>, signed int a2@<edx>, DWORD a3@<ecx>, struct _RTL_CRITICAL_SECTION *a4, volatile signed __int32 *a5)
{
  volatile signed __int32 v5; // ebp@1
  signed int result; // eax@2
  signed int v7; // ebp@3
  void *v8; // [sp+14h] [bp-28h]@1
  signed int v9; // [sp+18h] [bp-24h]@1
  DWORD v10; // [sp+1Ch] [bp-20h]@1

  v8 = a1;
  v9 = a2;
  v10 = a3;
  EnterCriticalSection(a4);
  _InterlockedSub(a5, 1u);
  v5 = *a5;
  LeaveCriticalSection(a4);
  if ( v5 < 0 )
  {
    v7 = sub_6F8B2150(v8, v9, v10);
    EnterCriticalSection(a4);
    if ( v7 )
      _InterlockedAdd(a5, 1u);
    LeaveCriticalSection(a4);
    result = v7;
  }
  else
  {
    result = 0;
  }
  return result;
}
