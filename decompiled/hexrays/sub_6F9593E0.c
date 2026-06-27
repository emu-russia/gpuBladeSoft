_BYTE *__cdecl sub_6F9593E0(_BYTE *a1, unsigned int a2, int a3, __int16 a4, char a5)
{
  unsigned int v5; // ecx@1
  _BYTE *v6; // ebx@2
  int v8; // eax@8
  int v9; // eax@11

  v5 = a2;
  if ( a5 )
  {
    v6 = a1;
    while ( 1 )
    {
      *--v6 = *(_BYTE *)(a3 + v5 % 0xA + 4);
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
      *v6 = *(_BYTE *)(a3 + v9 + 4);
    }
    while ( v5 );
  }
  else
  {
    v6 = a1;
    do
    {
      --v6;
      v8 = v5 & 0xF;
      v5 >>= 4;
      *v6 = *(_BYTE *)(a3 + ((a4 & 0x4000u) < 1 ? 0xFFFFFFF0 : 0) + 20 + v8);
    }
    while ( v5 );
  }
  return (_BYTE *)(a1 - v6);
}
