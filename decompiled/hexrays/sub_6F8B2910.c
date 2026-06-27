signed int __cdecl sub_6F8B2910(int *a1, int a2)
{
  int v2; // ebx@2
  signed int result; // eax@4
  int v4; // [sp+0h] [bp-4Ch]@8
  int v5; // [sp+14h] [bp-38h]@5
  int v6; // [sp+18h] [bp-34h]@8
  int v7; // [sp+1Ch] [bp-30h]@8
  int *v8; // [sp+20h] [bp-2Ch]@8
  signed int (__cdecl *v9)(int); // [sp+24h] [bp-28h]@8
  int *v10; // [sp+28h] [bp-24h]@8
  int v11; // [sp+2Ch] [bp-20h]@8

  if ( !a1 )
    return 22;
  v2 = *a1;
  if ( !*a1 )
    return 22;
  if ( v2 == -1 )
  {
    result = sub_6F8B20F0(a1);
    v5 = result;
    if ( result & 0xFFFFFFEF )
      return result;
    v2 = *a1;
  }
  else
  {
    result = 22;
    if ( *(_DWORD *)v2 != -1061506563 )
      return result;
  }
  result = sub_6F8B2490(
             *(void **)(v2 + 104),
             0,
             0xFFFFFFFF,
             (struct _RTL_CRITICAL_SECTION *)(v2 + 72),
             (volatile signed __int32 *)(v2 + 96));
  v5 = result;
  if ( !result )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 20));
    ++*(_DWORD *)(v2 + 8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 20));
    result = sub_6F8B1BC0(
               *(void **)(v2 + 104),
               1,
               (struct _RTL_CRITICAL_SECTION *)(v2 + 72),
               (volatile signed __int32 *)(v2 + 96));
    v5 = result;
    if ( !result )
    {
      v6 = v2;
      v8 = &v5;
      v9 = sub_6F8B2A80;
      v7 = a2;
      v10 = &v6;
      v11 = *(_DWORD *)sub_6F8B4AF0();
      _InterlockedOr((volatile signed __int32 *)&v4, 0);
      *(_DWORD *)sub_6F8B4AF0() = &v9;
      _InterlockedOr((volatile signed __int32 *)&v4, 0);
      v5 = sub_6F8B3270((volatile signed __int32 *)a2);
      if ( !v5 )
        v5 = sub_6F8B2490(
               *(void **)(v2 + 100),
               0,
               0xFFFFFFFF,
               (struct _RTL_CRITICAL_SECTION *)(v2 + 44),
               (volatile signed __int32 *)(v2 + 68));
      *(_DWORD *)sub_6F8B4AF0() = v11;
      v9((int)v10);
      result = v5;
    }
  }
  return result;
}
