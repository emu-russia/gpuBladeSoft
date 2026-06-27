int __cdecl sub_6F85CBD4(int a1, char a2)
{
  int result; // eax@1
  int v3; // ecx@2
  int v4; // ecx@6
  int v5; // ecx@8

  result = 0;
  do
  {
    v3 = *(_DWORD *)(a1 + 4 * result + 88);
    if ( v3 )
      *(_BYTE *)(v3 + 128) = a2;
    ++result;
  }
  while ( result != 4 );
  LOBYTE(result) = 0;
  do
  {
    v4 = *(_DWORD *)(a1 + 4 * result + 120);
    if ( v4 )
      *(_BYTE *)(v4 + 273) = a2;
    v5 = *(_DWORD *)(a1 + 4 * result + 136);
    if ( v5 )
      *(_BYTE *)(v5 + 273) = a2;
    ++result;
  }
  while ( result != 4 );
  return result;
}
