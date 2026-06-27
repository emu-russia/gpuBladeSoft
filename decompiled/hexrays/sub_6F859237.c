int __cdecl sub_6F859237(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // eax@5
  int v5; // eax@12
  int result; // eax@14
  int v7; // eax@17
  int v8; // eax@29
  signed int v9; // [sp+18h] [bp-20h]@27
  int v10; // [sp+1Ch] [bp-1Ch]@27
  signed int v11; // [sp+20h] [bp-18h]@15
  int v12; // [sp+24h] [bp-14h]@15
  int v13; // [sp+28h] [bp-10h]@14
  unsigned int v14; // [sp+2Ch] [bp-Ch]@9
  unsigned int v15; // [sp+48h] [bp+10h]@11

  if ( *(_DWORD *)(a1 + 128) != 1229209940 )
  {
    if ( *(_DWORD *)(a1 + 188) )
    {
      sub_6F8588D5(a1, *(_DWORD **)(a1 + 188));
    }
    else
    {
      *(_DWORD *)(a1 + 188) = sub_6F83B4D4(a1, *(_DWORD *)(a1 + 192) + 4);
      **(_DWORD **)(a1 + 188) = 0;
    }
    v4 = sub_6F8582F3(a1);
    if ( sub_6F8585A3(a1, 0x49444154u, v4) )
      sub_6F839044(a1, *(_DWORD *)(a1 + 156));
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 188) + 4;
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a1 + 192);
  }
  *(_DWORD *)(a1 + 132) = a2;
  *(_DWORD *)(a1 + 136) = 0;
  while ( 1 )
  {
    do
    {
      v14 = -1;
      if ( a3 < 0xFFFFFFFF )
        v14 = a3;
      *(_DWORD *)(a1 + 136) = v14;
      v15 = a3 - v14;
      if ( v15 )
        v5 = 0;
      else
        v5 = a4;
      v13 = sub_6F88F670(a1 + 132, v5);
      a3 = *(_DWORD *)(a1 + 136) + v15;
      *(_DWORD *)(a1 + 136) = 0;
      result = *(_DWORD *)(a1 + 148);
      if ( result )
        break;
      v12 = *(_DWORD *)(a1 + 188) + 4;
      v11 = *(_DWORD *)(a1 + 192);
      if ( !(*(_DWORD *)(a1 + 116) & 4) && !*(_BYTE *)(a1 + 652) )
      {
        v7 = sub_6F8582F3(a1);
        sub_6F8584AE(v12, v7);
      }
      sub_6F858229(a1, 0x49444154u, v12, v11);
      *(_DWORD *)(a1 + 116) |= 4u;
      *(_DWORD *)(a1 + 144) = v12;
      result = a1;
      *(_DWORD *)(a1 + 148) = v11;
      if ( v13 )
        break;
    }
    while ( a4 );
    if ( v13 )
      break;
    if ( !a3 )
    {
      if ( a4 == 4 )
        sub_6F839044(a1, (int)"Z_OK on Z_FINISH with output space");
      return result;
    }
  }
  if ( v13 != 1 || a4 != 4 )
  {
    sub_6F834D5F(a1, v13);
    sub_6F839044(a1, *(_DWORD *)(a1 + 156));
  }
  v10 = *(_DWORD *)(a1 + 188) + 4;
  v9 = *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 148);
  if ( !(*(_DWORD *)(a1 + 116) & 4) && !*(_BYTE *)(a1 + 652) )
  {
    v8 = sub_6F8582F3(a1);
    sub_6F8584AE(v10, v8);
  }
  sub_6F858229(a1, 0x49444154u, v10, v9);
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 116) |= 0xCu;
  result = a1;
  *(_DWORD *)(a1 + 128) = 0;
  return result;
}
