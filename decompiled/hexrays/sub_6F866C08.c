int __usercall sub_6F866C08@<eax>(int a1@<eax>)
{
  int v1; // eax@1
  int result; // eax@3
  signed int v3; // ecx@5
  int v4; // ebx@5
  int v5; // esi@7
  int v6; // edi@7
  int v7; // ebx@9
  signed int v8; // ecx@9
  int v9; // eax@11
  signed int v10; // eax@15
  int v11; // [sp+14h] [bp-44h]@4
  signed int v12; // [sp+18h] [bp-40h]@3
  signed int v13; // [sp+1Ch] [bp-3Ch]@2
  int v14; // [sp+20h] [bp-38h]@4
  int v15; // [sp+24h] [bp-34h]@1
  int v16; // [sp+28h] [bp-30h]@1
  int v17; // [sp+2Ch] [bp-2Ch]@7
  signed int v18; // [sp+30h] [bp-28h]@7
  char v19; // [sp+37h] [bp-21h]@7
  int v20; // [sp+38h] [bp-20h]@7
  int v21; // [sp+3Ch] [bp-1Ch]@7

  v15 = a1;
  v1 = *(_DWORD *)(a1 + 440);
  v16 = v1;
  if ( *(_DWORD *)(v15 + 76) == 1 )
  {
    *(_BYTE *)(v1 + 28) = 1;
    v13 = 510;
  }
  else
  {
    *(_BYTE *)(v1 + 28) = 0;
    v13 = 0;
  }
  *(_DWORD *)(v1 + 24) = (*(int (__cdecl **)(int, signed int, int, _DWORD))(*(_DWORD *)(v15 + 4) + 8))(
                           v15,
                           1,
                           v13 + 256,
                           *(_DWORD *)(v15 + 100));
  v12 = *(_DWORD *)(v16 + 20);
  result = v15;
  if ( *(_DWORD *)(v15 + 100) > 0 )
  {
    v14 = 0;
    v11 = 0;
    do
    {
      v3 = *(_DWORD *)(v16 + v14 + 32);
      v4 = v12 / v3;
      v12 /= v3;
      if ( v13 )
        *(_DWORD *)(*(_DWORD *)(v16 + 24) + v14) += 255;
      v20 = *(_DWORD *)(*(_DWORD *)(v16 + 24) + v14);
      v18 = 2 * v3 - 2;
      v17 = v3 + 254;
      v5 = (v3 + 254) / v18;
      v19 = v4;
      v21 = 0;
      v6 = 0;
      do
      {
        if ( v5 < v21 )
        {
          v7 = v6 + 1;
          v8 = v17 + 510 * (v6 + 1);
          while ( 1 )
          {
            v6 = v7;
            v9 = v8 / v18;
            v8 += 510;
            if ( v9 >= v21 )
              break;
            ++v7;
          }
          v5 = v9;
        }
        *(_BYTE *)(v20 + v21++) = v19 * v6;
      }
      while ( v21 != 256 );
      if ( v13 )
      {
        v10 = 1;
        do
        {
          *(_BYTE *)(v20 - v10) = *(_BYTE *)v20;
          *(_BYTE *)(v20 + v10++ + 255) = *(_BYTE *)(v20 + 255);
        }
        while ( v10 != 256 );
      }
      ++v11;
      v14 += 4;
      result = v15;
    }
    while ( *(_DWORD *)(v15 + 100) > v11 );
  }
  return result;
}
