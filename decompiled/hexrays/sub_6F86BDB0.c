unsigned int __cdecl sub_6F86BDB0(int a1, _BYTE **a2, unsigned int *a3, int a4, int a5)
{
  unsigned int v5; // ebx@1
  int v6; // edi@1
  unsigned int result; // eax@1
  _BYTE *v8; // edx@2
  int v9; // esi@2
  int v10; // [sp+0h] [bp-10h]@1
  int i; // [sp+28h] [bp+18h]@1

  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_DWORD *)(a1 + 36);
  result = 4 * a4;
  v10 = 4 * a4;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v8 = *a2;
    ++a2;
    result = *a3;
    v9 = *(_DWORD *)(*a3 + v10);
    if ( v5 )
    {
      result = 0;
      do
      {
        *(_BYTE *)(v9 + result) = *v8;
        v8 += v6;
        ++result;
      }
      while ( v5 > result );
    }
    v10 += 4;
  }
  return result;
}
