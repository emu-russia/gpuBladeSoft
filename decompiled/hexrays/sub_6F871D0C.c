int __cdecl sub_6F871D0C(int a1, _DWORD *a2, int a3, int *a4, int a5)
{
  int result; // eax@1
  unsigned int v6; // ebx@1
  int v7; // edi@1
  int v8; // esi@2
  unsigned int v9; // edx@3
  char v10; // cl@4
  int i; // [sp+24h] [bp+18h]@1

  result = a1;
  v6 = *(_DWORD *)(a1 + 92);
  v7 = 4 * a3;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v8 = *(_DWORD *)(*a2 + v7);
    result = *a4;
    ++a4;
    if ( v6 )
    {
      v9 = 0;
      do
      {
        v10 = *(_BYTE *)(v8 + v9);
        *(_BYTE *)(result + 2) = v10;
        *(_BYTE *)(result + 1) = v10;
        *(_BYTE *)result = v10;
        result += 3;
        ++v9;
      }
      while ( v6 > v9 );
    }
    v7 += 4;
  }
  return result;
}
