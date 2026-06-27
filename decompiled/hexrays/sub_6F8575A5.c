unsigned int __cdecl sub_6F8575A5(int a1, _BYTE *a2, int a3)
{
  unsigned int result; // eax@1
  _BYTE *v4; // eax@43
  _BYTE *v5; // eax@43
  int v6[4]; // [sp+8h] [bp-78h]@3
  int v7[4]; // [sp+18h] [bp-68h]@3
  unsigned int v8; // [sp+28h] [bp-58h]@37
  unsigned int v9; // [sp+2Ch] [bp-54h]@37
  unsigned int v10; // [sp+30h] [bp-50h]@36
  unsigned int v11; // [sp+34h] [bp-4Ch]@27
  unsigned int v12; // [sp+38h] [bp-48h]@27
  unsigned int v13; // [sp+3Ch] [bp-44h]@26
  unsigned int v14; // [sp+40h] [bp-40h]@16
  unsigned int v15; // [sp+44h] [bp-3Ch]@8
  int v16; // [sp+48h] [bp-38h]@37
  int k; // [sp+4Ch] [bp-34h]@37
  unsigned int j; // [sp+50h] [bp-30h]@36
  _BYTE *v19; // [sp+54h] [bp-2Ch]@36
  int v20; // [sp+58h] [bp-28h]@27
  int i; // [sp+5Ch] [bp-24h]@27
  unsigned int v22; // [sp+60h] [bp-20h]@26
  _BYTE *v23; // [sp+64h] [bp-1Ch]@26
  int v24; // [sp+68h] [bp-18h]@16
  int l; // [sp+6Ch] [bp-14h]@16
  int v26; // [sp+70h] [bp-10h]@10
  unsigned int v27; // [sp+74h] [bp-Ch]@15
  _BYTE *v28; // [sp+78h] [bp-8h]@8
  unsigned int v29; // [sp+7Ch] [bp-4h]@2

  result = *(_BYTE *)(a1 + 8);
  if ( (_BYTE)result != 3 )
  {
    v29 = 0;
    if ( *(_BYTE *)(a1 + 8) & 2 )
    {
      v7[v29] = *(_BYTE *)(a1 + 9) - *(_BYTE *)a3;
      v6[v29++] = *(_BYTE *)a3;
      v7[v29] = *(_BYTE *)(a1 + 9) - *(_BYTE *)(a3 + 1);
      v6[v29++] = *(_BYTE *)(a3 + 1);
      v7[v29] = *(_BYTE *)(a1 + 9) - *(_BYTE *)(a3 + 2);
      v6[v29++] = *(_BYTE *)(a3 + 2);
    }
    else
    {
      v7[v29] = *(_BYTE *)(a1 + 9) - *(_BYTE *)(a3 + 3);
      v6[v29++] = *(_BYTE *)(a3 + 3);
    }
    if ( *(_BYTE *)(a1 + 8) & 4 )
    {
      v7[v29] = *(_BYTE *)(a1 + 9) - *(_BYTE *)(a3 + 4);
      v6[v29++] = *(_BYTE *)(a3 + 4);
    }
    if ( *(_BYTE *)(a1 + 9) > 7u )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v23 = a2;
        v13 = *(_DWORD *)a1 * v29;
        v22 = 0;
        while ( 1 )
        {
          result = v22;
          if ( v22 >= v13 )
            break;
          v12 = v22 % v29;
          v11 = *v23;
          v20 = 0;
          for ( i = v7[v22 % v29]; -v6[v12] < i; i -= v6[v12] )
          {
            if ( i <= 0 )
              v20 |= v11 >> -(char)i;
            else
              v20 |= v11 << i;
          }
          *v23 = v20;
          ++v22;
          ++v23;
        }
      }
      else
      {
        v10 = *(_DWORD *)a1 * v29;
        v19 = a2;
        for ( j = 0; ; ++j )
        {
          result = j;
          if ( j >= v10 )
            break;
          v9 = j % v29;
          v8 = (unsigned __int16)((*v19 << 8) + v19[1]);
          v16 = 0;
          for ( k = v7[j % v29]; -v6[v9] < k; k -= v6[v9] )
          {
            if ( k <= 0 )
              v16 |= v8 >> -(char)k;
            else
              v16 |= v8 << k;
          }
          v4 = v19++;
          *v4 = BYTE1(v16);
          v5 = v19++;
          *v5 = v16;
        }
      }
    }
    else
    {
      v28 = a2;
      v15 = *(_DWORD *)(a1 + 4);
      if ( *(_BYTE *)(a3 + 3) != 1 || *(_BYTE *)(a1 + 9) != 2 )
      {
        if ( *(_BYTE *)(a1 + 9) != 4 || *(_BYTE *)(a3 + 3) != 3 )
          v26 = 255;
        else
          v26 = 17;
      }
      else
      {
        v26 = 85;
      }
      v27 = 0;
      while ( 1 )
      {
        result = v27;
        if ( v27 >= v15 )
          break;
        v14 = *v28;
        v24 = 0;
        for ( l = v7[0]; -v6[0] < l; l -= v6[0] )
        {
          if ( l <= 0 )
            v24 |= v26 & (v14 >> -(char)l);
          else
            v24 |= v14 << l;
        }
        *v28 = v24;
        ++v27;
        ++v28;
      }
    }
  }
  return result;
}
