void __cdecl sub_6F83C33A(int a1, int *a2)
{
  unsigned int v2; // [sp+1Ch] [bp-1Ch]@8
  int *v3; // [sp+20h] [bp-18h]@9
  signed int i; // [sp+24h] [bp-14h]@8
  signed int v5; // [sp+28h] [bp-10h]@3
  unsigned int j; // [sp+2Ch] [bp-Ch]@9

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 120) & 0x40 )
    {
      if ( *(_BYTE *)(a1 + 340) && !(*(_DWORD *)(a1 + 124) & 2) )
      {
        sub_6F839262(a1, "Interlace handling should be turned on when using png_read_image");
        *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 260);
      }
      v5 = sub_6F852D60(a1);
    }
    else
    {
      v5 = sub_6F852D60(a1);
      sub_6F83BC44(a1);
    }
    v2 = *(_DWORD *)(a1 + 260);
    for ( i = 0; i < v5; ++i )
    {
      v3 = a2;
      for ( j = 0; j < v2; ++j )
      {
        sub_6F83BC7F(a1, *v3, 0);
        ++v3;
      }
    }
  }
}
