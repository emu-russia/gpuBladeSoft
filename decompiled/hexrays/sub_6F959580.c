int __cdecl sub_6F959580(_WORD *a1, unsigned int a2, int a3, __int16 a4, char a5)
{
  unsigned int v5; // ecx@1
  _WORD *v6; // ebx@2
  int v8; // eax@8
  int v9; // eax@11

  v5 = a2;
  if ( a5 )
  {
    v6 = a1;
    while ( 1 )
    {
      --v6;
      *v6 = *(_WORD *)(a3 + 2 * (v5 % 0xA) + 8);
      if ( v5 <= 9 )
        break;
      v5 /= 0xAu;
    }
  }
  else if ( (a4 & 0x4A) == 64 )
  {
    v6 = a1;
    do
    {
      --v6;
      v9 = v5 & 7;
      v5 >>= 3;
      *v6 = *(_WORD *)(a3 + 2 * v9 + 8);
    }
    while ( v5 );
  }
  else
  {
    v6 = a1;
    do
    {
      --v6;
      v8 = ((a4 & 0x4000u) < 1 ? 4 : 20) + (v5 & 0xF);
      v5 >>= 4;
      *v6 = *(_WORD *)(a3 + 2 * v8);
    }
    while ( v5 );
  }
  return a1 - v6;
}
