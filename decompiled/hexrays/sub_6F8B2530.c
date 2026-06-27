signed int __cdecl sub_6F8B2530(int *a1)
{
  int v1; // ebx@2
  signed int v2; // esi@4
  signed int result; // eax@5
  signed int v4; // esi@13
  struct _RTL_CRITICAL_SECTION *v5; // [sp+1Ch] [bp-20h]@6

  if ( a1 && (v1 = *a1) != 0 )
  {
    if ( v1 == -1 )
    {
      v4 = 16;
      sub_6F8B35C0(&dword_6FB48ACC);
      if ( *a1 == -1 )
      {
        *a1 = 0;
        v4 = 0;
      }
      sub_6F8B3600(&dword_6FB48ACC);
      result = v4;
    }
    else
    {
      v2 = sub_6F8B2490(
             *(void **)(v1 + 104),
             0,
             0xFFFFFFFF,
             (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
             (volatile signed __int32 *)(v1 + 96));
      if ( v2 )
        return v2;
      v5 = (struct _RTL_CRITICAL_SECTION *)(v1 + 20);
      if ( !TryEnterCriticalSection((LPCRITICAL_SECTION)(v1 + 20)) )
      {
        v2 = 16;
        sub_6F8B1BC0(
          *(void **)(v1 + 104),
          1,
          (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
          (volatile signed __int32 *)(v1 + 96));
        return v2;
      }
      if ( *(_DWORD *)(v1 + 8) > *(_DWORD *)(v1 + 16) )
      {
        v2 = sub_6F8B1BC0(
               *(void **)(v1 + 104),
               1,
               (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
               (volatile signed __int32 *)(v1 + 96));
        if ( !v2 )
          v2 = 16;
        LeaveCriticalSection(v5);
        return v2;
      }
      *a1 = 0;
      sub_6F8B1BC0(
        *(void **)(v1 + 104),
        1,
        (struct _RTL_CRITICAL_SECTION *)(v1 + 72),
        (volatile signed __int32 *)(v1 + 96));
      CloseHandle(*(HANDLE *)(v1 + 100));
      CloseHandle(*(HANDLE *)(v1 + 104));
      LeaveCriticalSection(v5);
      DeleteCriticalSection(v5);
      DeleteCriticalSection((LPCRITICAL_SECTION)(v1 + 72));
      DeleteCriticalSection((LPCRITICAL_SECTION)(v1 + 44));
      free((void *)v1);
      result = 0;
    }
  }
  else
  {
    result = 22;
  }
  return result;
}
