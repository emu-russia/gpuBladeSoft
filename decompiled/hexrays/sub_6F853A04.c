unsigned int __cdecl sub_6F853A04(int a1, int a2, unsigned __int8 a3)
{
  unsigned int result; // eax@1
  int v4; // [sp+18h] [bp-10h]@4
  unsigned int i; // [sp+1Ch] [bp-Ch]@2

  result = *(_DWORD *)(a2 + 240);
  if ( result )
  {
    for ( i = *(_DWORD *)(a2 + 236); ; i += 20 )
    {
      result = *(_DWORD *)(a2 + 236) + 20 * *(_DWORD *)(a2 + 240);
      if ( result <= i )
        break;
      if ( a3 & *(_BYTE *)(i + 16) )
      {
        v4 = sub_6F834C52(a1, (const void *)i);
        if ( v4 != 1 && (*(_BYTE *)(i + 3) & 0x20 || v4 == 3 || !v4 && *(_DWORD *)(a1 + 596) == 3) )
        {
          if ( !*(_DWORD *)(i + 12) )
            sub_6F839262(a1, "Writing zero-length unknown chunk");
          sub_6F858290(a1, (unsigned int *)i, *(_DWORD *)(i + 8), *(_DWORD *)(i + 12));
        }
      }
    }
  }
  return result;
}
