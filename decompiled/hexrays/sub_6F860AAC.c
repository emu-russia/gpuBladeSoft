int __cdecl sub_6F860AAC(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  int v5; // eax@1
  int result; // eax@1
  int v7; // edx@3
  int v8; // ecx@3
  int v9; // ebx@3
  int v10; // ST34_4@3
  int v11; // eax@4
  int v12; // [sp+8h] [bp-44h]@2
  _BYTE *v13; // [sp+Ch] [bp-40h]@3
  int v14; // [sp+10h] [bp-3Ch]@3
  int v15; // [sp+14h] [bp-38h]@3
  int v16; // [sp+18h] [bp-34h]@3
  int v17; // [sp+1Ch] [bp-30h]@3
  int v18; // [sp+20h] [bp-2Ch]@2
  int v19; // [sp+24h] [bp-28h]@2
  int v20; // [sp+28h] [bp-24h]@1
  int v21; // [sp+2Ch] [bp-20h]@1
  _BYTE *v22; // [sp+30h] [bp-1Ch]@3
  int v23; // [sp+3Ch] [bp-10h]@3

  v4 = *(_DWORD *)(a2 + 28) * *(_DWORD *)(a2 + 36);
  sub_6F860764(a3 - 4, *(_DWORD *)(a1 + 256) + 2, *(_DWORD *)(a1 + 28), 2 * v4);
  v5 = *(_DWORD *)(a1 + 216);
  v21 = -80 * v5 + 0x4000;
  result = 16 * v5;
  v20 = result;
  if ( *(_DWORD *)(a1 + 256) > 0 )
  {
    v19 = v4 - 2;
    v18 = 0;
    v12 = 2 * (v4 - 2);
    do
    {
      v22 = *(_BYTE **)(a4 + 2 * v18);
      v23 = *(_DWORD *)(a3 + 4 * v18);
      v7 = *(_DWORD *)(a3 + 4 * v18 + 4);
      v8 = *(_DWORD *)(a3 + 4 * v18 - 4);
      v9 = *(_DWORD *)(a3 + 4 * v18 + 8);
      v10 = *(_BYTE *)v7 + *(_BYTE *)v23;
      v17 = v23 + 2;
      v16 = v7 + 2;
      v15 = v8 + 2;
      v14 = v9 + 2;
      *v22 = (v21 * (*(_BYTE *)(v23 + 1) + v10 + *(_BYTE *)(v7 + 1))
            + v20
            * (*(_BYTE *)(v8 + 2)
             + *(_BYTE *)v9
             + *(_BYTE *)v8
             + *(_BYTE *)(v9 + 2)
             + 2
             * (*(_BYTE *)v9
              + *(_BYTE *)v8
              + v10
              + *(_BYTE *)(v8 + 1)
              + *(_BYTE *)(v9 + 1)
              + *(_BYTE *)(v23 + 2)
              + *(_BYTE *)(v7 + 2)))
            + 0x8000) >> 16;
      v13 = v22 + 1;
      if ( v19 )
      {
        v11 = 0;
        do
        {
          v22[v11 + 1] = (v21
                        * (*(_BYTE *)(v7 + 2 * v11 + 2)
                         + *(_BYTE *)(v23 + 2 * v11 + 3)
                         + *(_BYTE *)(v23 + 2 * v11 + 2)
                         + *(_BYTE *)(v7 + 2 * v11 + 3))
                        + v20
                        * (*(_BYTE *)(v9 + 2 * v11 + 1)
                         + *(_BYTE *)(v8 + 2 * v11 + 1)
                         + *(_BYTE *)(v8 + 2 * v11 + 4)
                         + *(_BYTE *)(v9 + 2 * v11 + 4)
                         + 2
                         * (*(_BYTE *)(v7 + 2 * v11 + 1)
                          + *(_BYTE *)(v23 + 2 * v11 + 1)
                          + *(_BYTE *)(v9 + 2 * v11 + 2)
                          + *(_BYTE *)(v8 + 2 * v11 + 2)
                          + *(_BYTE *)(v8 + 2 * v11 + 3)
                          + *(_BYTE *)(v9 + 2 * v11 + 3)
                          + *(_BYTE *)(v23 + 2 * v11 + 4)
                          + *(_BYTE *)(v7 + 2 * v11 + 4)))
                        + 0x8000) >> 16;
          ++v11;
        }
        while ( v19 != v11 );
        v17 += v12;
        v16 += v12;
        v15 += v12;
        v14 += v12;
        v13 += v19;
      }
      result = (v21 * (*(_BYTE *)(v16 + 1) + *(_BYTE *)(v17 + 1) + *(_BYTE *)v16 + *(_BYTE *)v17)
              + v20
              * (*(_BYTE *)(v14 - 1)
               + *(_BYTE *)(v15 - 1)
               + *(_BYTE *)(v14 + 1)
               + *(_BYTE *)(v15 + 1)
               + 2
               * (*(_BYTE *)(v14 + 1)
                + *(_BYTE *)(v15 + 1)
                + *(_BYTE *)(v16 + 1)
                + *(_BYTE *)(v17 + 1)
                + *(_BYTE *)v14
                + *(_BYTE *)v15
                + *(_BYTE *)(v17 - 1)
                + *(_BYTE *)(v16 - 1)))
              + 0x8000) >> 16;
      *v13 = result;
      v18 += 2;
    }
    while ( *(_DWORD *)(a1 + 256) > v18 );
  }
  return result;
}
