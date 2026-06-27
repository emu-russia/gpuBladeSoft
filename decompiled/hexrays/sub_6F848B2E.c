signed int __cdecl sub_6F848B2E(int a1, _BYTE *a2, int a3)
{
  signed int result; // eax@3
  _BYTE *v4; // ST3C_4@14
  __int16 v5; // ST26_2@18
  int v6; // ST3C_4@18
  __int16 v7; // ST26_2@18
  __int16 v8; // ST26_2@18
  _BYTE *v9; // ST3C_4@23
  __int16 v10; // ST24_2@27
  int v11; // ST3C_4@27
  __int16 v12; // ST24_2@27
  __int16 v13; // ST24_2@27
  __int16 v14; // ST22_2@36
  int v15; // ST1C_4@41
  int v16; // ST18_4@41
  int v17; // ST14_4@41
  __int16 v18; // ST06_2@55
  unsigned int v19; // [sp+28h] [bp-18h]@1
  int v20; // [sp+2Ch] [bp-14h]@1
  int v21; // [sp+30h] [bp-10h]@1
  int v22; // [sp+34h] [bp-Ch]@1
  unsigned int i; // [sp+38h] [bp-8h]@13
  unsigned int j; // [sp+38h] [bp-8h]@17
  unsigned int m; // [sp+38h] [bp-8h]@22
  unsigned int n; // [sp+38h] [bp-8h]@26
  unsigned int k; // [sp+38h] [bp-8h]@31
  unsigned int l; // [sp+38h] [bp-8h]@35
  unsigned int ii; // [sp+38h] [bp-8h]@40
  unsigned int jj; // [sp+38h] [bp-8h]@44
  unsigned int kk; // [sp+38h] [bp-8h]@49
  unsigned int ll; // [sp+38h] [bp-8h]@54
  _BYTE *v33; // [sp+3Ch] [bp-4h]@13
  _BYTE *v34; // [sp+3Ch] [bp-4h]@17
  _BYTE *v35; // [sp+3Ch] [bp-4h]@22
  _BYTE *v36; // [sp+3Ch] [bp-4h]@26
  _BYTE *v37; // [sp+3Ch] [bp-4h]@31
  _BYTE *v38; // [sp+3Ch] [bp-4h]@35
  _BYTE *v39; // [sp+3Ch] [bp-4h]@40
  _BYTE *v40; // [sp+3Ch] [bp-4h]@44
  _BYTE *v41; // [sp+3Ch] [bp-4h]@49
  _BYTE *v42; // [sp+3Ch] [bp-4h]@54

  v22 = *(_DWORD *)(a3 + 400);
  v21 = *(_DWORD *)(a3 + 404);
  v20 = *(_DWORD *)(a3 + 392);
  v19 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 9) <= 8u && v22 || (result = *(_BYTE *)(a1 + 9), (_BYTE)result == 16) && v21 )
  {
    result = *(_BYTE *)(a1 + 8);
    if ( result == 2 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v33 = a2;
        for ( i = 0; ; ++i )
        {
          result = i;
          if ( i >= v19 )
            break;
          *v33 = *(_BYTE *)(*v33 + v22);
          v4 = v33 + 1;
          *v4 = *(_BYTE *)(*v4 + v22);
          ++v4;
          *v4 = *(_BYTE *)(*v4 + v22);
          v33 = v4 + 1;
        }
      }
      else
      {
        v34 = a2;
        for ( j = 0; ; ++j )
        {
          result = j;
          if ( j >= v19 )
            break;
          v5 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v34[1] >> v20) + v21) + 2 * *v34);
          *v34 = HIBYTE(v5);
          v34[1] = v5;
          v6 = (int)(v34 + 2);
          v7 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)*(_BYTE *)(v6 + 1) >> v20) + v21) + 2 * *(_BYTE *)v6);
          *(_BYTE *)v6 = HIBYTE(v7);
          *(_BYTE *)(v6 + 1) = v7;
          v6 += 2;
          v8 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)*(_BYTE *)(v6 + 1) >> v20) + v21) + 2 * *(_BYTE *)v6);
          *(_BYTE *)v6 = HIBYTE(v8);
          *(_BYTE *)(v6 + 1) = v8;
          v34 = (_BYTE *)(v6 + 2);
        }
      }
    }
    else if ( result > 2 )
    {
      if ( result == 4 )
      {
        if ( *(_BYTE *)(a1 + 9) == 8 )
        {
          v37 = a2;
          for ( k = 0; ; ++k )
          {
            result = k;
            if ( k >= v19 )
              break;
            *v37 = *(_BYTE *)(*v37 + v22);
            v37 += 2;
          }
        }
        else
        {
          v38 = a2;
          for ( l = 0; ; ++l )
          {
            result = l;
            if ( l >= v19 )
              break;
            v14 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v38[1] >> v20) + v21) + 2 * *v38);
            *v38 = HIBYTE(v14);
            v38[1] = v14;
            v38 += 4;
          }
        }
      }
      else if ( result == 6 )
      {
        if ( *(_BYTE *)(a1 + 9) == 8 )
        {
          v35 = a2;
          for ( m = 0; ; ++m )
          {
            result = m;
            if ( m >= v19 )
              break;
            *v35 = *(_BYTE *)(*v35 + v22);
            v9 = v35 + 1;
            *v9 = *(_BYTE *)(*v9 + v22);
            ++v9;
            *v9 = *(_BYTE *)(*v9 + v22);
            v35 = v9 + 2;
          }
        }
        else
        {
          v36 = a2;
          for ( n = 0; ; ++n )
          {
            result = n;
            if ( n >= v19 )
              break;
            v10 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v36[1] >> v20) + v21) + 2 * *v36);
            *v36 = HIBYTE(v10);
            v36[1] = v10;
            v11 = (int)(v36 + 2);
            v12 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)*(_BYTE *)(v11 + 1) >> v20) + v21) + 2 * *(_BYTE *)v11);
            *(_BYTE *)v11 = HIBYTE(v12);
            *(_BYTE *)(v11 + 1) = v12;
            v11 += 2;
            v13 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)*(_BYTE *)(v11 + 1) >> v20) + v21) + 2 * *(_BYTE *)v11);
            *(_BYTE *)v11 = HIBYTE(v13);
            *(_BYTE *)(v11 + 1) = v13;
            v36 = (_BYTE *)(v11 + 4);
          }
        }
      }
    }
    else if ( !*(_BYTE *)(a1 + 8) )
    {
      if ( *(_BYTE *)(a1 + 9) == 2 )
      {
        v39 = a2;
        for ( ii = 0; ii < v19; ii += 4 )
        {
          v15 = *v39 & 0xC0;
          v16 = *v39 & 0x30;
          v17 = *v39 & 0xC;
          *v39 = *(_BYTE *)((v15 | (v15 >> 2) | (v15 >> 4) | (v15 >> 6)) + v22) & 0xC0 | (*(_BYTE *)((v16 | 4 * v16 | (v16 >> 2) | (v16 >> 4)) + v22) >> 2) & 0x30 | (*(_BYTE *)(((v17 >> 2) | v17 | 16 * v17 | 4 * v17) + v22) >> 4) & 0xC | (*(_BYTE *)((*v39 & 3 | 16 * (*v39 & 3) | ((*v39 & 3) << 6) | 4 * (*v39 & 3)) + v22) >> 6);
          ++v39;
        }
      }
      if ( *(_BYTE *)(a1 + 9) == 4 )
      {
        v40 = a2;
        for ( jj = 0; ; jj += 2 )
        {
          result = jj;
          if ( jj >= v19 )
            break;
          *v40 = *(_BYTE *)((*v40 & 0xF0 | ((*v40 & 0xF0) >> 4)) + v22) & 0xF0 | (*(_BYTE *)((*v40 & 0xF | 16 * (*v40 & 0xF))
                                                                                           + v22) >> 4);
          ++v40;
        }
      }
      else if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v41 = a2;
        for ( kk = 0; ; ++kk )
        {
          result = kk;
          if ( kk >= v19 )
            break;
          *v41 = *(_BYTE *)(*v41 + v22);
          ++v41;
        }
      }
      else
      {
        result = *(_BYTE *)(a1 + 9);
        if ( (_BYTE)result == 16 )
        {
          v42 = a2;
          for ( ll = 0; ; ++ll )
          {
            result = ll;
            if ( ll >= v19 )
              break;
            v18 = *(_WORD *)(*(_DWORD *)(4 * ((signed int)v42[1] >> v20) + v21) + 2 * *v42);
            *v42 = HIBYTE(v18);
            v42[1] = v18;
            v42 += 2;
          }
        }
      }
    }
  }
  return result;
}
