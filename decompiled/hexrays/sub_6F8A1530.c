int __usercall sub_6F8A1530@<eax>(int a1@<edi>, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  int result; // eax@3
  unsigned int v5; // ecx@5
  int v6; // edi@9
  unsigned int v7; // ST08_4@14
  unsigned __int64 v8; // rtt@14
  unsigned int v9; // esi@14
  int v10; // ebx@14
  unsigned __int64 v11; // rax@14

  if ( a4 )
  {
    if ( a4 > HIDWORD(a2) )
    {
      result = 0;
    }
    else
    {
      _BitScanReverse((unsigned int *)&a1, a4);
      v6 = a1 ^ 0x1F;
      if ( v6 )
      {
        v7 = (a3 >> (32 - v6)) | (a4 << v6);
        LODWORD(v8) = ((unsigned int)a2 >> (32 - v6)) | (HIDWORD(a2) << v6);
        HIDWORD(v8) = HIDWORD(a2) >> (32 - v6);
        v9 = v8 % v7;
        v10 = v8 / v7;
        v11 = (a3 << v6) * (unsigned __int64)(unsigned int)v10;
        if ( v9 < HIDWORD(v11) || (_DWORD)a2 << v6 < (unsigned int)v11 && v9 == HIDWORD(v11) )
          result = v10 - 1;
        else
          result = v10;
      }
      else if ( a4 < HIDWORD(a2) || (result = 0, a3 <= (unsigned int)a2) )
      {
        result = 1;
      }
    }
  }
  else if ( a3 <= HIDWORD(a2) )
  {
    v5 = a3;
    if ( !a3 )
      v5 = 1 / 0u;
    result = __PAIR__(HIDWORD(a2) % v5, (unsigned int)a2) / v5;
  }
  else
  {
    result = a2 / a3;
  }
  return result;
}
