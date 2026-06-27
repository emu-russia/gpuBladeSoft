void __cdecl sub_6F8527C7(int a1, int a2, const char *a3, signed int a4)
{
  unsigned int i; // [sp+18h] [bp-20h]@23
  unsigned int v5; // [sp+18h] [bp-20h]@26
  void *v6; // [sp+1Ch] [bp-1Ch]@26
  void *v7; // [sp+20h] [bp-18h]@26
  unsigned int v8; // [sp+24h] [bp-14h]@12
  unsigned int v9; // [sp+28h] [bp-10h]@8
  int v10; // [sp+28h] [bp-10h]@26
  void *v11; // [sp+2Ch] [bp-Ch]@17

  if ( a1 )
  {
    if ( a2 < 0 || a2 > 3 )
    {
      sub_6F8395F1(a1, "png_set_keep_unknown_chunks: invalid keep");
      return;
    }
    if ( a4 > 0 || (*(_DWORD *)(a1 + 596) = a2, a4) )
    {
      if ( a4 >= 0 )
      {
        if ( !a3 )
        {
          sub_6F8395F1(a1, "png_set_keep_unknown_chunks: no chunk list");
          return;
        }
        v9 = a4;
      }
      else
      {
        a3 = "bKGD";
        v9 = 17;
      }
      v8 = *(_DWORD *)(a1 + 600);
      if ( !*(_DWORD *)(a1 + 604) )
        v8 = 0;
      if ( v9 + v8 <= 0x33333333 )
      {
        if ( a2 )
        {
          v11 = sub_6F83B4D4(a1, 5 * (v8 + v9));
          if ( v8 )
            memcpy(v11, *(const void **)(a1 + 604), 5 * v8);
        }
        else if ( v8 )
        {
          v11 = *(void **)(a1 + 604);
        }
        else
        {
          v11 = 0;
        }
        if ( v11 )
        {
          for ( i = 0; i < v9; ++i )
            v8 = sub_6F852746((int)v11, v8, &a3[5 * i], a2);
          v10 = 0;
          v5 = 0;
          v6 = v11;
          v7 = v11;
          while ( v5 < v8 )
          {
            if ( *((_BYTE *)v7 + 4) )
            {
              if ( v6 != v7 )
                memcpy(v6, v7, 5u);
              v6 = (char *)v6 + 5;
              ++v10;
            }
            ++v5;
            v7 = (char *)v7 + 5;
          }
          if ( !v10 )
          {
            if ( *(void **)(a1 + 604) != v11 )
              sub_6F83B5A7(a1, (int)v11);
            v11 = 0;
          }
        }
        else
        {
          v10 = 0;
        }
        *(_DWORD *)(a1 + 600) = v10;
        if ( *(void **)(a1 + 604) != v11 )
        {
          if ( *(_DWORD *)(a1 + 604) )
            sub_6F83B5A7(a1, *(_DWORD *)(a1 + 604));
          *(_DWORD *)(a1 + 604) = v11;
        }
      }
      else
      {
        sub_6F8395F1(a1, "png_set_keep_unknown_chunks: too many chunks");
      }
    }
  }
}
