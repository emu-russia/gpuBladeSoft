int __cdecl sub_6F843119(int a1)
{
  int v1; // eax@2
  int result; // eax@4
  int v3; // eax@7
  int v4; // [sp+0h] [bp-10h]@1
  __int16 v5; // [sp+8h] [bp-8h]@7
  __int16 v6; // [sp+Ch] [bp-4h]@7

  v4 = *(_WORD *)(a1 + 336) != 0;
  if ( (*(_BYTE *)(a1 + 343) & 4) == 0 )
  {
    *(_DWORD *)(a1 + 124) &= 0xFF7FFFFF;
    v1 = *(_DWORD *)(a1 + 120);
    BYTE1(v1) &= 0xDFu;
    *(_DWORD *)(a1 + 120) = v1;
    if ( !v4 )
      *(_DWORD *)(a1 + 124) &= 0xFFFFFE7F;
  }
  result = *(_DWORD *)(a1 + 124) & 0x100;
  if ( result )
  {
    result = *(_DWORD *)(a1 + 124) & 0x1000;
    if ( result )
    {
      result = *(_BYTE *)(a1 + 343) & 2;
      if ( !(*(_BYTE *)(a1 + 343) & 2) )
      {
        v6 = *(_WORD *)(a1 + 368);
        v5 = *(_WORD *)(a1 + 448);
        v3 = *(_BYTE *)(a1 + 344);
        switch ( v3 )
        {
          case 2:
            v6 *= 85;
            v5 *= 85;
            break;
          case 4:
            v6 *= 17;
            v5 *= 17;
            break;
          case 1:
            v6 *= 255;
            v5 *= 255;
            break;
        }
        *(_WORD *)(a1 + 366) = v6;
        *(_WORD *)(a1 + 364) = *(_WORD *)(a1 + 366);
        *(_WORD *)(a1 + 362) = *(_WORD *)(a1 + 364);
        result = *(_DWORD *)(a1 + 124) & 0x2000000;
        if ( !result )
        {
          *(_WORD *)(a1 + 446) = v5;
          *(_WORD *)(a1 + 444) = *(_WORD *)(a1 + 446);
          result = a1;
          *(_WORD *)(a1 + 442) = *(_WORD *)(a1 + 444);
        }
      }
    }
  }
  return result;
}
