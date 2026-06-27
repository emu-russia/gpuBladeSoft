signed int __usercall sub_6F75AAA0@<eax>(int a1@<eax>)
{
  unsigned int v1; // edx@1
  int v2; // ebx@2
  int v3; // eax@2
  int v4; // ecx@2
  signed int v5; // esi@5
  int v6; // ecx@7
  int v7; // ecx@11
  signed int v9; // eax@16
  signed int v10; // eax@29
  signed int v11; // eax@31

  v1 = *(_DWORD *)(a1 + 36);
  if ( !v1 )
    return 1;
  v2 = a1;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = v3 & 0xF0;
  if ( v4 == 32 )
  {
    v11 = sub_6F7600B0(v3 & 0xF, *(_DWORD *)v2);
    v1 = *(_DWORD *)(v2 + 36);
    if ( !v11 )
      goto LABEL_5;
  }
  else
  {
    if ( v4 != 48 )
    {
      if ( v4 == 16 )
      {
        v9 = sub_6F75EE40(v3 & 0xF, *(_DWORD *)v2);
        v1 = *(_DWORD *)(v2 + 36);
        if ( v9 )
          goto LABEL_17;
      }
LABEL_5:
      v5 = 0;
      goto LABEL_6;
    }
    v10 = sub_6F762C00(v3 & 0xF, *(_DWORD *)v2);
    v1 = *(_DWORD *)(v2 + 36);
    if ( !v10 )
      goto LABEL_5;
  }
LABEL_17:
  v5 = 1;
LABEL_6:
  if ( v1 <= 1 )
    return v5 == v1;
  v6 = *(_DWORD *)(v2 + 20) & 0xF0;
  if ( v6 == 32 )
  {
    if ( !sub_6F7600B0(*(_DWORD *)(v2 + 20) & 0xF, *(_DWORD *)(v2 + 12)) )
      goto LABEL_20;
LABEL_19:
    ++v5;
    goto LABEL_20;
  }
  if ( v6 == 48 )
  {
    if ( !sub_6F762C00(*(_DWORD *)(v2 + 20) & 0xF, *(_DWORD *)(v2 + 12)) )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v6 != 16 )
  {
    if ( v1 > 2 )
      goto LABEL_11;
    return v5 == v1;
  }
  if ( sub_6F75EE40(*(_DWORD *)(v2 + 20) & 0xF, *(_DWORD *)(v2 + 12)) )
    goto LABEL_19;
LABEL_20:
  v1 = *(_DWORD *)(v2 + 36);
  if ( v1 <= 2 )
    return v5 == v1;
LABEL_11:
  v7 = *(_DWORD *)(v2 + 32) & 0xF0;
  if ( v7 == 32 )
  {
    if ( !sub_6F7600B0(*(_DWORD *)(v2 + 32) & 0xF, *(_DWORD *)(v2 + 24)) )
      return v5 == *(_DWORD *)(v2 + 36);
  }
  else if ( v7 == 48 )
  {
    if ( !sub_6F762C00(*(_DWORD *)(v2 + 32) & 0xF, *(_DWORD *)(v2 + 24)) )
      return v5 == *(_DWORD *)(v2 + 36);
  }
  else
  {
    if ( v7 != 16 )
      return v5 == v1;
    if ( !sub_6F75EE40(*(_DWORD *)(v2 + 32) & 0xF, *(_DWORD *)(v2 + 24)) )
      return v5 == *(_DWORD *)(v2 + 36);
  }
  ++v5;
  return v5 == *(_DWORD *)(v2 + 36);
}
