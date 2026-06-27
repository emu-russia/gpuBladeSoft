unsigned __int64 __cdecl sub_6F818990(int a1, unsigned __int64 a2)
{
  char v2; // cl@2
  unsigned int v3; // edi@2
  unsigned int v4; // esi@2
  unsigned __int64 v5; // rax@6
  unsigned int v6; // kr00_4@10
  signed int v7; // esi@10
  unsigned __int64 v8; // rax@10
  unsigned __int64 result; // rax@11

  if ( SHIDWORD(a2) < 0 )
  {
    result = -1i64;
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 60);
    v3 = SHIDWORD(a2) >> v2;
    v4 = a2 >> v2;
    if ( v2 & 0x20 )
      v4 = SHIDWORD(a2) >> v2;
    if ( v2 & 0x20 )
      v3 = SHIDWORD(a2) >> v2 >> 31;
    v5 = __PAIR__(v3, v4) << (v2 & 0x1F);
    if ( v2 & 0x20 )
      HIDWORD(v5) = v4 << v2;
    if ( v2 & 0x20 )
      LODWORD(v5) = 0;
    v6 = v4;
    v7 = 1;
    v8 = __PAIR__(v3, v6) + a2 - v5;
    if ( *(_BYTE *)a1 <= 3u )
    {
      LOWORD(v7) = 0;
      if ( *(_BYTE *)a1 == 3 )
      {
        LOWORD(v7) = 1;
        if ( *(_BYTE *)(a1 + 1) <= 2u )
        {
          LOWORD(v7) = 0;
          if ( *(_BYTE *)(a1 + 1) == 2 )
            v7 = *(_BYTE *)(a1 + 2) != 0;
        }
      }
    }
    result = v8 - (unsigned int)v7;
  }
  return result;
}
