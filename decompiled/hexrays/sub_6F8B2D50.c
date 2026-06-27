signed int __cdecl sub_6F8B2D50(int *a1, int a2, int a3)
{
  int v3; // ebx@2
  signed int result; // eax@4
  unsigned __int64 v5; // rax@9
  int v6; // [sp+0h] [bp-5Ch]@5
  DWORD v7; // [sp+1Ch] [bp-40h]@9
  int v8; // [sp+24h] [bp-38h]@6
  int v9; // [sp+28h] [bp-34h]@11
  int v10; // [sp+2Ch] [bp-30h]@11
  int *v11; // [sp+30h] [bp-2Ch]@11
  signed int (__cdecl *v12)(int); // [sp+34h] [bp-28h]@11
  int *v13; // [sp+38h] [bp-24h]@11
  int v14; // [sp+3Ch] [bp-20h]@11

  if ( !a1 )
    return 22;
  v3 = *a1;
  if ( *a1 )
  {
    if ( v3 == -1 )
    {
      result = sub_6F8B20F0(a1);
      v8 = result;
      if ( result & 0xFFFFFFEF )
        return result;
      v3 = *a1;
    }
    else
    {
      result = 22;
      if ( *(_DWORD *)v3 != -1061506563 )
        return result;
    }
    v6 = a3;
    v5 = sub_6F8B2E30(v6);
    v7 = v5;
    if ( v5 > 0xFFFFFFFE )
      v7 = -1;
    result = sub_6F8B2490(
               *(void **)(v3 + 104),
               0,
               0xFFFFFFFF,
               (struct _RTL_CRITICAL_SECTION *)(v3 + 72),
               (volatile signed __int32 *)(v3 + 96));
    v8 = result;
    if ( !result )
    {
      ++*(_DWORD *)(v3 + 8);
      result = sub_6F8B1BC0(
                 *(void **)(v3 + 104),
                 1,
                 (struct _RTL_CRITICAL_SECTION *)(v3 + 72),
                 (volatile signed __int32 *)(v3 + 96));
      v8 = result;
      if ( !result )
      {
        v9 = v3;
        v11 = &v8;
        v10 = a2;
        v12 = sub_6F8B2A80;
        v13 = &v9;
        v14 = *(_DWORD *)sub_6F8B4AF0();
        _InterlockedOr((volatile signed __int32 *)&v6, 0);
        *(_DWORD *)sub_6F8B4AF0() = &v12;
        _InterlockedOr((volatile signed __int32 *)&v6, 0);
        v8 = sub_6F8B3270((volatile signed __int32 *)a2);
        if ( !v8 )
          v8 = sub_6F8B2490(
                 *(void **)(v3 + 100),
                 0,
                 v7,
                 (struct _RTL_CRITICAL_SECTION *)(v3 + 44),
                 (volatile signed __int32 *)(v3 + 68));
        *(_DWORD *)sub_6F8B4AF0() = v14;
        v12((int)v13);
        result = v8;
      }
    }
  }
  else
  {
    result = 22;
  }
  return result;
}
