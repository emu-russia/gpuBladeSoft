int __cdecl sub_6F85A914(int a1, int a2)
{
  int result; // eax@7
  char v3; // [sp+19h] [bp-Fh]@8
  char v4; // [sp+1Bh] [bp-Dh]@8
  char v5; // [sp+1Ch] [bp-Ch]@8
  char v6; // [sp+1Dh] [bp-Bh]@8
  char v7; // [sp+1Eh] [bp-Ah]@8
  char v8; // [sp+1Fh] [bp-9h]@8

  if ( *(_BYTE *)(a2 + 2) <= 0xCu
    && *(_BYTE *)(a2 + 2)
    && *(_BYTE *)(a2 + 3) <= 0x1Fu
    && *(_BYTE *)(a2 + 3)
    && *(_BYTE *)(a2 + 4) <= 0x17u
    && *(_BYTE *)(a2 + 6) <= 0x3Cu )
  {
    sub_6F857FE5((int)&v3, *(_WORD *)a2);
    v4 = *(_BYTE *)(a2 + 2);
    v5 = *(_BYTE *)(a2 + 3);
    v6 = *(_BYTE *)(a2 + 4);
    v7 = *(_BYTE *)(a2 + 5);
    v8 = *(_BYTE *)(a2 + 6);
    result = sub_6F858229(a1, 0x74494D45u, (int)&v3, 7);
  }
  else
  {
    result = sub_6F839262(a1, "Invalid time specified for tIME chunk");
  }
  return result;
}
