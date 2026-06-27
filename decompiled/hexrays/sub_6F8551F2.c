void __cdecl sub_6F8551F2(int a1)
{
  int v1; // ST1C_4@2
  int v2; // ST18_4@4
  int v3; // ST14_4@6

  *(_BYTE *)(a1 + 529) = 0;
  *(_BYTE *)(a1 + 528) = 1;
  if ( *(_DWORD *)(a1 + 532) )
  {
    v1 = *(_DWORD *)(a1 + 532);
    *(_DWORD *)(a1 + 532) = 0;
    sub_6F83B5A7(a1, v1);
  }
  if ( *(_DWORD *)(a1 + 536) )
  {
    v2 = *(_DWORD *)(a1 + 536);
    *(_DWORD *)(a1 + 536) = 0;
    sub_6F83B5A7(a1, v2);
  }
  if ( *(_DWORD *)(a1 + 540) )
  {
    v3 = *(_DWORD *)(a1 + 540);
    *(_DWORD *)(a1 + 540) = 0;
    sub_6F83B5A7(a1, v3);
  }
}
