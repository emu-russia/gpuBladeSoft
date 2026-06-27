signed int __cdecl sub_6F84AB69(int a1, int a2, int a3, int a4, int *a5, int a6, int *a7)
{
  int v7; // eax@13
  signed int result; // eax@23
  char v9; // [sp+10h] [bp-418h]@7
  int v10; // [sp+410h] [bp-18h]@16
  unsigned int v11; // [sp+414h] [bp-14h]@4
  int v12; // [sp+418h] [bp-10h]@2
  unsigned int v13; // [sp+41Ch] [bp-Ch]@2

  if ( *(_DWORD *)(a1 + 128) == a2 )
  {
    v13 = *a7;
    v12 = *a5;
    *(_DWORD *)(a1 + 132) = a4;
    *(_DWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 148) = 0;
    if ( a6 )
      *(_DWORD *)(a1 + 144) = a6;
    do
    {
      v12 += *(_DWORD *)(a1 + 136);
      v11 = -1;
      if ( (unsigned int)v12 < 0xFFFFFFFF )
        v11 = v12;
      v12 -= v11;
      *(_DWORD *)(a1 + 136) = v11;
      v13 += *(_DWORD *)(a1 + 148);
      v11 = -1;
      if ( !a6 )
      {
        *(_DWORD *)(a1 + 144) = &v9;
        if ( v11 > 0x400 )
          v11 = 1024;
      }
      if ( v13 < v11 )
        v11 = v13;
      *(_DWORD *)(a1 + 148) = v11;
      v13 -= v11;
      if ( v13 )
      {
        v7 = 0;
      }
      else if ( a3 )
      {
        v7 = 4;
      }
      else
      {
        v7 = 2;
      }
      v10 = sub_6F893010(a1 + 132, v7);
    }
    while ( !v10 );
    if ( !a6 )
      *(_DWORD *)(a1 + 144) = 0;
    v12 += *(_DWORD *)(a1 + 136);
    v13 += *(_DWORD *)(a1 + 148);
    if ( v13 )
      *a7 -= v13;
    if ( v12 )
      *a5 -= v12;
    sub_6F834D5F(a1, v10);
    result = v10;
  }
  else
  {
    *(_DWORD *)(a1 + 156) = "zstream unclaimed";
    result = -2;
  }
  return result;
}
