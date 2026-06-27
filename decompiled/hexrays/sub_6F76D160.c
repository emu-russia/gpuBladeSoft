signed int __cdecl sub_6F76D160(int a1, int a2)
{
  signed int result; // eax@1
  unsigned int v3; // edx@5
  unsigned int v4; // esi@6
  int v5; // eax@9
  unsigned int v6; // esi@12
  unsigned int v7; // ecx@13
  unsigned int v8; // eax@13
  int v9; // edx@15
  int v10; // edi@16

  result = 35;
  if ( a1 )
  {
    result = 6;
    if ( a2 )
    {
      if ( a2 == 1970170211 )
      {
        v6 = *(_DWORD *)(a1 + 40);
        result = 38;
        if ( v6 )
        {
          v7 = v6 + 4 * *(_DWORD *)(a1 + 36);
          v8 = v6 + 4 * *(_DWORD *)(a1 + 36);
          while ( 1 )
          {
            v8 -= 4;
            if ( v6 > v8 )
              break;
            v9 = *(_DWORD *)v8;
            if ( *(_DWORD *)(*(_DWORD *)v8 + 4) == 1970170211 )
            {
              v10 = *(_DWORD *)(v9 + 8);
              if ( v10 == 655363 || v10 == 0x40000 )
              {
                *(_DWORD *)(a1 + 92) = v9;
                return 0;
              }
            }
          }
          while ( 1 )
          {
            v7 -= 4;
            if ( v6 > v7 )
              break;
            v5 = *(_DWORD *)v7;
            if ( *(_DWORD *)(*(_DWORD *)v7 + 4) == 1970170211 )
              goto LABEL_10;
          }
          result = 38;
        }
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 40);
        result = 38;
        if ( v3 )
        {
          v4 = v3 + 4 * *(_DWORD *)(a1 + 36);
          if ( v3 < v4 )
          {
            while ( 1 )
            {
              v5 = *(_DWORD *)v3;
              if ( a2 == *(_DWORD *)(*(_DWORD *)v3 + 4) )
                break;
              v3 += 4;
              if ( v4 <= v3 )
                goto LABEL_11;
            }
LABEL_10:
            *(_DWORD *)(a1 + 92) = v5;
            result = 0;
          }
          else
          {
LABEL_11:
            result = 6;
          }
        }
      }
    }
  }
  return result;
}
