signed int __cdecl sub_6F7A09C0(int a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // eax@1
  unsigned int v5; // edx@1
  int v6; // edi@5
  signed int result; // eax@8

  v4 = *(_DWORD *)(a1 + 156);
  v5 = v4 + 16 * *(_WORD *)(a1 + 152);
  if ( v4 < v5 )
  {
    while ( 1 )
    {
      if ( a2 == *(_DWORD *)v4 )
      {
        v6 = *(_DWORD *)(v4 + 12);
        if ( v6 )
          break;
      }
      v4 += 16;
      if ( v5 <= v4 )
        goto LABEL_9;
    }
    if ( a4 )
      *a4 = v6;
    result = sub_6F771FF0(a3, *(_DWORD *)(v4 + 8));
  }
  else
  {
LABEL_9:
    result = 142;
  }
  return result;
}
