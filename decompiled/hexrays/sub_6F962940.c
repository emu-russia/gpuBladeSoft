int __cdecl sub_6F962940(char *a1, int a2, int a3, int a4)
{
  int v4; // edx@1
  int v5; // ecx@1
  char *v6; // edx@1
  int v7; // eax@1
  int v8; // edx@2
  int result; // eax@2
  int v10; // [sp+48h] [bp-30h]@1
  int v11; // [sp+4Ch] [bp-2Ch]@1
  int v12; // [sp+50h] [bp-28h]@1
  int v13; // [sp+54h] [bp-24h]@1
  int v14; // [sp+58h] [bp-20h]@1

  v4 = *(_DWORD *)(*(_DWORD *)a1 - 8);
  v5 = *(_DWORD *)(*(_DWORD *)a1 - 4);
  v10 = 0;
  v11 = 0;
  v6 = &a1[v4];
  v12 = 0;
  v7 = *(_DWORD *)v6;
  v13 = 0;
  v14 = 16;
  if ( *(_DWORD *)(v7 - 4) != v5 )
    return 0;
  (*(void (__stdcall **)(int, signed int, int, char *, int, char *, int *))(*(_DWORD *)v5 + 28))(
    a4,
    6,
    a3,
    v6,
    a2,
    a1,
    &v10);
  v8 = v10;
  result = v10;
  if ( !v10 )
    return 0;
  if ( (v13 & 6) != 6 && ((unsigned __int8)v12 & (unsigned __int8)v11 & 6) != 6 )
  {
    if ( (v12 & 5) == 4 || v13 )
      return 0;
    if ( a4 < 0 )
    {
      if ( a4 == -2
        || ((*(int (__thiscall **)(int, int, int, int, char *))(*(_DWORD *)a3 + 32))(a3, a4, v10, a2, a1) & 6) != 6 )
      {
        return 0;
      }
      v8 = v10;
    }
    else if ( a1 != (char *)(v10 + a4) )
    {
      return 0;
    }
    result = v8;
  }
  return result;
}
