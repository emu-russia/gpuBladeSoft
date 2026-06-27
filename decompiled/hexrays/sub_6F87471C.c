int __cdecl sub_6F87471C(int a1)
{
  int result; // eax@1
  int v2; // esi@1
  int v3; // edx@4
  int v4; // ecx@4

  result = (**(int (__cdecl ***)(_DWORD, _DWORD, _DWORD))(a1 + 4))(a1, 1, 216);
  v2 = result;
  *(_DWORD *)(a1 + 424) = result;
  *(_DWORD *)result = sub_6F874180;
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
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 56) = 0;
  }
  else
  {
    *(_DWORD *)(result + 80) = 0;
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 84) = 0;
    *(_DWORD *)(result + 68) = 0;
    *(_DWORD *)(result + 88) = 0;
    *(_DWORD *)(result + 72) = 0;
    *(_DWORD *)(result + 92) = 0;
    *(_DWORD *)(result + 76) = 0;
  }
  return result;
}
