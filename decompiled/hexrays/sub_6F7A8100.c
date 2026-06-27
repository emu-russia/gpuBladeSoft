int __cdecl sub_6F7A8100(int a1, int a2)
{
  int v2; // esi@1
  int v3; // ebx@3
  int v4; // ecx@3
  int v5; // edi@3
  signed int v6; // ebx@3
  signed int v7; // ecx@3
  signed int v8; // esi@3
  signed int v9; // edx@3
  int v10; // edi@5
  unsigned int v11; // edi@7
  int v12; // ebp@7
  bool v13; // sf@7
  unsigned __int8 v14; // of@7
  int v15; // edx@9
  signed int v16; // esi@13
  int v18; // ecx@16
  int v19; // ebx@16
  int v20; // edx@18
  bool v21; // zf@19
  int v22; // ebx@21
  int v23; // edi@24
  int v24; // ebx@25
  int v25; // edi@25
  int v26; // ecx@25
  int v27; // [sp+14h] [bp-28h]@2
  int v28; // [sp+18h] [bp-24h]@2
  int *v29; // [sp+1Ch] [bp-20h]@18

  v2 = *(_DWORD *)(a2 + 104);
  if ( !v2 )
  {
    v27 = *(_DWORD *)(a2 + 96);
    v28 = *(_DWORD *)(a2 + 100);
    if ( *(_QWORD *)(a2 + 96) )
    {
      v18 = *(_DWORD *)(a2 + 64);
      v19 = *(_DWORD *)(a2 + 68);
      if ( v18 > *(_DWORD *)(a2 + 88) )
        v18 = *(_DWORD *)(a2 + 88);
      v20 = *(_DWORD *)(*(_DWORD *)(a2 + 1328) + 4 * v19);
      v29 = (int *)(*(_DWORD *)(a2 + 1328) + 4 * v19);
      if ( v20 && (v21 = *(_DWORD *)v20 == v18, *(_DWORD *)v20 <= v18) )
      {
        while ( !v21 )
        {
          v22 = v20 + 12;
          v20 = *(_DWORD *)(v20 + 12);
          if ( v20 )
          {
            v21 = *(_DWORD *)v20 == v18;
            if ( *(_DWORD *)v20 <= v18 )
              continue;
          }
          v29 = (int *)v22;
          goto LABEL_24;
        }
        v2 = *(_DWORD *)(v20 + 8);
        v26 = *(_DWORD *)(v20 + 4);
        v25 = v20;
      }
      else
      {
LABEL_24:
        v23 = *(_DWORD *)(a2 + 116);
        if ( v23 >= *(_DWORD *)(a2 + 112) )
          longjmp(a2, 1);
        v24 = v23 + 1;
        v25 = *(_DWORD *)(a2 + 108) + 16 * v23;
        *(_DWORD *)(a2 + 116) = v24;
        *(_DWORD *)v25 = v18;
        *(_DWORD *)(v25 + 8) = 0;
        v26 = 0;
        *(_DWORD *)(v25 + 4) = 0;
        *(_DWORD *)(v25 + 12) = v20;
        *v29 = v25;
      }
      *(_DWORD *)(v25 + 8) = v27 + v2;
      *(_DWORD *)(v25 + 4) = v28 + v26;
    }
  }
  v3 = *(_DWORD *)a1;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a2 + 96) = 0;
  *(_DWORD *)(a2 + 100) = 0;
  *(_DWORD *)(a2 + 104) = 0;
  v6 = 4 * v3;
  v7 = 4 * v4;
  v8 = v7 >> 8;
  v9 = v6 >> 8;
  if ( v6 >> 8 > *(_DWORD *)(a2 + 76) )
    v9 = *(_DWORD *)(a2 + 76);
  v10 = v5 - 1;
  if ( *(_DWORD *)(a2 + 72) > v9 )
    v9 = v10;
  v11 = v8 - *(_DWORD *)(a2 + 80);
  v12 = v9 - *(_DWORD *)(a2 + 72);
  v14 = __OFSUB__(*(_DWORD *)(a2 + 76), v9);
  v21 = *(_DWORD *)(a2 + 76) == v9;
  v13 = *(_DWORD *)(a2 + 76) - v9 < 0;
  *(_DWORD *)(a2 + 136) = v8 << 8;
  if ( (unsigned __int8)(v13 ^ v14) | v21 )
    v9 = *(_DWORD *)(a2 + 76);
  v15 = v9 - *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a2 + 64) = v12;
  *(_DWORD *)(a2 + 68) = v11;
  if ( v15 < 0 )
    v15 = -1;
  if ( v12 != v15 )
    *(_DWORD *)(a2 + 64) = v15;
  v16 = 1;
  if ( *(_DWORD *)(a2 + 92) > v11 )
    v16 = v15 >= *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 104) = v16;
  *(_DWORD *)(a2 + 128) = v6;
  *(_DWORD *)(a2 + 132) = v7;
  return 0;
}
