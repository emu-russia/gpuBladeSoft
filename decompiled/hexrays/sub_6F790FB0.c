int __cdecl sub_6F790FB0(int a1)
{
  int result; // eax@1
  int v2; // edx@2
  int v3; // ebx@2
  __int16 v4; // cx@4
  int v5; // esi@5
  int v6; // edi@5
  int v7; // esi@5

  result = *(_DWORD *)(a1 + 20);
  if ( result )
  {
    v2 = *(_WORD *)result;
    v3 = 0;
    if ( (signed __int16)v2 > 1 )
      v3 = *(_WORD *)(*(_DWORD *)(result + 12) + 2 * (signed __int16)v2 - 4) + 1;
    v4 = *(_WORD *)(result + 2);
    if ( v4 > 1 )
    {
      v5 = *(_DWORD *)(result + 4);
      v6 = v5 + 8 * v3;
      v7 = v5 + 8 * v4 - 8;
      if ( *(_DWORD *)v6 == *(_DWORD *)v7
        && *(_DWORD *)(v6 + 4) == *(_DWORD *)(v7 + 4)
        && *(_BYTE *)(*(_DWORD *)(result + 8) + v4 - 1) == 1 )
      {
        *(_WORD *)(result + 2) = --v4;
      }
    }
    if ( (signed __int16)v2 > 0 )
    {
      if ( v3 == v4 - 1 )
      {
        *(_WORD *)result = v2 - 1;
        *(_WORD *)(result + 2) = v4 - 1;
      }
      else
      {
        result = *(_DWORD *)(result + 12);
        *(_WORD *)(result + 2 * v2 - 2) = v4 - 1;
      }
    }
  }
  return result;
}
