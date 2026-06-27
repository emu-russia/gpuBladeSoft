int __cdecl sub_6F8388BE(int a1)
{
  int result; // eax@11
  signed int v2; // [sp+18h] [bp-20h]@12
  signed int v3; // [sp+1Ch] [bp-1Ch]@7
  signed int v4; // [sp+20h] [bp-18h]@2
  signed int k; // [sp+24h] [bp-14h]@12
  signed int j; // [sp+28h] [bp-10h]@7
  signed int i; // [sp+2Ch] [bp-Ch]@2

  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 400));
  *(_DWORD *)(a1 + 400) = 0;
  if ( *(_DWORD *)(a1 + 404) )
  {
    v4 = 1 << (8 - *(_BYTE *)(a1 + 392));
    for ( i = 0; i < v4; ++i )
      sub_6F83B5A7(a1, *(_DWORD *)(4 * i + *(_DWORD *)(a1 + 404)));
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 404));
    *(_DWORD *)(a1 + 404) = 0;
  }
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 408));
  *(_DWORD *)(a1 + 408) = 0;
  sub_6F83B5A7(a1, *(_DWORD *)(a1 + 412));
  *(_DWORD *)(a1 + 412) = 0;
  if ( *(_DWORD *)(a1 + 416) )
  {
    v3 = 1 << (8 - *(_BYTE *)(a1 + 392));
    for ( j = 0; j < v3; ++j )
      sub_6F83B5A7(a1, *(_DWORD *)(4 * j + *(_DWORD *)(a1 + 416)));
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 416));
    *(_DWORD *)(a1 + 416) = 0;
  }
  result = *(_DWORD *)(a1 + 420);
  if ( result )
  {
    v2 = 1 << (8 - *(_BYTE *)(a1 + 392));
    for ( k = 0; k < v2; ++k )
      sub_6F83B5A7(a1, *(_DWORD *)(4 * k + *(_DWORD *)(a1 + 420)));
    sub_6F83B5A7(a1, *(_DWORD *)(a1 + 420));
    result = a1;
    *(_DWORD *)(a1 + 420) = 0;
  }
  return result;
}
