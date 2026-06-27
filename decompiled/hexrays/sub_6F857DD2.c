int __cdecl sub_6F857DD2(int a1, int a2)
{
  int result; // eax@1
  __int16 v3; // ST08_2@19
  __int16 v4; // ST04_2@19
  unsigned int v5; // [sp+18h] [bp-18h]@2
  unsigned int v6; // [sp+1Ch] [bp-14h]@18
  int j; // [sp+20h] [bp-10h]@18
  unsigned int v8; // [sp+24h] [bp-Ch]@8
  int i; // [sp+28h] [bp-8h]@8
  signed int v10; // [sp+2Ch] [bp-4h]@4
  signed int v11; // [sp+2Ch] [bp-4h]@14

  result = *(_BYTE *)(a1 + 8) & 2;
  if ( *(_BYTE *)(a1 + 8) & 2 )
  {
    v5 = *(_DWORD *)a1;
    if ( *(_BYTE *)(a1 + 9) == 8 )
    {
      if ( *(_BYTE *)(a1 + 8) == 2 )
      {
        v10 = 3;
      }
      else
      {
        result = *(_BYTE *)(a1 + 8);
        if ( (_BYTE)result != 6 )
          return result;
        v10 = 4;
      }
      v8 = 0;
      for ( i = a2; ; i += v10 )
      {
        result = v8;
        if ( v8 >= v5 )
          break;
        *(_BYTE *)i -= *(_BYTE *)(i + 1);
        *(_BYTE *)(i + 2) -= *(_BYTE *)(i + 1);
        ++v8;
      }
    }
    else
    {
      result = *(_BYTE *)(a1 + 9);
      if ( (_BYTE)result != 16 )
        return result;
      if ( *(_BYTE *)(a1 + 8) == 2 )
      {
        v11 = 6;
      }
      else
      {
        result = *(_BYTE *)(a1 + 8);
        if ( (_BYTE)result != 6 )
          return result;
        v11 = 8;
      }
      v6 = 0;
      for ( j = a2; ; j += v11 )
      {
        result = v6;
        if ( v6 >= v5 )
          break;
        v3 = _byteswap_ushort(*(_WORD *)j) - _byteswap_ushort(*(_WORD *)(j + 2));
        v4 = _byteswap_ushort(*(_WORD *)(j + 4)) - _byteswap_ushort(*(_WORD *)(j + 2));
        *(_BYTE *)j = (unsigned __int16)(_byteswap_ushort(*(_WORD *)j) - _byteswap_ushort(*(_WORD *)(j + 2))) >> 8;
        *(_BYTE *)(j + 1) = v3;
        *(_BYTE *)(j + 4) = HIBYTE(v4);
        *(_BYTE *)(j + 5) = v4;
        ++v6;
      }
    }
  }
  return result;
}
