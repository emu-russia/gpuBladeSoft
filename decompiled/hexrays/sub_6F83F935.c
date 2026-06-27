signed int __cdecl sub_6F83F935(int a1)
{
  int v1; // eax@10
  unsigned int v2; // edx@12
  int v3; // eax@13
  signed int v4; // eax@17
  _BYTE *v5; // eax@28
  _BYTE *v6; // eax@36
  unsigned int v8; // [sp+14h] [bp-64h]@47
  char v9; // [sp+1Bh] [bp-5Dh]@36
  unsigned int v10; // [sp+1Ch] [bp-5Ch]@28
  int v11; // [sp+20h] [bp-58h]@28
  unsigned int v12; // [sp+24h] [bp-54h]@21
  int v13; // [sp+28h] [bp-50h]@7
  int v14; // [sp+2Ch] [bp-4Ch]@7
  signed int v15; // [sp+30h] [bp-48h]@7
  int *v16; // [sp+34h] [bp-44h]@7
  int *v17; // [sp+38h] [bp-40h]@7
  int v18; // [sp+3Ch] [bp-3Ch]@1
  int **v19; // [sp+40h] [bp-38h]@1
  char v20; // [sp+48h] [bp-30h]@51
  unsigned int v21; // [sp+4Ch] [bp-2Ch]@29
  char *v22; // [sp+50h] [bp-28h]@21
  int v23; // [sp+54h] [bp-24h]@21
  unsigned int v24; // [sp+58h] [bp-20h]@16
  signed int v25; // [sp+5Ch] [bp-1Ch]@19
  signed int v26; // [sp+60h] [bp-18h]@16
  int v27; // [sp+64h] [bp-14h]@16
  signed int i; // [sp+68h] [bp-10h]@7
  signed int v29; // [sp+6Ch] [bp-Ch]@4

  v19 = *(int ***)a1;
  v18 = ***(_DWORD ***)a1;
  if ( *(_BYTE *)(v18 + 340) )
  {
    if ( *(_BYTE *)(v18 + 340) != 1 )
      sub_6F839044(v18, (int)"unknown interlace type");
    v29 = 7;
  }
  else
  {
    v29 = 1;
  }
  v17 = v19[3];
  v16 = v19[2];
  v15 = *(_DWORD *)(a1 + 40);
  v14 = *(_DWORD *)(a1 + 24);
  v13 = *(_DWORD *)(a1 + 28);
  for ( i = 0; i < v29; ++i )
  {
    if ( *(_BYTE *)(v18 + 340) == 1 )
    {
      if ( i <= 1 )
        v1 = 7;
      else
        v1 = (1 << ((7 - i) >> 1)) - 1;
      v2 = (unsigned int)v16 + v1 - (((i & 1) << (3 - ((i + 1) >> 1))) & 7);
      if ( i <= 1 )
        LOBYTE(v3) = 3;
      else
        v3 = (7 - i) >> 1;
      if ( !(v2 >> v3) )
        continue;
      v27 = ((i & 1) << (3 - ((i + 1) >> 1))) & 7;
      v26 = 1 << ((7 - i) >> 1);
      v24 = (((i & 1) == 0) << (3 - (i >> 1))) & 7;
      if ( i <= 2 )
        v4 = 8;
      else
        v4 = 8 >> ((i - 1) >> 1);
      v25 = v4;
    }
    else
    {
      v24 = 0;
      v27 = 0;
      v25 = 1;
      v26 = 1;
    }
    while ( v24 < (unsigned int)v17 )
    {
      v23 = *(_DWORD *)(a1 + 20);
      v12 = (unsigned int)v16 + v24 * v13 + v14;
      sub_6F83BC7F(v18, *(_DWORD *)(a1 + 20), 0);
      v22 = (char *)(v27 + v24 * v13 + v14);
      if ( v15 == 2 )
      {
        while ( (unsigned int)v22 < v12 )
        {
          v9 = *(_BYTE *)v23;
          v6 = (_BYTE *)(v23 + 1);
          v23 += 2;
          if ( *v6 )
          {
            if ( v9 == -2 )
              *v22 = -1;
            else
              *v22 = v9;
          }
          else
          {
            *v22 = -2;
          }
          v22 += v26;
        }
      }
      else if ( v15 > 2 )
      {
        if ( v15 == 3 )
        {
          while ( (unsigned int)v22 < v12 )
          {
            *v22 = 6
                 * (6 * ((unsigned __int16)(5 * *(_BYTE *)v23 + 130) >> 8)
                  + ((unsigned __int16)(5 * *(_BYTE *)(v23 + 1) + 130) >> 8))
                 + ((unsigned __int16)(5 * *(_BYTE *)(v23 + 2) + 130) >> 8);
            v23 += 3;
            v22 += v26;
          }
        }
        else if ( v15 == 4 )
        {
          while ( (unsigned int)v22 < v12 )
          {
            v8 = *(_BYTE *)(v23 + 3);
            if ( v8 <= 0xC3 )
            {
              if ( v8 > 0x3F )
              {
                v20 = -39;
                if ( *(_BYTE *)v23 < 0 )
                  v20 = -30;
                if ( *(_BYTE *)v23 & 0x40 )
                  v20 += 9;
                if ( *(_BYTE *)v23 < 0 )
                  v20 += 3;
                if ( *(_BYTE *)v23 & 0x40 )
                  v20 += 3;
                if ( *(_BYTE *)v23 < 0 )
                  ++v20;
                if ( *(_BYTE *)v23 & 0x40 )
                  ++v20;
                *v22 = v20;
              }
              else
              {
                *v22 = -40;
              }
            }
            else
            {
              *v22 = 6
                   * (6 * ((unsigned __int16)(5 * *(_BYTE *)v23 + 130) >> 8)
                    + ((unsigned __int16)(5 * *(_BYTE *)(v23 + 1) + 130) >> 8))
                   + ((unsigned __int16)(5 * *(_BYTE *)(v23 + 2) + 130) >> 8);
            }
            v23 += 4;
            v22 += v26;
          }
        }
      }
      else if ( v15 == 1 )
      {
        while ( (unsigned int)v22 < v12 )
        {
          v11 = *(_BYTE *)v23;
          v5 = (_BYTE *)(v23 + 1);
          v23 += 2;
          v10 = *v5;
          if ( v10 <= 0xE5 )
          {
            if ( v10 > 0x19 )
              v21 = 6 * ((5 * v10 + 130) >> 8) + ((unsigned int)(5 * v11 + 130) >> 8) + 226;
            else
              LOBYTE(v21) = -25;
          }
          else
          {
            v21 = (unsigned int)(231 * v11 + 128) >> 8;
          }
          *v22 = v21;
          v22 += v26;
        }
      }
      v24 += v25;
    }
  }
  return 1;
}
