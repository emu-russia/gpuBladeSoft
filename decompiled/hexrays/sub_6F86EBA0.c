char __cdecl sub_6F86EBA0(int a1)
{
  unsigned int v1; // eax@1
  int v2; // esi@4
  int v3; // edi@5
  int v4; // ecx@7
  int v5; // ecx@8
  int v6; // edx@8
  int v7; // edi@12
  int v8; // edx@13
  int v9; // ST24_4@9
  int v11; // [sp+28h] [bp-30h]@1
  int v12; // [sp+2Ch] [bp-2Ch]@7
  int v13; // [sp+38h] [bp-20h]@3
  int v14; // [sp+3Ch] [bp-1Ch]@3

  v1 = *(_DWORD *)(a1 + 404);
  v11 = *(_DWORD *)(a1 + 404);
  if ( *(_BYTE *)(a1 + 248) )
    LOBYTE(v1) = sub_6F86D5EC(v1);
  v14 = 0;
  v13 = 0;
  if ( *(_DWORD *)(a1 + 272) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(a1 + 4 * v2 + 276);
      v1 = *(_DWORD *)(a1 + 344);
      if ( !v1 && !*(_DWORD *)(a1 + 352) )
      {
        v4 = *(_DWORD *)(v3 + 20);
        v12 = v4;
        if ( !*((_BYTE *)&v14 + v4) )
        {
          v5 = v4 + 28;
          v6 = *(_DWORD *)(a1 + 4 * v5 + 8);
          if ( !v6 )
          {
            v9 = v5;
            v6 = sub_6F85F484(a1);
            *(_DWORD *)(a1 + 4 * v9 + 8) = v6;
          }
          LOBYTE(v1) = sub_6F86D27C((char *)a1, v6, *(_DWORD *)(v11 + 4 * v12 + 76));
          *((_BYTE *)&v14 + v12) = 1;
        }
      }
      if ( *(_DWORD *)(a1 + 348) )
      {
        v7 = *(_DWORD *)(v3 + 24);
        if ( !*((_BYTE *)&v13 + v7) )
        {
          v8 = *(_DWORD *)(a1 + 4 * (v7 + 32) + 8);
          if ( !v8 )
          {
            v8 = sub_6F85F484(a1);
            *(_DWORD *)(a1 + 4 * (v7 + 32) + 8) = v8;
          }
          LOBYTE(v1) = sub_6F86D27C((char *)a1, v8, *(_DWORD *)(v11 + 4 * v7 + 92));
          *((_BYTE *)&v13 + v7) = 1;
        }
      }
      ++v2;
    }
    while ( *(_DWORD *)(a1 + 272) > v2 );
  }
  return v1;
}
