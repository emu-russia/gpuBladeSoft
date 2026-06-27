int __cdecl sub_6F867414(int a1, int a2, int a3, int a4)
{
  int result; // eax@1
  int v5; // ebx@5
  int v6; // edx@6
  int v7; // eax@6
  _BYTE *v8; // [sp+0h] [bp-34h]@6
  int v9; // [sp+4h] [bp-30h]@3
  int v10; // [sp+8h] [bp-2Ch]@4
  int v11; // [sp+Ch] [bp-28h]@1
  int v12; // [sp+10h] [bp-24h]@2
  int v13; // [sp+14h] [bp-20h]@4
  int v14; // [sp+18h] [bp-1Ch]@5
  int v15; // [sp+1Ch] [bp-18h]@5
  int v16; // [sp+20h] [bp-14h]@1
  unsigned int v17; // [sp+24h] [bp-10h]@1

  v11 = *(_DWORD *)(a1 + 440);
  v16 = *(_DWORD *)(a1 + 100);
  result = *(_DWORD *)(a1 + 92);
  v17 = *(_DWORD *)(a1 + 92);
  if ( a4 > 0 )
  {
    v12 = 0;
    do
    {
      memset(*(void **)(a3 + 4 * v12), 0, v17);
      v9 = *(_DWORD *)(v11 + 48);
      if ( v16 > 0 )
      {
        v10 = *(_DWORD *)(v11 + 48) << 6;
        v13 = 0;
        do
        {
          v5 = *(_DWORD *)(a3 + 4 * v12);
          v15 = *(_DWORD *)(*(_DWORD *)(v11 + 24) + 4 * v13);
          v14 = *(_DWORD *)(v11 + 4 * v13 + 52) + v10;
          if ( v17 )
          {
            v6 = 0;
            v7 = 0;
            v8 = (_BYTE *)(v13 + *(_DWORD *)(a2 + 4 * v12));
            do
            {
              *(_BYTE *)(v5 + v6) += *(_BYTE *)(*(_DWORD *)(v14 + 4 * v7) + v15 + *v8);
              v8 += v16;
              v7 = ((_BYTE)v7 + 1) & 0xF;
              ++v6;
            }
            while ( v17 != v6 );
          }
          ++v13;
        }
        while ( v13 != v16 );
      }
      result = ((_BYTE)v9 + 1) & 0xF;
      *(_DWORD *)(v11 + 48) = result;
      ++v12;
    }
    while ( a4 > v12 );
  }
  return result;
}
