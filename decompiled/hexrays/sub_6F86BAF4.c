int __cdecl sub_6F86BAF4(int a1, int *a2, int a3, int a4, int a5)
{
  int result; // eax@1
  int v6; // ebx@2
  unsigned int v7; // ecx@3
  int v8; // ST00_4@4
  int v9; // edi@4
  int v10; // ST18_4@4
  int v11; // [sp+4h] [bp-24h]@1
  int v12; // [sp+8h] [bp-20h]@2
  int v13; // [sp+Ch] [bp-1Ch]@2
  int v14; // [sp+10h] [bp-18h]@2
  unsigned int v15; // [sp+14h] [bp-14h]@1
  int i; // [sp+40h] [bp+18h]@1

  result = *(_DWORD *)(*(_DWORD *)(a1 + 392) + 8);
  v15 = *(_DWORD *)(a1 + 28);
  v11 = 4 * a4;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v6 = *a2;
    ++a2;
    v14 = *(_DWORD *)(*(_DWORD *)a3 + v11);
    v13 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + v11);
    v12 = *(_DWORD *)(*(_DWORD *)(a3 + 8) + v11);
    if ( v15 )
    {
      v7 = 0;
      do
      {
        v8 = *(_BYTE *)v6;
        v9 = *(_BYTE *)(v6 + 1);
        v10 = *(_BYTE *)(v6 + 2);
        v6 += 3;
        *(_BYTE *)(v14 + v7) = (*(_DWORD *)(result + 4 * v8)
                              + *(_DWORD *)(result + 4 * v10 + 2048)
                              + *(_DWORD *)(result + 4 * v9 + 1024)) >> 16;
        *(_BYTE *)(v13 + v7) = (*(_DWORD *)(result + 4 * v10 + 5120)
                              + *(_DWORD *)(result + 4 * v8 + 3072)
                              + *(_DWORD *)(result + 4 * v9 + 4096)) >> 16;
        *(_BYTE *)(v12 + v7++) = (*(_DWORD *)(result + 4 * v10 + 7168)
                                + *(_DWORD *)(result + 4 * v8 + 5120)
                                + *(_DWORD *)(result + 4 * v9 + 6144)) >> 16;
      }
      while ( v15 > v7 );
    }
    v11 += 4;
  }
  return result;
}
