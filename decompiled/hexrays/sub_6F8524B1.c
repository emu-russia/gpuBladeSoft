void __cdecl sub_6F8524B1(int a1, int a2, int a3, int a4)
{
  int v4; // eax@8
  char *v5; // [sp+2Ch] [bp-Ch]@6
  int v6; // [sp+2Ch] [bp-Ch]@8

  if ( a1 && a2 && a4 > 0 && a3 )
  {
    v5 = (char *)sub_6F83B411(a1, *(const void **)(a2 + 236), *(_DWORD *)(a2 + 240), a4, 0x14u);
    if ( !v5 )
    {
      sub_6F83987F(a1, "too many unknown chunks", 1);
      return;
    }
    sub_6F83B5A7(a1, *(_DWORD *)(a2 + 236));
    *(_DWORD *)(a2 + 236) = v5;
    v4 = *(_DWORD *)(a2 + 232);
    BYTE1(v4) |= 2u;
    *(_DWORD *)(a2 + 232) = v4;
    v6 = (int)&v5[20 * *(_DWORD *)(a2 + 240)];
    while ( 1 )
    {
      if ( a4 <= 0 )
        return;
      memcpy((void *)v6, (const void *)a3, 5u);
      *(_BYTE *)(v6 + 4) = 0;
      *(_BYTE *)(v6 + 16) = sub_6F852436(a1, *(_BYTE *)(a3 + 16));
      if ( *(_DWORD *)(a3 + 12) )
      {
        *(_DWORD *)(v6 + 8) = sub_6F83B347(a1, *(_DWORD *)(a3 + 12));
        if ( !*(_DWORD *)(v6 + 8) )
        {
          sub_6F83987F(a1, "unknown chunk: out of memory", 1);
          goto LABEL_15;
        }
        memcpy(*(void **)(v6 + 8), *(const void **)(a3 + 8), *(_DWORD *)(a3 + 12));
        *(_DWORD *)(v6 + 12) = *(_DWORD *)(a3 + 12);
      }
      else
      {
        *(_DWORD *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 12) = 0;
      }
      v6 += 20;
      ++*(_DWORD *)(a2 + 240);
LABEL_15:
      --a4;
      a3 += 20;
    }
  }
}
