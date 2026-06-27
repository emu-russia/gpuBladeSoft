int __cdecl sub_6F814C30(int a1, int a2, int a3, int a4)
{
  int v4; // edi@1
  int v5; // esi@1
  int v6; // ebx@1
  char v7; // cl@2
  int v8; // eax@2
  bool v9; // dl@2
  int result; // eax@2
  signed int v11; // [sp+0h] [bp-14h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v11 = 8;
  do
  {
    *(_BYTE *)v4 = (~(*(_WORD *)v6 + *(_BYTE *)v5) >> 31) & (-(*(_WORD *)v6 + *(_BYTE *)v5 > 255) | (*(_BYTE *)v5 + *(_WORD *)v6));
    *(_BYTE *)(v4 + 1) = (~(*(_WORD *)(v6 + 2) + *(_BYTE *)(v5 + 1)) >> 31) & (-(*(_WORD *)(v6 + 2) + *(_BYTE *)(v5 + 1) > 255) | (*(_BYTE *)(v5 + 1) + *(_WORD *)(v6 + 2)));
    *(_BYTE *)(v4 + 2) = (~(*(_WORD *)(v6 + 4) + *(_BYTE *)(v5 + 2)) >> 31) & (-(*(_WORD *)(v6 + 4) + *(_BYTE *)(v5 + 2) > 255) | (*(_BYTE *)(v5 + 2) + *(_WORD *)(v6 + 4)));
    *(_BYTE *)(v4 + 3) = (~(*(_WORD *)(v6 + 6) + *(_BYTE *)(v5 + 3)) >> 31) & (-(*(_WORD *)(v6 + 6) + *(_BYTE *)(v5 + 3) > 255) | (*(_BYTE *)(v5 + 3) + *(_WORD *)(v6 + 6)));
    *(_BYTE *)(v4 + 4) = (~(*(_WORD *)(v6 + 8) + *(_BYTE *)(v5 + 4)) >> 31) & (-(*(_WORD *)(v6 + 8) + *(_BYTE *)(v5 + 4) > 255) | (*(_BYTE *)(v5 + 4) + *(_WORD *)(v6 + 8)));
    *(_BYTE *)(v4 + 5) = (~(*(_WORD *)(v6 + 10) + *(_BYTE *)(v5 + 5)) >> 31) & (-(*(_WORD *)(v6 + 10)
                                                                                + *(_BYTE *)(v5 + 5) > 255) | (*(_BYTE *)(v5 + 5) + *(_WORD *)(v6 + 10)));
    *(_BYTE *)(v4 + 6) = (~(*(_WORD *)(v6 + 12) + *(_BYTE *)(v5 + 6)) >> 31) & (-(*(_WORD *)(v6 + 12)
                                                                                + *(_BYTE *)(v5 + 6) > 255) | (*(_BYTE *)(v5 + 6) + *(_WORD *)(v6 + 12)));
    v7 = *(_WORD *)(v6 + 14);
    v8 = *(_WORD *)(v6 + 14) + *(_BYTE *)(v5 + 7);
    v9 = v8 > 255;
    result = ~v8 >> 31;
    v6 += 16;
    *(_BYTE *)(v4 + 7) = result & (-v9 | (*(_BYTE *)(v5 + 7) + v7));
    v4 += a3;
    v5 += a3;
    --v11;
  }
  while ( v11 );
  return result;
}
