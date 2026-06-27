int __cdecl sub_6F85A8A4(int a1, unsigned int a2, unsigned int a3, signed int a4)
{
  char v5; // [sp+17h] [bp-11h]@3
  char v6; // [sp+1Bh] [bp-Dh]@3
  char v7; // [sp+1Fh] [bp-9h]@3

  if ( a4 > 1 )
    sub_6F839262(a1, "Unrecognized unit type for pHYs chunk");
  sub_6F857FAC((int)&v5, a2);
  sub_6F857FAC((int)&v6, a3);
  v7 = a4;
  return sub_6F858229(a1, 0x70485973u, (int)&v5, 9);
}
