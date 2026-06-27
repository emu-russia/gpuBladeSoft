unsigned int __cdecl sub_6F86BC80(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // edx@1
  unsigned int result; // eax@1
  int v7; // ebx@2
  int v8; // ST00_4@4
  int v9; // edi@4
  int v10; // ST1C_4@4
  int v11; // [sp+4h] [bp-28h]@1
  int v12; // [sp+8h] [bp-24h]@2
  int v13; // [sp+Ch] [bp-20h]@2
  int v14; // [sp+10h] [bp-1Ch]@2
  int v15; // [sp+14h] [bp-18h]@2
  unsigned int v16; // [sp+18h] [bp-14h]@1
  int i; // [sp+44h] [bp+18h]@1

  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 392) + 8);
  v16 = *(_DWORD *)(a1 + 28);
  result = 4 * a4;
  v11 = 4 * a4;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v7 = *a2;
    ++a2;
    v15 = *(_DWORD *)(*(_DWORD *)a3 + v11);
    v14 = *(_DWORD *)(*(_DWORD *)(a3 + 4) + v11);
    v13 = *(_DWORD *)(*(_DWORD *)(a3 + 8) + v11);
    result = *(_DWORD *)(*(_DWORD *)(a3 + 12) + v11);
    v12 = *(_DWORD *)(*(_DWORD *)(a3 + 12) + v11);
    if ( v16 )
    {
      result = 0;
      do
      {
        v8 = 255 - *(_BYTE *)(v7 + 4 * result);
        v9 = 255 - *(_BYTE *)(v7 + 4 * result + 1);
        v10 = 255 - *(_BYTE *)(v7 + 4 * result + 2);
        *(_BYTE *)(v12 + result) = *(_BYTE *)(v7 + 4 * result + 3);
        *(_BYTE *)(v15 + result) = (*(_DWORD *)(v5 + 4 * v8)
                                  + *(_DWORD *)(v5 + 4 * v10 + 2048)
                                  + *(_DWORD *)(v5 + 4 * v9 + 1024)) >> 16;
        *(_BYTE *)(v14 + result) = (*(_DWORD *)(v5 + 4 * v10 + 5120)
                                  + *(_DWORD *)(v5 + 4 * v8 + 3072)
                                  + *(_DWORD *)(v5 + 4 * v9 + 4096)) >> 16;
        *(_BYTE *)(v13 + result++) = (*(_DWORD *)(v5 + 4 * v10 + 7168)
                                    + *(_DWORD *)(v5 + 4 * v8 + 5120)
                                    + *(_DWORD *)(v5 + 4 * v9 + 6144)) >> 16;
      }
      while ( v16 > result );
    }
    v11 += 4;
  }
  return result;
}
