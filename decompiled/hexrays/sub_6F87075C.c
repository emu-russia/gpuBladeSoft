int __cdecl sub_6F87075C(int a1)
{
  int result; // eax@1
  int v2; // edx@1
  int v3; // edx@6
  int v4; // ecx@6

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 188);
  *(_DWORD *)(a1 + 424) = result;
  *(_DWORD *)result = sub_6F86F800;
  v2 = 0;
  do
  {
    *(_DWORD *)(result + 4 * v2 + 56) = 0;
    *(_DWORD *)(result + 4 * v2++ + 120) = 0;
  }
  while ( v2 != 16 );
  *(_BYTE *)(result + 184) = 113;
  if ( *(_BYTE *)(a1 + 201) )
  {
    result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, *(_DWORD *)(a1 + 36) << 8);
    *(_DWORD *)(a1 + 140) = result;
    if ( *(_DWORD *)(a1 + 36) > 0 )
    {
      v3 = result;
      v4 = 0;
      do
      {
        result = 0;
        do
          *(_DWORD *)(v3 + 4 * result++) = -1;
        while ( result != 64 );
        v3 += 256;
        ++v4;
      }
      while ( *(_DWORD *)(a1 + 36) > v4 );
    }
  }
  return result;
}
