int __cdecl sub_6F76DAA0(int a1, int a2, _BYTE *a3, int a4)
{
  int result; // eax@4
  int v5; // edx@9
  int (__cdecl **v6)(int, int, _BYTE *, int); // eax@9
  int (__cdecl *v7)(int, int, _BYTE *, int); // eax@11
  int v8; // ecx@13
  int (__cdecl *v9)(int, const char *); // eax@13

  if ( !a1 )
    return 35;
  if ( a3 && a4 )
  {
    *a3 = 0;
    result = 16;
    if ( *(_DWORD *)(a1 + 16) <= a2 )
      return result;
    if ( *(_BYTE *)(a1 + 9) & 2 )
    {
      v5 = *(_DWORD *)(a1 + 128);
      v6 = *(int (__cdecl ***)(int, int, _BYTE *, int))(v5 + 36);
      if ( v6 != (int (__cdecl **)(int, int, _BYTE *, int))-2 )
      {
        if ( v6 )
          goto LABEL_11;
        v8 = *(_DWORD *)(a1 + 96);
        v9 = *(int (__cdecl **)(int, const char *))(*(_DWORD *)v8 + 32);
        if ( v9 )
        {
          v6 = (int (__cdecl **)(int, int, _BYTE *, int))v9(v8, "glyph-dict");
          v5 = *(_DWORD *)(a1 + 128);
          if ( v6 )
          {
            *(_DWORD *)(v5 + 36) = v6;
LABEL_11:
            v7 = *v6;
            if ( v7 )
              return v7(a1, a2, a3, a4);
            return 6;
          }
        }
        *(_DWORD *)(v5 + 36) = -2;
      }
    }
  }
  return 6;
}
