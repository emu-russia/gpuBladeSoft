int __cdecl sub_6F842F35(int a1)
{
  int v1; // eax@10
  int result; // eax@12
  int v3; // [sp+Ch] [bp-14h]@16
  int j; // [sp+10h] [bp-10h]@16
  signed int i; // [sp+14h] [bp-Ch]@2
  signed int v6; // [sp+18h] [bp-8h]@1
  signed int v7; // [sp+1Ch] [bp-4h]@1

  v7 = 0;
  v6 = 0;
  if ( *(_WORD *)(a1 + 336) )
  {
    for ( i = 0; *(_WORD *)(a1 + 336) > i; ++i )
    {
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 436) + i) != -1 )
      {
        if ( *(_BYTE *)(*(_DWORD *)(a1 + 436) + i) )
        {
          v6 = 1;
          v7 = 1;
          break;
        }
        v6 = 1;
      }
    }
  }
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 124) &= 0xFF7FFFFF;
    v1 = *(_DWORD *)(a1 + 120);
    BYTE1(v1) &= 0xDFu;
    *(_DWORD *)(a1 + 120) = v1;
    if ( !v6 )
      *(_DWORD *)(a1 + 124) &= 0xFFFFFE7F;
  }
  result = *(_DWORD *)(a1 + 124) & 0x100;
  if ( result )
  {
    result = *(_DWORD *)(a1 + 124) & 0x1000;
    if ( result )
    {
      *(_WORD *)(a1 + 362) = *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * *(_BYTE *)(a1 + 360));
      *(_WORD *)(a1 + 364) = *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * *(_BYTE *)(a1 + 360) + 1);
      *(_WORD *)(a1 + 366) = *(_BYTE *)(*(_DWORD *)(a1 + 324) + 3 * *(_BYTE *)(a1 + 360) + 2);
      result = *(_DWORD *)(a1 + 124) & 0x80000;
      if ( result )
      {
        result = *(_DWORD *)(a1 + 124) & 0x2000000;
        if ( !result )
        {
          v3 = *(_WORD *)(a1 + 336);
          for ( j = 0; ; ++j )
          {
            result = j;
            if ( j >= v3 )
              break;
            *(_BYTE *)(j + *(_DWORD *)(a1 + 436)) = ~*(_BYTE *)(*(_DWORD *)(a1 + 436) + j);
          }
        }
      }
    }
  }
  return result;
}
