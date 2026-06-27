int __cdecl sub_6F85910A(int a1, int a2, unsigned int a3)
{
  int result; // eax@6
  char v4; // [sp+15h] [bp-13h]@10
  char v5; // [sp+16h] [bp-12h]@10
  char v6; // [sp+17h] [bp-11h]@10
  int v7; // [sp+18h] [bp-10h]@9
  unsigned int v8; // [sp+1Ch] [bp-Ch]@9

  if ( (*(_DWORD *)(a1 + 616) & 1 || a3) && a3 <= 0x100 )
  {
    if ( *(_BYTE *)(a1 + 343) & 2 )
    {
      *(_WORD *)(a1 + 328) = a3;
      sub_6F858091(a1, 0x504C5445u, 3 * a3);
      v8 = 0;
      v7 = a2;
      while ( v8 < a3 )
      {
        v4 = *(_BYTE *)v7;
        v5 = *(_BYTE *)(v7 + 1);
        v6 = *(_BYTE *)(v7 + 2);
        sub_6F85818E(a1, (int)&v4, 3);
        ++v8;
        v7 += 3;
      }
      sub_6F8581DC(a1);
      result = a1;
      *(_DWORD *)(a1 + 116) |= 2u;
    }
    else
    {
      result = sub_6F839262(a1, "Ignoring request to write a PLTE chunk in grayscale PNG");
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 343) == 3 )
      sub_6F839044(a1, (int)"Invalid number of colors in palette");
    result = sub_6F839262(a1, "Invalid number of colors in palette");
  }
  return result;
}
