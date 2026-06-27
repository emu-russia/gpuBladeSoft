unsigned int sub_6F75F990()
{
  int *v0; // edi@1
  unsigned int v1; // eax@2
  unsigned int result; // eax@4
  unsigned int v3; // ecx@4
  unsigned int v4; // edx@4
  unsigned int v5; // esi@4

  v0 = dword_7035CC40;
  do
  {
    v1 = 0;
    do
    {
      v0[v1] = 0;
      ++v1;
    }
    while ( v1 < 8 );
    result = 4;
    v0[8] = 0;
    v3 = (unsigned int)(v0 + 9) & 0xFFFFFFFC;
    v0[15] = 0;
    *(_DWORD *)v3 = 0;
    v4 = ((unsigned int)v0 + -v3 + 64) & 0xFFFFFFFC;
    v5 = ((v4 - 1) >> 2) & 7;
    if ( v4 > 4 )
    {
      if ( !v5 )
        goto LABEL_23;
      if ( v5 != 1 )
      {
        if ( v5 != 2 )
        {
          if ( v5 != 3 )
          {
            if ( v5 != 4 )
            {
              if ( v5 != 5 )
              {
                if ( v5 != 6 )
                {
                  *(_DWORD *)(v3 + 4) = 0;
                  result = 8;
                }
                *(_DWORD *)(v3 + result) = 0;
                result += 4;
              }
              *(_DWORD *)(v3 + result) = 0;
              result += 4;
            }
            *(_DWORD *)(v3 + result) = 0;
            result += 4;
          }
          *(_DWORD *)(v3 + result) = 0;
          result += 4;
        }
        *(_DWORD *)(v3 + result) = 0;
        result += 4;
      }
      *(_DWORD *)(v3 + result) = 0;
      result += 4;
      if ( result < v4 )
      {
LABEL_23:
        do
        {
          *(_DWORD *)(v3 + result) = 0;
          *(_DWORD *)(v3 + result + 4) = 0;
          *(_DWORD *)(v3 + result + 8) = 0;
          *(_DWORD *)(v3 + result + 12) = 0;
          *(_DWORD *)(v3 + result + 16) = 0;
          *(_DWORD *)(v3 + result + 20) = 0;
          *(_DWORD *)(v3 + result + 24) = 0;
          *(_DWORD *)(v3 + result + 28) = 0;
          result += 32;
        }
        while ( result < v4 );
      }
    }
    v0 += 34;
  }
  while ( v0 != &dword_7035D4C0 );
  return result;
}
