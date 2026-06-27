int __cdecl sub_6F85337D(int a1, int a2)
{
  int result; // eax@1
  char v3; // ST0B_1@5
  char v4; // ST0A_1@10
  char v5; // ST09_1@16
  char v6; // ST09_1@16
  char v7; // ST08_1@21
  char v8; // ST08_1@21
  unsigned int v9; // [sp+Ch] [bp-24h]@2
  unsigned int v10; // [sp+10h] [bp-20h]@20
  int l; // [sp+14h] [bp-1Ch]@20
  unsigned int v12; // [sp+18h] [bp-18h]@15
  int k; // [sp+1Ch] [bp-14h]@15
  unsigned int v14; // [sp+20h] [bp-10h]@9
  int j; // [sp+24h] [bp-Ch]@9
  unsigned int v16; // [sp+28h] [bp-8h]@4
  int i; // [sp+2Ch] [bp-4h]@4

  result = *(_BYTE *)(a1 + 8) & 2;
  if ( *(_BYTE *)(a1 + 8) & 2 )
  {
    v9 = *(_DWORD *)a1;
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      if ( *(_BYTE *)(a1 + 8) == 2 )
      {
        v16 = 0;
        for ( i = a2; ; i += 3 )
        {
          result = v16;
          if ( v16 >= v9 )
            break;
          v3 = *(_BYTE *)i;
          *(_BYTE *)i = *(_BYTE *)(i + 2);
          *(_BYTE *)(i + 2) = v3;
          ++v16;
        }
      }
      else
      {
        result = *(_BYTE *)(a1 + 8);
        if ( (_BYTE)result == 6 )
        {
          v14 = 0;
          for ( j = a2; ; j += 4 )
          {
            result = v14;
            if ( v14 >= v9 )
              break;
            v4 = *(_BYTE *)j;
            *(_BYTE *)j = *(_BYTE *)(j + 2);
            *(_BYTE *)(j + 2) = v4;
            ++v14;
          }
        }
      }
    }
    else
    {
      result = *(_BYTE *)(a1 + 9);
      if ( (_BYTE)result == 16 )
      {
        if ( *(_BYTE *)(a1 + 8) == 2 )
        {
          v12 = 0;
          for ( k = a2; ; k += 6 )
          {
            result = v12;
            if ( v12 >= v9 )
              break;
            v5 = *(_BYTE *)k;
            *(_BYTE *)k = *(_BYTE *)(k + 4);
            *(_BYTE *)(k + 4) = v5;
            v6 = *(_BYTE *)(k + 1);
            *(_BYTE *)(k + 1) = *(_BYTE *)(k + 5);
            *(_BYTE *)(k + 5) = v6;
            ++v12;
          }
        }
        else
        {
          result = *(_BYTE *)(a1 + 8);
          if ( (_BYTE)result == 6 )
          {
            v10 = 0;
            for ( l = a2; ; l += 8 )
            {
              result = v10;
              if ( v10 >= v9 )
                break;
              v7 = *(_BYTE *)l;
              *(_BYTE *)l = *(_BYTE *)(l + 4);
              *(_BYTE *)(l + 4) = v7;
              v8 = *(_BYTE *)(l + 1);
              *(_BYTE *)(l + 1) = *(_BYTE *)(l + 5);
              *(_BYTE *)(l + 5) = v8;
              ++v10;
            }
          }
        }
      }
    }
  }
  return result;
}
