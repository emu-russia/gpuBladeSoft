unsigned int __cdecl sub_6F857342(int a1, _BYTE *a2, int a3)
{
  unsigned int result; // eax@1
  unsigned int v4; // [sp+4h] [bp-4Ch]@26
  unsigned int v5; // [sp+Ch] [bp-44h]@17
  unsigned int v6; // [sp+10h] [bp-40h]@6
  unsigned int j; // [sp+14h] [bp-3Ch]@26
  int v8; // [sp+18h] [bp-38h]@26
  signed int v9; // [sp+1Ch] [bp-34h]@26
  _BYTE *v10; // [sp+20h] [bp-30h]@26
  _BYTE *v11; // [sp+24h] [bp-2Ch]@26
  unsigned int i; // [sp+28h] [bp-28h]@17
  int v13; // [sp+2Ch] [bp-24h]@17
  signed int v14; // [sp+30h] [bp-20h]@17
  _BYTE *v15; // [sp+34h] [bp-1Ch]@17
  _BYTE *v16; // [sp+38h] [bp-18h]@17
  unsigned int k; // [sp+3Ch] [bp-14h]@6
  signed __int64 v18; // [sp+40h] [bp-10h]@6
  _BYTE *v19; // [sp+48h] [bp-8h]@6
  _BYTE *v20; // [sp+4Ch] [bp-4h]@6

  result = *(_BYTE *)(a1 + 9);
  if ( (_BYTE)result == 8 )
  {
    result = *(_BYTE *)(a1 + 10);
    if ( (_BYTE)result == 1 )
    {
      switch ( a3 )
      {
        case 2:
          v5 = *(_DWORD *)a1;
          v16 = a2;
          v15 = a2;
          v14 = 6;
          v13 = 0;
          for ( i = 0; i < v5; ++i )
          {
            v13 |= (*v16 & 3) << v14;
            if ( v14 )
            {
              v14 -= 2;
            }
            else
            {
              v14 = 6;
              *v15++ = v13;
              v13 = 0;
            }
            ++v16;
          }
          if ( v14 != 6 )
            *v15 = v13;
          break;
        case 4:
          v4 = *(_DWORD *)a1;
          v11 = a2;
          v10 = a2;
          v9 = 4;
          v8 = 0;
          for ( j = 0; j < v4; ++j )
          {
            v8 |= (*v11 & 0xF) << v9;
            if ( v9 )
            {
              v9 -= 4;
            }
            else
            {
              v9 = 4;
              *v10++ = v8;
              v8 = 0;
            }
            ++v11;
          }
          if ( v9 != 4 )
            *v10 = v8;
          break;
        case 1:
          v6 = *(_DWORD *)a1;
          v20 = a2;
          v19 = a2;
          v18 = 0x8000000000i64;
          for ( k = 0; k < v6; ++k )
          {
            if ( *v20 )
              LOBYTE(v18) = BYTE4(v18) | v18;
            ++v20;
            if ( SHIDWORD(v18) <= 1 )
            {
              HIDWORD(v18) = 128;
              *v19++ = v18;
              LOBYTE(v18) = 0;
            }
            else
            {
              SHIDWORD(v18) >>= 1;
            }
          }
          if ( HIDWORD(v18) != 128 )
            *v19 = v18;
          break;
      }
      *(_BYTE *)(a1 + 9) = a3;
      *(_BYTE *)(a1 + 11) = *(_BYTE *)(a1 + 10) * a3;
      if ( *(_BYTE *)(a1 + 11) <= 7u )
        result = (*(_DWORD *)a1 * (unsigned int)*(_BYTE *)(a1 + 11) + 7) >> 3;
      else
        result = *(_DWORD *)a1 * (unsigned __int8)(*(_BYTE *)(a1 + 11) >> 3);
      *(_DWORD *)(a1 + 4) = result;
    }
  }
  return result;
}
