unsigned int __cdecl sub_6F86BE08(int a1, int *a2, int a3, int a4, int a5)
{
  unsigned int result; // eax@1
  int v6; // edx@2
  int v7; // ebx@2
  int v8; // esi@2
  int v9; // edi@2
  int v10; // [sp+0h] [bp-14h]@1
  unsigned int v11; // [sp+4h] [bp-10h]@1
  int i; // [sp+2Ch] [bp+18h]@1

  v11 = *(_DWORD *)(a1 + 28);
  result = 4 * a4;
  v10 = 4 * a4;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v6 = *a2;
    ++a2;
    v7 = *(_DWORD *)(*(_DWORD *)a3 + v10);
    v8 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + v10);
    v9 = *(_DWORD *)(*(_DWORD *)(a3 + 8) + v10);
    result = v11;
    if ( v11 )
    {
      result = 0;
      do
      {
        *(_BYTE *)(v7 + result) = *(_BYTE *)v6;
        *(_BYTE *)(v8 + result) = *(_BYTE *)(v6 + 1);
        *(_BYTE *)(v9 + result) = *(_BYTE *)(v6 + 2);
        v6 += 3;
        ++result;
      }
      while ( v11 > result );
    }
    v10 += 4;
  }
  return result;
}
