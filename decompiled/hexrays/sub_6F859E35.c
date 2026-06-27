int __cdecl sub_6F859E35(int a1, int a2, int a3)
{
  int result; // eax@5
  char v4; // [sp+1Ah] [bp-Eh]@6
  char v5; // [sp+1Ch] [bp-Ch]@8
  unsigned __int8 v6; // [sp+1Eh] [bp-Ah]@8

  if ( a3 == 3 )
  {
    if ( !*(_WORD *)(a1 + 328) && *(_DWORD *)(a1 + 616) & 1 || (unsigned __int16)*(_BYTE *)a2 < *(_WORD *)(a1 + 328) )
    {
      v4 = *(_BYTE *)a2;
      result = sub_6F858229(a1, 0x624B4744u, (int)&v4, 1);
    }
    else
    {
      result = sub_6F839262(a1, "Invalid background palette index");
    }
  }
  else if ( a3 & 2 )
  {
    sub_6F857FE5((int)&v4, *(_WORD *)(a2 + 2));
    sub_6F857FE5((int)&v5, *(_WORD *)(a2 + 4));
    sub_6F857FE5((int)&v6, *(_WORD *)(a2 + 6));
    if ( *(_BYTE *)(a1 + 344) == 8 && (unsigned __int8)(v5 | v4) | v6 )
      result = sub_6F839262(a1, "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
    else
      result = sub_6F858229(a1, 0x624B4744u, (int)&v4, 6);
  }
  else if ( *(_WORD *)(a2 + 8) < 1 << *(_BYTE *)(a1 + 344) )
  {
    sub_6F857FE5((int)&v4, *(_WORD *)(a2 + 8));
    result = sub_6F858229(a1, 0x624B4744u, (int)&v4, 2);
  }
  else
  {
    result = sub_6F839262(a1, "Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
  }
  return result;
}
