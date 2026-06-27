int *__cdecl sub_6F871C08(int a1, int a2, int a3, int *a4, int a5)
{
  int *result; // eax@1
  int v6; // ebx@2
  int v7; // esi@2
  int v8; // edi@2
  int v9; // edx@2
  int v10; // [sp+0h] [bp-14h]@1
  unsigned int v11; // [sp+4h] [bp-10h]@1
  int i; // [sp+2Ch] [bp+18h]@1

  v11 = *(_DWORD *)(a1 + 92);
  result = (int *)(4 * a3);
  v10 = 4 * a3;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v6 = *(_DWORD *)(*(_DWORD *)a2 + v10);
    v7 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + v10);
    v8 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + v10);
    v9 = *a4;
    result = a4 + 1;
    ++a4;
    if ( v11 )
    {
      result = 0;
      do
      {
        *(_BYTE *)v9 = *((_BYTE *)result + v6);
        *(_BYTE *)(v9 + 1) = *((_BYTE *)result + v7);
        *(_BYTE *)(v9 + 2) = *((_BYTE *)result + v8);
        v9 += 3;
        result = (int *)((char *)result + 1);
      }
      while ( v11 > (unsigned int)result );
    }
    v10 += 4;
  }
  return result;
}
