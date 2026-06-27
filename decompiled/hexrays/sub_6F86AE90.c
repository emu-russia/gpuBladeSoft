char __cdecl sub_6F86AE90(int a1, int a2)
{
  int v2; // ebx@1
  int v3; // eax@2
  int v4; // edi@6
  int v5; // edx@9
  int v6; // esi@9
  int v7; // edx@9
  signed int v8; // esi@13
  signed int v10; // esi@22
  int v11; // edi@23
  _BYTE *v12; // ebx@23
  int v13; // [sp+4h] [bp-34h]@23
  signed int v14; // [sp+8h] [bp-30h]@9
  int v15; // [sp+8h] [bp-30h]@11
  int v16; // [sp+Ch] [bp-2Ch]@9
  int v17; // [sp+10h] [bp-28h]@9
  int v18; // [sp+14h] [bp-24h]@1
  int v19; // [sp+18h] [bp-20h]@9
  signed int v20; // [sp+18h] [bp-20h]@12
  signed int v21; // [sp+1Ch] [bp-1Ch]@13

  v2 = a1;
  v18 = *(_DWORD *)(a1 + 404);
  if ( *(_DWORD *)(a1 + 224) )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 404) + 68);
    if ( !v3 )
    {
      sub_6F86A39C(a1, *(_DWORD *)(*(_DWORD *)(a1 + 404) + 72));
      v3 = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(v18 + 72) = ((unsigned __int8)*(_DWORD *)(v18 + 72) + 1) & 7;
    }
    *(_DWORD *)(v18 + 68) = v3 - 1;
  }
  if ( *(_DWORD *)(a1 + 300) > 0 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v2 + 4 * v4 + 304);
        v16 = *(_DWORD *)(*(_DWORD *)(v2 + 4 * v5 + 276) + 20);
        v14 = (signed int)**(_WORD **)(a2 + 4 * v4) >> *(_DWORD *)(v2 + 356);
        v17 = v5 + 12;
        v6 = *(_DWORD *)(v18 + 4 * (v5 + 12) + 4) + *(_DWORD *)(v18 + 4 * (v16 + 16) + 12);
        v7 = v5 + 8;
        v19 = v14 - *(_DWORD *)(v18 + 4 * v7 + 4);
        if ( v14 != *(_DWORD *)(v18 + 4 * v7 + 4) )
          break;
        sub_6F869F7C(v2, (_BYTE *)v6, 0);
        *(_DWORD *)(v18 + 4 * v17 + 4) = 0;
LABEL_8:
        if ( *(_DWORD *)(v2 + 300) <= ++v4 )
          return 1;
      }
      *(_DWORD *)(v18 + 4 * v7 + 4) = v14;
      sub_6F869F7C(v2, (_BYTE *)v6, 1);
      if ( v19 <= 0 )
      {
        v19 = -v19;
        sub_6F869F7C(v2, (_BYTE *)(v6 + 1), 1);
        v15 = v6 + 3;
        *(_DWORD *)(v18 + 4 * v17 + 4) = 8;
      }
      else
      {
        sub_6F869F7C(v2, (_BYTE *)(v6 + 1), 0);
        v15 = v6 + 2;
        *(_DWORD *)(v18 + 4 * v17 + 4) = 4;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        sub_6F869F7C(v2, (_BYTE *)v15, 1);
        v15 = *(_DWORD *)(v18 + 4 * (v16 + 16) + 12) + 20;
        v10 = v20 >> 1;
        if ( v20 >> 1 )
        {
          v21 = 1;
          v13 = v4;
          v11 = v2;
          v12 = (_BYTE *)(*(_DWORD *)(v18 + 4 * (v16 + 16) + 12) + 20);
          do
          {
            sub_6F869F7C(v11, v12, 1);
            v21 *= 2;
            ++v12;
            v10 >>= 1;
          }
          while ( v10 );
          v15 = (int)v12;
          v2 = v11;
          v4 = v13;
          v8 = v21 >> 1;
        }
        else
        {
          v8 = 0;
          v21 = 1;
        }
      }
      else
      {
        v8 = 0;
        v21 = 0;
      }
      sub_6F869F7C(v2, (_BYTE *)v15, 0);
      if ( v21 >= 1 << *(_BYTE *)(v2 + v16 + 152) >> 1 )
      {
        if ( v21 > 1 << *(_BYTE *)(v2 + v16 + 168) >> 1 )
          *(_DWORD *)(v18 + 4 * v17 + 4) += 8;
      }
      else
      {
        *(_DWORD *)(v18 + 4 * v17 + 4) = 0;
      }
      if ( !v8 )
        goto LABEL_8;
      do
      {
        sub_6F869F7C(v2, (_BYTE *)(v15 + 14), (v8 & v20) != 0);
        v8 >>= 1;
      }
      while ( v8 );
      ++v4;
    }
    while ( *(_DWORD *)(v2 + 300) > v4 );
  }
  return 1;
}
