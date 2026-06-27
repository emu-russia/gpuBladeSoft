unsigned int __cdecl sub_6F871A5C(int a1, int a2, int a3, int *a4, int a5)
{
  int v5; // eax@1
  unsigned int result; // eax@1
  int v7; // ecx@2
  int v8; // ebx@4
  int v9; // ST04_4@4
  int v10; // edx@4
  int v11; // [sp+8h] [bp-34h]@1
  int v12; // [sp+Ch] [bp-30h]@1
  int v13; // [sp+10h] [bp-2Ch]@1
  int v14; // [sp+14h] [bp-28h]@1
  int v15; // [sp+18h] [bp-24h]@1
  int v16; // [sp+1Ch] [bp-20h]@2
  int v17; // [sp+20h] [bp-1Ch]@2
  int v18; // [sp+24h] [bp-18h]@2
  unsigned int v19; // [sp+28h] [bp-14h]@1
  int v20; // [sp+2Ch] [bp-10h]@1
  int i; // [sp+54h] [bp+18h]@1

  v5 = *(_DWORD *)(a1 + 436);
  v19 = *(_DWORD *)(a1 + 92);
  v20 = *(_DWORD *)(a1 + 292);
  v15 = *(_DWORD *)(v5 + 8);
  v14 = *(_DWORD *)(v5 + 12);
  v13 = *(_DWORD *)(v5 + 16);
  v12 = *(_DWORD *)(v5 + 20);
  result = 4 * a3;
  v11 = 4 * a3;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v18 = *(_DWORD *)(*(_DWORD *)a2 + v11);
    v17 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + v11);
    v16 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + v11);
    v7 = *a4;
    ++a4;
    result = v19;
    if ( v19 )
    {
      result = 0;
      do
      {
        v8 = *(_BYTE *)(v18 + result);
        v9 = *(_BYTE *)(v17 + result);
        v10 = 4 * *(_BYTE *)(v16 + result);
        *(_BYTE *)v7 = *(_BYTE *)(*(_DWORD *)(v15 + v10) + v20 + v8);
        v9 *= 4;
        *(_BYTE *)(v7 + 1) = *(_BYTE *)(v8 + v20 + ((*(_DWORD *)(v12 + v9) + *(_DWORD *)(v13 + v10)) >> 16));
        *(_BYTE *)(v7 + 2) = *(_BYTE *)(*(_DWORD *)(v14 + v9) + v20 + v8);
        v7 += 3;
        ++result;
      }
      while ( v19 > result );
    }
    v11 += 4;
  }
  return result;
}
