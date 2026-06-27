bool __thiscall sub_6F8C2450(_WORD *this, int a2)
{
  _WORD *v2; // esi@1
  int v3; // ecx@1
  bool v4; // bl@1
  bool v5; // dl@1
  int v6; // ecx@2
  bool v7; // dl@2
  bool v8; // si@2
  __int16 *v10; // eax@4
  __int16 v11; // ax@5
  __int16 *v12; // eax@8
  __int16 v13; // ax@9
  bool v14; // ST0F_1@13

  v2 = this;
  v3 = *(_DWORD *)this;
  v4 = v2[2] == -1;
  v5 = v4 && v3 != 0;
  if ( v4 && v3 != 0 )
  {
    v10 = *(__int16 **)(v3 + 8);
    if ( (unsigned int)v10 >= *(_DWORD *)(v3 + 12) )
    {
      v14 = v4 && v3 != 0;
      v11 = (*(int (**)(void))(*(_DWORD *)v3 + 36))();
      v5 = v14;
    }
    else
    {
      v11 = *v10;
    }
    v4 = 0;
    if ( v11 == -1 )
    {
      *(_DWORD *)v2 = 0;
      v4 = v5;
    }
  }
  v6 = *(_DWORD *)a2;
  v7 = *(_WORD *)(a2 + 4) == -1;
  v8 = v7 && *(_DWORD *)a2 != 0;
  if ( v7 && *(_DWORD *)a2 != 0 )
  {
    v12 = *(__int16 **)(v6 + 8);
    if ( (unsigned int)v12 >= *(_DWORD *)(v6 + 12) )
      v13 = (*(int (**)(void))(*(_DWORD *)v6 + 36))();
    else
      v13 = *v12;
    v7 = 0;
    if ( v13 == -1 )
    {
      *(_DWORD *)a2 = 0;
      v7 = v8;
    }
  }
  return v4 == v7;
}
