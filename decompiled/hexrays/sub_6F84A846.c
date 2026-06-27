int __cdecl sub_6F84A846(int a1)
{
  int result; // eax@7
  unsigned __int8 v2; // [sp+14h] [bp-14h]@6
  unsigned __int8 v3; // [sp+15h] [bp-13h]@7
  unsigned __int8 v4; // [sp+16h] [bp-12h]@7
  unsigned __int8 v5; // [sp+17h] [bp-11h]@7
  int v6; // [sp+18h] [bp-10h]@7
  int v7; // [sp+1Ch] [bp-Ch]@1

  v7 = 1;
  if ( *(_DWORD *)(a1 + 284) & 0x20000000 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x300) == 768 )
      v7 = 0;
  }
  else if ( *(_DWORD *)(a1 + 120) & 0x800 )
  {
    v7 = 0;
  }
  *(_DWORD *)(a1 + 708) = 129;
  sub_6F8414F4(a1, (int)&v2, 4);
  if ( v7 )
  {
    v6 = (v4 << 8) + (v3 << 16) + (v2 << 24) + v5;
    result = *(_DWORD *)(a1 + 320) != v6;
  }
  else
  {
    result = 0;
  }
  return result;
}
