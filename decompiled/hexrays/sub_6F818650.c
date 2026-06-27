int __cdecl sub_6F818650(int a1, int a2)
{
  int v2; // edx@1
  int v3; // esi@1
  int result; // eax@1
  int v5; // ebp@2
  int v6; // ecx@2
  int v7; // eax@6
  int v8; // edx@6
  int v9; // edi@26
  int v10; // ecx@29
  int v11; // edi@29
  int v12; // ecx@33
  int v13; // edi@33
  int v14; // eax@42
  int v15; // edx@42
  int v16; // [sp+0h] [bp-24h]@2
  int v17; // [sp+8h] [bp-1Ch]@2
  int v18; // [sp+Ch] [bp-18h]@25
  int v19; // [sp+10h] [bp-14h]@2

  v2 = *(_BYTE *)(a1 + 795);
  v3 = *(_BYTE *)(a1 + v2 + 51488);
  result = 1;
  if ( *(_BYTE *)(a1 + v2 + 51488) )
  {
    LOBYTE(result) = 0;
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 1020) = 0;
    memset32((void *)((a2 + 4) & 0xFFFFFFFC), result, (a2 - ((a2 + 4) & 0xFFFFFFFC) + 1024) >> 2);
    v19 = a2 + 4 * v3;
    v17 = a2 - 4 * v3;
    v5 = v3 + 127;
    v6 = ~-(char)v3 & 3;
    v16 = 127 - v3;
    if ( 127 - v3 >= 0 )
      *(_DWORD *)(a2 - 4 * v3 + 508) = -v3;
    *(_DWORD *)(a2 + 508) = 0;
    if ( v5 <= 255 )
      *(_DWORD *)(v19 + 508) = v3;
    v7 = 1;
    v8 = -1;
    if ( v3 != 1 )
    {
      if ( !(~-(char)v3 & 3) )
        goto LABEL_47;
      if ( v6 != 1 )
      {
        if ( v6 != 2 )
        {
          if ( v16 - 1 >= 0 )
            *(_DWORD *)(v17 - 4 + 508) = 1 - v3;
          *(_DWORD *)(a2 - 4 + 508) = -1;
          *(_DWORD *)(a2 + 512) = 1;
          if ( v3 + 128 <= 255 )
            *(_DWORD *)(v19 + 512) = v3 - 1;
          v7 = 2;
          v8 = -2;
        }
        if ( v16 - v7 >= 0 )
          *(_DWORD *)(v17 + 4 * v8 + 508) = v7 - v3;
        *(_DWORD *)(a2 + 4 * v8 + 508) = v8;
        *(_DWORD *)(a2 + 4 * v7 + 508) = v7;
        if ( v5 + v7 <= 255 )
          *(_DWORD *)(v19 + 4 * v7 + 508) = v3 - v7;
        ++v7;
        --v8;
      }
      if ( v16 - v7 >= 0 )
        *(_DWORD *)(v17 + 4 * v8 + 508) = v7 - v3;
      *(_DWORD *)(a2 + 4 * v8 + 508) = v8;
      *(_DWORD *)(a2 + 4 * v7 + 508) = v7;
      if ( v5 + v7 <= 255 )
        *(_DWORD *)(v19 + 4 * v7 + 508) = v3 - v7;
      ++v7;
      --v8;
      if ( v3 != v7 )
      {
LABEL_47:
        v18 = v3 + 127;
        do
        {
          if ( v16 - v7 >= 0 )
            *(_DWORD *)(v17 + 4 * v8 + 508) = v7 - v3;
          *(_DWORD *)(a2 + 4 * v8 + 508) = v8;
          *(_DWORD *)(a2 + 4 * v7 + 508) = v7;
          if ( v18 + v7 <= 255 )
            *(_DWORD *)(v19 + 4 * v7 + 508) = v3 - v7;
          v14 = v7 + 1;
          v15 = v8 - 1;
          if ( v16 - v14 >= 0 )
          {
            *(_DWORD *)(v17 + 4 * v15 + 508) = v14 - v3;
            v9 = v15;
          }
          else
          {
            v9 = v15;
          }
          *(_DWORD *)(a2 + 4 * v9 + 508) = v9;
          *(_DWORD *)(a2 + 4 * v14 + 508) = v14;
          if ( v18 + v14 <= 255 )
          {
            *(_DWORD *)(v19 + 4 * v14 + 508) = v3 - v14;
            v9 = v15;
          }
          v10 = v14 + 1;
          v11 = v9 - 1;
          if ( v16 - (v14 + 1) >= 0 )
            *(_DWORD *)(v17 + 4 * v11 + 508) = v10 - v3;
          *(_DWORD *)(a2 + 4 * v11 + 508) = v11;
          *(_DWORD *)(a2 + 4 * v10 + 508) = v10;
          if ( v10 + v18 <= 255 )
            *(_DWORD *)(v19 + 4 * v10 + 508) = v3 - v10;
          v12 = v14 + 2;
          v13 = v15 - 2;
          if ( v16 - (v14 + 2) >= 0 )
            *(_DWORD *)(v17 + 4 * v13 + 508) = v12 - v3;
          *(_DWORD *)(a2 + 4 * v13 + 508) = v13;
          *(_DWORD *)(a2 + 4 * v12 + 508) = v12;
          if ( v18 + v12 <= 255 )
            *(_DWORD *)(v19 + 4 * v12 + 508) = v3 - v12;
          v7 = v14 + 3;
          v8 = v15 - 3;
        }
        while ( v3 != v7 );
      }
    }
    result = 0;
  }
  return result;
}
