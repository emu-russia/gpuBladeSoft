int __cdecl sub_6F85A9DF(int a1)
{
  size_t v1; // eax@2
  int result; // eax@15
  size_t v3; // [sp+18h] [bp-10h]@4
  unsigned int v4; // [sp+1Ch] [bp-Ch]@1

  v4 = *(_BYTE *)(a1 + 348) * *(_BYTE *)(a1 + 345);
  if ( (signed int)v4 <= 7 )
    v1 = ((*(_DWORD *)(a1 + 256) * v4 + 7) >> 3) + 1;
  else
    v1 = (v4 >> 3) * *(_DWORD *)(a1 + 256) + 1;
  v3 = v1;
  *(_BYTE *)(a1 + 351) = *(_BYTE *)(a1 + 346);
  *(_BYTE *)(a1 + 350) = v4;
  *(_DWORD *)(a1 + 292) = sub_6F83B4D4(a1, v1);
  **(_BYTE **)(a1 + 292) = 0;
  if ( *(_BYTE *)(a1 + 342) & 0x10 )
  {
    *(_DWORD *)(a1 + 296) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
    **(_BYTE **)(a1 + 296) = 1;
  }
  if ( *(_BYTE *)(a1 + 342) & 0xE0 )
  {
    *(_DWORD *)(a1 + 288) = sub_6F83B307(a1, v3);
    if ( *(_BYTE *)(a1 + 342) & 0x20 )
    {
      *(_DWORD *)(a1 + 300) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
      **(_BYTE **)(a1 + 300) = 2;
    }
    if ( *(_BYTE *)(a1 + 342) & 0x40 )
    {
      *(_DWORD *)(a1 + 304) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
      **(_BYTE **)(a1 + 304) = 3;
    }
    if ( *(_BYTE *)(a1 + 342) < 0 )
    {
      *(_DWORD *)(a1 + 308) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 272) + 1);
      **(_BYTE **)(a1 + 308) = 4;
    }
  }
  if ( *(_BYTE *)(a1 + 340) )
  {
    if ( *(_DWORD *)(a1 + 124) & 2 )
    {
      *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 260);
      result = a1;
      *(_DWORD *)(a1 + 268) = *(_DWORD *)(a1 + 256);
    }
    else
    {
      *(_DWORD *)(a1 + 264) = (*(_DWORD *)(a1 + 260) + 7) / 8u;
      result = a1;
      *(_DWORD *)(a1 + 268) = (*(_DWORD *)(a1 + 256) + 7) / 8u;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 260);
    result = a1;
    *(_DWORD *)(a1 + 268) = *(_DWORD *)(a1 + 256);
  }
  return result;
}
