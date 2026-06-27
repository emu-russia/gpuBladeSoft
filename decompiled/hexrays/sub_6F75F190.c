int sub_6F75F190()
{
  HMODULE v0; // eax@1
  int result; // eax@1
  int *v2; // esi@3
  _DWORD *v3; // ebx@8
  int v4; // esi@8
  int v5; // esi@12
  int v6; // esi@16

  dword_7035CCC4[0] = 0;
  dword_7035CD4C = 0;
  dword_7035CDD4 = 0;
  dword_7035CE5C = 0;
  dword_7035CEE4 = 0;
  dword_7035CF6C = 0;
  dword_7035CFF4 = 0;
  dword_7035D07C = 0;
  dword_7035D104 = 0;
  dword_7035D18C = 0;
  dword_7035D214 = 0;
  dword_7035D29C = 0;
  dword_7035D324 = 0;
  dword_7035D3AC = 0;
  dword_7035D434 = 0;
  dword_7035D4BC = 0;
  dword_7035D4C8 = (int)GetActiveWindow();
  v0 = GetModuleHandleA(0);
  result = DirectInput8Create((int)v0, 2048, (int)"0€y¿:H¢Mª™]dí6—", (int)&dword_7035D4C4, 0);
  if ( result >= 0 )
  {
    dword_7035D4C0 = 0;
    result = (*(int (__stdcall **)(int, signed int, signed int (__stdcall *)(int, int), _DWORD, signed int))(*(_DWORD *)dword_7035D4C4 + 16))(
               dword_7035D4C4,
               2,
               sub_6F75F120,
               0,
               1);
    if ( result >= 0 )
    {
      v2 = dword_7035CCC4;
      do
      {
        if ( *v2 )
        {
          result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)*v2 + 44))(*v2, &unk_6FBA2A88);
          if ( result < 0 )
            return result;
          result = (*(int (__stdcall **)(int, int, signed int))(*(_DWORD *)*v2 + 52))(*v2, dword_7035D4C8, 10);
          if ( result < 0 )
            return result;
          (*(void (__stdcall **)(int))(*(_DWORD *)*v2 + 28))(*v2);
        }
        v3 = v2 + 34;
        v4 = v2[34];
        if ( v4 )
        {
          result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)v4 + 44))(v4, &unk_6FBA2A88);
          if ( result < 0 )
            return result;
          result = (*(int (__stdcall **)(_DWORD, int, signed int))(*(_DWORD *)*v3 + 52))(*v3, dword_7035D4C8, 10);
          if ( result < 0 )
            return result;
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v3 + 28))(*v3);
        }
        v5 = v3[34];
        if ( v5 )
        {
          result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)v5 + 44))(v5, &unk_6FBA2A88);
          if ( result < 0 )
            return result;
          result = (*(int (__stdcall **)(_DWORD, int, signed int))(*(_DWORD *)v3[34] + 52))(v3[34], dword_7035D4C8, 10);
          if ( result < 0 )
            return result;
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3[34] + 28))(v3[34]);
        }
        v6 = v3[68];
        if ( v6 )
        {
          result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)v6 + 44))(v6, &unk_6FBA2A88);
          if ( result < 0 )
            return result;
          result = (*(int (__stdcall **)(_DWORD, int, signed int))(*(_DWORD *)v3[68] + 52))(v3[68], dword_7035D4C8, 10);
          if ( result < 0 )
            return result;
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3[68] + 28))(v3[68]);
        }
        v2 = v3 + 102;
      }
      while ( (_UNKNOWN *)(v3 + 102) != &unk_7035D544 );
      result = 0;
    }
  }
  return result;
}
