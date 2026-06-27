bool __usercall sub_6F865298@<al>(int a1@<eax>)
{
  bool v1; // dl@4
  int v3; // ecx@9
  int v4; // ebx@10
  int v5; // esi@11
  int v6; // edi@15
  int v7; // ecx@18

  if ( *(_BYTE *)(a1 + 72)
    || *(_BYTE *)(a1 + 266)
    || *(_DWORD *)(a1 + 40) != 3
    || *(_DWORD *)(a1 + 36) != 3
    || *(_DWORD *)(a1 + 44) != 2
    || *(_DWORD *)(a1 + 100) != 3
    || (v3 = *(_DWORD *)(a1 + 196), *(_DWORD *)(v3 + 8) != 2)
    || (v4 = v3 + 88, *(_DWORD *)(v3 + 96) != 1)
    || (v5 = v3 + 176, *(_DWORD *)(v3 + 184) != 1) )
  {
    v1 = 0;
  }
  else
  {
    v1 = 0;
    if ( *(_DWORD *)(v3 + 12) <= 2 && *(_DWORD *)(v3 + 100) == 1 && *(_DWORD *)(v3 + 188) == 1 )
    {
      v6 = *(_DWORD *)(v3 + 36);
      if ( v6 == *(_DWORD *)(a1 + 280) && v6 == *(_DWORD *)(v3 + 124) && v6 == *(_DWORD *)(v3 + 212) )
      {
        v7 = *(_DWORD *)(v3 + 40);
        if ( v7 == *(_DWORD *)(a1 + 284) && v7 == *(_DWORD *)(v4 + 40) )
          v1 = v7 == *(_DWORD *)(v5 + 40);
      }
    }
  }
  return v1;
}
