bool __thiscall sub_6F8C2310(_DWORD *this, int a2)
{
  _DWORD *v2; // esi@1
  int v3; // ecx@1
  bool v4; // dl@1
  bool v5; // bl@1
  int v6; // ecx@2
  bool v7; // bl@2
  bool v8; // si@2
  int v10; // eax@5
  bool v11; // ST0F_1@8
  int v12; // eax@8

  v2 = this;
  v3 = *this;
  v4 = v2[1] == -1;
  v5 = v4 && v3 != 0;
  if ( v4 && v3 != 0 )
  {
    v4 = 0;
    if ( *(_DWORD *)(v3 + 8) >= *(_DWORD *)(v3 + 12) )
    {
      v10 = (*(int (**)(void))(*(_DWORD *)v3 + 36))();
      v4 = 0;
      if ( v10 == -1 )
      {
        *v2 = 0;
        v4 = v5;
      }
    }
  }
  v6 = *(_DWORD *)a2;
  v7 = *(_DWORD *)(a2 + 4) == -1;
  v8 = v7 && *(_DWORD *)a2 != 0;
  if ( v7 && *(_DWORD *)a2 != 0 )
  {
    v7 = 0;
    if ( *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v6 + 12) )
    {
      v11 = v4;
      v12 = (*(int (**)(void))(*(_DWORD *)v6 + 36))();
      v4 = v11;
      if ( v12 == -1 )
      {
        *(_DWORD *)a2 = 0;
        v7 = v8;
      }
    }
  }
  return v4 == v7;
}
