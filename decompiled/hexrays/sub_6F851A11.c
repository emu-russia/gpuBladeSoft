signed int __cdecl sub_6F851A11(int a1, int a2, int a3, int a4)
{
  int v5; // eax@14
  size_t v6; // [sp+2Ch] [bp-2Ch]@20
  int v7; // [sp+30h] [bp-28h]@16
  unsigned int v8; // [sp+34h] [bp-24h]@7
  size_t v9; // [sp+38h] [bp-20h]@21
  size_t v10; // [sp+3Ch] [bp-1Ch]@21
  size_t v11; // [sp+40h] [bp-18h]@30
  void *v12; // [sp+44h] [bp-14h]@7
  unsigned int v13; // [sp+48h] [bp-10h]@7
  int i; // [sp+4Ch] [bp-Ch]@15

  if ( !a1 || !a2 || a4 <= 0 || !a3 )
    return 0;
  if ( *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 128) < a4 )
  {
    v8 = *(_DWORD *)(a2 + 128);
    v12 = 0;
    v13 = v8;
    if ( (signed int)(0x7FFFFFFF - v8) >= a4 )
    {
      if ( (signed int)(a4 + v8) > 2147483638 )
        v13 = 0x7FFFFFFF;
      else
        v13 = (a4 + v8 + 8) & 0xFFFFFFF8;
      v12 = sub_6F83B411(a1, *(const void **)(a2 + 136), v8, v13 - v8, 0x1Cu);
    }
    if ( !v12 )
    {
      sub_6F83987F(a1, "too many text chunks", 1);
      return 1;
    }
    sub_6F83B5A7(a1, *(_DWORD *)(a2 + 136));
    *(_DWORD *)(a2 + 136) = v12;
    v5 = *(_DWORD *)(a2 + 232);
    BYTE1(v5) |= 0x40u;
    *(_DWORD *)(a2 + 232) = v5;
    *(_DWORD *)(a2 + 132) = v13;
  }
  for ( i = 0; i < a4; ++i )
  {
    v7 = *(_DWORD *)(a2 + 136) + 28 * *(_DWORD *)(a2 + 128);
    if ( *(_DWORD *)(28 * i + a3 + 4) )
    {
      if ( *(_DWORD *)(28 * i + a3) >= -1 && *(_DWORD *)(28 * i + a3) <= 2 )
      {
        v6 = strlen(*(const char **)(28 * i + a3 + 4));
        if ( *(_DWORD *)(28 * i + a3) > 0 )
        {
          if ( *(_DWORD *)(28 * i + a3 + 20) )
            v10 = strlen(*(const char **)(28 * i + a3 + 20));
          else
            v10 = 0;
          if ( *(_DWORD *)(28 * i + a3 + 24) )
            v9 = strlen(*(const char **)(28 * i + a3 + 24));
          else
            v9 = 0;
        }
        else
        {
          v10 = 0;
          v9 = 0;
        }
        if ( *(_DWORD *)(28 * i + a3 + 8) && **(_BYTE **)(28 * i + a3 + 8) )
        {
          v11 = strlen(*(const char **)(28 * i + a3 + 8));
          *(_DWORD *)v7 = *(_DWORD *)(28 * i + a3);
        }
        else
        {
          v11 = 0;
          if ( *(_DWORD *)(28 * i + a3) <= 0 )
            *(_DWORD *)v7 = -1;
          else
            *(_DWORD *)v7 = 1;
        }
        *(_DWORD *)(v7 + 4) = sub_6F83B347(a1, v10 + v11 + v6 + v9 + 4);
        if ( !*(_DWORD *)(v7 + 4) )
        {
          sub_6F83987F(a1, "text chunk: out of memory", 1);
          return 1;
        }
        memcpy(*(void **)(v7 + 4), *(const void **)(28 * i + a3 + 4), v6);
        *(_BYTE *)(*(_DWORD *)(v7 + 4) + v6) = 0;
        if ( *(_DWORD *)(28 * i + a3) <= 0 )
        {
          *(_DWORD *)(v7 + 20) = 0;
          *(_DWORD *)(v7 + 24) = 0;
          *(_DWORD *)(v7 + 8) = *(_DWORD *)(v7 + 4) + v6 + 1;
        }
        else
        {
          *(_DWORD *)(v7 + 20) = *(_DWORD *)(v7 + 4) + v6 + 1;
          memcpy(*(void **)(v7 + 20), *(const void **)(28 * i + a3 + 20), v10);
          *(_BYTE *)(*(_DWORD *)(v7 + 20) + v10) = 0;
          *(_DWORD *)(v7 + 24) = *(_DWORD *)(v7 + 20) + v10 + 1;
          memcpy(*(void **)(v7 + 24), *(const void **)(28 * i + a3 + 24), v9);
          *(_BYTE *)(*(_DWORD *)(v7 + 24) + v9) = 0;
          *(_DWORD *)(v7 + 8) = *(_DWORD *)(v7 + 24) + v9 + 1;
        }
        if ( v11 )
          memcpy(*(void **)(v7 + 8), *(const void **)(28 * i + a3 + 8), v11);
        *(_BYTE *)(*(_DWORD *)(v7 + 8) + v11) = 0;
        if ( *(_DWORD *)v7 <= 0 )
        {
          *(_DWORD *)(v7 + 12) = v11;
          *(_DWORD *)(v7 + 16) = 0;
        }
        else
        {
          *(_DWORD *)(v7 + 12) = 0;
          *(_DWORD *)(v7 + 16) = v11;
        }
        ++*(_DWORD *)(a2 + 128);
      }
      else
      {
        sub_6F83987F(a1, "text compression mode is out of range", 1);
      }
    }
  }
  return 0;
}
