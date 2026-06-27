void __cdecl sub_6F83C8B5(int a1)
{
  int v1; // eax@3
  int v2; // eax@5

  sub_6F8388BE(a1);
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 636));
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 712));
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 696));
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 520));
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 524));
  if ( *(_DWORD *)(a1 + 584) & 0x1000 )
    sub_6F833BA2(a1, *(_DWORD *)(a1 + 324));
  v1 = *(_DWORD *)(a1 + 584);
  BYTE1(v1) &= 0xEFu;
  *(_DWORD *)(a1 + 584) = v1;
  if ( *(_DWORD *)(a1 + 584) & 0x2000 )
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 436));
  v2 = *(_DWORD *)(a1 + 584);
  BYTE1(v2) &= 0xDFu;
  *(_DWORD *)(a1 + 584) = v2;
  sub_6F894E30(a1 + 132);
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 476));
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 680));
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 604));
}
