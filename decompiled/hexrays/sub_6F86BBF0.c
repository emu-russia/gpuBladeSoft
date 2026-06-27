int __cdecl sub_6F86BBF0(int a1, int *a2, _DWORD *a3, int a4, int a5)
{
  int v5; // ebx@1
  int result; // eax@1
  int v7; // edx@2
  unsigned int v8; // ecx@3
  int v9; // esi@4
  int v10; // eax@4
  int v11; // edi@4
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@2
  unsigned int v14; // [sp+8h] [bp-10h]@1
  int i; // [sp+30h] [bp+18h]@1

  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 392) + 8);
  v14 = *(_DWORD *)(a1 + 28);
  result = 4 * a4;
  v12 = 4 * a4;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v7 = *a2;
    ++a2;
    result = *(_DWORD *)(*a3 + v12);
    v13 = *(_DWORD *)(*a3 + v12);
    if ( v14 )
    {
      v8 = 0;
      do
      {
        v9 = *(_BYTE *)v7;
        v10 = *(_BYTE *)(v7 + 1);
        v11 = *(_BYTE *)(v7 + 2);
        v7 += 3;
        result = (*(_DWORD *)(v5 + 4 * v9) + *(_DWORD *)(v5 + 4 * v11 + 2048) + *(_DWORD *)(v5 + 4 * v10 + 1024)) >> 16;
        *(_BYTE *)(v13 + v8++) = result;
      }
      while ( v14 > v8 );
    }
    v12 += 4;
  }
  return result;
}
