int __cdecl sub_6F8493A0(int a1, int a2, int a3, int a4, signed int a5)
{
  int result; // eax@1
  int v6; // eax@3
  _BYTE *v7; // eax@34
  _BYTE *v8; // eax@35
  _BYTE *v9; // edx@36
  _BYTE *v10; // ST14_4@36
  _BYTE *v11; // edx@36
  _BYTE *v12; // edx@40
  _BYTE *v13; // ST14_4@40
  _BYTE *v14; // edx@40
  unsigned int v15; // [sp+Ch] [bp-14h]@1
  unsigned int k; // [sp+10h] [bp-10h]@6
  unsigned int i; // [sp+10h] [bp-10h]@16
  unsigned int j; // [sp+10h] [bp-10h]@23
  unsigned int m; // [sp+10h] [bp-10h]@32
  unsigned int l; // [sp+10h] [bp-10h]@39
  _BYTE *v21; // [sp+14h] [bp-Ch]@6
  _BYTE *v22; // [sp+14h] [bp-Ch]@16
  _BYTE *v23; // [sp+14h] [bp-Ch]@23
  int v24; // [sp+14h] [bp-Ch]@32
  int v25; // [sp+14h] [bp-Ch]@34
  int v26; // [sp+14h] [bp-Ch]@39
  _BYTE *v27; // [sp+18h] [bp-8h]@6
  _BYTE *v28; // [sp+18h] [bp-8h]@16
  _BYTE *v29; // [sp+18h] [bp-8h]@23
  _BYTE *v30; // [sp+18h] [bp-8h]@32
  _BYTE *v31; // [sp+18h] [bp-8h]@39
  int v32; // [sp+1Ch] [bp-4h]@6
  int v33; // [sp+1Ch] [bp-4h]@16
  int v34; // [sp+1Ch] [bp-4h]@23

  v15 = *(_DWORD *)a1;
  result = *(_BYTE *)(a1 + 8);
  if ( (_BYTE)result == 3 )
  {
    if ( *(_BYTE *)(a1 + 9) <= 7u )
    {
      v6 = *(_BYTE *)(a1 + 9);
      switch ( v6 )
      {
        case 2:
          v28 = (_BYTE *)(((v15 - 1) >> 2) + a2);
          v22 = (_BYTE *)(v15 - 1 + a2);
          v33 = 2 * (~((_BYTE)v15 + 3) & 3);
          for ( i = 0; i < v15; ++i )
          {
            *v22 = ((signed int)*v28 >> v33) & 3;
            if ( v33 == 6 )
            {
              v33 = 0;
              --v28;
            }
            else
            {
              v33 += 2;
            }
            --v22;
          }
          break;
        case 4:
          v29 = (_BYTE *)(((v15 - 1) >> 1) + a2);
          v23 = (_BYTE *)(v15 - 1 + a2);
          v34 = 4 * (*(_DWORD *)a1 & 1);
          for ( j = 0; j < v15; ++j )
          {
            *v23 = ((signed int)*v29 >> v34) & 0xF;
            if ( v34 == 4 )
            {
              v34 = 0;
              --v29;
            }
            else
            {
              v34 += 4;
            }
            --v23;
          }
          break;
        case 1:
          v27 = (_BYTE *)(((v15 - 1) >> 3) + a2);
          v21 = (_BYTE *)(v15 - 1 + a2);
          v32 = ~((_BYTE)v15 + 7) & 7;
          for ( k = 0; k < v15; ++k )
          {
            if ( ((signed int)*v27 >> v32) & 1 )
              *v21 = 1;
            else
              *v21 = 0;
            if ( v32 == 7 )
            {
              v32 = 0;
              --v27;
            }
            else
            {
              ++v32;
            }
            --v21;
          }
          break;
      }
      *(_BYTE *)(a1 + 9) = 8;
      *(_BYTE *)(a1 + 11) = 8;
      *(_DWORD *)(a1 + 4) = v15;
    }
    result = *(_BYTE *)(a1 + 9);
    if ( (_BYTE)result == 8 )
    {
      if ( a5 <= 0 )
      {
        v31 = (_BYTE *)(v15 - 1 + a2);
        v26 = 3 * v15 - 1 + a2;
        for ( l = 0; l < v15; ++l )
        {
          v12 = (_BYTE *)v26;
          v13 = (_BYTE *)(v26 - 1);
          *v12 = *(_BYTE *)(3 * *v31 + a3 + 2);
          *v13 = *(_BYTE *)(3 * *v31 + a3 + 1);
          v14 = v13 - 1;
          v26 = (int)(v13 - 2);
          *v14 = *(_BYTE *)(3 * *v31-- + a3);
        }
        *(_BYTE *)(a1 + 9) = 8;
        *(_BYTE *)(a1 + 11) = 24;
        *(_DWORD *)(a1 + 4) = 3 * v15;
        *(_BYTE *)(a1 + 8) = 2;
        result = a1;
        *(_BYTE *)(a1 + 10) = 3;
      }
      else
      {
        v30 = (_BYTE *)(v15 - 1 + a2);
        v24 = 4 * v15 - 1 + a2;
        for ( m = 0; m < v15; ++m )
        {
          if ( *v30 < a5 )
          {
            v8 = (_BYTE *)v24;
            v25 = v24 - 1;
            *v8 = *(_BYTE *)(*v30 + a4);
          }
          else
          {
            v7 = (_BYTE *)v24;
            v25 = v24 - 1;
            *v7 = -1;
          }
          v9 = (_BYTE *)v25;
          v10 = (_BYTE *)(v25 - 1);
          *v9 = *(_BYTE *)(3 * *v30 + a3 + 2);
          *v10 = *(_BYTE *)(3 * *v30 + a3 + 1);
          v11 = v10 - 1;
          v24 = (int)(v10 - 2);
          *v11 = *(_BYTE *)(3 * *v30-- + a3);
        }
        *(_BYTE *)(a1 + 9) = 8;
        *(_BYTE *)(a1 + 11) = 32;
        *(_DWORD *)(a1 + 4) = 4 * v15;
        *(_BYTE *)(a1 + 8) = 6;
        result = a1;
        *(_BYTE *)(a1 + 10) = 4;
      }
    }
  }
  return result;
}
