int sub_6F762250()
{
  HMODULE v0; // eax@1
  int result; // eax@1
  int *v2; // esi@3
  int v3; // ebx@3
  int v4; // edi@7
  _DWORD *v5; // edi@9
  int v6; // esi@9
  int v7; // ebx@9
  int v8; // eax@12

  dword_7036E7C4[0] = 0;
  dword_7036E88C = 0;
  dword_7036E954 = 0;
  dword_7036EA1C = 0;
  dword_7036EAE4 = 0;
  dword_7036EBAC = 0;
  dword_7036EC74 = 0;
  dword_7036ED3C = 0;
  dword_7036EE04 = 0;
  dword_7036EECC = 0;
  dword_7036EF94 = 0;
  dword_7036F05C = 0;
  dword_7036F124 = 0;
  dword_7036F1EC = 0;
  dword_7036F2B4 = 0;
  dword_7036F37C = 0;
  dword_7036F38C = (int)GetActiveWindow();
  v0 = GetModuleHandleA(0);
  result = DirectInput8Create((int)v0, 2048, (int)"0€y¿:H¢Mª™]dí6—", (int)&dword_7036F388, 0);
  if ( result >= 0 )
  {
    dword_7036F384 = 0;
    result = (*(int (__stdcall **)(int, signed int, signed int (__stdcall *)(int, int), _DWORD, signed int))(*(_DWORD *)dword_7036F388 + 16))(
               dword_7036F388,
               4,
               sub_6F761B50,
               0,
               1);
    if ( result >= 0 )
    {
      v2 = dword_7036E7C4;
      v3 = 0;
      do
      {
        if ( *v2 )
        {
          result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)*v2 + 44))(*v2, &unk_6FBA2A70);
          if ( result < 0 )
            return result;
          result = (*(int (__stdcall **)(int, int, signed int))(*(_DWORD *)*v2 + 52))(*v2, dword_7036F38C, 10);
          if ( result < 0 )
            return result;
          v4 = *v2;
          dword_7036F380 = v3;
          result = (*(int (__stdcall **)(int, unsigned int (__stdcall *)(int, int), int, _DWORD))(*(_DWORD *)v4 + 16))(
                     v4,
                     sub_6F761AD0,
                     dword_7036F38C,
                     0);
          if ( result < 0 )
            return result;
          (*(void (__stdcall **)(int))(*(_DWORD *)*v2 + 28))(*v2);
        }
        v5 = v2 + 50;
        v6 = v2[50];
        v7 = v3 + 1;
        if ( v6 )
        {
          result = (*(int (__stdcall **)(int, void *))(*(_DWORD *)v6 + 44))(v6, &unk_6FBA2A70);
          if ( result < 0 )
            return result;
          result = (*(int (__stdcall **)(_DWORD, int, signed int))(*(_DWORD *)*v5 + 52))(*v5, dword_7036F38C, 10);
          if ( result < 0 )
            return result;
          v8 = *v5;
          dword_7036F380 = v7;
          result = (*(int (__stdcall **)(int, unsigned int (__stdcall *)(int, int), int, _DWORD))(*(_DWORD *)v8 + 16))(
                     v8,
                     sub_6F761AD0,
                     dword_7036F38C,
                     0);
          if ( result < 0 )
            return result;
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 28))(*v5);
        }
        v3 = v7 + 1;
        v2 = v5 + 50;
      }
      while ( v3 != 16 );
      result = 0;
    }
  }
  return result;
}
