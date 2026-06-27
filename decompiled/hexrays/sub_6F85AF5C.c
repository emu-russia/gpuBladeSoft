void __cdecl sub_6F85AF5C(int a1, _BYTE *a2, signed int a3)
{
  int v3; // eax@2
  _BYTE *v4; // eax@7
  _BYTE *v5; // eax@16
  char v6; // al@25
  _BYTE *v7; // eax@28
  unsigned int v8; // eax@41
  _BYTE *v9; // [sp+18h] [bp-70h]@36
  size_t v10; // [sp+1Ch] [bp-6Ch]@35
  unsigned int v11; // [sp+20h] [bp-68h]@35
  unsigned int v12; // [sp+2Ch] [bp-5Ch]@23
  unsigned int v13; // [sp+38h] [bp-50h]@14
  unsigned int v14; // [sp+44h] [bp-44h]@5
  unsigned int l; // [sp+48h] [bp-40h]@35
  _BYTE *v16; // [sp+4Ch] [bp-3Ch]@35
  unsigned int j; // [sp+50h] [bp-38h]@23
  int v18; // [sp+54h] [bp-34h]@23
  signed int v19; // [sp+58h] [bp-30h]@23
  _BYTE *v20; // [sp+5Ch] [bp-2Ch]@23
  unsigned int i; // [sp+60h] [bp-28h]@14
  int v22; // [sp+64h] [bp-24h]@14
  signed int v23; // [sp+68h] [bp-20h]@14
  _BYTE *v24; // [sp+6Ch] [bp-1Ch]@14
  unsigned int k; // [sp+70h] [bp-18h]@5
  int v26; // [sp+74h] [bp-14h]@5
  signed int v27; // [sp+78h] [bp-10h]@5
  _BYTE *v28; // [sp+7Ch] [bp-Ch]@5

  if ( a3 <= 5 )
  {
    v3 = *(_BYTE *)(a1 + 11);
    switch ( v3 )
    {
      case 2:
        v13 = *(_DWORD *)a1;
        v24 = a2;
        v23 = 6;
        v22 = 0;
        for ( i = byte_6FB9C526[a3]; i < v13; i += byte_6FB9C52D[a3] )
        {
          v22 |= (((signed int)a2[i >> 2] >> 2 * (~(_BYTE)i & 3)) & 3) << v23;
          if ( v23 )
          {
            v23 -= 2;
          }
          else
          {
            v23 = 6;
            v5 = v24++;
            *v5 = v22;
            v22 = 0;
          }
        }
        if ( v23 != 6 )
          *v24 = v22;
        break;
      case 4:
        v12 = *(_DWORD *)a1;
        v20 = a2;
        v19 = 4;
        v18 = 0;
        for ( j = byte_6FB9C526[a3]; j < v12; j += byte_6FB9C52D[a3] )
        {
          if ( j & 1 )
            v6 = 0;
          else
            v6 = 4;
          v18 |= (((signed int)a2[j >> 1] >> v6) & 0xF) << v19;
          if ( v19 )
          {
            v19 -= 4;
          }
          else
          {
            v19 = 4;
            v7 = v20++;
            *v7 = v18;
            v18 = 0;
          }
        }
        if ( v19 != 4 )
          *v20 = v18;
        break;
      case 1:
        v14 = *(_DWORD *)a1;
        v28 = a2;
        v26 = 0;
        v27 = 7;
        for ( k = byte_6FB9C526[a3]; k < v14; k += byte_6FB9C52D[a3] )
        {
          v26 |= (((signed int)a2[k >> 3] >> (~(_BYTE)k & 7)) & 1) << v27;
          if ( v27 )
          {
            --v27;
          }
          else
          {
            v27 = 7;
            v4 = v28++;
            *v4 = v26;
            v26 = 0;
          }
        }
        if ( v27 != 7 )
          *v28 = v26;
        break;
      default:
        v11 = *(_DWORD *)a1;
        v16 = a2;
        v10 = (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
        for ( l = byte_6FB9C526[a3]; l < v11; l += byte_6FB9C52D[a3] )
        {
          v9 = &a2[v10 * l];
          if ( v16 != v9 )
            memcpy(v16, v9, v10);
          v16 += v10;
        }
        break;
    }
    *(_DWORD *)a1 = (byte_6FB9C52D[a3] + *(_DWORD *)a1 - (unsigned int)byte_6FB9C526[a3] - 1) / byte_6FB9C52D[a3];
    if ( *(_BYTE *)(a1 + 11) <= 7u )
      v8 = (*(_DWORD *)a1 * (unsigned int)*(_BYTE *)(a1 + 11) + 7) >> 3;
    else
      v8 = *(_DWORD *)a1 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
    *(_DWORD *)(a1 + 4) = v8;
  }
}
