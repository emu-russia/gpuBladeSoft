unsigned int __cdecl sub_6F852F11(int a1, _BYTE *a2)
{
  unsigned int result; // eax@4
  unsigned int v3; // [sp+Ch] [bp-24h]@14
  unsigned int v4; // [sp+10h] [bp-20h]@8
  unsigned int v5; // [sp+14h] [bp-1Ch]@2
  unsigned int i; // [sp+18h] [bp-18h]@14
  _BYTE *v7; // [sp+1Ch] [bp-14h]@14
  unsigned int j; // [sp+20h] [bp-10h]@8
  _BYTE *v9; // [sp+24h] [bp-Ch]@8
  unsigned int k; // [sp+28h] [bp-8h]@2
  _BYTE *v11; // [sp+2Ch] [bp-4h]@2

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( *(_BYTE *)(a1 + 8) != 4 || *(_BYTE *)(a1 + 9) != 8 )
    {
      result = *(_BYTE *)(a1 + 8);
      if ( (_BYTE)result == 4 )
      {
        result = *(_BYTE *)(a1 + 9);
        if ( (_BYTE)result == 16 )
        {
          v7 = a2;
          v3 = *(_DWORD *)(a1 + 4);
          for ( i = 0; ; i += 4 )
          {
            result = i;
            if ( i >= v3 )
              break;
            *v7 = ~*v7;
            v7[1] = ~v7[1];
            v7 += 4;
          }
        }
      }
    }
    else
    {
      v9 = a2;
      v4 = *(_DWORD *)(a1 + 4);
      for ( j = 0; ; j += 2 )
      {
        result = j;
        if ( j >= v4 )
          break;
        *v9 = ~*v9;
        v9 += 2;
      }
    }
  }
  else
  {
    v11 = a2;
    v5 = *(_DWORD *)(a1 + 4);
    for ( k = 0; ; ++k )
    {
      result = k;
      if ( k >= v5 )
        break;
      *v11 = ~*v11;
      ++v11;
    }
  }
  return result;
}
