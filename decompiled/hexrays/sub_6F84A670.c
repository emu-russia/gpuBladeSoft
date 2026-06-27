int __cdecl sub_6F84A670(int a1)
{
  char v2; // [sp+14h] [bp-14h]@1
  unsigned int v3; // [sp+18h] [bp-10h]@1
  int v4; // [sp+1Ch] [bp-Ch]@1

  *(_DWORD *)(a1 + 708) = 33;
  sub_6F8414F4(a1, (int)&v2, 8);
  v4 = sub_6F84A3D0(a1, (int)&v2);
  *(_DWORD *)(a1 + 284) = _byteswap_ulong(v3);
  sub_6F833BBC(a1);
  sub_6F833BE9(a1, (int)&v3, 4);
  sub_6F84E8EB(a1, *(_DWORD *)(a1 + 284));
  *(_DWORD *)(a1 + 708) = 65;
  return v4;
}
