int __cdecl sub_6F7724C0(int a1)
{
  int result; // eax@1
  int v2; // edx@1
  int v3; // eax@2
  int v4; // ebx@2

  result = 0;
  v2 = *(_DWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 36) > (unsigned int)(v2 + 1) )
  {
    v3 = *(_BYTE *)v2;
    v4 = *(_BYTE *)(v2 + 1);
    v2 += 2;
    result = v4 | (v3 << 8);
  }
  *(_DWORD *)(a1 + 32) = v2;
  return result;
}
