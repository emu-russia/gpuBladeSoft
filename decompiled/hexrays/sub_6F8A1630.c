int __usercall sub_6F8A1630@<eax>(int a1@<ebp>, unsigned __int64 a2, __int64 a3)
{
  int result; // eax@3
  unsigned int v4; // ebp@5
  unsigned __int64 v5; // rtt@7
  int v6; // ebp@10
  unsigned int v7; // ecx@15
  unsigned int v8; // eax@15
  unsigned __int64 v9; // rtt@15
  unsigned int v10; // ecx@15
  unsigned int v11; // ebx@15
  unsigned __int64 v12; // rax@15
  unsigned int v13; // edi@15
  int v14; // esi@15
  unsigned __int64 v15; // rax@18
  unsigned int v16; // [sp+8h] [bp-24h]@15

  if ( HIDWORD(a3) )
  {
    if ( HIDWORD(a3) <= HIDWORD(a2) )
    {
      _BitScanReverse((unsigned int *)&a1, HIDWORD(a3));
      v6 = a1 ^ 0x1F;
      if ( v6 )
      {
        v7 = ((unsigned int)a3 >> (32 - v6)) | (HIDWORD(a3) << v6);
        v16 = v7;
        LODWORD(v9) = (HIDWORD(a2) << v6) | ((unsigned int)a2 >> (32 - v6));
        HIDWORD(v9) = HIDWORD(a2) >> (32 - v6);
        v8 = v9 / v7;
        v10 = v9 % v7;
        v11 = (_DWORD)a2 << v6;
        v12 = ((_DWORD)a3 << v6) * (unsigned __int64)v8;
        v13 = HIDWORD(v12);
        v14 = v12;
        if ( v10 < HIDWORD(v12) || v10 == HIDWORD(v12) && v11 < (unsigned int)v12 )
        {
          v15 = v12 - __PAIR__(v16, (_DWORD)a3 << v6);
          v13 = HIDWORD(v15);
          v14 = v15;
        }
        result = ((v11 - v14) >> v6) | ((__PAIR__(v10, v11) - __PAIR__(v13, v14)) >> 32 << (32 - (unsigned __int8)v6));
      }
      else if ( HIDWORD(a3) < HIDWORD(a2) || (unsigned int)a3 <= (unsigned int)a2 )
      {
        result = a2 - a3;
      }
      else
      {
        result = a2;
      }
    }
    else
    {
      result = a2;
    }
  }
  else if ( (unsigned int)a3 <= HIDWORD(a2) )
  {
    v4 = a3;
    if ( !(_DWORD)a3 )
      v4 = 1 / 0u;
    LODWORD(v5) = a2;
    HIDWORD(v5) = HIDWORD(a2) % v4;
    result = v5 % v4;
  }
  else
  {
    result = a2 % (unsigned int)a3;
  }
  return result;
}
