signed int __usercall sub_6F8B1BC0@<eax>(void *a1@<eax>, signed int a2@<edx>, struct _RTL_CRITICAL_SECTION *a3@<ecx>, volatile signed __int32 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // ebp@1
  signed int v5; // ebx@1
  volatile signed __int32 v6; // ecx@1
  LONG v7; // ecx@3
  signed int result; // eax@6
  void *v9; // [sp+1Ch] [bp-20h]@1

  v4 = a3;
  v5 = a2;
  v9 = a1;
  EnterCriticalSection(a3);
  v6 = *a4;
  if ( *a4 + (signed __int64)v5 > 0x7FFFFFFF )
  {
    LeaveCriticalSection(v4);
    result = 34;
  }
  else
  {
    _InterlockedAdd(a4, v5);
    if ( v6 >= 0 )
      goto LABEL_11;
    v7 = -v6;
    if ( v7 > v5 )
      v7 = v5;
    if ( ReleaseSemaphore(v9, v7, 0) )
    {
LABEL_11:
      LeaveCriticalSection(v4);
      result = 0;
    }
    else
    {
      _InterlockedAdd(a4, -v5);
      LeaveCriticalSection(v4);
      result = 22;
    }
  }
  return result;
}
