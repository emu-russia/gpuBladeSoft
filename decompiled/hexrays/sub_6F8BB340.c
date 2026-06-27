int __thiscall sub_6F8BB340(_DWORD **this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD **v8; // esi@1
  bool v9; // al@1
  int v10; // edx@1
  bool v12; // al@9

  v8 = this;
  v9 = sub_6F8FD070((int)this, a4);
  v10 = a7;
  if ( v9 )
  {
    *(_DWORD *)a8 = a5;
    *(_DWORD *)(a8 + 4) = a3;
    if ( a2 < 0 )
    {
      if ( a2 == -2 )
        *(_DWORD *)(a8 + 12) = 1;
    }
    else
    {
      *(_DWORD *)(a8 + 12) = 5 * (a7 == a2 + a5) + 1;
    }
  }
  else
  {
    if ( a5 != a7 )
      return (*(int (__stdcall **)(int, int, int, int, int, int, int))(*v8[2] + 28))(a2, a3, a4, a5, a6, v10, a8);
    v12 = sub_6F8FD070((int)v8, a6);
    v10 = a7;
    if ( !v12 )
      return (*(int (__stdcall **)(int, int, int, int, int, int, int))(*v8[2] + 28))(a2, a3, a4, a5, a6, v10, a8);
    *(_DWORD *)(a8 + 8) = a3;
  }
  return 0;
}
