int __cdecl sub_6F8341B7(int a1, int a2, int a3, int a4)
{
  int v4; // eax@16
  int v5; // eax@23
  int v6; // eax@25
  int v7; // eax@35
  int v8; // eax@55
  int result; // eax@58
  unsigned int m; // [sp+1Ch] [bp-1Ch]@51
  int l; // [sp+20h] [bp-18h]@41
  int k; // [sp+24h] [bp-14h]@31
  unsigned int j; // [sp+28h] [bp-10h]@19
  int i; // [sp+2Ch] [bp-Ch]@9

  if ( a1 && a2 )
  {
    if ( (unsigned __int16)a3 & (unsigned __int16)*(_DWORD *)(a2 + 232) & 0x4000 )
    {
      if ( a4 == -1 )
      {
        for ( i = 0; *(_DWORD *)(a2 + 128) > i; ++i )
          sub_6F8341B7(a1, a2, 0x4000, i);
        sub_6F83B5A7(a1, *(_DWORD *)(a2 + 136));
        *(_DWORD *)(a2 + 136) = 0;
        *(_DWORD *)(a2 + 128) = 0;
      }
      else if ( *(_DWORD *)(a2 + 136) && *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * a4 + 4) )
      {
        sub_6F83B5A7(a1, *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * a4 + 4));
        *(_DWORD *)(*(_DWORD *)(a2 + 136) + 28 * a4 + 4) = 0;
      }
    }
    if ( (unsigned __int16)a3 & (unsigned __int16)*(_DWORD *)(a2 + 232) & 0x2000 )
    {
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 156));
      *(_DWORD *)(a2 + 156) = 0;
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFEF;
    }
    if ( (unsigned __int16)a3 & (unsigned __int16)*(_DWORD *)(a2 + 232) & 0x100 )
    {
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 256));
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 260));
      *(_DWORD *)(a2 + 256) = 0;
      *(_DWORD *)(a2 + 260) = 0;
      v4 = *(_DWORD *)(a2 + 8);
      BYTE1(v4) &= 0xBFu;
      *(_DWORD *)(a2 + 8) = v4;
    }
    if ( (unsigned __int8)a3 & (unsigned __int8)*(_DWORD *)(a2 + 232) & 0x80 )
    {
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 208));
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 220));
      *(_DWORD *)(a2 + 208) = 0;
      *(_DWORD *)(a2 + 220) = 0;
      if ( *(_DWORD *)(a2 + 224) )
      {
        for ( j = 0; *(_BYTE *)(a2 + 229) > j; ++j )
        {
          sub_6F83B5A7(a1, *(_DWORD *)(4 * j + *(_DWORD *)(a2 + 224)));
          *(_DWORD *)(4 * j + *(_DWORD *)(a2 + 224)) = 0;
        }
        sub_6F83B5A7(a1, *(_DWORD *)(a2 + 224));
        *(_DWORD *)(a2 + 224) = 0;
      }
      v5 = *(_DWORD *)(a2 + 8);
      BYTE1(v5) &= 0xFBu;
      *(_DWORD *)(a2 + 8) = v5;
    }
    if ( (unsigned __int8)a3 & (unsigned __int8)*(_DWORD *)(a2 + 232) & 0x10 )
    {
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 116));
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 120));
      *(_DWORD *)(a2 + 116) = 0;
      *(_DWORD *)(a2 + 120) = 0;
      v6 = *(_DWORD *)(a2 + 8);
      BYTE1(v6) &= 0xEFu;
      *(_DWORD *)(a2 + 8) = v6;
    }
    if ( (unsigned __int8)a3 & (unsigned __int8)*(_DWORD *)(a2 + 232) & 0x20 )
    {
      if ( a4 == -1 )
      {
        if ( *(_DWORD *)(a2 + 248) )
        {
          for ( k = 0; *(_DWORD *)(a2 + 248) > k; ++k )
            sub_6F8341B7(a1, a2, 32, k);
          sub_6F83B5A7(a1, *(_DWORD *)(a2 + 244));
          *(_DWORD *)(a2 + 244) = 0;
          *(_DWORD *)(a2 + 248) = 0;
        }
        v7 = *(_DWORD *)(a2 + 8);
        BYTE1(v7) &= 0xDFu;
        *(_DWORD *)(a2 + 8) = v7;
      }
      else if ( *(_DWORD *)(a2 + 244) )
      {
        sub_6F83B5A7(a1, *(_DWORD *)(16 * a4 + *(_DWORD *)(a2 + 244)));
        sub_6F83B5A7(a1, *(_DWORD *)(16 * a4 + *(_DWORD *)(a2 + 244) + 8));
        *(_DWORD *)(16 * a4 + *(_DWORD *)(a2 + 244)) = 0;
        *(_DWORD *)(16 * a4 + *(_DWORD *)(a2 + 244) + 8) = 0;
      }
    }
    if ( (unsigned __int16)a3 & (unsigned __int16)*(_DWORD *)(a2 + 232) & 0x200 )
    {
      if ( a4 == -1 )
      {
        if ( *(_DWORD *)(a2 + 240) )
        {
          for ( l = 0; *(_DWORD *)(a2 + 240) > l; ++l )
            sub_6F8341B7(a1, a2, 512, l);
          sub_6F83B5A7(a1, *(_DWORD *)(a2 + 236));
          *(_DWORD *)(a2 + 236) = 0;
          *(_DWORD *)(a2 + 240) = 0;
        }
      }
      else if ( *(_DWORD *)(a2 + 236) )
      {
        sub_6F83B5A7(a1, *(_DWORD *)(*(_DWORD *)(a2 + 236) + 20 * a4 + 8));
        *(_DWORD *)(*(_DWORD *)(a2 + 236) + 20 * a4 + 8) = 0;
      }
    }
    if ( (unsigned __int8)a3 & (unsigned __int8)*(_DWORD *)(a2 + 232) & 8 )
    {
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 204));
      *(_DWORD *)(a2 + 204) = 0;
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFBF;
    }
    if ( (unsigned __int16)a3 & (unsigned __int16)*(_DWORD *)(a2 + 232) & 0x1000 )
    {
      sub_6F83B5A7(a1, *(_DWORD *)(a2 + 16));
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 8) &= 0xFFFFFFF7;
      *(_WORD *)(a2 + 20) = 0;
    }
    if ( (unsigned __int8)a3 & (unsigned __int8)*(_DWORD *)(a2 + 232) & 0x40 )
    {
      if ( *(_DWORD *)(a2 + 264) )
      {
        for ( m = 0; *(_DWORD *)(a2 + 4) > m; ++m )
        {
          sub_6F83B5A7(a1, *(_DWORD *)(4 * m + *(_DWORD *)(a2 + 264)));
          *(_DWORD *)(4 * m + *(_DWORD *)(a2 + 264)) = 0;
        }
        sub_6F83B5A7(a1, *(_DWORD *)(a2 + 264));
        *(_DWORD *)(a2 + 264) = 0;
      }
      v8 = *(_DWORD *)(a2 + 8);
      BYTE1(v8) &= 0x7Fu;
      *(_DWORD *)(a2 + 8) = v8;
    }
    if ( a4 != -1 )
      a3 &= 0xFFFFBDDF;
    result = a2;
    *(_DWORD *)(a2 + 232) &= ~a3;
  }
  return result;
}
