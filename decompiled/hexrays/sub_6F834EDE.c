signed int __cdecl sub_6F834EDE(int a1, int a2, int a3)
{
  signed int result; // eax@7
  const char *v4; // [sp+1Ch] [bp-Ch]@3

  if ( a3 <= 15 || a3 > 625000000 )
  {
    v4 = "gamma value out of range";
LABEL_11:
    *(_WORD *)(a2 + 74) |= 0x8000u;
    return sub_6F83987F(a1, v4, 1);
  }
  if ( *(_DWORD *)(a1 + 116) & 0x8000 && *(_WORD *)(a2 + 74) & 8 )
  {
    v4 = "duplicate";
    goto LABEL_11;
  }
  result = *(_WORD *)(a2 + 74);
  if ( (signed __int16)result >= 0 )
  {
    result = sub_6F834E21(a1, a2, a3, 1);
    if ( result )
    {
      *(_DWORD *)a2 = a3;
      result = a2;
      *(_WORD *)(a2 + 74) |= 9u;
    }
  }
  return result;
}
