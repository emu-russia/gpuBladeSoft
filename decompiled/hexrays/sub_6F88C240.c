signed int __cdecl sub_6F88C240(int a1)
{
  signed int result; // eax@4
  int v2; // esi@9
  int v3; // esi@9
  int v4; // edi@9
  signed int v5; // esi@16
  signed int v6; // edx@26

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 12) == 7247 )
    {
      if ( a1 && *(_DWORD *)(a1 + 12) == 7247 )
      {
        if ( *(_DWORD *)(a1 + 24) )
        {
          sub_6F894E30(a1 + 84);
          free(*(void **)(a1 + 36));
          free(*(void **)(a1 + 32));
        }
        v2 = *(_DWORD *)(a1 + 76) != -5;
        sub_6F88C430(a1, 0, 0);
        v3 = 5 * v2 - 5;
        free(*(void **)(a1 + 20));
        v4 = close(*(_DWORD *)(a1 + 16));
        free((void *)a1);
        result = -1;
        if ( !v4 )
          result = v3;
      }
      else
      {
        result = -2;
      }
    }
    else if ( a1 && *(_DWORD *)(a1 + 12) == 31153 )
    {
      if ( *(_DWORD *)(a1 + 72) && (v6 = *(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 72) = 0, sub_6F88D9C0(a1, v6) == -1) )
        v5 = *(_DWORD *)(a1 + 76);
      else
        v5 = 0;
      if ( sub_6F88D830(a1, 4) == -1 )
        v5 = *(_DWORD *)(a1 + 76);
      if ( *(_DWORD *)(a1 + 24) )
      {
        if ( !*(_DWORD *)(a1 + 40) )
        {
          sub_6F890800(a1 + 84);
          free(*(void **)(a1 + 36));
        }
        free(*(void **)(a1 + 32));
      }
      sub_6F88C430(a1, 0, 0);
      free(*(void **)(a1 + 20));
      if ( close(*(_DWORD *)(a1 + 16)) == -1 )
        v5 = -1;
      free((void *)a1);
      result = v5;
    }
    else
    {
      result = -2;
    }
  }
  else
  {
    result = -2;
  }
  return result;
}
