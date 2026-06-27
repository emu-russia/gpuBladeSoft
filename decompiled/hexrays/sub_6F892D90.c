signed int __cdecl sub_6F892D90(int a1)
{
  int v1; // eax@6
  int v2; // ecx@7
  int v3; // eax@2
  signed int result; // eax@4

  if ( a1 && (v3 = *(_DWORD *)(a1 + 28)) != 0 )
  {
    *(_DWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 44) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    if ( a1 && (v1 = *(_DWORD *)(a1 + 28)) != 0 )
    {
      v2 = *(_DWORD *)(v1 + 8);
      *(_DWORD *)(v1 + 28) = 0;
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      if ( v2 )
        *(_DWORD *)(a1 + 48) = v2 & 1;
      *(_DWORD *)v1 = 0;
      *(_DWORD *)(v1 + 4) = 0;
      *(_DWORD *)(v1 + 12) = 0;
      *(_DWORD *)(v1 + 20) = 0x8000;
      *(_DWORD *)(v1 + 32) = 0;
      *(_DWORD *)(v1 + 56) = 0;
      *(_DWORD *)(v1 + 60) = 0;
      *(_DWORD *)(v1 + 108) = v1 + 1328;
      *(_DWORD *)(v1 + 80) = v1 + 1328;
      *(_DWORD *)(v1 + 76) = v1 + 1328;
      *(_DWORD *)(v1 + 7104) = 1;
      *(_DWORD *)(v1 + 7108) = -1;
      result = 0;
    }
    else
    {
      result = -2;
    }
  }
  else
  {
    result = -2;
  }
  return result;
}
