int *__cdecl sub_6F871B64(int a1, int a2, int a3, int *a4, int a5)
{
  int v5; // ecx@1
  int *result; // eax@1
  int v7; // edi@2
  unsigned int v8; // edx@3
  int v9; // [sp+0h] [bp-20h]@3
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@2
  int v12; // [sp+Ch] [bp-14h]@2
  unsigned int v13; // [sp+10h] [bp-10h]@1
  int i; // [sp+38h] [bp+18h]@1

  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 436) + 24);
  v13 = *(_DWORD *)(a1 + 92);
  result = (int *)(4 * a3);
  v10 = 4 * a3;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v12 = *(_DWORD *)(*(_DWORD *)a2 + v10);
    v11 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + v10);
    v7 = *a4;
    result = a4 + 1;
    ++a4;
    if ( v13 )
    {
      v8 = 0;
      v9 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + v10);
      do
      {
        result = (int *)((*(_DWORD *)(v5 + 4 * *(_BYTE *)(v12 + v8))
                        + *(_DWORD *)(v5 + 4 * *(_BYTE *)(v9 + v8) + 2048)
                        + *(_DWORD *)(v5 + 4 * *(_BYTE *)(v11 + v8) + 1024)) >> 16);
        *(_BYTE *)(v7 + v8++) = (_BYTE)result;
      }
      while ( v13 > v8 );
    }
    v10 += 4;
  }
  return result;
}
