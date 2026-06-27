int __cdecl sub_6F7C4CC0(int a1, int a2)
{
  int result; // eax@1
  unsigned int v3; // edx@3
  int v4; // ecx@3
  _BYTE *v5; // esi@3
  unsigned int i; // edi@3

  result = sub_6F7C0F60(a1, a2);
  if ( !result )
  {
    v3 = *(_DWORD *)(a1 + 28);
    v4 = *(_DWORD *)(a2 + 4);
    v5 = *(_BYTE **)(a2 + 8);
    for ( i = v3 + 40 * *(_DWORD *)(a1 + 24); i > v3; ++v5 )
    {
      *(_DWORD *)v4 = *(_DWORD *)(v3 + 16);
      *(_DWORD *)(v4 + 4) = *(_DWORD *)(v3 + 20);
      if ( *(_WORD *)v3 & 1 )
        *v5 = 0;
      else
        *v5 = 2 - ((*(_WORD *)v3 & 2u) < 1);
      v3 += 40;
      v4 += 8;
    }
  }
  return result;
}
