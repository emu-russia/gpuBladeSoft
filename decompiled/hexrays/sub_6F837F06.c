_BYTE *__cdecl sub_6F837F06(int a1, _BYTE *a2, unsigned int a3, signed int a4)
{
  _BYTE *v4; // eax@3
  int v5; // eax@7
  _BYTE *v6; // eax@14
  _BYTE *v7; // eax@17
  _BYTE *v8; // eax@18
  _BYTE *v9; // eax@21
  _BYTE *v10; // eax@24
  _BYTE *result; // eax@25
  char v12[10]; // [sp+12h] [bp-26h]@7
  unsigned int v13; // [sp+1Ch] [bp-1Ch]@7
  unsigned int i; // [sp+20h] [bp-18h]@17
  unsigned int v15; // [sp+24h] [bp-14h]@6
  unsigned int v16; // [sp+28h] [bp-10h]@6
  unsigned int v17; // [sp+2Ch] [bp-Ch]@3

  if ( a3 <= 0xC || (a4 >= 0 ? (v17 = a4) : (v4 = a2, ++a2, *v4 = 45, v17 = -a4), v17 > 0x80000000) )
    sub_6F839044(a1, (int)"ASCII conversion buffer too small");
  v16 = 0;
  v15 = 16;
  while ( v17 )
  {
    v13 = v17 / 0xA;
    v17 %= 0xAu;
    v5 = v16++;
    v12[v5] = v17 + 48;
    if ( v15 == 16 && v17 )
      v15 = v16;
    v17 = v13;
  }
  if ( v16 )
  {
    while ( v16 > 5 )
    {
      v6 = a2++;
      *v6 = v12[--v16];
    }
    if ( v15 <= 5 )
    {
      v7 = a2++;
      *v7 = 46;
      for ( i = 5; v16 < i; --i )
      {
        v8 = a2++;
        *v8 = 48;
      }
      while ( v16 >= v15 )
      {
        v9 = a2++;
        *v9 = v12[--v16];
      }
    }
  }
  else
  {
    v10 = a2++;
    *v10 = 48;
  }
  result = a2;
  *a2 = 0;
  return result;
}
