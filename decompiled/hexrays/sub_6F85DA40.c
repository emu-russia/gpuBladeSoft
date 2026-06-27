int __cdecl sub_6F85DA40(int a1)
{
  int v1; // ebx@1
  int v2; // esi@3
  int v3; // edi@4
  int v4; // esi@13
  int v5; // edi@14
  int v6; // eax@16
  int v7; // edx@17
  int v9; // eax@22
  int v10; // eax@25
  int v11; // edx@26
  int v12; // eax@32
  int v13; // edx@32
  __int16 v14; // ST0C_2@35
  int v15; // ebx@35
  int v16; // [sp+10h] [bp-48h]@25
  int v17; // [sp+14h] [bp-44h]@25
  int v18; // [sp+18h] [bp-40h]@1
  int v19; // [sp+1Ch] [bp-3Ch]@24
  char v20[16]; // [sp+20h] [bp-38h]@23
  char v21[40]; // [sp+30h] [bp-28h]@23

  v1 = a1;
  v18 = *(_DWORD *)(a1 + 388);
  if ( !*(_BYTE *)(a1 + 209) )
  {
    if ( *(_DWORD *)(a1 + 272) > 0 )
    {
      v2 = 0;
      do
      {
        v3 = *(_DWORD *)(a1 + 4 * v2 + 276);
        if ( !*(_DWORD *)(a1 + 344) && !*(_DWORD *)(a1 + 352) )
          sub_6F85D500((_DWORD *)a1, *(_DWORD *)(v3 + 20), 0);
        if ( *(_DWORD *)(a1 + 348) )
          sub_6F85D500((_DWORD *)a1, *(_DWORD *)(v3 + 24), 1);
        ++v2;
      }
      while ( *(_DWORD *)(a1 + 272) > v2 );
    }
    goto LABEL_10;
  }
  v9 = 0;
  do
  {
    v20[v9] = 0;
    v21[v9++] = 0;
  }
  while ( v9 != 16 );
  v19 = *(_DWORD *)(a1 + 272);
  if ( v19 > 0 )
  {
    v17 = *(_DWORD *)(a1 + 344);
    v16 = *(_DWORD *)(a1 + 348);
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)(a1 + 4 * v10 + 276);
      if ( !v17 && !*(_DWORD *)(a1 + 352) )
        v21[*(_DWORD *)(v11 + 20)] = 1;
      if ( v16 )
        v20[*(_DWORD *)(v11 + 24)] = 1;
      ++v10;
    }
    while ( v10 < v19 );
  }
  v12 = 0;
  v13 = 0;
  do
  {
    v13 += v20[v12] + v21[v12];
    ++v12;
  }
  while ( v12 != 16 );
  if ( v13 )
  {
    v14 = v13;
    sub_6F85D394(a1, -52);
    sub_6F85D3B0(a1, 2 * v14 + 2);
    v15 = 0;
    while ( 1 )
    {
      if ( v21[v15] )
      {
        sub_6F85D350(a1, v15);
        sub_6F85D350(a1, 16 * *(_BYTE *)(a1 + v15 + 168) + *(_BYTE *)(a1 + v15 + 152));
        if ( v20[v15] )
          goto LABEL_40;
LABEL_37:
        if ( ++v15 == 16 )
          goto LABEL_41;
      }
      else
      {
        if ( !v20[v15] )
          goto LABEL_37;
LABEL_40:
        sub_6F85D350(a1, v15 + 16);
        sub_6F85D350(a1, *(_BYTE *)(a1 + v15++ + 184));
        if ( v15 == 16 )
        {
LABEL_41:
          v1 = a1;
          break;
        }
      }
    }
  }
LABEL_10:
  if ( *(_DWORD *)(v1 + 224) != *(_DWORD *)(v18 + 28) )
  {
    sub_6F85D394(v1, -35);
    sub_6F85D3B0(v1, 4);
    sub_6F85D3B0(v1, *(_DWORD *)(v1 + 224));
    *(_DWORD *)(v18 + 28) = *(_DWORD *)(v1 + 224);
  }
  sub_6F85D394(v1, -38);
  sub_6F85D3B0(v1, 2 * *(_WORD *)(v1 + 272) + 6);
  sub_6F85D350(v1, *(_DWORD *)(v1 + 272));
  if ( *(_DWORD *)(v1 + 272) > 0 )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(v1 + 4 * v4 + 276);
      sub_6F85D350(v1, *(_DWORD *)v5);
      if ( *(_DWORD *)(v1 + 344) || *(_DWORD *)(v1 + 352) )
      {
        LOBYTE(v6) = 0;
        if ( !*(_DWORD *)(v1 + 348) )
        {
LABEL_21:
          LOBYTE(v7) = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v6 = 16 * *(_DWORD *)(v5 + 20);
        if ( !*(_DWORD *)(v1 + 348) )
          goto LABEL_21;
      }
      v7 = *(_DWORD *)(v5 + 24);
LABEL_18:
      sub_6F85D350(v1, v6 + v7);
      ++v4;
    }
    while ( v4 < *(_DWORD *)(v1 + 272) );
  }
  sub_6F85D350(v1, *(_DWORD *)(v1 + 344));
  sub_6F85D350(v1, *(_DWORD *)(v1 + 348));
  return sub_6F85D350(v1, *(_BYTE *)(v1 + 356) + 16 * *(_BYTE *)(v1 + 352));
}
