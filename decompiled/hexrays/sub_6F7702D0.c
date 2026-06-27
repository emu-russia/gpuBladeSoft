signed int __cdecl sub_6F7702D0(int *a1, int a2)
{
  signed int result; // eax@1
  int v3; // esi@2
  int v4; // eax@5
  int v5; // eax@5

  result = 33;
  if ( a1 )
  {
    v3 = *a1;
    if ( a2 )
    {
      result = 6;
      if ( v3 )
      {
        if ( *(_BYTE *)(a2 + 16) & 1 )
        {
          sub_6F773D90(*a1, *(_DWORD *)(a2 + 4));
          v4 = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 4) = 0;
          sub_6F773D90(v3, v4);
          v5 = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(a2 + 8) = 0;
          sub_6F773D90(v3, v5);
        }
        *(_DWORD *)(a2 + 4) = 0;
        *(_WORD *)a2 = 0;
        *(_WORD *)(a2 + 2) = 0;
        result = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 16) = 0;
      }
    }
    else
    {
      result = 20;
    }
  }
  return result;
}
