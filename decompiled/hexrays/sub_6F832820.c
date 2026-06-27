void __cdecl sub_6F832820(int a1, int a2, unsigned int a3)
{
  signed int v3; // eax@2
  _BYTE *v4; // edi@3
  unsigned int v5; // eax@4
  int v6; // ecx@4
  signed int v7; // edx@4
  int v8; // esi@8
  signed int v9; // eax@10
  signed int v10; // eax@12
  char *v11; // eax@19
  int v12; // eax@20

  if ( a3 <= 0x20 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)a1 < v3 - 4 )
    {
      v4 = *(_BYTE **)(a1 + 12);
      goto LABEL_4;
    }
    if ( !*(_DWORD *)(a1 + 12) )
      return;
    if ( v3 <= 2147483391 )
    {
      v11 = (char *)realloc(*(void **)(a1 + 8), v3 + 256);
      if ( v11 )
      {
        *(_DWORD *)(a1 + 8) = v11;
        v12 = (int)&v11[*(_DWORD *)a1];
        *(_DWORD *)(a1 + 16) += 256;
        v4 = (_BYTE *)v12;
        *(_DWORD *)(a1 + 12) = v12;
LABEL_4:
        v5 = dword_6FB98380[a3] & a2;
        v6 = *(_DWORD *)(a1 + 4);
        v7 = a3 + v6;
        *v4 |= v5 << v6;
        if ( (signed int)(a3 + v6) > 7 )
        {
          *(_BYTE *)(*(_DWORD *)(a1 + 12) + 1) = v5 >> (8 - *(_BYTE *)(a1 + 4));
          if ( v7 > 15 )
          {
            *(_BYTE *)(*(_DWORD *)(a1 + 12) + 2) = v5 >> (16 - *(_BYTE *)(a1 + 4));
            if ( v7 > 23 )
            {
              *(_BYTE *)(*(_DWORD *)(a1 + 12) + 3) = v5 >> (24 - *(_BYTE *)(a1 + 4));
              if ( v7 > 31 )
              {
                v8 = *(_DWORD *)(a1 + 4);
                if ( v8 )
                  *(_BYTE *)(*(_DWORD *)(a1 + 12) + 4) = v5 >> (32 - v8);
                else
                  *(_BYTE *)(*(_DWORD *)(a1 + 12) + 4) = 0;
              }
            }
          }
        }
        v9 = v7 + 7;
        if ( v7 >= 0 )
          v9 = a3 + v6;
        *(_DWORD *)(a1 + 4) = v7 & 7;
        v10 = v9 >> 3;
        *(_DWORD *)a1 += v10;
        *(_DWORD *)(a1 + 12) += v10;
        return;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 8) )
    free(*(void **)(a1 + 8));
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
}
