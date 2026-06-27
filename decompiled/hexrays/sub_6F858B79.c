unsigned int __cdecl sub_6F858B79(int a1, int a2)
{
  unsigned int result; // eax@4
  _DWORD *i; // [sp+10h] [bp-18h]@1
  unsigned int v4; // [sp+14h] [bp-14h]@1
  int v5; // [sp+18h] [bp-10h]@1
  unsigned int v6; // [sp+1Ch] [bp-Ch]@1

  v6 = *(_DWORD *)(a2 + 8);
  v5 = a2 + 12;
  v4 = 1024;
  for ( i = *(_DWORD **)(a1 + 188); ; i = (_DWORD *)*i )
  {
    if ( v4 > v6 )
      v4 = v6;
    sub_6F85818E(a1, v5, v4);
    result = v4;
    v6 -= v4;
    if ( !v6 || !i )
      break;
    v4 = *(_DWORD *)(a1 + 192);
    v5 = (int)(i + 1);
  }
  if ( v6 )
    sub_6F839044(a1, (int)"error writing ancillary chunked compressed data");
  return result;
}
