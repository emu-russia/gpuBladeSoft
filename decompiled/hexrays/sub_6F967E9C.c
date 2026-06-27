char __usercall sub_6F967E9C@<al>(int a1@<eax>, int a2@<edx>, char a3@<cl>)
{
  int v3; // ebx@2
  unsigned int v4; // ebx@3
  int v6; // esi@5
  __int16 v7; // di@5

  if ( !*(_DWORD *)(a1 + 92) )
  {
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 88) = v3;
    *(_DWORD *)(a1 + 92) = v3;
    *(_DWORD *)(a1 + 40) = v3 + 32;
  }
  v4 = *(_DWORD *)(a1 + 40);
  if ( v4 >= *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 44) = 98;
    return 1;
  }
  v6 = *(_DWORD *)(a1 + 88);
  *(_WORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 8) = v4;
  *(_DWORD *)(v6 + 20) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  v7 = *(_BYTE *)(a1 + 176);
  *(_WORD *)(v6 + 12) = v7;
  if ( a2 == 1 )
  {
    if ( a3 )
      *(_WORD *)(v6 + 12) = (unsigned __int8)v7 | 0x28;
    else
      *(_WORD *)(v6 + 12) = (unsigned __int8)v7 | 8;
  }
  else
  {
    if ( a2 != 2 )
    {
      *(_DWORD *)(a1 + 44) = 20;
      return 1;
    }
    if ( a3 )
      *(_WORD *)(v6 + 12) = (unsigned __int8)v7 | 0x10;
  }
  if ( !*(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a1 + 96) = v6;
  *(_DWORD *)(a1 + 100) = a2;
  *(_BYTE *)(a1 + 86) = 1;
  *(_BYTE *)(a1 + 87) = 0;
  return 0;
}
