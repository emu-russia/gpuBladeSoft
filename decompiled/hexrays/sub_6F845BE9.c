int __cdecl sub_6F845BE9(int a1, int a2, __int16 a3, char a4)
{
  _BYTE *v4; // ST44_4@5
  int result; // eax@7
  _BYTE *v6; // ST3C_4@9
  _BYTE *v7; // ST34_4@15
  _BYTE *v8; // ST38_4@15
  _BYTE *v9; // ST34_4@17
  _BYTE *v10; // ST2C_4@19
  _BYTE *v11; // ST30_4@19
  _BYTE *v12; // ST24_4@26
  _BYTE *v13; // ST28_4@26
  _BYTE *v14; // ST1C_4@30
  _BYTE *v15; // ST20_4@30
  _BYTE *v16; // ST14_4@36
  _BYTE *v17; // ST18_4@36
  _BYTE *v18; // ST14_4@38
  _BYTE *v19; // ST0C_4@40
  _BYTE *v20; // ST10_4@40
  unsigned int v21; // [sp+8h] [bp-48h]@1
  _BYTE *v22; // [sp+Ch] [bp-44h]@39
  _BYTE *v23; // [sp+10h] [bp-40h]@39
  _BYTE *v24; // [sp+14h] [bp-3Ch]@35
  _BYTE *v25; // [sp+18h] [bp-38h]@35
  _BYTE *v26; // [sp+1Ch] [bp-34h]@29
  _BYTE *v27; // [sp+20h] [bp-30h]@29
  _BYTE *v28; // [sp+24h] [bp-2Ch]@25
  _BYTE *v29; // [sp+28h] [bp-28h]@25
  _BYTE *v30; // [sp+2Ch] [bp-24h]@18
  _BYTE *v31; // [sp+30h] [bp-20h]@18
  _BYTE *v32; // [sp+34h] [bp-1Ch]@14
  _BYTE *v33; // [sp+38h] [bp-18h]@14
  _BYTE *v34; // [sp+3Ch] [bp-14h]@8
  int v35; // [sp+40h] [bp-10h]@8
  _BYTE *v36; // [sp+44h] [bp-Ch]@4
  int v37; // [sp+48h] [bp-8h]@4
  unsigned int m; // [sp+4Ch] [bp-4h]@4
  unsigned int n; // [sp+4Ch] [bp-4h]@8
  unsigned int ii; // [sp+4Ch] [bp-4h]@14
  unsigned int jj; // [sp+4Ch] [bp-4h]@18
  unsigned int i; // [sp+4Ch] [bp-4h]@25
  unsigned int j; // [sp+4Ch] [bp-4h]@29
  unsigned int k; // [sp+4Ch] [bp-4h]@35
  unsigned int l; // [sp+4Ch] [bp-4h]@39

  v21 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 8) )
  {
    result = *(_BYTE *)(a1 + 8);
    if ( (_BYTE)result == 2 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        if ( a4 & 0x80 )
        {
          v29 = (_BYTE *)(3 * v21 + a2);
          v28 = &v29[v21];
          for ( i = 1; i < v21; ++i )
          {
            v12 = v28 - 1;
            *v12-- = a3;
            v13 = v29 - 1;
            *v12-- = *v13;
            *v12 = *--v13;
            v28 = v12 - 1;
            v29 = v13 - 1;
            *v28 = *v29;
          }
          *(v28 - 1) = a3;
          *(_BYTE *)(a1 + 10) = 4;
          *(_BYTE *)(a1 + 11) = 32;
          result = a1;
          *(_DWORD *)(a1 + 4) = 4 * v21;
        }
        else
        {
          v27 = (_BYTE *)(3 * v21 + a2);
          v26 = &v27[v21];
          for ( j = 0; j < v21; ++j )
          {
            v14 = v26 - 1;
            v15 = v27 - 1;
            *v14-- = *v15;
            *v14-- = *--v15;
            v27 = v15 - 1;
            *v14 = *v27;
            v26 = v14 - 1;
            *v26 = a3;
          }
          *(_BYTE *)(a1 + 10) = 4;
          *(_BYTE *)(a1 + 11) = 32;
          result = a1;
          *(_DWORD *)(a1 + 4) = 4 * v21;
        }
      }
      else
      {
        result = *(_BYTE *)(a1 + 9);
        if ( (_BYTE)result == 16 )
        {
          if ( a4 & 0x80 )
          {
            v25 = (_BYTE *)(6 * v21 + a2);
            v24 = &v25[2 * v21];
            for ( k = 1; k < v21; ++k )
            {
              v16 = v24 - 1;
              *v16-- = HIBYTE(a3);
              *v16-- = a3;
              v17 = v25 - 1;
              *v16-- = *v17;
              *v16-- = *--v17;
              *v16-- = *--v17;
              *v16-- = *--v17;
              *v16 = *--v17;
              v24 = v16 - 1;
              v25 = v17 - 1;
              *v24 = *v25;
            }
            v18 = v24 - 1;
            *v18 = HIBYTE(a3);
            *(v18 - 1) = a3;
            *(_BYTE *)(a1 + 10) = 4;
            *(_BYTE *)(a1 + 11) = 64;
            result = a1;
            *(_DWORD *)(a1 + 4) = 8 * v21;
          }
          else
          {
            v23 = (_BYTE *)(6 * v21 + a2);
            v22 = &v23[2 * v21];
            for ( l = 0; l < v21; ++l )
            {
              v19 = v22 - 1;
              v20 = v23 - 1;
              *v19-- = *v20;
              *v19-- = *--v20;
              *v19-- = *--v20;
              *v19-- = *--v20;
              *v19-- = *--v20;
              v23 = v20 - 1;
              *v19-- = *v23;
              *v19 = HIBYTE(a3);
              v22 = v19 - 1;
              *v22 = a3;
            }
            *(_BYTE *)(a1 + 10) = 4;
            *(_BYTE *)(a1 + 11) = 64;
            result = a1;
            *(_DWORD *)(a1 + 4) = 8 * v21;
          }
        }
      }
    }
  }
  else if ( *(_BYTE *)(a1 + 9) == 8 )
  {
    if ( a4 & 0x80 )
    {
      v37 = a2 + v21;
      v36 = (_BYTE *)(a2 + v21 + v21);
      for ( m = 1; m < v21; ++m )
      {
        v4 = v36 - 1;
        *v4 = a3;
        v36 = v4 - 1;
        *v36 = *(_BYTE *)--v37;
      }
      *(v36 - 1) = a3;
      *(_BYTE *)(a1 + 10) = 2;
      *(_BYTE *)(a1 + 11) = 16;
      result = a1;
      *(_DWORD *)(a1 + 4) = 2 * v21;
    }
    else
    {
      v35 = a2 + v21;
      v34 = (_BYTE *)(a2 + v21 + v21);
      for ( n = 0; n < v21; ++n )
      {
        v6 = v34 - 1;
        *v6 = *(_BYTE *)--v35;
        v34 = v6 - 1;
        *v34 = a3;
      }
      *(_BYTE *)(a1 + 10) = 2;
      *(_BYTE *)(a1 + 11) = 16;
      result = a1;
      *(_DWORD *)(a1 + 4) = 2 * v21;
    }
  }
  else
  {
    result = *(_BYTE *)(a1 + 9);
    if ( (_BYTE)result == 16 )
    {
      if ( a4 & 0x80 )
      {
        v33 = (_BYTE *)(2 * v21 + a2);
        v32 = &v33[2 * v21];
        for ( ii = 1; ii < v21; ++ii )
        {
          v7 = v32 - 1;
          *v7-- = HIBYTE(a3);
          *v7-- = a3;
          v8 = v33 - 1;
          *v7 = *v8;
          v32 = v7 - 1;
          v33 = v8 - 1;
          *v32 = *v33;
        }
        v9 = v32 - 1;
        *v9 = HIBYTE(a3);
        *(v9 - 1) = a3;
        *(_BYTE *)(a1 + 10) = 2;
        *(_BYTE *)(a1 + 11) = 32;
        result = a1;
        *(_DWORD *)(a1 + 4) = 4 * v21;
      }
      else
      {
        v31 = (_BYTE *)(2 * v21 + a2);
        v30 = &v31[2 * v21];
        for ( jj = 0; jj < v21; ++jj )
        {
          v10 = v30 - 1;
          v11 = v31 - 1;
          *v10-- = *v11;
          v31 = v11 - 1;
          *v10-- = *v31;
          *v10 = HIBYTE(a3);
          v30 = v10 - 1;
          *v30 = a3;
        }
        *(_BYTE *)(a1 + 10) = 2;
        *(_BYTE *)(a1 + 11) = 32;
        result = a1;
        *(_DWORD *)(a1 + 4) = 4 * v21;
      }
    }
  }
  return result;
}
