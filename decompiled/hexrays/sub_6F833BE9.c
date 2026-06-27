int __cdecl sub_6F833BE9(int a1, int a2, signed int a3)
{
  int result; // eax@2
  signed int v4; // [sp+14h] [bp-14h]@9
  int v5; // [sp+18h] [bp-10h]@8
  signed int v6; // [sp+1Ch] [bp-Ch]@1

  v6 = 1;
  if ( *(_DWORD *)(a1 + 284) & 0x20000000 )
  {
    result = *(_DWORD *)(a1 + 120) & 0x300;
    if ( result == 768 )
      v6 = 0;
  }
  else
  {
    result = *(_DWORD *)(a1 + 120) & 0x800;
    if ( result )
      v6 = 0;
  }
  if ( v6 && a3 )
  {
    v5 = *(_DWORD *)(a1 + 320);
    do
    {
      v4 = a3;
      if ( !a3 )
        v4 = -1;
      v5 = sub_6F88BF50(v5, a2, v4);
      a2 += v4;
      a3 -= v4;
    }
    while ( a3 );
    result = a1;
    *(_DWORD *)(a1 + 320) = v5;
  }
  return result;
}
