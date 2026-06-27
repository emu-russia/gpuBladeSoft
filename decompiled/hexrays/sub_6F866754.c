int __cdecl sub_6F866754(int a1, int a2, int *a3, int *a4)
{
  int result; // eax@1
  int v5; // edi@2
  int v6; // ebx@3
  unsigned int v7; // ecx@3
  unsigned int v8; // eax@3
  unsigned int v9; // esi@4
  int v10; // eax@4
  char v11; // dl@5
  int *v12; // [sp+28h] [bp-20h]@2
  int v13; // [sp+2Ch] [bp-1Ch]@1

  v13 = *a4;
  result = a1;
  if ( *(_DWORD *)(a1 + 276) > 0 )
  {
    v12 = a3;
    v5 = 0;
    do
    {
      v6 = *v12;
      v7 = *(_DWORD *)(v13 + 4 * v5);
      v8 = *(_DWORD *)(a1 + 92);
      if ( v7 < v7 + v8 )
      {
        v9 = ((~v7 + v7 + v8) >> 1) + 1;
        v10 = 0;
        do
        {
          v11 = *(_BYTE *)(v6 + v10);
          *(_BYTE *)(v7 + 2 * v10) = v11;
          *(_BYTE *)(v7 + 2 * v10++ + 1) = v11;
        }
        while ( v10 != v9 );
        v8 = *(_DWORD *)(a1 + 92);
      }
      result = sub_6F868CF4(v13, v5, v13, v5 + 1, 1, v8);
      v5 += 2;
      ++v12;
    }
    while ( *(_DWORD *)(a1 + 276) > v5 );
  }
  return result;
}
