unsigned int __cdecl sub_6F871D60(int a1, int a2, int a3, int *a4, int a5)
{
  int v5; // eax@1
  int v6; // esi@1
  unsigned int result; // eax@1
  int v8; // ecx@2
  int v9; // ST30_4@4
  int v10; // ST04_4@4
  int v11; // ST00_4@4
  int v12; // [sp+8h] [bp-38h]@1
  int v13; // [sp+Ch] [bp-34h]@1
  int v14; // [sp+10h] [bp-30h]@1
  int v15; // [sp+14h] [bp-2Ch]@1
  int v16; // [sp+18h] [bp-28h]@1
  int v17; // [sp+1Ch] [bp-24h]@2
  int v18; // [sp+20h] [bp-20h]@2
  int v19; // [sp+24h] [bp-1Ch]@2
  int v20; // [sp+28h] [bp-18h]@2
  unsigned int v21; // [sp+2Ch] [bp-14h]@1
  int i; // [sp+58h] [bp+18h]@1

  v5 = *(_DWORD *)(a1 + 436);
  v21 = *(_DWORD *)(a1 + 92);
  v6 = *(_DWORD *)(a1 + 292);
  v16 = *(_DWORD *)(v5 + 8);
  v15 = *(_DWORD *)(v5 + 12);
  v14 = *(_DWORD *)(v5 + 16);
  v13 = *(_DWORD *)(v5 + 20);
  result = 4 * a3;
  v12 = 4 * a3;
  for ( i = a5 - 1; i >= 0; --i )
  {
    v20 = *(_DWORD *)(*(_DWORD *)a2 + v12);
    v19 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + v12);
    v18 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + v12);
    result = *(_DWORD *)(*(_DWORD *)(a2 + 12) + v12);
    v17 = *(_DWORD *)(*(_DWORD *)(a2 + 12) + v12);
    v8 = *a4;
    ++a4;
    if ( v21 )
    {
      result = 0;
      do
      {
        v9 = *(_BYTE *)(v19 + result);
        v10 = 4 * *(_BYTE *)(v18 + result);
        v11 = 255 - *(_BYTE *)(v20 + result);
        *(_BYTE *)(v8 + 4 * result) = *(_BYTE *)(v6 + v11 - *(_DWORD *)(v16 + v10));
        v9 *= 4;
        *(_BYTE *)(v8 + 4 * result + 1) = *(_BYTE *)(v6 + v11 - ((*(_DWORD *)(v13 + v9) + *(_DWORD *)(v14 + v10)) >> 16));
        *(_BYTE *)(v8 + 4 * result + 2) = *(_BYTE *)(v6 + v11 - *(_DWORD *)(v15 + v9));
        *(_BYTE *)(v8 + 4 * result + 3) = *(_BYTE *)(v17 + result);
        ++result;
      }
      while ( v21 > result );
    }
    v12 += 4;
  }
  return result;
}
