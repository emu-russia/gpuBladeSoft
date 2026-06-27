signed int __cdecl sub_6F835DE1(int a1, int a2, int a3, int a4, signed int a5)
{
  signed int result; // eax@2

  if ( *(_WORD *)(a2 + 74) < 0 )
    return 0;
  if ( a5 > 1 || !(*(_WORD *)(a2 + 74) & 2) )
    goto LABEL_15;
  if ( !sub_6F835B73(a3, a2 + 4, 100) )
  {
    *(_WORD *)(a2 + 74) |= 0x8000u;
    sub_6F839519(a1, "inconsistent chromaticities");
    return 0;
  }
  if ( a5 )
  {
LABEL_15:
    *(_DWORD *)(a2 + 4) = *(_DWORD *)a3;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a3 + 4);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(a3 + 16);
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a3 + 20);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(a3 + 24);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a3 + 28);
    *(_DWORD *)(a2 + 36) = *(_DWORD *)a4;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a4 + 4);
    *(_DWORD *)(a2 + 44) = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(a4 + 12);
    *(_DWORD *)(a2 + 52) = *(_DWORD *)(a4 + 16);
    *(_DWORD *)(a2 + 56) = *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a2 + 60) = *(_DWORD *)(a4 + 24);
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(a2 + 68) = *(_DWORD *)(a4 + 32);
    *(_WORD *)(a2 + 74) |= 2u;
    if ( sub_6F835B73(a3, (int)&unk_6FB98780, 1000) )
      *(_WORD *)(a2 + 74) |= 0x40u;
    else
      *(_WORD *)(a2 + 74) &= 0xFFBFu;
    result = 2;
  }
  else
  {
    result = 1;
  }
  return result;
}
