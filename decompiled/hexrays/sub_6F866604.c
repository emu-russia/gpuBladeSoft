int __cdecl sub_6F866604(int a1, int a2, int a3, int *a4)
{
  int result; // eax@1
  int v5; // edi@2
  int v6; // ebx@3
  unsigned int v7; // ecx@3
  unsigned int v8; // eax@3
  unsigned int v9; // esi@4
  int v10; // eax@4
  char v11; // dl@5
  int v12; // [sp+0h] [bp-10h]@1

  v12 = *a4;
  result = a1;
  if ( *(_DWORD *)(a1 + 276) > 0 )
  {
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(a3 + 4 * v5);
      v7 = *(_DWORD *)(v12 + 4 * v5);
      v8 = *(_DWORD *)(a1 + 92) + *(_DWORD *)(v12 + 4 * v5);
      if ( v7 < v8 )
      {
        v9 = ((~v7 + v8) >> 1) + 1;
        v10 = 0;
        do
        {
          v11 = *(_BYTE *)(v6 + v10);
          *(_BYTE *)(v7 + 2 * v10) = v11;
          *(_BYTE *)(v7 + 2 * v10++ + 1) = v11;
        }
        while ( v10 != v9 );
      }
      ++v5;
      result = a1;
    }
    while ( *(_DWORD *)(a1 + 276) > v5 );
  }
  return result;
}
