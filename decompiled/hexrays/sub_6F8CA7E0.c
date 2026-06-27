int __stdcall sub_6F8CA7E0(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v7; // edx@1
  int v8; // ebx@1
  int v9; // eax@2
  bool v10; // bp@5
  bool v11; // al@6
  bool v13; // zf@15
  int v14; // eax@15
  int v15; // [sp+34h] [bp-38h]@1
  bool v16; // [sp+38h] [bp-34h]@5
  int v17; // [sp+48h] [bp-24h]@1
  int v18; // [sp+4Ch] [bp-20h]@1

  v18 = 0;
  v8 = sub_6F8CA960(a1, a2, a3, a4, &v17, 0, 9999, 4u, a5, &v18);
  v15 = v8;
  if ( v18 )
  {
    *a6 |= 4u;
  }
  else
  {
    v9 = v17 - 1900;
    if ( v17 < 0 )
      v9 = v17 + 100;
    *(_DWORD *)(a7 + 20) = v9;
  }
  v10 = v7 == -1;
  v16 = v10 && v8 != 0;
  if ( v16 )
  {
    v10 = 0;
    if ( *(_DWORD *)(v8 + 8) >= *(_DWORD *)(v8 + 12) )
    {
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 36))(v8) == -1;
      v14 = 0;
      if ( !v13 )
        v14 = v8;
      if ( v13 )
        v10 = v16;
      v15 = v14;
    }
  }
  v11 = a4 == -1;
  if ( a3 )
  {
    if ( v11 )
    {
      v11 = 0;
      if ( *(_DWORD *)(a3 + 8) >= *(_DWORD *)(a3 + 12) )
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 36))(a3) == -1;
    }
  }
  if ( v10 == v11 )
    *a6 |= 2u;
  return v15;
}
