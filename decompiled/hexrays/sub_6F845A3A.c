unsigned int __cdecl sub_6F845A3A(int a1, int a2)
{
  int v2; // edx@3
  _BYTE *v3; // ST3C_4@4
  unsigned int result; // eax@5
  int v5; // edx@7
  _BYTE *v6; // ST2C_4@8
  _BYTE *v7; // ST30_4@8
  int v8; // edx@13
  _BYTE *v9; // ST20_4@14
  _BYTE *v10; // ST24_4@14
  int v11; // edx@17
  _BYTE *v12; // ST14_4@18
  _BYTE *v13; // ST18_4@18
  unsigned int v14; // [sp+Ch] [bp-34h]@1
  unsigned int l; // [sp+10h] [bp-30h]@17
  int v16; // [sp+14h] [bp-2Ch]@17
  int v17; // [sp+18h] [bp-28h]@17
  unsigned int k; // [sp+1Ch] [bp-24h]@13
  _BYTE *v19; // [sp+20h] [bp-20h]@13
  _BYTE *v20; // [sp+24h] [bp-1Ch]@13
  unsigned int j; // [sp+28h] [bp-18h]@7
  int v22; // [sp+2Ch] [bp-14h]@7
  int v23; // [sp+30h] [bp-10h]@7
  unsigned int i; // [sp+34h] [bp-Ch]@3
  int v25; // [sp+38h] [bp-8h]@3
  int v26; // [sp+3Ch] [bp-4h]@3

  v14 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 8) == 6 )
  {
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      v2 = *(_DWORD *)(a1 + 4);
      v26 = v2 + a2;
      v25 = v2 + a2;
      for ( i = 0; ; ++i )
      {
        result = i;
        if ( i >= v14 )
          break;
        v3 = (_BYTE *)(v26 - 1);
        *(_BYTE *)(v25 - 1) = ~*v3;
        v26 = (int)(v3 - 3);
        v25 = v26;
      }
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 4);
      v23 = v5 + a2;
      v22 = v5 + a2;
      for ( j = 0; ; ++j )
      {
        result = j;
        if ( j >= v14 )
          break;
        v6 = (_BYTE *)(v22 - 1);
        v7 = (_BYTE *)(v23 - 1);
        *v6 = ~*v7--;
        *(v6 - 1) = ~*v7;
        v23 = (int)(v7 - 6);
        v22 = v23;
      }
    }
  }
  else
  {
    result = *(_BYTE *)(a1 + 8);
    if ( (_BYTE)result == 4 )
    {
      if ( *(_BYTE *)(a1 + 9) == 8 )
      {
        v8 = *(_DWORD *)(a1 + 4);
        v20 = (_BYTE *)(v8 + a2);
        v19 = (_BYTE *)(v8 + a2);
        for ( k = 0; ; ++k )
        {
          result = k;
          if ( k >= v14 )
            break;
          v9 = v19 - 1;
          v10 = v20 - 1;
          *v9 = ~*v10;
          v19 = v9 - 1;
          v20 = v10 - 1;
          *v19 = *v20;
        }
      }
      else
      {
        v11 = *(_DWORD *)(a1 + 4);
        v17 = v11 + a2;
        v16 = v11 + a2;
        for ( l = 0; ; ++l )
        {
          result = l;
          if ( l >= v14 )
            break;
          v12 = (_BYTE *)(v16 - 1);
          v13 = (_BYTE *)(v17 - 1);
          *v12 = ~*v13--;
          *(v12 - 1) = ~*v13;
          v17 = (int)(v13 - 2);
          v16 = v17;
        }
      }
    }
  }
  return result;
}
