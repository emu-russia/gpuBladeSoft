signed int __cdecl sub_6F8400E2(int a1)
{
  signed int v1; // eax@8
  int v2; // eax@13
  unsigned int v3; // edx@15
  int v4; // eax@16
  signed int v5; // eax@20
  int v6; // ST40_4@24
  unsigned __int8 v8; // [sp+17h] [bp-51h]@25
  unsigned int v9; // [sp+18h] [bp-50h]@24
  unsigned int v10; // [sp+1Ch] [bp-4Ch]@10
  int v11; // [sp+20h] [bp-48h]@7
  int *v12; // [sp+24h] [bp-44h]@7
  int *v13; // [sp+28h] [bp-40h]@7
  int v14; // [sp+2Ch] [bp-3Ch]@1
  int **v15; // [sp+30h] [bp-38h]@1
  unsigned int v16; // [sp+38h] [bp-30h]@27
  int k; // [sp+3Ch] [bp-2Ch]@26
  unsigned int j; // [sp+40h] [bp-28h]@24
  int v19; // [sp+44h] [bp-24h]@24
  unsigned int v20; // [sp+48h] [bp-20h]@19
  signed int v21; // [sp+4Ch] [bp-1Ch]@22
  unsigned int v22; // [sp+50h] [bp-18h]@19
  int v23; // [sp+54h] [bp-14h]@19
  signed int i; // [sp+58h] [bp-10h]@10
  signed int v25; // [sp+5Ch] [bp-Ch]@4

  v15 = *(int ***)a1;
  v14 = ***(_DWORD ***)a1;
  if ( *(_BYTE *)(v14 + 340) )
  {
    if ( *(_BYTE *)(v14 + 340) != 1 )
      sub_6F839044(v14, (int)"unknown interlace type");
    v25 = 7;
  }
  else
  {
    v25 = 1;
  }
  v13 = v15[3];
  v12 = v15[2];
  v11 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)v15[4] & 2 )
    v1 = 3;
  else
    v1 = 1;
  v10 = v1;
  for ( i = 0; i < v25; ++i )
  {
    if ( *(_BYTE *)(v14 + 340) == 1 )
    {
      if ( i <= 1 )
        v2 = 7;
      else
        v2 = (1 << ((7 - i) >> 1)) - 1;
      v3 = (unsigned int)v12 + v2 - (((i & 1) << (3 - ((i + 1) >> 1))) & 7);
      if ( i <= 1 )
        LOBYTE(v4) = 3;
      else
        v4 = (7 - i) >> 1;
      if ( !(v3 >> v4) )
        continue;
      v23 = v10 * (((i & 1) << (3 - ((i + 1) >> 1))) & 7);
      v22 = v10 << ((7 - i) >> 1);
      v20 = (((i & 1) == 0) << (3 - (i >> 1))) & 7;
      if ( i <= 2 )
        v5 = 8;
      else
        v5 = 8 >> ((i - 1) >> 1);
      v21 = v5;
    }
    else
    {
      v20 = 0;
      v23 = 0;
      v22 = v10;
      v21 = 1;
    }
    while ( v20 < (unsigned int)v13 )
    {
      v19 = *(_DWORD *)(a1 + 20);
      sub_6F83BC7F(v14, *(_DWORD *)(a1 + 20), 0);
      v6 = v20 * v11 + *(_DWORD *)(a1 + 24);
      v9 = v10 * (_DWORD)v12 + v6;
      for ( j = v23 + v6; j < v9; j += v22 )
      {
        v8 = *(_BYTE *)(v19 + v10);
        if ( v8 )
        {
          for ( k = 0; k < v10; ++k )
          {
            v16 = *(_BYTE *)(v19 + k);
            if ( v8 != -1 )
            {
              v16 = (255 - v8) * (unsigned __int16)word_6FB99080[*(_BYTE *)(j + k)] + 0xFFFF * v16;
              LOBYTE(v16) = (((v16 & 0x7FFF) * (unsigned __int8)byte_6FB99680[v16 >> 15] >> 12)
                           + (unsigned __int16)word_6FB99280[v16 >> 15]) >> 8;
            }
            *(_BYTE *)(k + j) = v16;
          }
        }
        v19 += v10 + 1;
      }
      v20 += v21;
    }
  }
  return 1;
}
