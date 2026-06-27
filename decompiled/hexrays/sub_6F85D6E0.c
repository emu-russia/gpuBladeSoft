int __cdecl sub_6F85D6E0(int a1)
{
  int v1; // esi@1
  int result; // eax@1
  int v3; // eax@4

  v1 = *(_DWORD *)(a1 + 388);
  result = sub_6F85D394(a1, -40);
  *(_DWORD *)(v1 + 28) = 0;
  if ( *(_BYTE *)(a1 + 232) )
  {
    sub_6F85D394(a1, -32);
    sub_6F85D3B0(a1, 16);
    sub_6F85D350(a1, 74);
    sub_6F85D350(a1, 70);
    sub_6F85D350(a1, 73);
    sub_6F85D350(a1, 70);
    sub_6F85D350(a1, 0);
    sub_6F85D350(a1, *(_BYTE *)(a1 + 233));
    sub_6F85D350(a1, *(_BYTE *)(a1 + 234));
    sub_6F85D350(a1, *(_BYTE *)(a1 + 235));
    sub_6F85D3B0(a1, *(_WORD *)(a1 + 236));
    sub_6F85D3B0(a1, *(_WORD *)(a1 + 238));
    sub_6F85D350(a1, 0);
    result = sub_6F85D350(a1, 0);
  }
  if ( *(_BYTE *)(a1 + 240) )
  {
    sub_6F85D394(a1, -18);
    sub_6F85D3B0(a1, 14);
    sub_6F85D350(a1, 65);
    sub_6F85D350(a1, 100);
    sub_6F85D350(a1, 111);
    sub_6F85D350(a1, 98);
    sub_6F85D350(a1, 101);
    sub_6F85D3B0(a1, 100);
    sub_6F85D3B0(a1, 0);
    sub_6F85D3B0(a1, 0);
    v3 = *(_DWORD *)(a1 + 80);
    if ( v3 == 3 )
    {
      result = sub_6F85D350(a1, 1);
    }
    else if ( v3 == 5 )
    {
      result = sub_6F85D350(a1, 2);
    }
    else
    {
      result = sub_6F85D350(a1, 0);
    }
  }
  return result;
}
