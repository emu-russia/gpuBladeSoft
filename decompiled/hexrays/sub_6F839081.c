unsigned int __cdecl sub_6F839081(int a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  unsigned int v4; // eax@5
  _BYTE *v5; // ecx@5
  _BYTE *v6; // eax@5

  if ( a1 && a3 < a2 )
  {
    if ( a4 )
    {
      while ( *a4 && a2 - 1 > a3 )
      {
        v4 = a3++;
        v5 = (_BYTE *)(v4 + a1);
        v6 = a4++;
        *v5 = *v6;
      }
    }
    *(_BYTE *)(a1 + a3) = 0;
  }
  return a3;
}
