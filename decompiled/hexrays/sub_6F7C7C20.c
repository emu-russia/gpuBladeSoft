int __cdecl sub_6F7C7C20(int a1, unsigned int a2, signed int a3, _DWORD *a4)
{
  int result; // eax@1
  unsigned int v5; // eax@3
  int (__cdecl *v6)(int, unsigned int, signed int, signed int, _DWORD *); // ecx@6
  int v7; // eax@14
  int v8; // eax@15
  unsigned int v9; // eax@20
  int v10; // edx@26
  signed int v11; // eax@27
  int v12; // eax@31
  signed int v13; // edx@32

  result = 35;
  if ( !a1 )
    return result;
  result = 6;
  if ( !a4 )
    return result;
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 <= a2 )
    return 16;
  v6 = *(int (__cdecl **)(int, unsigned int, signed int, signed int, _DWORD *))(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 12)
                                                                              + 84);
  if ( v6 )
  {
    if ( a3 & 3 || ((a3 >> 16) & 0xF) == 1 )
    {
      result = v6(a1, a2, 1, a3, a4);
      if ( !result )
      {
        if ( !(a3 & 1) )
        {
          v12 = *(_DWORD *)(a1 + 88);
          if ( v12 )
          {
            v13 = *(_DWORD *)(v12 + 20);
            if ( !(a3 & 0x10) )
              v13 = *(_DWORD *)(v12 + 16);
            v11 = v13;
            goto LABEL_35;
          }
          return 36;
        }
        return 0;
      }
      if ( (_BYTE)result != 7 )
        return result;
      v9 = *(_DWORD *)(a1 + 16);
      if ( v9 < a2 + 1 || a2 > a2 + 1 || a2 >= v9 )
        return 16;
      v6 = *(int (__cdecl **)(int, unsigned int, signed int, signed int, _DWORD *))(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 12)
                                                                                  + 84);
      if ( !v6 )
        goto LABEL_12;
      if ( a3 & 3 )
      {
LABEL_24:
        result = v6(a1, a2, 1, a3, a4);
        if ( result )
        {
          if ( (_BYTE)result != 7 )
            return result;
          goto LABEL_12;
        }
        if ( !(a3 & 1) )
        {
          v10 = *(_DWORD *)(a1 + 88);
          if ( v10 )
          {
            v11 = *(_DWORD *)(v10 + 20);
            if ( !(a3 & 0x10) )
              v11 = *(_DWORD *)(v10 + 16);
LABEL_35:
            *a4 = sub_6F7C9420(*a4, v11, 64);
            return 0;
          }
          return 36;
        }
        return 0;
      }
    }
    else if ( a2 > a2 + 1 || v5 < a2 + 1 )
    {
      return 16;
    }
    if ( ((a3 >> 16) & 0xF) != 1 )
      goto LABEL_12;
    goto LABEL_24;
  }
  if ( v5 < a2 + 1 || a2 > a2 + 1 )
    return 16;
LABEL_12:
  result = 7;
  if ( !(a3 & 0x20000000) )
  {
    result = sub_6F76E6F0(a1, a2, a3 | 0x100);
    if ( !result )
    {
      v7 = *(_DWORD *)(a1 + 84);
      if ( a3 & 0x10 )
        v8 = *(_DWORD *)(v7 + 68) << 10;
      else
        v8 = *(_DWORD *)(v7 + 64) << 10;
      *a4 = v8;
      return 0;
    }
  }
  return result;
}
