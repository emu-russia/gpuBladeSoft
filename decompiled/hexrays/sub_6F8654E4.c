char __cdecl sub_6F8654E4(int a1)
{
  int v1; // eax@1
  int v2; // edx@2
  int v3; // ecx@3
  int v4; // eax@3
  signed int i; // edi@5
  signed int j; // edi@9
  int v7; // esi@19
  int v8; // edi@20
  int v9; // eax@25
  int v11; // [sp+14h] [bp-34h]@3
  int v12; // [sp+18h] [bp-30h]@4
  int v13; // [sp+1Ch] [bp-2Ch]@4
  int v14; // [sp+20h] [bp-28h]@9
  int v15; // [sp+28h] [bp-20h]@8
  int v16; // [sp+2Ch] [bp-1Ch]@12

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 != 202 )
  {
    v2 = *(_DWORD *)a1;
    *(_DWORD *)(v2 + 20) = 21;
    *(_DWORD *)(v2 + 24) = v1;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
  }
  sub_6F8629D8(a1);
  v11 = *(_DWORD *)(a1 + 196);
  v3 = *(_DWORD *)(a1 + 196);
  v4 = *(_DWORD *)(a1 + 36);
  if ( v4 > 0 )
  {
    v13 = *(_DWORD *)(a1 + 280);
    v12 = 0;
    while ( 1 )
    {
      for ( i = 1; ; i *= 2 )
      {
        v15 = i * v13;
        if ( (*(_BYTE *)(a1 + 72) < 1u ? 4 : 8) < i * v13 || *(_DWORD *)(a1 + 272) % (i * 2 * *(_DWORD *)(v3 + 8)) )
          break;
      }
      *(_DWORD *)(v3 + 36) = v15;
      v14 = *(_DWORD *)(a1 + 284);
      for ( j = 1; ; j *= 2 )
      {
        v16 = j * v14;
        if ( (*(_BYTE *)(a1 + 72) < 1u ? 4 : 8) < j * v14 || *(_DWORD *)(a1 + 276) % (j * 2 * *(_DWORD *)(v3 + 12)) )
          break;
      }
      *(_DWORD *)(v3 + 40) = v16;
      if ( 2 * v16 < v15 )
        break;
      if ( 2 * v15 >= v16 )
        goto LABEL_15;
      *(_DWORD *)(v3 + 40) = 2 * v15;
      ++v12;
      v4 = *(_DWORD *)(a1 + 36);
      if ( v4 <= v12 )
      {
LABEL_19:
        v7 = v11;
        if ( v4 > 0 )
        {
          v8 = 0;
          do
          {
            *(_DWORD *)(v7 + 44) = sub_6F868CC4(
                                     *(_DWORD *)(a1 + 28) * *(_DWORD *)(v7 + 8) * *(_DWORD *)(v7 + 36),
                                     *(_DWORD *)(a1 + 272) * *(_DWORD *)(a1 + 384));
            *(_DWORD *)(v7 + 48) = sub_6F868CC4(
                                     *(_DWORD *)(a1 + 32) * *(_DWORD *)(v7 + 12) * *(_DWORD *)(v7 + 40),
                                     *(_DWORD *)(a1 + 276) * *(_DWORD *)(a1 + 384));
            ++v8;
            v7 += 88;
            v4 = *(_DWORD *)(a1 + 36);
          }
          while ( v4 > v8 );
        }
        goto LABEL_22;
      }
LABEL_16:
      v3 += 88;
    }
    *(_DWORD *)(v3 + 36) = 2 * v16;
LABEL_15:
    ++v12;
    v4 = *(_DWORD *)(a1 + 36);
    if ( v4 <= v12 )
      goto LABEL_19;
    goto LABEL_16;
  }
LABEL_22:
  if ( *(_DWORD *)(a1 + 44) <= 5u )
  {
    switch ( *(_DWORD *)(a1 + 44) )
    {
      case 0:
        goto LABEL_23;
      case 1:
        *(_DWORD *)(a1 + 100) = 1;
        break;
      case 2:
      case 3:
        *(_DWORD *)(a1 + 100) = 3;
        break;
      case 4:
      case 5:
        *(_DWORD *)(a1 + 100) = 4;
        break;
    }
  }
  else
  {
LABEL_23:
    *(_DWORD *)(a1 + 100) = v4;
  }
  if ( *(_BYTE *)(a1 + 74) )
  {
    *(_DWORD *)(a1 + 104) = 1;
    LOBYTE(v9) = sub_6F865298(a1);
    if ( !(_BYTE)v9 )
      goto LABEL_26;
LABEL_29:
    v9 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(a1 + 108) = v9;
    return v9;
  }
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 100);
  LOBYTE(v9) = sub_6F865298(a1);
  if ( (_BYTE)v9 )
    goto LABEL_29;
LABEL_26:
  *(_DWORD *)(a1 + 108) = 1;
  return v9;
}
