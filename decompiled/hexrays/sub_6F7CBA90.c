signed int __cdecl sub_6F7CBA90(unsigned int a1, int a2, unsigned int a3)
{
  unsigned int v3; // ecx@1
  unsigned int v4; // eax@1
  unsigned int v5; // ebp@3
  int v6; // ecx@3
  unsigned int v7; // eax@4
  int v8; // ST00_4@8
  int v9; // ST04_4@8
  int v10; // ST08_4@8
  int v11; // ST0C_4@8
  int v12; // ebp@8
  int v13; // ST10_4@8
  int v14; // ST14_4@8
  int v15; // ST18_4@8
  int v16; // ST1C_4@8
  int v17; // ST20_4@8
  int v18; // ebp@8
  int v19; // ST24_4@8
  int v20; // eax@8
  int v21; // edi@8
  int v22; // esi@8
  int v23; // ebx@8
  int v24; // edx@8
  int v25; // edi@9
  unsigned int v26; // esi@10
  unsigned int v28; // [sp+2Ch] [bp-20h]@1
  int v29; // [sp+30h] [bp-1Ch]@7
  unsigned int v30; // [sp+34h] [bp-18h]@7
  int v31; // [sp+38h] [bp-14h]@7

  v3 = (unsigned __int16)a1;
  v4 = a1 >> 16;
  v28 = a1 >> 16;
  if ( !a2 )
    return 1;
  if ( !a3 )
    return v3 | (v4 << 16);
  v5 = (unsigned __int16)a1;
  v6 = a2;
  do
  {
    v7 = 5552;
    if ( a3 <= 0x15B0 )
      v7 = a3;
    a3 -= v7;
    if ( v7 <= 0xF )
    {
      v25 = v6;
    }
    else
    {
      v31 = v7 - 16;
      v30 = (v7 - 16) >> 4;
      v29 = v6 + 16 * (v30 + 1);
      do
      {
        v8 = v5 + *(_BYTE *)v6;
        v9 = v8 + *(_BYTE *)(v6 + 1);
        v10 = v9 + *(_BYTE *)(v6 + 2);
        v11 = v10 + *(_BYTE *)(v6 + 3);
        v12 = v11 + *(_BYTE *)(v6 + 4);
        v13 = v12;
        v14 = v12 + *(_BYTE *)(v6 + 5);
        v15 = v14 + *(_BYTE *)(v6 + 6);
        v16 = v15 + *(_BYTE *)(v6 + 7);
        v17 = v16 + *(_BYTE *)(v6 + 8);
        v18 = v17 + *(_BYTE *)(v6 + 9);
        v19 = v18;
        v20 = v18 + *(_BYTE *)(v6 + 10);
        v21 = v20 + *(_BYTE *)(v6 + 11);
        v22 = v21 + *(_BYTE *)(v6 + 12);
        v23 = v22 + *(_BYTE *)(v6 + 13);
        v24 = v23 + *(_BYTE *)(v6 + 14);
        v5 = v24 + *(_BYTE *)(v6 + 15);
        v28 += v5 + v22 + v21 + v20 + v19 + v17 + v16 + v15 + v14 + v13 + v11 + v10 + v9 + v8 + v23 + v24;
        v6 += 16;
      }
      while ( v6 != v29 );
      v25 = v29;
      v7 = v31 - 16 * v30;
      if ( v31 == 16 * v30 )
        goto LABEL_10;
    }
    v6 = v25 + 1;
    v5 += *(_BYTE *)v25;
    v28 += v5;
    if ( v7 != 1 )
    {
      v6 = v25 + 2;
      v5 += *(_BYTE *)(v25 + 1);
      v28 += v5;
      if ( v7 != 2 )
      {
        v6 = v25 + 3;
        v5 += *(_BYTE *)(v25 + 2);
        v28 += v5;
        if ( v7 != 3 )
        {
          v6 = v25 + 4;
          v5 += *(_BYTE *)(v25 + 3);
          v28 += v5;
          if ( v7 != 4 )
          {
            v6 = v25 + 5;
            v5 += *(_BYTE *)(v25 + 4);
            v28 += v5;
            if ( v7 != 5 )
            {
              v6 = v25 + 6;
              v5 += *(_BYTE *)(v25 + 5);
              v28 += v5;
              if ( v7 != 6 )
              {
                v6 = v25 + 7;
                v5 += *(_BYTE *)(v25 + 6);
                v28 += v5;
                if ( v7 != 7 )
                {
                  v6 = v25 + 8;
                  v5 += *(_BYTE *)(v25 + 7);
                  v28 += v5;
                  if ( v7 != 8 )
                  {
                    v6 = v25 + 9;
                    v5 += *(_BYTE *)(v25 + 8);
                    v28 += v5;
                    if ( v7 != 9 )
                    {
                      v6 = v25 + 10;
                      v5 += *(_BYTE *)(v25 + 9);
                      v28 += v5;
                      if ( v7 != 10 )
                      {
                        v6 = v25 + 11;
                        v5 += *(_BYTE *)(v25 + 10);
                        v28 += v5;
                        if ( v7 != 11 )
                        {
                          v6 = v25 + 12;
                          v5 += *(_BYTE *)(v25 + 11);
                          v28 += v5;
                          if ( v7 != 12 )
                          {
                            v6 = v25 + 13;
                            v5 += *(_BYTE *)(v25 + 12);
                            v28 += v5;
                            if ( v7 != 13 )
                            {
                              v6 = v25 + 14;
                              v5 += *(_BYTE *)(v25 + 13);
                              v28 += v5;
                              if ( v7 != 14 )
                              {
                                v6 = v25 + 15;
                                v5 += *(_BYTE *)(v25 + 14);
                                v28 += v5;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_10:
    v5 %= 0xFFF1u;
    v26 = v28 % 0xFFF1;
    v28 %= 0xFFF1u;
  }
  while ( a3 );
  v3 = v5;
  v4 = v26;
  return v3 | (v4 << 16);
}
