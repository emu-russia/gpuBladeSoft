char __usercall sub_6F967F5A@<al>(int a1@<eax>, char a2@<dl>)
{
  int v2; // ebx@1
  int v3; // ecx@1
  int v4; // esi@1
  char result; // al@2
  int v6; // edx@5

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 88);
  v4 = (*(_DWORD *)(a1 + 40) - *(_DWORD *)(v3 + 8)) >> 2;
  if ( v4 >= 0 )
  {
    if ( v4 )
    {
      *(_DWORD *)(v3 + 16) = v4;
      if ( a2 )
      {
        v6 = *(_DWORD *)(v3 + 12);
        if ( v6 & 8 )
          *(_WORD *)(v3 + 12) = v6 | 0x10;
        else
          *(_WORD *)(v3 + 12) = v6 | 0x20;
      }
      *(_DWORD *)(a1 + 88) = v2;
      *(_DWORD *)(a1 + 40) = v2 + 32;
      *(_DWORD *)(v2 + 16) = 0;
      *(_DWORD *)(v2 + 8) = v2 + 32;
      *(_DWORD *)(v3 + 28) = v2;
      ++*(_WORD *)(a1 + 84);
    }
    if ( *(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 36) )
    {
      *(_BYTE *)(a1 + 87) = 0;
      result = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 44) = 98;
      result = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 99;
    result = 1;
  }
  return result;
}
