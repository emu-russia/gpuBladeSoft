void __cdecl sub_6F85495F(int a1, const void *a2)
{
  unsigned int v2; // eax@34
  int v3; // [sp+14h] [bp-14h]@33
  unsigned int v4; // [sp+18h] [bp-10h]@36
  char v5; // [sp+1Ch] [bp-Ch]@33
  char v6; // [sp+1Dh] [bp-Bh]@33
  char v7; // [sp+1Eh] [bp-Ah]@33
  unsigned __int8 v8; // [sp+1Fh] [bp-9h]@33

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 280) && !*(_BYTE *)(a1 + 341) )
    {
      if ( !(*(_DWORD *)(a1 + 116) & 0x400) )
        sub_6F839044(a1, (int)"png_write_info was never called before png_write_row");
      sub_6F85A9DF(a1);
    }
    if ( *(_BYTE *)(a1 + 340) && *(_DWORD *)(a1 + 124) & 2 )
    {
      switch ( *(_BYTE *)(a1 + 341) )
      {
        case 0:
          if ( !(*(_DWORD *)(a1 + 280) & 7) )
            goto LABEL_33;
          sub_6F85ACBA(a1);
          break;
        case 1:
          if ( !(*(_DWORD *)(a1 + 280) & 7) && *(_DWORD *)(a1 + 256) > 4u )
            goto LABEL_33;
          sub_6F85ACBA(a1);
          break;
        case 2:
          if ( (*(_DWORD *)(a1 + 280) & 7) == 4 )
            goto LABEL_33;
          sub_6F85ACBA(a1);
          break;
        case 3:
          if ( !(*(_DWORD *)(a1 + 280) & 3) && *(_DWORD *)(a1 + 256) > 2u )
            goto LABEL_33;
          sub_6F85ACBA(a1);
          break;
        case 4:
          if ( (*(_DWORD *)(a1 + 280) & 3) == 2 )
            goto LABEL_33;
          sub_6F85ACBA(a1);
          break;
        case 5:
          if ( !(*(_DWORD *)(a1 + 280) & 1) && *(_DWORD *)(a1 + 256) > 1u )
            goto LABEL_33;
          sub_6F85ACBA(a1);
          break;
        case 6:
          if ( *(_DWORD *)(a1 + 280) & 1 )
            goto LABEL_33;
          sub_6F85ACBA(a1);
          break;
        default:
          goto LABEL_33;
      }
    }
    else
    {
LABEL_33:
      v5 = *(_BYTE *)(a1 + 343);
      v3 = *(_DWORD *)(a1 + 268);
      v7 = *(_BYTE *)(a1 + 348);
      v6 = *(_BYTE *)(a1 + 345);
      v8 = v7 * v6;
      if ( (unsigned __int8)(v7 * v6) <= 7u )
        v2 = (v3 * (unsigned int)v8 + 7) >> 3;
      else
        v2 = v3 * (v8 >> 3);
      v4 = v2;
      memcpy((void *)(*(_DWORD *)(a1 + 292) + 1), a2, v2);
      if ( *(_BYTE *)(a1 + 340)
        && *(_BYTE *)(a1 + 341) <= 5u
        && *(_DWORD *)(a1 + 124) & 2
        && (sub_6F85AF5C((int)&v3, (_BYTE *)(*(_DWORD *)(a1 + 292) + 1), *(_BYTE *)(a1 + 341)), !v3) )
      {
        sub_6F85ACBA(a1);
      }
      else
      {
        if ( *(_DWORD *)(a1 + 124) )
          sub_6F85714C(a1, (int)&v3);
        if ( v8 != *(_BYTE *)(a1 + 346) || v8 != *(_BYTE *)(a1 + 351) )
          sub_6F839044(a1, (int)"internal write transform logic error");
        if ( *(_DWORD *)(a1 + 616) & 4 && *(_BYTE *)(a1 + 620) == 64 )
          sub_6F857DD2((int)&v3, *(_DWORD *)(a1 + 292) + 1);
        if ( v5 == 3 && *(_DWORD *)(a1 + 332) >= 0 )
          sub_6F853542(a1, (int)&v3);
        sub_6F85B310(a1, (int)&v3);
        if ( *(_DWORD *)(a1 + 456) )
          (*(void (__cdecl **)(int, _DWORD, _DWORD))(a1 + 456))(a1, *(_DWORD *)(a1 + 280), *(_BYTE *)(a1 + 341));
      }
    }
  }
}
