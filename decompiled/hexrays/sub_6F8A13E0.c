signed __int64 __usercall sub_6F8A13E0@<edx:eax>(int a1@<esi>, __int64 a2, __int64 a3)
{
  __int64 v3; // rax@1
  unsigned int v4; // ebp@1
  unsigned int v5; // ebx@3
  unsigned int v6; // edi@5
  int v7; // esi@7
  int v8; // ecx@7
  signed __int64 result; // rax@8
  unsigned __int64 v10; // rtt@13
  unsigned __int64 v11; // rtt@20
  unsigned int v12; // ebx@20
  int v13; // ebp@20
  unsigned __int64 v14; // rax@20
  unsigned int v15; // [sp+0h] [bp-2Ch]@1
  int v16; // [sp+8h] [bp-24h]@1

  v16 = 0;
  LODWORD(v3) = a3;
  v4 = HIDWORD(a2);
  v15 = a2;
  if ( SHIDWORD(a2) < 0 )
  {
    v16 = -1;
    v15 = a2;
    v4 = (unsigned __int64)-a2 >> 32;
  }
  v5 = HIDWORD(a3);
  if ( SHIDWORD(a3) < 0 )
  {
    v16 = ~v16;
    v3 = -a3;
    v5 = (unsigned __int64)-a3 >> 32;
  }
  v6 = v3;
  if ( v5 )
  {
    if ( v5 > v4 )
    {
      v7 = 0;
      v8 = 0;
    }
    else
    {
      _BitScanReverse((unsigned int *)&a1, v5);
      v7 = a1 ^ 0x1F;
      if ( v7 )
      {
        HIDWORD(v3) = (v5 << v7) | ((unsigned int)v3 >> (32 - v7));
        LODWORD(v11) = (v15 >> (32 - v7)) | (v4 << v7);
        HIDWORD(v11) = v4 >> (32 - v7);
        v12 = v11 % HIDWORD(v3);
        v13 = v11 / HIDWORD(v3);
        v14 = ((_DWORD)v3 << v7) * (unsigned __int64)(unsigned int)v13;
        if ( v12 < HIDWORD(v14) || v15 << v7 < (unsigned int)v14 && v12 == HIDWORD(v14) )
        {
          v8 = v13 - 1;
          v7 = 0;
        }
        else
        {
          v8 = v13;
          v7 = 0;
        }
      }
      else if ( v5 < v4 || (v8 = 0, (unsigned int)v3 <= v15) )
      {
        v8 = 1;
      }
    }
  }
  else if ( (unsigned int)v3 <= v4 )
  {
    if ( !(_DWORD)v3 )
      v6 = 1 / 0u;
    v7 = v4 / v6;
    LODWORD(v10) = v15;
    HIDWORD(v10) = v4 % v6;
    v8 = v10 / v6;
  }
  else
  {
    v7 = 0;
    v8 = __PAIR__(v4, v15) / (unsigned int)v3;
  }
  result = __PAIR__(v7, v8);
  if ( v16 )
    result = -__PAIR__(v7, v8);
  return result;
}
