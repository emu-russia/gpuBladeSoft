int __cdecl sub_6F866ED0(int a1, int a2, int a3, int a4)
{
  int v4; // eax@1
  int v5; // eax@1
  int result; // eax@1
  int v7; // eax@3
  int v8; // ecx@4
  int v9; // edx@4
  int v10; // ebx@5
  int v11; // [sp+8h] [bp-3Ch]@1
  int v12; // [sp+Ch] [bp-38h]@2
  int v13; // [sp+10h] [bp-34h]@2
  int v14; // [sp+14h] [bp-30h]@1
  int v15; // [sp+18h] [bp-2Ch]@1
  int v16; // [sp+1Ch] [bp-28h]@1
  int v17; // [sp+20h] [bp-24h]@3
  int v18; // [sp+24h] [bp-20h]@3
  int v19; // [sp+28h] [bp-1Ch]@3
  int v20; // [sp+2Ch] [bp-18h]@3
  int v21; // [sp+30h] [bp-14h]@1

  v4 = *(_DWORD *)(a1 + 440);
  v11 = v4;
  v5 = *(_DWORD *)(v4 + 24);
  v16 = *(_DWORD *)v5;
  v15 = *(_DWORD *)(v5 + 4);
  result = *(_DWORD *)(v5 + 8);
  v14 = result;
  v21 = *(_DWORD *)(a1 + 92);
  if ( a4 > 0 )
  {
    v13 = *(_DWORD *)(*(_DWORD *)(a1 + 440) + 48);
    v12 = 0;
    do
    {
      v7 = *(_DWORD *)(a2 + 4 * v12);
      v20 = *(_DWORD *)(a3 + 4 * v12);
      v19 = (v13 << 6) + *(_DWORD *)(v11 + 52);
      v18 = (v13 << 6) + *(_DWORD *)(v11 + 56);
      v17 = *(_DWORD *)(v11 + 60) + (v13 << 6);
      if ( v21 )
      {
        v8 = 0;
        v9 = 0;
        do
        {
          v10 = *(_BYTE *)(*(_DWORD *)(v19 + 4 * v9) + v16 + *(_BYTE *)v7)
              + *(_BYTE *)(*(_DWORD *)(v18 + 4 * v9) + v15 + *(_BYTE *)(v7 + 1))
              + *(_BYTE *)(v14 + *(_DWORD *)(v17 + 4 * v9) + *(_BYTE *)(v7 + 2));
          v7 += 3;
          *(_BYTE *)(v20 + v8) = v10;
          v9 = ((_BYTE)v9 + 1) & 0xF;
          ++v8;
        }
        while ( v21 != v8 );
      }
      v13 = ((_BYTE)v13 + 1) & 0xF;
      result = v11;
      *(_DWORD *)(v11 + 48) = v13;
      ++v12;
    }
    while ( v12 != a4 );
  }
  return result;
}
