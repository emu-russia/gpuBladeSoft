int __cdecl sub_6F959630(_WORD *a1, unsigned int a2, unsigned int a3, int a4, __int16 a5, char a6)
{
  unsigned __int64 v6; // rdi@1
  _WORD *v7; // ebx@2
  int v8; // eax@4
  unsigned int v9; // edx@4
  char v11; // al@8
  char v12; // al@11

  v6 = __PAIR__(a2, a3);
  if ( a6 )
  {
    v7 = a1;
    while ( 1 )
    {
      --v7;
      *v7 = *(_WORD *)(a4 + 2 * sub_6F8A1630(a4, __PAIR__(v6, HIDWORD(v6)), 10i64) + 8);
      v8 = sub_6F8A1530(v6, __PAIR__(v6, HIDWORD(v6)), 0xAu, 0);
      if ( __PAIR__(v6, HIDWORD(v6)) <= 9 )
        break;
      v6 = __PAIR__(v8, v9);
    }
  }
  else if ( (a5 & 0x4A) == 64 )
  {
    v7 = a1;
    do
    {
      v12 = BYTE4(v6);
      HIDWORD(v6) = __PAIR__(v6, HIDWORD(v6)) >> 3;
      --v7;
      LODWORD(v6) = (unsigned int)v6 >> 3;
      *v7 = *(_WORD *)(a4 + 2 * (v12 & 7) + 8);
    }
    while ( v6 );
  }
  else
  {
    v7 = a1;
    do
    {
      v11 = BYTE4(v6);
      HIDWORD(v6) = __PAIR__(v6, HIDWORD(v6)) >> 4;
      --v7;
      LODWORD(v6) = (unsigned int)v6 >> 4;
      *v7 = *(_WORD *)(a4 + 2 * (((a5 & 0x4000u) < 1 ? 4 : 20) + (v11 & 0xF)));
    }
    while ( v6 );
  }
  return a1 - v7;
}
