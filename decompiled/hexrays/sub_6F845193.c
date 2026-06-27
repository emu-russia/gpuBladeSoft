int __cdecl sub_6F845193(int a1, int a2)
{
  int result; // eax@1
  int v3; // eax@2
  signed int v4; // eax@20
  unsigned int v5; // [sp+4h] [bp-2Ch]@2
  signed int v6; // [sp+8h] [bp-28h]@22
  _BYTE *v7; // [sp+Ch] [bp-24h]@19
  _BYTE *v8; // [sp+10h] [bp-20h]@19
  int v9; // [sp+14h] [bp-1Ch]@12
  _BYTE *v10; // [sp+18h] [bp-18h]@12
  _BYTE *v11; // [sp+1Ch] [bp-14h]@12
  int v12; // [sp+20h] [bp-10h]@5
  _BYTE *v13; // [sp+24h] [bp-Ch]@5
  _BYTE *v14; // [sp+28h] [bp-8h]@5
  unsigned int k; // [sp+2Ch] [bp-4h]@5
  unsigned int i; // [sp+2Ch] [bp-4h]@12
  unsigned int j; // [sp+2Ch] [bp-4h]@22

  result = *(_BYTE *)(a1 + 9);
  if ( (unsigned __int8)result <= 7u )
  {
    v5 = *(_DWORD *)a1;
    v3 = *(_BYTE *)(a1 + 9);
    switch ( v3 )
    {
      case 2:
        v11 = (_BYTE *)(((v5 - 1) >> 2) + a2);
        v10 = (_BYTE *)(v5 - 1 + a2);
        v9 = 2 * (~((_BYTE)v5 + 3) & 3);
        for ( i = 0; i < v5; ++i )
        {
          *v10 = ((signed int)*v11 >> v9) & 3;
          if ( v9 == 6 )
          {
            v9 = 0;
            --v11;
          }
          else
          {
            v9 += 2;
          }
          --v10;
        }
        break;
      case 4:
        v8 = (_BYTE *)(((v5 - 1) >> 1) + a2);
        v7 = (_BYTE *)(v5 - 1 + a2);
        if ( ((_BYTE)v5 + 1) & 1 )
          v4 = 0;
        else
          v4 = 4;
        v6 = v4;
        for ( j = 0; j < v5; ++j )
        {
          *v7 = ((signed int)*v8 >> v6) & 0xF;
          if ( v6 == 4 )
          {
            v6 = 0;
            --v8;
          }
          else
          {
            v6 = 4;
          }
          --v7;
        }
        break;
      case 1:
        v14 = (_BYTE *)(((v5 - 1) >> 3) + a2);
        v13 = (_BYTE *)(v5 - 1 + a2);
        v12 = ~((_BYTE)v5 + 7) & 7;
        for ( k = 0; k < v5; ++k )
        {
          *v13 = ((signed int)*v14 >> v12) & 1;
          if ( v12 == 7 )
          {
            v12 = 0;
            --v14;
          }
          else
          {
            ++v12;
          }
          --v13;
        }
        break;
    }
    *(_BYTE *)(a1 + 9) = 8;
    *(_BYTE *)(a1 + 11) = 8 * *(_BYTE *)(a1 + 10);
    result = a1;
    *(_DWORD *)(a1 + 4) = v5 * *(_BYTE *)(a1 + 10);
  }
  return result;
}
