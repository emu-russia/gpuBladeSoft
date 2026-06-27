int __cdecl sub_6F860D8C(int a1, int a2, int a3, int a4)
{
  int v4; // ebx@1
  int v5; // eax@1
  int result; // eax@1
  int v7; // esi@3
  int v8; // edx@3
  int v9; // edi@3
  int v10; // ebx@4
  int v11; // eax@4
  int v12; // ecx@6
  int v13; // [sp+4h] [bp-38h]@3
  _BYTE *v14; // [sp+8h] [bp-34h]@3
  _BYTE *v15; // [sp+Ch] [bp-30h]@3
  int v16; // [sp+10h] [bp-2Ch]@2
  int v17; // [sp+14h] [bp-28h]@1
  int v18; // [sp+18h] [bp-24h]@1
  int v19; // [sp+1Ch] [bp-20h]@2
  int v20; // [sp+20h] [bp-1Ch]@3
  int v21; // [sp+24h] [bp-18h]@3
  _BYTE *v22; // [sp+28h] [bp-14h]@3
  int v23; // [sp+2Ch] [bp-10h]@4

  v4 = *(_DWORD *)(a2 + 28) * *(_DWORD *)(a2 + 36);
  sub_6F860764(a3 - 4, *(_DWORD *)(a1 + 256) + 2, *(_DWORD *)(a1 + 28), v4);
  v5 = *(_DWORD *)(a1 + 216);
  v18 = (128 - v5) << 9;
  result = v5 << 6;
  v17 = result;
  if ( *(_DWORD *)(a1 + 256) > 0 )
  {
    v19 = v4 - 2;
    v16 = 0;
    do
    {
      v22 = *(_BYTE **)(a4 + 4 * v16);
      v7 = *(_DWORD *)(a3 + 4 * v16);
      v21 = *(_DWORD *)(a3 + 4 * v16 - 4);
      v20 = *(_DWORD *)(a3 + 4 * v16 + 4);
      v8 = *(_BYTE *)v7;
      v9 = *(_BYTE *)v21 + *(_BYTE *)v20 + v8;
      v15 = (_BYTE *)(v7 + 1);
      v13 = *(_BYTE *)(v21 + 1) + *(_BYTE *)(v20 + 1) + *(_BYTE *)(v7 + 1);
      *v22 = (v8 * v18 + v17 * (v13 + 2 * v9 - v8) + 0x8000) >> 16;
      v14 = v22 + 1;
      if ( v19 )
      {
        v23 = v9;
        v10 = v13;
        v11 = 0;
        while ( 1 )
        {
          v12 = *(_BYTE *)(v7 + v11 + 2) + *(_BYTE *)(v20 + v11 + 2) + *(_BYTE *)(v21 + v11 + 2);
          v22[v11 + 1] = (*(_BYTE *)(v7 + v11 + 1) * v18 + v17 * (v23 + v10 + v12 - *(_BYTE *)(v7 + v11 + 1)) + 0x8000) >> 16;
          if ( ++v11 == v19 )
            break;
          v23 = v10;
          v10 = v12;
        }
        v15 += v19;
        v14 += v19;
      }
      else
      {
        v10 = v9;
        v12 = v13;
      }
      result = (*v15 * v18 + v17 * (v10 + 2 * v12 - *v15) + 0x8000) >> 16;
      *v14 = result;
      ++v16;
    }
    while ( *(_DWORD *)(a1 + 256) > v16 );
  }
  return result;
}
