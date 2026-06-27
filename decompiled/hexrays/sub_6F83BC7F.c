void __cdecl sub_6F83BC7F(int a1, int a2, int a3)
{
  unsigned int v3; // eax@5
  int v4; // et1@7
  int v5; // [sp+24h] [bp-14h]@4
  unsigned int v6; // [sp+28h] [bp-10h]@7
  char v7; // [sp+2Ch] [bp-Ch]@4
  char v8; // [sp+2Dh] [bp-Bh]@4
  char v9; // [sp+2Eh] [bp-Ah]@4
  unsigned __int8 v10; // [sp+2Fh] [bp-9h]@4

  if ( a1 )
  {
    if ( !(*(_DWORD *)(a1 + 120) & 0x40) )
      sub_6F85007F(a1);
    v5 = *(_DWORD *)(a1 + 276);
    v7 = *(_BYTE *)(a1 + 343);
    v8 = *(_BYTE *)(a1 + 344);
    v9 = *(_BYTE *)(a1 + 347);
    v10 = *(_BYTE *)(a1 + 346);
    if ( v10 <= 7u )
      v3 = (v5 * (unsigned int)v10 + 7) >> 3;
    else
      v3 = v5 * (v10 >> 3);
    v6 = v3;
    v4 = *(_DWORD *)(a1 + 280);
    if ( *(_BYTE *)(a1 + 340) && *(_DWORD *)(a1 + 124) & 2 )
    {
      switch ( *(_BYTE *)(a1 + 341) )
      {
        case 0:
          if ( !(*(_DWORD *)(a1 + 280) & 7) )
            goto LABEL_47;
          if ( a3 )
            sub_6F84E940(a1, (void *)a3, 1);
          sub_6F84FEAB(a1);
          break;
        case 1:
          if ( !(*(_DWORD *)(a1 + 280) & 7) && *(_DWORD *)(a1 + 256) > 4u )
            goto LABEL_47;
          if ( a3 )
            sub_6F84E940(a1, (void *)a3, 1);
          sub_6F84FEAB(a1);
          break;
        case 2:
          if ( (*(_DWORD *)(a1 + 280) & 7) == 4 )
            goto LABEL_47;
          if ( a3 && *(_DWORD *)(a1 + 280) & 4 )
            sub_6F84E940(a1, (void *)a3, 1);
          sub_6F84FEAB(a1);
          break;
        case 3:
          if ( !(*(_DWORD *)(a1 + 280) & 3) && *(_DWORD *)(a1 + 256) > 2u )
            goto LABEL_47;
          if ( a3 )
            sub_6F84E940(a1, (void *)a3, 1);
          sub_6F84FEAB(a1);
          break;
        case 4:
          if ( (*(_DWORD *)(a1 + 280) & 3) == 2 )
            goto LABEL_47;
          if ( a3 && *(_DWORD *)(a1 + 280) & 2 )
            sub_6F84E940(a1, (void *)a3, 1);
          sub_6F84FEAB(a1);
          break;
        case 5:
          if ( !(*(_DWORD *)(a1 + 280) & 1) && *(_DWORD *)(a1 + 256) > 1u )
            goto LABEL_47;
          if ( a3 )
            sub_6F84E940(a1, (void *)a3, 1);
          sub_6F84FEAB(a1);
          break;
        default:
          if ( *(_DWORD *)(a1 + 280) & 1 )
            goto LABEL_47;
          sub_6F84FEAB(a1);
          break;
      }
    }
    else
    {
LABEL_47:
      if ( !(*(_DWORD *)(a1 + 116) & 4) )
        sub_6F839044(a1, (int)"Invalid attempt to read row data");
      sub_6F84FB3B(a1, *(_DWORD *)(a1 + 292), v6 + 1);
      if ( **(_BYTE **)(a1 + 292) )
      {
        if ( **(_BYTE **)(a1 + 292) > 4u )
          sub_6F839044(a1, (int)"bad adaptive filter value");
        sub_6F84FAE6(a1, (int)&v5, *(_DWORD *)(a1 + 292) + 1, *(_DWORD *)(a1 + 288) + 1, **(_BYTE **)(a1 + 292));
      }
      memcpy(*(void **)(a1 + 288), *(const void **)(a1 + 292), v6 + 1);
      if ( *(_DWORD *)(a1 + 616) & 4 && *(_BYTE *)(a1 + 620) == 64 )
        sub_6F84A1FD((int)&v5, *(_DWORD *)(a1 + 292) + 1);
      if ( *(_DWORD *)(a1 + 124) )
        sub_6F844A59(a1, (int)&v5);
      if ( *(_BYTE *)(a1 + 351) )
      {
        if ( *(_BYTE *)(a1 + 351) != v10 )
          sub_6F839044(a1, (int)"internal sequential row size calculation error");
      }
      else
      {
        *(_BYTE *)(a1 + 351) = v10;
        if ( v10 > *(_BYTE *)(a1 + 350) )
          sub_6F839044(a1, (int)"sequential row overflow");
      }
      if ( *(_BYTE *)(a1 + 340) && *(_DWORD *)(a1 + 124) & 2 )
      {
        if ( *(_BYTE *)(a1 + 341) <= 5u )
          sub_6F84F077((int)&v5, *(_DWORD *)(a1 + 292) + 1, *(_BYTE *)(a1 + 341), *(_DWORD *)(a1 + 124));
        if ( a3 )
          sub_6F84E940(a1, (void *)a3, 1);
        if ( a2 )
          sub_6F84E940(a1, (void *)a2, 0);
      }
      else
      {
        if ( a2 )
          sub_6F84E940(a1, (void *)a2, -1);
        if ( a3 )
          sub_6F84E940(a1, (void *)a3, -1);
      }
      sub_6F84FEAB(a1);
      if ( *(_DWORD *)(a1 + 452) )
        (*(void (__cdecl **)(int, _DWORD, _DWORD))(a1 + 452))(a1, *(_DWORD *)(a1 + 280), *(_BYTE *)(a1 + 341));
    }
  }
}
