int __cdecl sub_6F858002(int a1)
{
  int result; // eax@1
  int v2; // eax@2
  int v3; // edx@2
  char v4; // [sp+18h] [bp-10h]@1
  char v5; // [sp+19h] [bp-Fh]@1
  char v6; // [sp+1Ah] [bp-Eh]@1
  char v7; // [sp+1Bh] [bp-Dh]@1
  char v8; // [sp+1Ch] [bp-Ch]@1
  char v9; // [sp+1Dh] [bp-Bh]@1
  char v10; // [sp+1Eh] [bp-Ah]@1
  char v11; // [sp+1Fh] [bp-9h]@1

  v4 = -119;
  v5 = 80;
  v6 = 78;
  v7 = 71;
  v8 = 13;
  v9 = 10;
  v10 = 26;
  v11 = 10;
  *(_DWORD *)(a1 + 708) = 18;
  sub_6F8538A8(a1, (int)(&v4 + *(_BYTE *)(a1 + 349)), 8 - *(_BYTE *)(a1 + 349));
  result = *(_BYTE *)(a1 + 349);
  if ( (unsigned __int8)result <= 2u )
  {
    v2 = *(_DWORD *)(a1 + 116);
    BYTE1(v2) |= 0x10u;
    v3 = v2;
    result = a1;
    *(_DWORD *)(a1 + 116) = v3;
  }
  return result;
}
