int __cdecl sub_6F851FB3(int a1, int a2, int a3)
{
  int result; // eax@4
  int v4; // edx@14
  int v5; // eax@14
  int v6; // edx@14

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        result = *(_DWORD *)(a1 + 116) & 0x200;
        if ( !result )
        {
          if ( *(_BYTE *)(a3 + 2)
            && *(_BYTE *)(a3 + 2) <= 0xCu
            && *(_BYTE *)(a3 + 3)
            && *(_BYTE *)(a3 + 3) <= 0x1Fu
            && *(_BYTE *)(a3 + 4) <= 0x17u
            && *(_BYTE *)(a3 + 5) <= 0x3Bu
            && *(_BYTE *)(a3 + 6) <= 0x3Cu )
          {
            v4 = *(_DWORD *)(a3 + 4);
            *(_DWORD *)(a2 + 140) = *(_DWORD *)a3;
            *(_DWORD *)(a2 + 144) = v4;
            v5 = *(_DWORD *)(a2 + 8);
            BYTE1(v5) |= 2u;
            v6 = v5;
            result = a2;
            *(_DWORD *)(a2 + 8) = v6;
          }
          else
          {
            result = sub_6F839262(a1, "Ignoring invalid time value");
          }
        }
      }
    }
  }
  return result;
}
