int __cdecl sub_6F8ADC60(_BYTE *a1, int *a2, int a3)
{
  signed int v3; // eax@2
  signed int v4; // edi@2
  int *v5; // eax@4
  _BYTE *v6; // ecx@4
  int *v7; // edx@4
  int v8; // edi@4
  int v9; // edx@4
  char v10; // al@5

  if ( a3 <= 19 )
  {
    v4 = 0;
  }
  else
  {
    v3 = 4;
    v4 = 0;
    do
    {
      v3 *= 2;
      ++v4;
    }
    while ( a3 > v3 + 15 );
  }
  v5 = sub_6F8B0700(v4);
  v6 = a1 + 1;
  v7 = v5;
  *v5 = v4;
  v8 = (int)(v5 + 1);
  LOBYTE(v5) = *a1;
  *((_BYTE *)v7 + 4) = *a1;
  v9 = v8;
  if ( (_BYTE)v5 )
  {
    do
    {
      v10 = *(++v6 - 1);
      *(_BYTE *)++v9 = v10;
    }
    while ( v10 );
  }
  if ( a2 )
    *a2 = v9;
  return v8;
}
