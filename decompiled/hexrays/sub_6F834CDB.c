int __cdecl sub_6F834CDB(int a1, unsigned int a2)
{
  char v3; // [sp+1Bh] [bp-Dh]@1
  char v4; // [sp+1Ch] [bp-Ch]@1
  char v5; // [sp+1Dh] [bp-Bh]@1
  char v6; // [sp+1Eh] [bp-Ah]@1
  char v7; // [sp+1Fh] [bp-9h]@1

  v3 = BYTE3(a2);
  v4 = a2 >> 16;
  v5 = BYTE1(a2);
  v6 = a2;
  v7 = 0;
  return sub_6F834C52(a1, &v3);
}
