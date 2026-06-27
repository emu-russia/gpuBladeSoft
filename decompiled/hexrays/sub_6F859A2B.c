int __cdecl sub_6F859A2B(int a1, int a2, int a3)
{
  char v3; // al@3
  int v5; // eax@21
  char v6; // [sp+17h] [bp-11h]@12
  char v7; // [sp+18h] [bp-10h]@12
  char v8; // [sp+19h] [bp-Fh]@12
  unsigned __int8 v9; // [sp+1Bh] [bp-Dh]@5
  int v10; // [sp+1Ch] [bp-Ch]@12

  if ( a3 & 2 )
  {
    if ( a3 == 3 )
      v3 = 8;
    else
      v3 = *(_BYTE *)(a1 + 345);
    v9 = v3;
    if ( !*(_BYTE *)a2
      || *(_BYTE *)a2 > v9
      || !*(_BYTE *)(a2 + 1)
      || *(_BYTE *)(a2 + 1) > v9
      || !*(_BYTE *)(a2 + 2)
      || *(_BYTE *)(a2 + 2) > v9 )
    {
      return sub_6F839262(a1, "Invalid sBIT depth specified");
    }
    v6 = *(_BYTE *)a2;
    v7 = *(_BYTE *)(a2 + 1);
    v8 = *(_BYTE *)(a2 + 2);
    v10 = 3;
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 3) || *(_BYTE *)(a2 + 3) > *(_BYTE *)(a1 + 345) )
      return sub_6F839262(a1, "Invalid sBIT depth specified");
    v6 = *(_BYTE *)(a2 + 3);
    v10 = 1;
  }
  if ( a3 & 4 )
  {
    if ( !*(_BYTE *)(a2 + 4) || *(_BYTE *)(a2 + 4) > *(_BYTE *)(a1 + 345) )
      return sub_6F839262(a1, "Invalid sBIT depth specified");
    v5 = v10++;
    *(&v6 + v5) = *(_BYTE *)(a2 + 4);
  }
  return sub_6F858229(a1, 0x73424954u, (int)&v6, v10);
}
