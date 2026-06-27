int __cdecl sub_6F870A80(int a1, int a2)
{
  int v2; // esi@1
  int v3; // edx@2
  unsigned int v4; // ecx@4
  int v6; // ebx@8
  int v7; // edi@17
  int v8; // esi@18
  int v9; // edx@18
  unsigned int v10; // ebx@18
  int v11; // eax@18
  unsigned int v12; // ecx@24
  int v13; // [sp+28h] [bp-40h]@19
  unsigned int v14; // [sp+2Ch] [bp-3Ch]@1
  int v15; // [sp+30h] [bp-38h]@1
  int v16; // [sp+34h] [bp-34h]@13
  int v17; // [sp+38h] [bp-30h]@14
  int v18; // [sp+3Ch] [bp-2Ch]@9
  int v19; // [sp+40h] [bp-28h]@16
  void (__cdecl *v20)(int, int, int, int, int); // [sp+44h] [bp-24h]@15
  int v21; // [sp+48h] [bp-20h]@16
  int v22; // [sp+4Ch] [bp-1Ch]@15

  v2 = a1;
  v15 = *(_DWORD *)(a1 + 408);
  v14 = *(_DWORD *)(a1 + 288) - 1;
  while ( 1 )
  {
    v3 = *(_DWORD *)(a1 + 132);
    if ( *(_DWORD *)(a1 + 124) < v3 )
      goto LABEL_5;
    if ( *(_DWORD *)(a1 + 124) != v3 )
      break;
    v4 = *(_DWORD *)(a1 + 136);
    if ( *(_DWORD *)(a1 + 128) > v4 )
      goto LABEL_8;
LABEL_5:
    if ( !(**(int (__cdecl ***)(_DWORD))(a1 + 416))(a1) )
      return 0;
  }
  v4 = *(_DWORD *)(a1 + 136);
LABEL_8:
  v6 = *(_DWORD *)(a1 + 196);
  if ( *(_DWORD *)(a1 + 36) > 0 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( !*(_BYTE *)(v6 + 52) )
        goto LABEL_29;
      v16 = (*(int (__cdecl **)(int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)(v2 + 4) + 32))(
              v2,
              *(_DWORD *)(v15 + 4 * v18 + 72),
              v4 * *(_DWORD *)(v6 + 12),
              *(_DWORD *)(v6 + 12),
              0);
      v4 = *(_DWORD *)(v2 + 136);
      if ( v14 <= v4 )
      {
        v17 = *(_DWORD *)(v6 + 32) % *(_DWORD *)(v6 + 12);
        if ( !v17 )
          v17 = *(_DWORD *)(v6 + 12);
      }
      else
      {
        v17 = *(_DWORD *)(v6 + 12);
      }
      v20 = *(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)(v2 + 428) + 4 * v18 + 4);
      v22 = *(_DWORD *)(a2 + 4 * v18);
      if ( v17 > 0 )
      {
        v19 = 0;
        v21 = v2;
        while ( 1 )
        {
          v7 = *(_DWORD *)(v16 + 4 * v19);
          if ( *(_DWORD *)(v6 + 28) )
          {
            v8 = 0;
            v9 = v6;
            v10 = 0;
            v11 = v9;
            do
            {
              v13 = v11;
              v20(v21, v11, v7, v22, v8);
              v7 += 128;
              v11 = v13;
              v8 += *(_DWORD *)(v13 + 36);
              ++v10;
            }
            while ( *(_DWORD *)(v13 + 28) > v10 );
            v6 = v13;
          }
          if ( v17 <= ++v19 )
            break;
          v22 += 4 * *(_DWORD *)(v6 + 40);
        }
        v2 = v21;
        v4 = *(_DWORD *)(v21 + 136);
        if ( *(_DWORD *)(v21 + 36) <= ++v18 )
          break;
      }
      else
      {
LABEL_29:
        if ( *(_DWORD *)(v2 + 36) <= ++v18 )
          break;
      }
      v6 += 88;
    }
  }
  v12 = v4 + 1;
  *(_DWORD *)(v2 + 136) = v12;
  return 4 - (v12 < *(_DWORD *)(v2 + 288));
}
