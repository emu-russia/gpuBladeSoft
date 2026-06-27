int __cdecl sub_6F79C8C0(int a1, signed __int16 a2, int a3, int a4)
{
  int result; // eax@1
  int v5; // edx@2
  int v6; // edx@4
  unsigned int v7; // edi@5
  signed int v8; // ebp@6
  int v9; // ecx@6

  result = *(_DWORD *)(a1 + 4);
  if ( a4 - a3 < result )
  {
    v5 = -result & (result + a3 - 1);
    result = -result & a4;
    if ( v5 == result )
    {
      v6 = v5 >> *(_DWORD *)a1;
      if ( v6 >= 0 )
      {
        v7 = *(_DWORD *)(a1 + 104);
        if ( v7 > v6 )
        {
          v8 = 128 >> (a2 & 7);
          v9 = *(_DWORD *)(a1 + 112);
          result = *(_DWORD *)(a1 + 60) + (signed __int16)(a2 >> 3) - v9 * v6;
          if ( v9 > 0 )
            result += v9 * (v7 - 1);
          *(_BYTE *)result |= v8;
        }
      }
    }
  }
  return result;
}
