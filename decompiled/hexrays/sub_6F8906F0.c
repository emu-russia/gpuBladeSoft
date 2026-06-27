signed int __cdecl sub_6F8906F0(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi@1
  int v4; // ebx@2
  int v5; // ecx@6
  signed int result; // eax@7
  __int16 *v7; // edx@9
  int v8; // ecx@9
  int v9; // ecx@9
  int v10; // edx@9

  v3 = a2;
  if ( !a1 )
    return -2;
  v4 = *(_DWORD *)(a1 + 28);
  if ( !v4 )
    return -2;
  if ( a2 == -1 )
  {
    v3 = 6;
  }
  else if ( a2 > 9 )
  {
    return -2;
  }
  if ( a3 > 4 )
    return -2;
  v5 = *(_DWORD *)(v4 + 132);
  if ( *(_DWORD *)(v4 + 136) != a3 || *(&off_6FBA11A8 + 3 * v3) != *(&off_6FBA11A8 + 3 * v5) )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 8) )
    {
      result = sub_6F88F670(a1, 5u);
      if ( result == -5 )
      {
        v5 = *(_DWORD *)(v4 + 132);
        if ( !*(_DWORD *)(v4 + 20) )
          result = 0;
      }
      else
      {
        v5 = *(_DWORD *)(v4 + 132);
      }
    }
  }
  else
  {
    result = 0;
  }
  if ( v3 != v5 )
  {
    v7 = &word_6FBA11A0[6 * v3];
    *(_DWORD *)(v4 + 132) = v3;
    v8 = (unsigned __int16)word_6FBA11A0[6 * v3];
    *(_DWORD *)(v4 + 128) = (unsigned __int16)word_6FBA11A2[6 * v3];
    *(_DWORD *)(v4 + 140) = v8;
    v9 = (unsigned __int16)v7[2];
    v10 = (unsigned __int16)v7[3];
    *(_DWORD *)(v4 + 144) = v9;
    *(_DWORD *)(v4 + 124) = v10;
  }
  *(_DWORD *)(v4 + 136) = a3;
  return result;
}
