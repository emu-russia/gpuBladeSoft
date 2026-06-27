int __cdecl sub_6F85007F(int a1)
{
  int v1; // eax@27
  int v2; // eax@57
  int v3; // ST18_4@67
  int result; // eax@70
  unsigned int v5; // [sp+24h] [bp-14h]@56
  int v6; // [sp+24h] [bp-14h]@59
  int v7; // [sp+2Ch] [bp-Ch]@7

  sub_6F8432D9(a1);
  if ( *(_BYTE *)(a1 + 340) )
  {
    if ( *(_DWORD *)(a1 + 124) & 2 )
      *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 260);
    else
      *(_DWORD *)(a1 + 264) = (*(_DWORD *)(a1 + 260) + 7) / 8u;
    *(_DWORD *)(a1 + 276) = ((unsigned __int8)byte_6FB9AE68[*(_BYTE *)(a1 + 341)]
                           + *(_DWORD *)(a1 + 256)
                           - (unsigned int)(unsigned __int8)byte_6FB9AE6F[*(_BYTE *)(a1 + 341)]
                           - 1)
                          / (unsigned __int8)byte_6FB9AE68[*(_BYTE *)(a1 + 341)];
  }
  else
  {
    *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 260);
    *(_DWORD *)(a1 + 276) = *(_DWORD *)(a1 + 256);
  }
  v7 = *(_BYTE *)(a1 + 346);
  if ( *(_DWORD *)(a1 + 124) & 4 && *(_BYTE *)(a1 + 344) <= 7u )
    v7 = 8;
  if ( *(_DWORD *)(a1 + 124) & 0x1000 )
  {
    if ( *(_BYTE *)(a1 + 343) == 3 )
    {
      if ( *(_WORD *)(a1 + 336) )
        v7 = 32;
      else
        v7 = 24;
    }
    else if ( *(_BYTE *)(a1 + 343) )
    {
      if ( *(_BYTE *)(a1 + 343) == 2 && *(_WORD *)(a1 + 336) )
        v7 = 4 * v7 / 3;
    }
    else
    {
      if ( v7 <= 7 )
        v7 = 8;
      if ( *(_WORD *)(a1 + 336) )
        v7 *= 2;
    }
  }
  if ( *(_DWORD *)(a1 + 124) & 0x200 )
  {
    if ( *(_DWORD *)(a1 + 124) & 0x1000 )
    {
      if ( *(_BYTE *)(a1 + 344) <= 0xFu )
        v7 *= 2;
    }
    else
    {
      v1 = *(_DWORD *)(a1 + 124);
      BYTE1(v1) &= 0xFDu;
      *(_DWORD *)(a1 + 124) = v1;
    }
  }
  if ( *(_DWORD *)(a1 + 124) & 0x8000 )
  {
    if ( *(_BYTE *)(a1 + 343) )
    {
      if ( *(_BYTE *)(a1 + 343) == 2 || *(_BYTE *)(a1 + 343) == 3 )
      {
        if ( v7 > 32 )
          v7 = 64;
        else
          v7 = 32;
      }
    }
    else if ( v7 > 8 )
    {
      v7 = 32;
    }
    else
    {
      v7 = 16;
    }
  }
  if ( *(_DWORD *)(a1 + 124) & 0x4000 )
  {
    if ( *(_WORD *)(a1 + 336) && *(_DWORD *)(a1 + 124) & 0x1000
      || *(_DWORD *)(a1 + 124) & 0x8000
      || *(_BYTE *)(a1 + 343) == 4 )
    {
      if ( v7 > 16 )
        v7 = 64;
      else
        v7 = 32;
    }
    else if ( v7 > 8 )
    {
      if ( *(_BYTE *)(a1 + 343) == 6 )
        v7 = 64;
      else
        v7 = 48;
    }
    else if ( *(_BYTE *)(a1 + 343) == 6 )
    {
      v7 = 32;
    }
    else
    {
      v7 = 24;
    }
  }
  if ( *(_DWORD *)(a1 + 124) & 0x100000 && *(_BYTE *)(a1 + 112) * *(_BYTE *)(a1 + 113) > v7 )
    v7 = *(_BYTE *)(a1 + 112) * *(_BYTE *)(a1 + 113);
  *(_BYTE *)(a1 + 350) = v7;
  *(_BYTE *)(a1 + 351) = 0;
  v5 = (*(_DWORD *)(a1 + 256) + 7) & 0xFFFFFFF8;
  if ( v7 <= 7 )
    v2 = ((v5 * v7 + 7) >> 3) + 1;
  else
    v2 = v5 * ((unsigned int)v7 >> 3) + 1;
  v6 = ((v7 + 7) >> 3) + v2;
  if ( (unsigned int)(v6 + 48) > *(_DWORD *)(a1 + 692) )
  {
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 636));
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 712));
    if ( *(_BYTE *)(a1 + 340) )
      *(_DWORD *)(a1 + 636) = sub_6F83B307(a1, v6 + 48);
    else
      *(_DWORD *)(a1 + 636) = sub_6F83B4D4(a1, v6 + 48);
    *(_DWORD *)(a1 + 712) = sub_6F83B4D4(a1, v6 + 48);
    *(_DWORD *)(a1 + 292) = *(_DWORD *)(a1 + 636) + 32 + ~((*(_BYTE *)(a1 + 636) + 32) & 0xF);
    *(_DWORD *)(a1 + 288) = *(_DWORD *)(a1 + 712) + 32 + ~((*(_BYTE *)(a1 + 712) + 32) & 0xF);
    *(_DWORD *)(a1 + 692) = v6 + 48;
  }
  if ( *(_DWORD *)(a1 + 272) == -1 )
    sub_6F839044(a1, (int)"Row has too many bytes to allocate in memory");
  memset(*(void **)(a1 + 288), 0, *(_DWORD *)(a1 + 272) + 1);
  if ( *(_DWORD *)(a1 + 696) )
  {
    v3 = *(_DWORD *)(a1 + 696);
    *(_DWORD *)(a1 + 700) = 0;
    *(_DWORD *)(a1 + 696) = 0;
    sub_6F83B5A7(a1, v3);
  }
  if ( sub_6F84A9E8(a1, 1229209940) )
    sub_6F839044(a1, *(_DWORD *)(a1 + 156));
  result = a1;
  *(_DWORD *)(a1 + 120) |= 0x40u;
  return result;
}
