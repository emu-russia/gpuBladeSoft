int __cdecl sub_6F8582F3(int a1)
{
  int v1; // eax@6
  unsigned int v2; // edx@8
  int v3; // eax@9
  int v4; // edx@13
  int v5; // eax@16
  int v6; // ecx@18
  int v7; // eax@19
  int result; // eax@24
  unsigned int v9; // [sp+8h] [bp-20h]@11
  unsigned int v10; // [sp+Ch] [bp-1Ch]@4
  unsigned int v11; // [sp+14h] [bp-14h]@1
  signed int i; // [sp+18h] [bp-10h]@4
  int v13; // [sp+1Ch] [bp-Ch]@4

  v11 = *(_DWORD *)(a1 + 260);
  if ( *(_DWORD *)(a1 + 272) > 0x7FFFu || v11 > 0x7FFF )
  {
    result = -1;
  }
  else if ( *(_BYTE *)(a1 + 340) )
  {
    v10 = *(_BYTE *)(a1 + 346);
    v13 = 0;
    for ( i = 0; i <= 6; ++i )
    {
      if ( i <= 1 )
        v1 = 7;
      else
        v1 = (1 << ((7 - i) >> 1)) - 1;
      v2 = *(_DWORD *)(a1 + 256) + v1 - (((i & 1) << (3 - ((i + 1) >> 1))) & 7);
      if ( i <= 1 )
        LOBYTE(v3) = 3;
      else
        v3 = (7 - i) >> 1;
      v9 = v2 >> v3;
      if ( v2 >> v3 )
      {
        if ( v10 <= 7 )
          v4 = ((v10 * v9 + 7) >> 3) + 1;
        else
          v4 = v9 * (v10 >> 3) + 1;
        if ( i <= 2 )
          v5 = 7;
        else
          v5 = (1 << ((8 - i) >> 1)) - 1;
        v6 = v5 - ((((i & 1) == 0) << (3 - (i >> 1))) & 7);
        if ( i <= 2 )
          LOBYTE(v7) = 3;
        else
          v7 = (8 - i) >> 1;
        v13 += v4 * ((v6 + v11) >> v7);
      }
    }
    result = v13;
  }
  else
  {
    result = v11 * (*(_DWORD *)(a1 + 272) + 1);
  }
  return result;
}
